/-
Copyright (c) 2026 Re'em Melamed-Katz. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Re'em Melamed-Katz
-/
import Mathlib.Data.Fintype.Card
import Mathlib.Data.Finset.Max
import GreensRelations.Order

/-!
# The Factorization Forest Theorem

This file defines the basic structures for the Factorization Forest Theorem.

## References
* [T. Colcombet, *The Factorization Forest Theorem*][colombet2008]
-/

section SplitDefinitions

variable {S α : Type*} [Semigroup S] [LinearOrder α]

variable {h : ℕ}

/-- A multiplicative labeling over a linearly ordered set into a semigroup,
satisfying the property that `σ x y * σ y z = σ x z`. -/
structure MultiplicativeLabeling (S α : Type*) [Semigroup S] [LinearOrder α] where
  σ : α → α → S
  prop : ∀ x y z : α, x < y → y < z → σ x y * σ y z = σ x z

/-- A split is a function assigning each element of `α` a bounded integer rank in `Fin h`. -/
abbrev Split (α : Type*) (h : ℕ) := α → Fin h

/-- `splitRelation s x y` states that `x` and `y` share the same rank under `s`,
and any element bounded between them has a rank at most that of `x` and `y`. -/
abbrev SplitRelation (s : Split α h) (x y : α) : Prop :=
  s x = s y ∧ ∀ z, min x y ≤ z → z ≤ max x y → s z ≤ s (min x y)

/-- A split function is normalized if
  the minimal element of `α` receives the maximal possible rank. -/
abbrev IsNormalized [Fintype α] [Nonempty α] [Nonempty (Fin h)] (s : Split α h) : Prop :=
  let min_α := Finset.min' Finset.univ Finset.univ_nonempty
  s min_α = Finset.max' Finset.univ Finset.univ_nonempty

/-- `IsRamsey L s` holds if for any equivalence class under the split relation,
all pairs within that class evaluate to the exact same idempotent. -/
abbrev IsRamsey (L : MultiplicativeLabeling S α) (s : Split α h) : Prop :=
  (∀ x y : α, x < y → SplitRelation s x y → L.σ x y * L.σ x y = L.σ x y) ∧
  (∀ x y u v : α, x < y → u < v →
    SplitRelation s x y → SplitRelation s u v → SplitRelation s x u →
    L.σ x y = L.σ u v)

/-- The relation induced by a split function is an equivalence relation. -/
theorem splitRelation_equiv (s : Split α h) : Equivalence (SplitRelation s) := by
  constructor <;> grind

end SplitDefinitions



section WordDefinitions

abbrev wordLabeling {A S : Type*} [Semigroup S]
    (eval : List A → S)
    (hmul : ∀ u v, u ≠ [] → v ≠ [] → eval (u ++ v) = eval u * eval v)
    (u : List A) : MultiplicativeLabeling S (Fin (u.length + 1)) where
  σ := fun i j => eval ((u.drop i.val).take (j.val - i.val))
  prop := by
    intros x y z hxy hyz
    let u_xy := (u.drop x.val).take (y.val - x.val)
    let u_yz := (u.drop y.val).take (z.val - y.val)
    let u_xz := (u.drop x.val).take (z.val - x.val)
    have not_empty_xy_yz : u_xy ≠ [] ∧ u_yz ≠ [] := by
      simp [u_xy, u_yz]
      omega
    have concat_xy_yz_eq_xz : u_xy ++ u_yz = u_xz := by
      have index_diff_eq : z.val - x.val = (y.val - x.val) + (z.val - y.val) := by
        omega
      have drop_eq_nested_drop : u.drop y.val = (u.drop x.val).drop (y.val - x.val) := by
        simp
        grind
      grind
    grind

end WordDefinitions

section TreeDefinitions

inductive FactorizationTree (A : Type*)
| leaf (a : A)
| binary (left right : FactorizationTree A) (word : List A) (height : ℕ)
| nary (children : List (FactorizationTree A)) (word : List A) (height : ℕ)

abbrev FactorizationTree.word {A : Type*} : FactorizationTree A → List A
| leaf a => [a]
| binary _ _ w _ => w
| nary _ w _ => w

abbrev FactorizationTree.height {A : Type*} : FactorizationTree A → ℕ
| leaf _ => 0
| binary _ _ _ h => h
| nary _ _ h => h

inductive IsRamseyTree {A S : Type*} [Semigroup S] (eval : List A → S) : FactorizationTree A → Prop
| leaf (a : A) : IsRamseyTree eval (FactorizationTree.leaf a)
| binary (l r : FactorizationTree A) (w : List A) (h : ℕ) :
    IsRamseyTree eval l → IsRamseyTree eval r → IsRamseyTree eval (FactorizationTree.binary l r w h)
| nary (cs : List (FactorizationTree A)) (w : List A) (h : ℕ) :
    cs.length ≥ 3 → (∀ c ∈ cs, IsRamseyTree eval c) →
    (∃ (e : S), e * e = e ∧ ∀ c ∈ cs, eval (FactorizationTree.word c) = e) →
    IsRamseyTree eval (FactorizationTree.nary cs w h)

end TreeDefinitions
