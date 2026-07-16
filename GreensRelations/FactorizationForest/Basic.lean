/-
Copyright (c) 2026 Re'em Melamed-Katz. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Re'em Melamed-Katz
-/

import GreensRelations.FactorizationForest.Defs

/-!
# The Factorization Forest Theorem

This file proves specific cases (The group H-class case and regular D-class case)
of the Factorization Forest Theorem.

## References
* [T. Colcombet, *The Factorization Forest Theorem*][colombet2008]
-/

section GroupCase

variable {G α : Type*} [Group G] [Fintype G] [LinearOrder α] [Fintype α] [Nonempty α]

/-- The Factorization Forest Theorem restricted to a group.
There exists a normalized split function acting as a Ramsey split for the group labeling. -/
lemma simon_group_case (σ : MultiplicativeLabeling G α) :
    ∃ (s : Split α (Fintype.card G)), IsNormalized s ∧ IsRamsey σ s := by
  classical
  let sizeG := Fintype.card G
  let x₀ : α := Finset.min' .univ Finset.univ_nonempty
  have h_pos : 0 < sizeG := Fintype.card_pos
  have h_size_cast : sizeG - 1 + 1 = sizeG := by omega
  haveI : Nonempty (Fin sizeG) := Fin.pos_iff_nonempty.mp h_pos
  let maxRank : Fin sizeG := Fin.cast h_size_cast (Fin.last (sizeG - 1))
  let rawEquiv := Fintype.equivFin G
  let indexInEnum := rawEquiv.trans (Equiv.swap (rawEquiv 1) maxRank)
  let s : Split α sizeG := fun y ↦
    if y = x₀ then maxRank else indexInEnum (σ.σ x₀ y)
  have eval_eq_one : ∀ a b, a < b → SplitRelation s a b → σ.σ a b = 1 := fun a b hlt hsr ↦ by
    by_cases ha : a = x₀
    · subst ha
      exact Equiv.injective indexInEnum (by simpa [s, ne_of_gt hlt, indexInEnum] using hsr.1.symm)
    · have h_lt : x₀ < a := (Finset.min'_le _ a (Finset.mem_univ a)).lt_of_ne (Ne.symm ha)
      have h_eq : σ.σ x₀ a = σ.σ x₀ b := Equiv.injective indexInEnum
        (by simpa [s, ha, ne_of_gt (h_lt.trans hlt)] using hsr.1)
      exact mul_left_cancel (a := σ.σ x₀ a) <| by rw [σ.prop x₀ a b h_lt hlt, ← h_eq, mul_one]
  exact ⟨s, by
      unfold IsNormalized; simp only [s, x₀]; symm; simp only [Finset.max'_eq_iff]
      exact ⟨Finset.mem_univ _, by grind⟩,
    fun x y hlt hsr ↦ by simp [eval_eq_one x y hlt hsr],
    fun x y u v hxy huv hsr_xy hsr_uv _ ↦ by
      rw [eval_eq_one x y hxy hsr_xy, eval_eq_one u v huv hsr_uv]⟩

end GroupCase

section HClassGroupCase

variable {S α : Type*} [Semigroup S] [LinearOrder α]

/-- The Factorization Forest Theorem applied to an H-class that forms a group. -/
lemma simon_hclass_case
    (σ : MultiplicativeLabeling S α)
    (X : Set α) [Nonempty X] [Fintype X]
    (H : Set S) [Group H] [Fintype H]
    (h_mul_eq : ∀ a b : H, (a * b : S) = (a * b : H))
    (h_range : ∀ x y : α, x ∈ X → y ∈ X → x < y → σ.σ x y ∈ H) :
    ∃ (s : Split X (Fintype.card H)),
      IsNormalized s ∧
      (∀ x y : X, x < y → SplitRelation s x y →
        σ.σ x y * σ.σ x y = σ.σ x y) ∧
      (∀ x y u v : X, x < y → u < v →
        SplitRelation s x y → SplitRelation s u v → SplitRelation s x u →
        σ.σ x y = σ.σ u v) := by
  classical
  let σHFun : X → X → H := fun x y ↦ if h : x < y then ⟨σ.σ x y, h_range x y x.2 y.2 h⟩ else 1
  have σH_prop : ∀ (x y z : X), x < y → y < z → σHFun x y * σHFun y z = σHFun x z :=
    fun x y z hxy hyz ↦ Subtype.ext <| by
      simpa [σHFun, dif_pos hxy, dif_pos hyz, dif_pos (hxy.trans hyz), ← h_mul_eq] using
        σ.prop x y z hxy hyz
  obtain ⟨sH, h_norm, h_ramsey⟩ := simon_group_case ⟨σHFun, σH_prop⟩
  exact ⟨sH, h_norm,
    fun x y hxy h_split ↦ by
      simpa [σHFun, hxy, ← h_mul_eq] using congrArg Subtype.val (h_ramsey.1 x y hxy h_split),
    fun x y u v hxy huv hsr_xy hsr_uv hsr_xu ↦ by
      simpa [σHFun, hxy, huv, ← h_mul_eq] using
        congrArg Subtype.val (h_ramsey.2 x y u v hxy huv hsr_xy hsr_uv hsr_xu)⟩

end HClassGroupCase

section nD

variable {S : Type*} [Semigroup S] [Fintype S]

open Classical in
/-- The number of elements in a D-class that are H-related to an idempotent.
Returns 2 for non-regular D-classes as a default. -/
noncomputable abbrev nD (D : Set S) : ℕ :=
  if IsRegularDClass D then
    (Finset.univ.filter (fun x ↦
      x ∈ D ∧ ∃ e ∈ D, e * e = e ∧ IsGreenH x e
    )).card
  else
    2

open Classical in
/-- The value `nD D` is strictly positive for any Green's D-class. -/
theorem nD_pos (D : Set S) (hD : ∃ x, D = IsGreenD.eqvClass x) : 0 < nD D := by
  dsimp [nD]
  split_ifs with hReg
  · obtain ⟨e, heD, he_idem⟩ := (isRegularDClass_iff_exists_idempotent D hD).mp hReg
    exact Finset.card_pos.mpr ⟨e, Finset.mem_filter.mpr ⟨Finset.mem_univ _, heD, e, heD, he_idem,
      IsGreenH.refl _⟩⟩
  · decide

/-- Instance providing that the set of available ranks for a D-class is inhabited. -/
abbrev nonempty_fin_nD (D : Set S) (hD : ∃ x, D = IsGreenD.eqvClass x) : Nonempty (Fin (nD D)) :=
  Fin.pos_iff_nonempty.mp (nD_pos D hD)

end nD

section RegularDClassCase

variable {S α : Type*} [Semigroup S] [LinearOrder α]

/-- Context bundling the conditions required to construct a Simon split for a regular D-class. -/
structure SimonContext (S α : Type*) [Semigroup S] [Fintype S] [LinearOrder α] where
  σ : MultiplicativeLabeling S α
  D : Set S
  x₀ : S
  hx₀ : D = IsGreenD.eqvClass x₀
  hReg : IsRegularDClass D
  h_range : ∀ x y, x < y → σ.σ x y ∈ D

section WithFintypeS
variable [Fintype S]

open Classical in
/-- Computes the target Green's L-class for the element `x` based on the Simon context. -/
noncomputable abbrev lOf (ctx : SimonContext S α) (x : α) : Set S :=
  if h_min : IsMin x then
    if h_max : IsMax x then
      IsGreenL.eqvClass ctx.x₀
    else
      have ha_D : ctx.σ.σ x (choose (not_isMax_iff.mp h_max)) ∈ ctx.D :=
        ctx.h_range x _ (choose_spec (not_isMax_iff.mp h_max))
      IsGreenL.eqvClass (choose (MulSeq.exists_idempotent_in_greenR_of_regular (ctx.hReg _ ha_D)))
  else
    IsGreenL.eqvClass (ctx.σ.σ (choose (not_isMin_iff.mp h_min)) x)

open Classical in
/-- Computes the target Green's R-class for the element `x` based on the Simon context. -/
noncomputable abbrev rOf (ctx : SimonContext S α) (x : α) : Set S :=
  if h_max : IsMax x then
    if h_min : IsMin x then
      have ha_D : ctx.x₀ ∈ ctx.D := by
        rw [ctx.hx₀]
        exact IsGreenD.refl ctx.x₀
      IsGreenR.eqvClass (choose (MulSeq.exists_idempotent_in_greenL_of_regular (ctx.hReg _ ha_D)))
    else
      have ha_D : ctx.σ.σ (choose (not_isMin_iff.mp h_min)) x ∈ ctx.D :=
        ctx.h_range _ x (choose_spec (not_isMin_iff.mp h_min))
      IsGreenR.eqvClass (choose (MulSeq.exists_idempotent_in_greenL_of_regular (ctx.hReg _ ha_D)))
  else
    IsGreenR.eqvClass (ctx.σ.σ x (choose (not_isMax_iff.mp h_max)))

/-- Computes the target Green's H-class for the element `x`, defined as the intersection
of its assigned L-class and R-class. -/
noncomputable abbrev hOf (ctx : SimonContext S α) (x : α) : Set S :=
  lOf ctx x ∩ rOf ctx x

/-- The chosen L-class is well-defined and depends only on
  the elements strictly smaller than `x`. -/
lemma lOf_well_defined (ctx : SimonContext S α) (x y1 y2 : α)
    (hy1 : y1 < x) (hy2 : y2 < x) :
    IsGreenL.eqvClass (ctx.σ.σ y1 x) = IsGreenL.eqvClass (ctx.σ.σ y2 x) := by
  wlog h_le : y1 ≤ y2 generalizing y1 y2 hy1 hy2
  · exact (this y2 y1 hy2 hy1 (not_le.mp h_le).le).symm
  · rcases h_le.eq_or_lt with rfl | h_lt
    · rfl
    · have hp := (ctx.σ.prop y1 y2 x h_lt hy2).symm
      have hL : IsGreenL (ctx.σ.σ y2 x) (ctx.σ.σ y1 x) := hp ▸ (mul_mem_isGreenD_eqvClass_properties
        ⟨ctx.x₀, ctx.hx₀⟩ _ _ (ctx.h_range y1 y2 h_lt) (ctx.h_range y2 x hy2)
        (hp ▸ ctx.h_range y1 x hy1)).1.2
      exact Set.ext fun _ ↦ ⟨fun hz ↦ hz.trans hL.symm, fun hz ↦ hz.trans hL⟩

/-- The chosen R-class is well-defined and depends only on
  the elements strictly greater than `x`. -/
lemma rOf_well_defined (ctx : SimonContext S α) (x y1 y2 : α)
    (hy1 : x < y1) (hy2 : x < y2) :
    IsGreenR.eqvClass (ctx.σ.σ x y1) = IsGreenR.eqvClass (ctx.σ.σ x y2) := by
  wlog h_le : y1 ≤ y2 generalizing y1 y2 hy1 hy2
  · exact (this y2 y1 hy2 hy1 (not_le.mp h_le).le).symm
  · rcases h_le.eq_or_lt with rfl | h_lt
    · rfl
    · have hp := ctx.σ.prop x y1 y2 hy1 h_lt
      have hR : IsGreenR (ctx.σ.σ x y1) (ctx.σ.σ x y2) := hp ▸ (mul_mem_isGreenD_eqvClass_properties
        ⟨ctx.x₀, ctx.hx₀⟩ _ _ (ctx.h_range x y1 hy1) (ctx.h_range y1 y2 h_lt)
        (hp.symm ▸ ctx.h_range x y2 hy2)).1.1
      exact Set.ext fun _ ↦ ⟨fun hz ↦ hz.trans hR, fun hz ↦ hz.trans hR.symm⟩

open Classical in
/-- An element's assigned H-class contains at least one idempotent element. -/
lemma hOf_has_idempotent (ctx : SimonContext S α) (x : α) :
    ∃ e_id : S, e_id ∈ hOf ctx x ∧ e_id * e_id = e_id := by
  by_cases h_min : IsMin x
  · by_cases h_max : IsMax x
    · have h_ex := MulSeq.exists_idempotent_in_greenL_of_regular
        (ctx.hReg ctx.x₀ (ctx.hx₀ ▸ IsGreenD.refl ctx.x₀))
      exact ⟨choose h_ex, by grind, (choose_spec h_ex).2⟩
    · have h_ex := MulSeq.exists_idempotent_in_greenR_of_regular
        (ctx.hReg _ (ctx.h_range x _ (choose_spec (not_isMax_iff.mp h_max))))
      exact ⟨choose h_ex, by grind, (choose_spec h_ex).2⟩
  · by_cases h_max : IsMax x
    · have h_ex := MulSeq.exists_idempotent_in_greenL_of_regular
        (ctx.hReg _ (ctx.h_range _ x (choose_spec (not_isMin_iff.mp h_min))))
      exact ⟨choose h_ex, by grind, (choose_spec h_ex).2⟩
    · have hy : _ < x := choose_spec (not_isMin_iff.mp h_min)
      have hz : x < _ := choose_spec (not_isMax_iff.mp h_max)
      obtain ⟨_, ⟨ex, _, he_idem, hLe, hRe⟩⟩ :=
        mul_mem_isGreenD_eqvClass_properties ⟨ctx.x₀, ctx.hx₀⟩ _ _
          (ctx.h_range _ _ hy) (ctx.h_range _ _ hz)
          ((ctx.σ.prop _ _ _ hy hz).symm ▸ ctx.h_range _ _ (hy.trans hz))
      exact ⟨ex, by grind, he_idem⟩

/-- Chooses an idempotent element belonging to the H-class assigned to `x`. -/
noncomputable abbrev eId (ctx : SimonContext S α) (x : α) : S :=
  Classical.choose (hOf_has_idempotent ctx x)

/-- The chosen idempotent `eId ctx x` is indeed an element of `hOf ctx x`. -/
lemma eId_mem (ctx : SimonContext S α) (x : α) : eId ctx x ∈ hOf ctx x :=
  (Classical.choose_spec (hOf_has_idempotent ctx x)).1

/-- The chosen element `eId ctx x` is an idempotent. -/
@[simp] lemma eId_idem (ctx : SimonContext S α) (x : α) : eId ctx x * eId ctx x = eId ctx x :=
  (Classical.choose_spec (hOf_has_idempotent ctx x)).2

/-- The H-class of `z` is exactly the H-class of its chosen idempotent. -/
lemma hOf_eq_class (ctx : SimonContext S α) (z : α) :
    hOf ctx z = IsGreenH.eqvClass (eId ctx z) := by
  ext w
  have he := eId_mem ctx z
  simp only [hOf, lOf, rOf, IsGreenH.eqvClass, IsGreenL.eqvClass, IsGreenR.eqvClass,
    IsGreenH, Set.mem_inter_iff, Set.mem_setOf_eq] at he ⊢
  split_ifs at he ⊢ <;> exact ⟨
    fun ⟨hwL, hwR⟩ ↦ ⟨IsGreenL.trans hwL (IsGreenL.symm he.1),
      IsGreenR.trans hwR (IsGreenR.symm he.2)⟩,
    fun ⟨hwL, hwR⟩ ↦ ⟨IsGreenL.trans hwL he.1, IsGreenR.trans hwR he.2⟩
  ⟩

open Classical in
/-- Under certain conditions, `σ mz z` behaves multiplicatively with idempotents. -/
lemma sigma_props (ctx : SimonContext S α) (z mz : α) (h_mz : mz < z)
    (hm_H : hOf ctx mz = hOf ctx z) :
    eId ctx z * ctx.σ.σ mz z * eId ctx z = ctx.σ.σ mz z ∧
    IsGreenH (ctx.σ.σ mz z) (eId ctx z) := by
  have hn_min : ¬ IsMin z := fun h ↦ lt_irrefl mz (lt_of_lt_of_le h_mz (h (le_of_lt h_mz)))
  have hn_max : ¬ IsMax mz := fun h ↦ lt_irrefl z (lt_of_le_of_lt (h (le_of_lt h_mz)) h_mz)
  have hl_eq : lOf ctx z = IsGreenL.eqvClass (ctx.σ.σ mz z) := by
    simp only [lOf, dif_neg hn_min,
      lOf_well_defined ctx z _ mz (choose_spec (not_isMin_iff.mp hn_min)) h_mz]
  have hr_eq : rOf ctx mz = IsGreenR.eqvClass (ctx.σ.σ mz z) := by
    simp only [rOf, dif_neg hn_max,
      rOf_well_defined ctx mz _ z (choose_spec (not_isMax_iff.mp hn_max)) h_mz]
  have hL : eId ctx z ∈ IsGreenL.eqvClass (ctx.σ.σ mz z) := hl_eq ▸ (eId_mem ctx z).1
  have hR : eId ctx z ∈ IsGreenR.eqvClass (ctx.σ.σ mz z) := hr_eq ▸ (hm_H ▸ eId_mem ctx z).2
  have hH : IsGreenH (ctx.σ.σ mz z) (eId ctx z) := ⟨IsGreenL.symm hL, IsGreenR.symm hR⟩
  exact ⟨by rw [mul_assoc, (MulSeq.mul_eq_self_of_isGreenH_idempotent hH (eId_idem ctx z)).1,
    (MulSeq.mul_eq_self_of_isGreenH_idempotent hH (eId_idem ctx z)).2], hH⟩

open Classical in
/-- The chosen idempotent `eId ctx x` belongs to the D-class `ctx.D`. -/
lemma eId_mem_D (ctx : SimonContext S α) (x : α) : eId ctx x ∈ ctx.D := by
  have he_L : eId ctx x ∈ lOf ctx x := (eId_mem ctx x).1
  by_cases h_min : IsMin x
  · by_cases h_max : IsMax x
    · simp only [lOf, h_min, h_max, ctx.hx₀] at *
      exact ⟨ctx.x₀, he_L, IsGreenR.refl _⟩
    · have ha_D := ctx.h_range x _ (choose_spec (not_isMax_iff.mp h_max))
      have h_ex := MulSeq.exists_idempotent_in_greenR_of_regular (ctx.hReg _ ha_D)
      simp only [lOf, h_min, h_max, ctx.hx₀] at *
      exact IsGreenD.trans ⟨_, he_L, (choose_spec h_ex).left⟩ ha_D
  · have ha_D := ctx.h_range _ x (choose_spec (not_isMin_iff.mp h_min))
    simp only [lOf, h_min, ctx.hx₀] at *
    exact IsGreenD.trans ⟨_, he_L, IsGreenR.refl _⟩ ha_D

/-- Helper lemma for fColoring. -/
lemma fColoring_helper_val_in (ctx : SimonContext S α) (x m : α)
    (h_mx : m < x) (hm_H : hOf ctx m = hOf ctx x) :
    (eId ctx x * ctx.σ.σ m x * eId ctx x) ∈ ctx.D ∧
    ∃ e' ∈ ctx.D, e' * e' = e' ∧ IsGreenH (eId ctx x * ctx.σ.σ m x * eId ctx x) e' := by
  have ⟨h_eq, hH⟩ := sigma_props ctx x m h_mx hm_H
  have h_val_H_e : IsGreenH (eId ctx x * ctx.σ.σ m x * eId ctx x) (eId ctx x) := h_eq.symm ▸ hH
  have h_val_D : (eId ctx x * ctx.σ.σ m x * eId ctx x) ∈ ctx.D := by
    rw [ctx.hx₀]
    exact IsGreenD.trans ⟨_, IsGreenL.refl _, h_val_H_e.right⟩
      (ctx.hx₀ ▸ eId_mem_D ctx x : eId ctx x ∈ IsGreenD.eqvClass ctx.x₀)
  exact ⟨h_val_D, eId ctx x, eId_mem_D ctx x, eId_idem ctx x, h_val_H_e⟩

section WithFintypeAlpha
variable [Fintype α]

open Classical in
/-- The coloring function mapping an element `x` to a subtype representing
  its value and properties in the D-class. -/
noncomputable abbrev fColoring (ctx : SimonContext S α) (x : α) :
    { y : S // y ∈ ctx.D ∧ ∃ e ∈ ctx.D, e * e = e ∧ IsGreenH y e } :=
  let mClass := Finset.univ.filter (fun y ↦ hOf ctx y = hOf ctx x)
  have hm_nonempty : mClass.Nonempty := ⟨x, Finset.mem_filter.mpr ⟨Finset.mem_univ x, rfl⟩⟩
  let m := Finset.min' mClass hm_nonempty
  if h_mx : m < x then
    have hm_H : hOf ctx m = hOf ctx x :=
      (Finset.mem_filter.mp (Finset.min'_mem mClass hm_nonempty)).2
    ⟨eId ctx x * ctx.σ.σ m x * eId ctx x, fColoring_helper_val_in ctx x m h_mx hm_H⟩
  else
    have h_e_in : eId ctx x ∈ ctx.D ∧ ∃ e' ∈ ctx.D, e' * e' = e' ∧ IsGreenH (eId ctx x) e' := by
      have he_D := eId_mem_D ctx x
      exact ⟨he_D, eId ctx x, he_D, eId_idem ctx x, IsGreenH.refl (eId ctx x)⟩
    ⟨eId ctx x, h_e_in⟩

/-- The element returned by `fColoring` belongs to the correct Green's H-class. -/
lemma fColoring_isGreenH (ctx : SimonContext S α) (z : α) :
    IsGreenH (fColoring ctx z).val (eId ctx z) := by
  classical
  let mClass := Finset.univ.filter (fun w ↦ hOf ctx w = hOf ctx z)
  have hm_nonempty : mClass.Nonempty := ⟨z, Finset.mem_filter.mpr ⟨Finset.mem_univ z, rfl⟩⟩
  let mz := Finset.min' mClass hm_nonempty
  have hm_H : hOf ctx mz = hOf ctx z := (Finset.mem_filter.mp (Finset.min'_mem _ hm_nonempty)).2
  dsimp only [fColoring]
  split_ifs with h_mz
  · have h_props := sigma_props ctx z mz h_mz hm_H
    grind
  · exact IsGreenH.refl (eId ctx z)

section WithNonemptyAlpha
variable [Nonempty α]

/-- The Factorization Forest Theorem applied to a regular D-class. -/
lemma simon_regular_d_case
    (σ : MultiplicativeLabeling S α)
    (D : Set S)
    (hD : ∃ x, D = IsGreenD.eqvClass x)
    (hReg : IsRegularDClass D)
    (h_range : ∀ x y, x < y → σ.σ x y ∈ D)
    (h_ne : Nonempty (Fin (nD D)) := Fin.pos_iff_nonempty.mp (nD_pos D hD)) :
    ∃ (s : Split α (nD D)), IsNormalized s ∧ IsRamsey σ s := by
  classical
  obtain ⟨x₀, hx₀⟩ := hD
  let ctx : SimonContext S α := ⟨σ, D, x₀, hx₀, hReg, h_range⟩
  have h_card_G_D : Fintype.card { y : S // y ∈ D ∧ ∃ e ∈ D, e * e = e ∧ IsGreenH y e } = nD D := by
    simp only [nD, if_pos hReg, Fintype.card_subtype]
  let equiv := Fintype.equivOfCardEq (h_card_G_D.trans (Fintype.card_fin _).symm)
  have h_pos : 0 < nD D := Fin.pos_iff_nonempty.mpr h_ne
  let maxRank : Fin (nD D) := ⟨nD D - 1, by omega⟩
  let indexMap := equiv.trans (Equiv.swap (equiv (fColoring ctx
      (Finset.min' Finset.univ Finset.univ_nonempty))) maxRank)
  have h_sig_eq_eId : ∀ x y, x < y → SplitRelation (fun y ↦ indexMap (fColoring ctx y)) x y →
      σ.σ x y = eId ctx x := fun x y hlt hsr ↦ by
    have val_eq := congrArg Subtype.val (indexMap.injective hsr.1)
    have he_eq_ey : eId ctx x = eId ctx y := MulSeq.eq_of_isGreenH_of_idempotent
      (IsGreenH.trans (fColoring_isGreenH ctx x).symm (val_eq ▸ fColoring_isGreenH ctx y))
      (eId_idem ctx x) (eId_idem ctx y)
    let mClass w := Finset.univ.filter (fun z ↦ hOf ctx z = hOf ctx w)
    have hmx : (mClass x).Nonempty := ⟨x, Finset.mem_filter.mpr ⟨Finset.mem_univ x, rfl⟩⟩
    have hmy : (mClass y).Nonempty := ⟨y, Finset.mem_filter.mpr ⟨Finset.mem_univ y, rfl⟩⟩
    let mx := Finset.min' (mClass x) hmx
    let my := Finset.min' (mClass y) hmy
    have min_x_eq_min_y : mx = my := by
      have : mClass x = mClass y := by simp only [mClass, hOf_eq_class, he_eq_ey]
      grind
    have h_ese_eq_e : eId ctx x * σ.σ x y * eId ctx x = eId ctx x := by
      by_cases h_mx_lt_x : mx < x
      · have h_prop_x := sigma_props ctx x mx h_mx_lt_x
          (Finset.mem_filter.mp (Finset.min'_mem (mClass x) hmx)).2
        have h_my_lt_y : my < y := min_x_eq_min_y ▸ h_mx_lt_x.trans hlt
        have h_prop_y := sigma_props ctx y my h_my_lt_y
          (Finset.mem_filter.mp (Finset.min'_mem (mClass y) hmy)).2
        have h_sig_mx_x_mul_xy : σ.σ mx x * σ.σ x y = σ.σ mx x := by
          obtain ⟨val_x_eq, h_val_y⟩ :
            (fColoring ctx x).val = σ.σ mx x ∧ (fColoring ctx y).val = σ.σ my y := by
            simp only [fColoring]
            exact ⟨dif_pos h_mx_lt_x ▸ h_prop_x.1, dif_pos h_my_lt_y ▸ h_prop_y.1⟩
          rw [σ.prop mx x y h_mx_lt_x hlt, ← val_x_eq, val_eq, h_val_y, min_x_eq_min_y]
        have h_e_xy : eId ctx x * σ.σ x y = eId ctx x := by
          rcases h_prop_x.2.1.2 with heq | ⟨w, hw⟩
          · exact heq ▸ h_sig_mx_x_mul_xy
          · rw [hw, mul_assoc, h_sig_mx_x_mul_xy, ← hw]
        exact h_e_xy.symm ▸ eId_idem ctx x
      · have h_mx_eq_x : mx = x := le_antisymm
          (Finset.min'_le (mClass x) x (Finset.mem_filter.mpr ⟨Finset.mem_univ x, rfl⟩))
          (not_lt.mp h_mx_lt_x)
        have h_my_lt_y : my < y := min_x_eq_min_y ▸ h_mx_eq_x ▸ hlt
        have h_prop_y := sigma_props ctx y my h_my_lt_y
          (Finset.mem_filter.mp (Finset.min'_mem (mClass y) hmy)).2
        grind
    have h_sig_H : IsGreenH (σ.σ x y) (eId ctx x) := by
      have hL_y : lOf ctx y = IsGreenL.eqvClass (σ.σ x y) := by
        have hn : ¬ IsMin y := fun h ↦ lt_irrefl x (lt_of_lt_of_le hlt (h (le_of_lt hlt)))
        rw [lOf, dif_neg hn,
          lOf_well_defined ctx y _ x (Classical.choose_spec (not_isMin_iff.mp hn)) hlt]
      have hR_x : rOf ctx x = IsGreenR.eqvClass (σ.σ x y) := by
        have hn : ¬ IsMax x := fun h ↦ lt_irrefl y (lt_of_le_of_lt (h (le_of_lt hlt)) hlt)
        rw [rOf, dif_neg hn,
          rOf_well_defined ctx x _ y (Classical.choose_spec (not_isMax_iff.mp hn)) hlt]
      have he_L : eId ctx x ∈ IsGreenL.eqvClass (σ.σ x y) := hL_y ▸ he_eq_ey ▸ (eId_mem ctx y).1
      have he_R : eId ctx x ∈ IsGreenR.eqvClass (σ.σ x y) := hR_x ▸ (eId_mem ctx x).2
      exact IsGreenH.symm ⟨he_L, he_R⟩
    obtain ⟨hid1, hid2⟩ := MulSeq.mul_eq_self_of_isGreenH_idempotent h_sig_H (eId_idem ctx x)
    simpa [hid1, hid2] using h_ese_eq_e
  exact ⟨fun y ↦ indexMap (fColoring ctx y), by
      simp only [IsNormalized, indexMap, Equiv.trans_apply, Equiv.swap_apply_left]
      symm; rw [Finset.max'_eq_iff]; exact ⟨Finset.mem_univ _, fun _ _ ↦ by grind⟩,
    fun x y hlt hsr ↦ by simp [h_sig_eq_eId x y hlt hsr, eId_idem ctx x],
    fun x y u v hlt_xy hlt_uv hsr_xy hsr_uv hsr_xu ↦ by
      have val_eq := congrArg Subtype.val (indexMap.injective hsr_xu.1)
      have he_eq_xu := MulSeq.eq_of_isGreenH_of_idempotent
        (IsGreenH.trans (fColoring_isGreenH ctx x).symm (val_eq ▸ fColoring_isGreenH ctx u))
        (eId_idem ctx x) (eId_idem ctx u)
      rw [h_sig_eq_eId x y hlt_xy hsr_xy, h_sig_eq_eId u v hlt_uv hsr_uv, he_eq_xu]⟩

end WithNonemptyAlpha
end WithFintypeAlpha
end WithFintypeS
end RegularDClassCase
