/-
Copyright (c) 2026 Re'em Melamed-Katz. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Re'em Melamed-Katz
-/

import GreensRelations.FactorizationForest.Split

/-!
# The Factorization Forest Theorem

## References
* [T. Colcombet, *The Factorization Forest Theorem*][colombet2008]
-/

section SimonWord

theorem simon_word {A S : Type*} [Semigroup S] [Fintype S] [Nonempty (Fin (nS S))]
    (eval : List A → S)
    (hmul : ∀ u v, u ≠ [] → v ≠ [] → eval (u ++ v) = eval u * eval v)
    (u : List A) :
    ∃ s : Split (Fin (u.length + 1)) (nS S),
      IsNormalized s ∧ IsRamsey (wordLabeling eval hmul u) s :=
  simon_split (wordLabeling eval hmul u)

end SimonWord
