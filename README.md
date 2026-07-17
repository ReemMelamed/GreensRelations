# Simon's Factorization Forest Theorem and Green's Relations (Lean 4)

Formalization in Lean 4 of the algebraic components behind Simon's Factorization Forest Theorem,
with a focus on Green's relations.

## Reference Article

- Thomas Colcombet, *The Factorization Forest Theorem*: 
  <https://www.irif.fr/~colcombe/Publications/handbook-fft-colcombet_non-final.pdf>

## What this repository formalizes

- Green's relations: L, R, H, D, J
- Equivalence classes and quotient constructions for Green's relations
- Finite-semigroup structure results (regular D-classes, idempotents, D = J)
- Multiplicative labelings and Ramsey splits
- Special cases of Simon's theorem: group case, H-class case, and regular D-class case
- The full Factorization Forest construction bounded by Simon's complexity ($3h - 1$)

## Overview

### `GreensRelations/`
Contains the foundational semigroup theory and Green's relations.

* `Defs.lean`
  - The foundational definitions for Green's relations (L, R, H, D, and J) and left/right divisibility over semigroups. 

* `Basic.lean`
  - Foundational equivalences and the setup of the relations as formal setoids.

* `Classes.lean`
  - Equivalence classes and quotient spaces for the relations.
 
* `MulSeq.lean`
  - Tools for analyzing finite semigroups using iterated multiplication sequences.
  - Structural helper lemmas, such as applications of the pigeonhole principle.
 
* `Theorems.lean`
  - The major structural theorems of Green's relations.
  - Key results like the proof that D and J relations are strictly equal in finite semigroups, Green's lemma (constructing explicit bijections between H-classes), and the proof that an H-class is either a group or contains no idempotents.

### `GreensRelations/FactorizationForest/`
Contains the definitions, lemmas, and constructions for Simon's Factorization Forest Theorem.

* `Defs.lean`
  - Core structures: `MultiplicativeLabeling`, `Split` (normalized and Ramsey), and the `FactorizationTree` inductive type (leaf, binary, nary) with its associated `IsRamseyTree` property.

* `Basic.lean`
  - Proofs for specific sub-cases of the Factorization Forest Theorem:
  - The group case (`simon_group_case`).
  - The subgroup H-class case (`simon_hclass_case`).
  - The regular D-class case (`simon_regular_d_case`) using custom colorings.

* `Split.lean` & `SplitCases.lean`
  - The induction steps for Simon's split theorem.
  - `simon_split`: The main theorem stating that any multiplicative labeling over a finite linear order admits a normalized Ramsey split bounded by the semigroup's Simon complexity.

* `Word.lean`
  - Helper lemma specifically dealing with list evaluations and word labelings.

* `Tree.lean`
  - The algorithmic construction of the factorization tree (`buildFactorizationTree`) from a given split.
  - Proofs bounding the height of the generated tree by $3h - 1$ (`buildTree_height_bound`).
  - The final culmination of the formalization: `factorization_forest`, proving the existence of a Ramsey factorization tree of bounded height for any finite semigroup.
