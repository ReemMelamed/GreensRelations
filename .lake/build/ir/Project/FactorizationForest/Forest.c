// Lean compiler output
// Module: Project.FactorizationForest.Forest
// Imports: public import Init public meta import Init public import Project.FactorizationForest.Split
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_Project_FactorizationForest_FactorizationTree_height___boxed(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lp_mathlib_Fin_instLinearOrder(lean_object*);
lean_object* l_List_finRange(lean_object*);
lean_object* lp_mathlib_Finset_max_x27___redArg(lean_object*, lean_object*);
lean_object* l_List_filterTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableEqList___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_List_instDecidableEqNil___redArg(lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Project_FactorizationForest_splitIndices___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_partitionIndices___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_partitionIndices(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_partitionIndices___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_partitionIndices_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_partitionIndices_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_partitionIndices_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_restrictSplit___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_restrictSplit___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_restrictSplit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_restrictSplit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_lowerSplitInterior___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_lowerSplitInterior(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_lowerSplitInterior___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2___closed__0 = (const lean_object*)&lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2___closed__0_value;
static const lean_closure_object lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__0 = (const lean_object*)&lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__0_value;
static const lean_closure_object lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__1 = (const lean_object*)&lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Project_FactorizationForest_FactorizationTree_height___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__2 = (const lean_object*)&lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__2_value;
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__3_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__0 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__0_value;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__1 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__1_value;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__2 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__2_value;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__3 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__3_value;
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4_value_aux_0),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4_value_aux_1),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4_value_aux_2),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4_value;
static const lean_array_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5_value;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__6 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__6_value;
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7_value_aux_0),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7_value_aux_1),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7_value_aux_2),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7_value;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__8 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__8_value;
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__9 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__9_value;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__10 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__10_value;
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11_value_aux_0),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11_value_aux_1),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11_value_aux_2),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11_value;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__12;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__13;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__14 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__14_value;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__15 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__15_value;
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16_value_aux_0),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16_value_aux_1),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16_value_aux_2),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(56, 53, 154, 97, 179, 232, 94, 186)}};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16_value;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__17 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__17_value;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__18;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__19;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__20 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__20_value;
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21_value_aux_0),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21_value_aux_1),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21_value_aux_2),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21_value;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__22 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__22_value;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__23;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__24;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__25;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__26;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__27 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__27_value;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__28;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__29;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__30 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__30_value;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__31;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__32;
static const lean_ctor_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 253, 71, 61, 132, 173, 240)}};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__33 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__33_value;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__34;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__35;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__36;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__37;
static const lean_string_object lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__38 = (const lean_object*)&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__38_value;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__39;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__40;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__41;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__42;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__43;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__44;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__45;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__46;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__47;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__48;
static lean_once_cell_t lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__49;
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1;
LEAN_EXPORT uint8_t lp_Project_FactorizationForest_splitIndices___redArg___lam__0(lean_object* v_s_1_, lean_object* v_max__val_2_, lean_object* v_i_3_){
_start:
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_apply_1(v_s_1_, v_i_3_);
v___x_5_ = lean_nat_dec_eq(v___x_4_, v_max__val_2_);
lean_dec(v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices___redArg___lam__0___boxed(lean_object* v_s_6_, lean_object* v_max__val_7_, lean_object* v_i_8_){
_start:
{
uint8_t v_res_9_; lean_object* v_r_10_; 
v_res_9_ = lp_Project_FactorizationForest_splitIndices___redArg___lam__0(v_s_6_, v_max__val_7_, v_i_8_);
lean_dec(v_max__val_7_);
v_r_10_ = lean_box(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices___redArg(lean_object* v_n_11_, lean_object* v_h_12_, lean_object* v_s_13_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v_max__val_16_; lean_object* v___f_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
lean_inc(v_h_12_);
v___x_14_ = lp_mathlib_Fin_instLinearOrder(v_h_12_);
v___x_15_ = l_List_finRange(v_h_12_);
v_max__val_16_ = lp_mathlib_Finset_max_x27___redArg(v___x_14_, v___x_15_);
lean_dec_ref(v___x_14_);
v___f_17_ = lean_alloc_closure((void*)(lp_Project_FactorizationForest_splitIndices___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_17_, 0, v_s_13_);
lean_closure_set(v___f_17_, 1, v_max__val_16_);
v___x_18_ = lean_unsigned_to_nat(1u);
v___x_19_ = lean_nat_add(v_n_11_, v___x_18_);
v___x_20_ = l_List_finRange(v___x_19_);
v___x_21_ = lean_box(0);
v___x_22_ = l_List_filterTR_loop___redArg(v___f_17_, v___x_20_, v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices___redArg___boxed(lean_object* v_n_23_, lean_object* v_h_24_, lean_object* v_s_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = lp_Project_FactorizationForest_splitIndices___redArg(v_n_23_, v_h_24_, v_s_25_);
lean_dec(v_n_23_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices(lean_object* v_n_27_, lean_object* v_h_28_, lean_object* v_inst_29_, lean_object* v_s_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lp_Project_FactorizationForest_splitIndices___redArg(v_n_27_, v_h_28_, v_s_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_splitIndices___boxed(lean_object* v_n_32_, lean_object* v_h_33_, lean_object* v_inst_34_, lean_object* v_s_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = lp_Project_FactorizationForest_splitIndices(v_n_32_, v_h_33_, v_inst_34_, v_s_35_);
lean_dec(v_n_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_partitionIndices___redArg(lean_object* v_x_37_){
_start:
{
if (lean_obj_tag(v_x_37_) == 0)
{
lean_object* v___x_38_; 
v___x_38_ = lean_box(0);
return v___x_38_;
}
else
{
lean_object* v_tail_39_; 
v_tail_39_ = lean_ctor_get(v_x_37_, 1);
lean_inc(v_tail_39_);
if (lean_obj_tag(v_tail_39_) == 0)
{
lean_object* v___x_40_; 
lean_dec_ref_known(v_x_37_, 2);
v___x_40_ = lean_box(0);
return v___x_40_;
}
else
{
lean_object* v_head_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_51_; 
v_head_41_ = lean_ctor_get(v_x_37_, 0);
v_isSharedCheck_51_ = !lean_is_exclusive(v_x_37_);
if (v_isSharedCheck_51_ == 0)
{
lean_object* v_unused_52_; 
v_unused_52_ = lean_ctor_get(v_x_37_, 1);
lean_dec(v_unused_52_);
v___x_43_ = v_x_37_;
v_isShared_44_ = v_isSharedCheck_51_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_head_41_);
lean_dec(v_x_37_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_51_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v_head_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_49_; 
v_head_45_ = lean_ctor_get(v_tail_39_, 0);
lean_inc(v_head_45_);
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v_head_41_);
lean_ctor_set(v___x_46_, 1, v_head_45_);
v___x_47_ = lp_Project_FactorizationForest_partitionIndices___redArg(v_tail_39_);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 1, v___x_47_);
lean_ctor_set(v___x_43_, 0, v___x_46_);
v___x_49_ = v___x_43_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v___x_46_);
lean_ctor_set(v_reuseFailAlloc_50_, 1, v___x_47_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_partitionIndices(lean_object* v_n_53_, lean_object* v_x_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lp_Project_FactorizationForest_partitionIndices___redArg(v_x_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_partitionIndices___boxed(lean_object* v_n_56_, lean_object* v_x_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = lp_Project_FactorizationForest_partitionIndices(v_n_56_, v_x_57_);
lean_dec(v_n_56_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_partitionIndices_match__1_splitter___redArg(lean_object* v_x_59_, lean_object* v_h__1_60_, lean_object* v_h__2_61_, lean_object* v_h__3_62_){
_start:
{
if (lean_obj_tag(v_x_59_) == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
lean_dec(v_h__3_62_);
lean_dec(v_h__2_61_);
v___x_63_ = lean_box(0);
v___x_64_ = lean_apply_1(v_h__1_60_, v___x_63_);
return v___x_64_;
}
else
{
lean_object* v_tail_65_; 
lean_dec(v_h__1_60_);
v_tail_65_ = lean_ctor_get(v_x_59_, 1);
if (lean_obj_tag(v_tail_65_) == 0)
{
lean_object* v_head_66_; lean_object* v___x_67_; 
lean_dec(v_h__3_62_);
v_head_66_ = lean_ctor_get(v_x_59_, 0);
lean_inc(v_head_66_);
lean_dec_ref_known(v_x_59_, 2);
v___x_67_ = lean_apply_1(v_h__2_61_, v_head_66_);
return v___x_67_;
}
else
{
lean_object* v_head_68_; lean_object* v_head_69_; lean_object* v_tail_70_; lean_object* v___x_71_; 
lean_inc_ref(v_tail_65_);
lean_dec(v_h__2_61_);
v_head_68_ = lean_ctor_get(v_x_59_, 0);
lean_inc(v_head_68_);
lean_dec_ref_known(v_x_59_, 2);
v_head_69_ = lean_ctor_get(v_tail_65_, 0);
lean_inc(v_head_69_);
v_tail_70_ = lean_ctor_get(v_tail_65_, 1);
lean_inc(v_tail_70_);
lean_dec_ref_known(v_tail_65_, 2);
v___x_71_ = lean_apply_3(v_h__3_62_, v_head_68_, v_head_69_, v_tail_70_);
return v___x_71_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_partitionIndices_match__1_splitter(lean_object* v_n_72_, lean_object* v_motive_73_, lean_object* v_x_74_, lean_object* v_h__1_75_, lean_object* v_h__2_76_, lean_object* v_h__3_77_){
_start:
{
if (lean_obj_tag(v_x_74_) == 0)
{
lean_object* v___x_78_; lean_object* v___x_79_; 
lean_dec(v_h__3_77_);
lean_dec(v_h__2_76_);
v___x_78_ = lean_box(0);
v___x_79_ = lean_apply_1(v_h__1_75_, v___x_78_);
return v___x_79_;
}
else
{
lean_object* v_tail_80_; 
lean_dec(v_h__1_75_);
v_tail_80_ = lean_ctor_get(v_x_74_, 1);
if (lean_obj_tag(v_tail_80_) == 0)
{
lean_object* v_head_81_; lean_object* v___x_82_; 
lean_dec(v_h__3_77_);
v_head_81_ = lean_ctor_get(v_x_74_, 0);
lean_inc(v_head_81_);
lean_dec_ref_known(v_x_74_, 2);
v___x_82_ = lean_apply_1(v_h__2_76_, v_head_81_);
return v___x_82_;
}
else
{
lean_object* v_head_83_; lean_object* v_head_84_; lean_object* v_tail_85_; lean_object* v___x_86_; 
lean_inc_ref(v_tail_80_);
lean_dec(v_h__2_76_);
v_head_83_ = lean_ctor_get(v_x_74_, 0);
lean_inc(v_head_83_);
lean_dec_ref_known(v_x_74_, 2);
v_head_84_ = lean_ctor_get(v_tail_80_, 0);
lean_inc(v_head_84_);
v_tail_85_ = lean_ctor_get(v_tail_80_, 1);
lean_inc(v_tail_85_);
lean_dec_ref_known(v_tail_80_, 2);
v___x_86_ = lean_apply_3(v_h__3_77_, v_head_83_, v_head_84_, v_tail_85_);
return v___x_86_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_partitionIndices_match__1_splitter___boxed(lean_object* v_n_87_, lean_object* v_motive_88_, lean_object* v_x_89_, lean_object* v_h__1_90_, lean_object* v_h__2_91_, lean_object* v_h__3_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_partitionIndices_match__1_splitter(v_n_87_, v_motive_88_, v_x_89_, v_h__1_90_, v_h__2_91_, v_h__3_92_);
lean_dec(v_n_87_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_restrictSplit___redArg(lean_object* v_s_94_, lean_object* v_i_95_, lean_object* v_k_96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = lean_nat_add(v_i_95_, v_k_96_);
v___x_98_ = lean_apply_1(v_s_94_, v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_restrictSplit___redArg___boxed(lean_object* v_s_99_, lean_object* v_i_100_, lean_object* v_k_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = lp_Project_FactorizationForest_restrictSplit___redArg(v_s_99_, v_i_100_, v_k_101_);
lean_dec(v_k_101_);
lean_dec(v_i_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_restrictSplit(lean_object* v_n_103_, lean_object* v_h_104_, lean_object* v_s_105_, lean_object* v_i_106_, lean_object* v_len_107_, lean_object* v_h__bound_108_, lean_object* v_k_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = lp_Project_FactorizationForest_restrictSplit___redArg(v_s_105_, v_i_106_, v_k_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_restrictSplit___boxed(lean_object* v_n_111_, lean_object* v_h_112_, lean_object* v_s_113_, lean_object* v_i_114_, lean_object* v_len_115_, lean_object* v_h__bound_116_, lean_object* v_k_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = lp_Project_FactorizationForest_restrictSplit(v_n_111_, v_h_112_, v_s_113_, v_i_114_, v_len_115_, v_h__bound_116_, v_k_117_);
lean_dec(v_k_117_);
lean_dec(v_len_115_);
lean_dec(v_i_114_);
lean_dec(v_h_112_);
lean_dec(v_n_111_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_lowerSplitInterior___redArg(lean_object* v_s_119_, lean_object* v_i_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = lean_apply_1(v_s_119_, v_i_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_lowerSplitInterior(lean_object* v_n_122_, lean_object* v_h_123_, lean_object* v_s_124_, lean_object* v_h__interior_125_, lean_object* v_i_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_apply_1(v_s_124_, v_i_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_lowerSplitInterior___boxed(lean_object* v_n_128_, lean_object* v_h_129_, lean_object* v_s_130_, lean_object* v_h__interior_131_, lean_object* v_i_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = lp_Project_FactorizationForest_lowerSplitInterior(v_n_128_, v_h_129_, v_s_130_, v_h__interior_131_, v_i_132_);
lean_dec(v_h_129_);
lean_dec(v_n_128_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__0(lean_object* v_x_134_){
_start:
{
lean_inc(v_x_134_);
return v_x_134_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__0___boxed(lean_object* v_x_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__0(v_x_135_);
lean_dec(v_x_135_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__1(lean_object* v_x_137_, lean_object* v_y_138_){
_start:
{
uint8_t v___x_139_; 
v___x_139_ = lean_nat_dec_le(v_x_137_, v_y_138_);
if (v___x_139_ == 0)
{
lean_inc(v_x_137_);
return v_x_137_;
}
else
{
lean_inc(v_y_138_);
return v_y_138_;
}
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__1___boxed(lean_object* v_x_140_, lean_object* v_y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__1(v_x_140_, v_y_141_);
lean_dec(v_y_141_);
lean_dec(v_x_140_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2___boxed(lean_object* v_u_147_, lean_object* v___x_148_, lean_object* v_h_149_, lean_object* v_s_150_, lean_object* v_x_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2(v_u_147_, v___x_148_, v_h_149_, v_s_150_, v_x_151_);
lean_dec(v_u_147_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg(lean_object* v_h_154_, lean_object* v_u_155_, lean_object* v_s_156_){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_157_ = l_List_lengthTR___redArg(v_u_155_);
v___x_158_ = lean_unsigned_to_nat(2u);
v___x_159_ = lean_nat_dec_le(v___x_157_, v___x_158_);
if (v___x_159_ == 0)
{
lean_object* v___f_160_; lean_object* v_idxs_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v___f_160_ = ((lean_object*)(lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__0));
lean_inc_ref(v_s_156_);
lean_inc(v_h_154_);
v_idxs_161_ = lp_Project_FactorizationForest_splitIndices___redArg(v___x_157_, v_h_154_, v_s_156_);
v___x_162_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_163_ = lean_box(0);
lean_inc(v_idxs_161_);
v___x_164_ = l_List_mapTR_loop___redArg(v___f_160_, v_idxs_161_, v___x_163_);
v___x_165_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_157_);
v___x_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_157_);
lean_ctor_set(v___x_166_, 1, v___x_163_);
v___x_167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_165_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = l_instDecidableEqList___redArg(v___x_162_, v___x_164_, v___x_167_);
if (v___x_168_ == 0)
{
lean_object* v___f_169_; lean_object* v___f_170_; lean_object* v___x_171_; lean_object* v_children_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v_max__h_175_; 
v___f_169_ = ((lean_object*)(lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__1));
lean_inc(v_u_155_);
v___f_170_ = lean_alloc_closure((void*)(lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_170_, 0, v_u_155_);
lean_closure_set(v___f_170_, 1, v___x_157_);
lean_closure_set(v___f_170_, 2, v_h_154_);
lean_closure_set(v___f_170_, 3, v_s_156_);
v___x_171_ = lp_Project_FactorizationForest_partitionIndices___redArg(v_idxs_161_);
v_children_172_ = l_List_mapTR_loop___redArg(v___f_170_, v___x_171_, v___x_163_);
v___x_173_ = ((lean_object*)(lp_Project_FactorizationForest_buildFactorizationTree___redArg___closed__2));
lean_inc(v_children_172_);
v___x_174_ = l_List_mapTR_loop___redArg(v___x_173_, v_children_172_, v___x_163_);
v_max__h_175_ = l_List_foldl___redArg(v___f_169_, v___x_165_, v___x_174_);
if (lean_obj_tag(v_children_172_) == 0)
{
lean_object* v_head_176_; lean_object* v_leaf_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_head_176_ = lean_ctor_get(v_u_155_, 0);
lean_inc(v_head_176_);
v_leaf_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_leaf_177_, 0, v_head_176_);
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = lean_nat_add(v_max__h_175_, v___x_178_);
lean_dec(v_max__h_175_);
lean_inc_ref(v_leaf_177_);
v___x_180_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_180_, 0, v_leaf_177_);
lean_ctor_set(v___x_180_, 1, v_leaf_177_);
lean_ctor_set(v___x_180_, 2, v_u_155_);
lean_ctor_set(v___x_180_, 3, v___x_179_);
return v___x_180_;
}
else
{
lean_object* v_tail_181_; 
v_tail_181_ = lean_ctor_get(v_children_172_, 1);
lean_inc(v_tail_181_);
if (lean_obj_tag(v_tail_181_) == 0)
{
lean_object* v_head_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v_head_182_ = lean_ctor_get(v_children_172_, 0);
lean_inc_n(v_head_182_, 2);
lean_dec_ref_known(v_children_172_, 2);
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = lean_nat_add(v_max__h_175_, v___x_183_);
lean_dec(v_max__h_175_);
v___x_185_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_185_, 0, v_head_182_);
lean_ctor_set(v___x_185_, 1, v_head_182_);
lean_ctor_set(v___x_185_, 2, v_u_155_);
lean_ctor_set(v___x_185_, 3, v___x_184_);
return v___x_185_;
}
else
{
lean_object* v_tail_186_; 
v_tail_186_ = lean_ctor_get(v_tail_181_, 1);
if (lean_obj_tag(v_tail_186_) == 0)
{
lean_object* v_head_187_; lean_object* v_head_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v_head_187_ = lean_ctor_get(v_children_172_, 0);
lean_inc(v_head_187_);
lean_dec_ref_known(v_children_172_, 2);
v_head_188_ = lean_ctor_get(v_tail_181_, 0);
lean_inc(v_head_188_);
lean_dec_ref_known(v_tail_181_, 2);
v___x_189_ = lean_unsigned_to_nat(1u);
v___x_190_ = lean_nat_add(v_max__h_175_, v___x_189_);
lean_dec(v_max__h_175_);
v___x_191_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_191_, 0, v_head_187_);
lean_ctor_set(v___x_191_, 1, v_head_188_);
lean_ctor_set(v___x_191_, 2, v_u_155_);
lean_ctor_set(v___x_191_, 3, v___x_190_);
return v___x_191_;
}
else
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
lean_dec_ref_known(v_tail_181_, 2);
v___x_192_ = lean_unsigned_to_nat(1u);
v___x_193_ = lean_nat_add(v_max__h_175_, v___x_192_);
lean_dec(v_max__h_175_);
v___x_194_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_194_, 0, v_children_172_);
lean_ctor_set(v___x_194_, 1, v_u_155_);
lean_ctor_set(v___x_194_, 2, v___x_193_);
return v___x_194_;
}
}
}
}
else
{
lean_object* v___x_195_; uint8_t v___x_196_; 
lean_dec(v_idxs_161_);
v___x_195_ = lean_unsigned_to_nat(1u);
v___x_196_ = lean_nat_dec_lt(v___x_195_, v_h_154_);
if (v___x_196_ == 0)
{
lean_object* v_head_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
lean_dec(v___x_157_);
lean_dec_ref(v_s_156_);
lean_dec(v_h_154_);
v_head_197_ = lean_ctor_get(v_u_155_, 0);
lean_inc(v_head_197_);
v___x_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_198_, 0, v_head_197_);
lean_inc_ref(v___x_198_);
v___x_199_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v___x_198_);
lean_ctor_set(v___x_199_, 2, v_u_155_);
lean_ctor_set(v___x_199_, 3, v___x_165_);
return v___x_199_;
}
else
{
lean_object* v_head_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v_w_204_; lean_object* v___x_205_; lean_object* v_s__w_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v_t__w_209_; lean_object* v_last__val_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___y_216_; 
v_head_200_ = lean_ctor_get(v_u_155_, 0);
v___x_201_ = lean_nat_sub(v___x_157_, v___x_158_);
v___x_202_ = l_List_drop___redArg(v___x_195_, v_u_155_);
v___x_203_ = ((lean_object*)(lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2___closed__0));
lean_inc(v___x_202_);
v_w_204_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_202_, v___x_202_, v___x_201_, v___x_203_);
lean_dec(v___x_202_);
v___x_205_ = l_List_lengthTR___redArg(v_w_204_);
lean_inc(v___x_205_);
lean_inc(v_h_154_);
v_s__w_206_ = lean_alloc_closure((void*)(lp_Project_FactorizationForest_restrictSplit___boxed), 7, 6);
lean_closure_set(v_s__w_206_, 0, v___x_157_);
lean_closure_set(v_s__w_206_, 1, v_h_154_);
lean_closure_set(v_s__w_206_, 2, v_s_156_);
lean_closure_set(v_s__w_206_, 3, v___x_195_);
lean_closure_set(v_s__w_206_, 4, v___x_205_);
lean_closure_set(v_s__w_206_, 5, lean_box(0));
v___x_207_ = lean_nat_sub(v_h_154_, v___x_195_);
v___x_208_ = lean_alloc_closure((void*)(lp_Project_FactorizationForest_lowerSplitInterior___boxed), 5, 4);
lean_closure_set(v___x_208_, 0, v___x_205_);
lean_closure_set(v___x_208_, 1, v_h_154_);
lean_closure_set(v___x_208_, 2, v_s__w_206_);
lean_closure_set(v___x_208_, 3, lean_box(0));
lean_inc(v_w_204_);
v_t__w_209_ = lp_Project_FactorizationForest_buildFactorizationTree___redArg(v___x_207_, v_w_204_, v___x_208_);
v_last__val_210_ = l_List_getLast___redArg(v_u_155_);
lean_inc(v_head_200_);
v___x_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_211_, 0, v_head_200_);
lean_inc(v_last__val_210_);
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v_last__val_210_);
v___x_213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_213_, 0, v_last__val_210_);
lean_ctor_set(v___x_213_, 1, v___x_163_);
v___x_214_ = l_List_appendTR___redArg(v_w_204_, v___x_213_);
switch(lean_obj_tag(v_t__w_209_))
{
case 0:
{
v___y_216_ = v___x_165_;
goto v___jp_215_;
}
case 1:
{
lean_object* v_height_221_; 
v_height_221_ = lean_ctor_get(v_t__w_209_, 3);
lean_inc(v_height_221_);
v___y_216_ = v_height_221_;
goto v___jp_215_;
}
default: 
{
lean_object* v_height_222_; 
v_height_222_ = lean_ctor_get(v_t__w_209_, 2);
lean_inc(v_height_222_);
v___y_216_ = v_height_222_;
goto v___jp_215_;
}
}
v___jp_215_:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_217_ = lean_nat_add(v___y_216_, v___x_195_);
v___x_218_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_218_, 0, v_t__w_209_);
lean_ctor_set(v___x_218_, 1, v___x_212_);
lean_ctor_set(v___x_218_, 2, v___x_214_);
lean_ctor_set(v___x_218_, 3, v___x_217_);
v___x_219_ = lean_nat_add(v___y_216_, v___x_158_);
lean_dec(v___y_216_);
v___x_220_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_220_, 0, v___x_211_);
lean_ctor_set(v___x_220_, 1, v___x_218_);
lean_ctor_set(v___x_220_, 2, v_u_155_);
lean_ctor_set(v___x_220_, 3, v___x_219_);
return v___x_220_;
}
}
}
}
else
{
lean_object* v___x_223_; uint8_t v___x_224_; 
lean_dec_ref(v_s_156_);
lean_dec(v_h_154_);
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = lean_nat_dec_eq(v___x_157_, v___x_223_);
lean_dec(v___x_157_);
if (v___x_224_ == 0)
{
lean_object* v_head_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v_head_225_ = lean_ctor_get(v_u_155_, 0);
v___x_226_ = l_List_getLast___redArg(v_u_155_);
lean_inc(v_head_225_);
v___x_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_227_, 0, v_head_225_);
v___x_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_226_);
v___x_229_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_229_, 0, v___x_227_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
lean_ctor_set(v___x_229_, 2, v_u_155_);
lean_ctor_set(v___x_229_, 3, v___x_223_);
return v___x_229_;
}
else
{
lean_object* v_head_230_; lean_object* v___x_231_; 
v_head_230_ = lean_ctor_get(v_u_155_, 0);
lean_inc(v_head_230_);
lean_dec(v_u_155_);
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v_head_230_);
return v___x_231_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2(lean_object* v_u_232_, lean_object* v___x_233_, lean_object* v_h_234_, lean_object* v_s_235_, lean_object* v_x_236_){
_start:
{
lean_object* v_fst_240_; lean_object* v_snd_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v_w_245_; lean_object* v___x_246_; uint8_t v___x_247_; 
v_fst_240_ = lean_ctor_get(v_x_236_, 0);
lean_inc_n(v_fst_240_, 2);
v_snd_241_ = lean_ctor_get(v_x_236_, 1);
lean_inc(v_snd_241_);
lean_dec_ref(v_x_236_);
v___x_242_ = lean_nat_sub(v_snd_241_, v_fst_240_);
lean_dec(v_snd_241_);
v___x_243_ = l_List_drop___redArg(v_fst_240_, v_u_232_);
v___x_244_ = ((lean_object*)(lp_Project_FactorizationForest_buildFactorizationTree___redArg___lam__2___closed__0));
lean_inc(v___x_243_);
v_w_245_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_243_, v___x_243_, v___x_242_, v___x_244_);
lean_dec(v___x_243_);
v___x_246_ = l_List_lengthTR___redArg(v_w_245_);
v___x_247_ = lean_nat_dec_lt(v___x_246_, v___x_233_);
if (v___x_247_ == 0)
{
lean_dec(v___x_246_);
lean_dec(v_w_245_);
lean_dec(v_fst_240_);
lean_dec_ref(v_s_235_);
lean_dec(v_h_234_);
lean_dec(v___x_233_);
goto v___jp_237_;
}
else
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_nat_add(v_fst_240_, v___x_246_);
v___x_249_ = lean_nat_dec_le(v___x_248_, v___x_233_);
lean_dec(v___x_248_);
if (v___x_249_ == 0)
{
lean_dec(v___x_246_);
lean_dec(v_w_245_);
lean_dec(v_fst_240_);
lean_dec_ref(v_s_235_);
lean_dec(v_h_234_);
lean_dec(v___x_233_);
goto v___jp_237_;
}
else
{
uint8_t v___x_250_; 
v___x_250_ = l_List_instDecidableEqNil___redArg(v_w_245_);
if (v___x_250_ == 0)
{
if (v___x_249_ == 0)
{
lean_dec(v___x_246_);
lean_dec(v_w_245_);
lean_dec(v_fst_240_);
lean_dec_ref(v_s_235_);
lean_dec(v_h_234_);
lean_dec(v___x_233_);
goto v___jp_237_;
}
else
{
lean_object* v___x_251_; lean_object* v___x_252_; 
lean_inc(v_h_234_);
v___x_251_ = lean_alloc_closure((void*)(lp_Project_FactorizationForest_restrictSplit___boxed), 7, 6);
lean_closure_set(v___x_251_, 0, v___x_233_);
lean_closure_set(v___x_251_, 1, v_h_234_);
lean_closure_set(v___x_251_, 2, v_s_235_);
lean_closure_set(v___x_251_, 3, v_fst_240_);
lean_closure_set(v___x_251_, 4, v___x_246_);
lean_closure_set(v___x_251_, 5, lean_box(0));
v___x_252_ = lp_Project_FactorizationForest_buildFactorizationTree___redArg(v_h_234_, v_w_245_, v___x_251_);
return v___x_252_;
}
}
else
{
lean_dec(v___x_246_);
lean_dec(v_w_245_);
lean_dec(v_fst_240_);
lean_dec_ref(v_s_235_);
lean_dec(v_h_234_);
lean_dec(v___x_233_);
goto v___jp_237_;
}
}
}
v___jp_237_:
{
lean_object* v_head_238_; lean_object* v___x_239_; 
v_head_238_ = lean_ctor_get(v_u_232_, 0);
lean_inc(v_head_238_);
v___x_239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_239_, 0, v_head_238_);
return v___x_239_;
}
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree(lean_object* v_A_253_, lean_object* v_S_254_, lean_object* v_inst_255_, lean_object* v_h_256_, lean_object* v_inst_257_, lean_object* v_eval_258_, lean_object* v_u_259_, lean_object* v_hu_260_, lean_object* v_s_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lp_Project_FactorizationForest_buildFactorizationTree___redArg(v_h_256_, v_u_259_, v_s_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* lp_Project_FactorizationForest_buildFactorizationTree___boxed(lean_object* v_A_263_, lean_object* v_S_264_, lean_object* v_inst_265_, lean_object* v_h_266_, lean_object* v_inst_267_, lean_object* v_eval_268_, lean_object* v_u_269_, lean_object* v_hu_270_, lean_object* v_s_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = lp_Project_FactorizationForest_buildFactorizationTree(v_A_263_, v_S_264_, v_inst_265_, v_h_266_, v_inst_267_, v_eval_268_, v_u_269_, v_hu_270_, v_s_271_);
lean_dec(v_eval_268_);
lean_dec(v_inst_265_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__3_splitter___redArg(lean_object* v_x_273_, lean_object* v_h__1_274_){
_start:
{
lean_object* v_fst_275_; lean_object* v_snd_276_; lean_object* v___x_277_; 
v_fst_275_ = lean_ctor_get(v_x_273_, 0);
lean_inc(v_fst_275_);
v_snd_276_ = lean_ctor_get(v_x_273_, 1);
lean_inc(v_snd_276_);
lean_dec_ref(v_x_273_);
v___x_277_ = lean_apply_2(v_h__1_274_, v_fst_275_, v_snd_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__3_splitter(lean_object* v_A_278_, lean_object* v_u_279_, lean_object* v_motive_280_, lean_object* v_x_281_, lean_object* v_h__1_282_){
_start:
{
lean_object* v_fst_283_; lean_object* v_snd_284_; lean_object* v___x_285_; 
v_fst_283_ = lean_ctor_get(v_x_281_, 0);
lean_inc(v_fst_283_);
v_snd_284_ = lean_ctor_get(v_x_281_, 1);
lean_inc(v_snd_284_);
lean_dec_ref(v_x_281_);
v___x_285_ = lean_apply_2(v_h__1_282_, v_fst_283_, v_snd_284_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__3_splitter___boxed(lean_object* v_A_286_, lean_object* v_u_287_, lean_object* v_motive_288_, lean_object* v_x_289_, lean_object* v_h__1_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__3_splitter(v_A_286_, v_u_287_, v_motive_288_, v_x_289_, v_h__1_290_);
lean_dec(v_u_287_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__5_splitter___redArg(lean_object* v_children_292_, lean_object* v_h__1_293_, lean_object* v_h__2_294_, lean_object* v_h__3_295_, lean_object* v_h__4_296_){
_start:
{
if (lean_obj_tag(v_children_292_) == 0)
{
lean_object* v___x_297_; lean_object* v___x_298_; 
lean_dec(v_h__4_296_);
lean_dec(v_h__3_295_);
lean_dec(v_h__2_294_);
v___x_297_ = lean_box(0);
v___x_298_ = lean_apply_1(v_h__1_293_, v___x_297_);
return v___x_298_;
}
else
{
lean_object* v_tail_299_; 
lean_dec(v_h__1_293_);
v_tail_299_ = lean_ctor_get(v_children_292_, 1);
if (lean_obj_tag(v_tail_299_) == 0)
{
lean_object* v_head_300_; lean_object* v___x_301_; 
lean_dec(v_h__4_296_);
lean_dec(v_h__3_295_);
v_head_300_ = lean_ctor_get(v_children_292_, 0);
lean_inc(v_head_300_);
lean_dec_ref_known(v_children_292_, 2);
v___x_301_ = lean_apply_1(v_h__2_294_, v_head_300_);
return v___x_301_;
}
else
{
lean_object* v_tail_302_; 
lean_inc_ref(v_tail_299_);
lean_dec(v_h__2_294_);
v_tail_302_ = lean_ctor_get(v_tail_299_, 1);
if (lean_obj_tag(v_tail_302_) == 0)
{
lean_object* v_head_303_; lean_object* v_head_304_; lean_object* v___x_305_; 
lean_dec(v_h__4_296_);
v_head_303_ = lean_ctor_get(v_children_292_, 0);
lean_inc(v_head_303_);
lean_dec_ref_known(v_children_292_, 2);
v_head_304_ = lean_ctor_get(v_tail_299_, 0);
lean_inc(v_head_304_);
lean_dec_ref_known(v_tail_299_, 2);
v___x_305_ = lean_apply_2(v_h__3_295_, v_head_303_, v_head_304_);
return v___x_305_;
}
else
{
lean_object* v_head_306_; lean_object* v_head_307_; lean_object* v_head_308_; lean_object* v_tail_309_; lean_object* v___x_310_; 
lean_inc_ref(v_tail_302_);
lean_dec(v_h__3_295_);
v_head_306_ = lean_ctor_get(v_children_292_, 0);
lean_inc(v_head_306_);
lean_dec_ref_known(v_children_292_, 2);
v_head_307_ = lean_ctor_get(v_tail_299_, 0);
lean_inc(v_head_307_);
lean_dec_ref_known(v_tail_299_, 2);
v_head_308_ = lean_ctor_get(v_tail_302_, 0);
lean_inc(v_head_308_);
v_tail_309_ = lean_ctor_get(v_tail_302_, 1);
lean_inc(v_tail_309_);
lean_dec_ref_known(v_tail_302_, 2);
v___x_310_ = lean_apply_4(v_h__4_296_, v_head_306_, v_head_307_, v_head_308_, v_tail_309_);
return v___x_310_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_FactorizationForest_Forest_0__FactorizationForest_buildFactorizationTree_match__5_splitter(lean_object* v_A_311_, lean_object* v_motive_312_, lean_object* v_children_313_, lean_object* v_h__1_314_, lean_object* v_h__2_315_, lean_object* v_h__3_316_, lean_object* v_h__4_317_){
_start:
{
if (lean_obj_tag(v_children_313_) == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec(v_h__4_317_);
lean_dec(v_h__3_316_);
lean_dec(v_h__2_315_);
v___x_318_ = lean_box(0);
v___x_319_ = lean_apply_1(v_h__1_314_, v___x_318_);
return v___x_319_;
}
else
{
lean_object* v_tail_320_; 
lean_dec(v_h__1_314_);
v_tail_320_ = lean_ctor_get(v_children_313_, 1);
if (lean_obj_tag(v_tail_320_) == 0)
{
lean_object* v_head_321_; lean_object* v___x_322_; 
lean_dec(v_h__4_317_);
lean_dec(v_h__3_316_);
v_head_321_ = lean_ctor_get(v_children_313_, 0);
lean_inc(v_head_321_);
lean_dec_ref_known(v_children_313_, 2);
v___x_322_ = lean_apply_1(v_h__2_315_, v_head_321_);
return v___x_322_;
}
else
{
lean_object* v_tail_323_; 
lean_inc_ref(v_tail_320_);
lean_dec(v_h__2_315_);
v_tail_323_ = lean_ctor_get(v_tail_320_, 1);
if (lean_obj_tag(v_tail_323_) == 0)
{
lean_object* v_head_324_; lean_object* v_head_325_; lean_object* v___x_326_; 
lean_dec(v_h__4_317_);
v_head_324_ = lean_ctor_get(v_children_313_, 0);
lean_inc(v_head_324_);
lean_dec_ref_known(v_children_313_, 2);
v_head_325_ = lean_ctor_get(v_tail_320_, 0);
lean_inc(v_head_325_);
lean_dec_ref_known(v_tail_320_, 2);
v___x_326_ = lean_apply_2(v_h__3_316_, v_head_324_, v_head_325_);
return v___x_326_;
}
else
{
lean_object* v_head_327_; lean_object* v_head_328_; lean_object* v_head_329_; lean_object* v_tail_330_; lean_object* v___x_331_; 
lean_inc_ref(v_tail_323_);
lean_dec(v_h__3_316_);
v_head_327_ = lean_ctor_get(v_children_313_, 0);
lean_inc(v_head_327_);
lean_dec_ref_known(v_children_313_, 2);
v_head_328_ = lean_ctor_get(v_tail_320_, 0);
lean_inc(v_head_328_);
lean_dec_ref_known(v_tail_320_, 2);
v_head_329_ = lean_ctor_get(v_tail_323_, 0);
lean_inc(v_head_329_);
v_tail_330_ = lean_ctor_get(v_tail_323_, 1);
lean_inc(v_tail_330_);
lean_dec_ref_known(v_tail_323_, 2);
v___x_331_ = lean_apply_4(v_h__4_317_, v_head_327_, v_head_328_, v_head_329_, v_tail_330_);
return v___x_331_;
}
}
}
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__12(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__10));
v___x_359_ = l_Lean_mkAtom(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__13(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_360_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__12, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__12_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__12);
v___x_361_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5));
v___x_362_ = lean_array_push(v___x_361_, v___x_360_);
return v___x_362_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__18(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__17));
v___x_372_ = l_Lean_mkAtom(v___x_371_);
return v___x_372_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__19(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__18, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__18_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__18);
v___x_374_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5));
v___x_375_ = lean_array_push(v___x_374_, v___x_373_);
return v___x_375_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__23(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__22));
v___x_384_ = l_Lean_mkAtom(v___x_383_);
return v___x_384_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__24(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_385_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__23, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__23_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__23);
v___x_386_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5));
v___x_387_ = lean_array_push(v___x_386_, v___x_385_);
return v___x_387_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__25(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_388_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__24, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__24_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__24);
v___x_389_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__21));
v___x_390_ = lean_box(2);
v___x_391_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
lean_ctor_set(v___x_391_, 1, v___x_389_);
lean_ctor_set(v___x_391_, 2, v___x_388_);
return v___x_391_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__26(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_392_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__25, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__25_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__25);
v___x_393_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5));
v___x_394_ = lean_array_push(v___x_393_, v___x_392_);
return v___x_394_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__28(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__27));
v___x_397_ = l_Lean_mkAtom(v___x_396_);
return v___x_397_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__29(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_398_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__28, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__28_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__28);
v___x_399_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__26, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__26_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__26);
v___x_400_ = lean_array_push(v___x_399_, v___x_398_);
return v___x_400_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__31(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_402_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__30));
v___x_403_ = lean_string_utf8_byte_size(v___x_402_);
return v___x_403_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__32(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_404_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__31, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__31_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__31);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__30));
v___x_407_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
lean_ctor_set(v___x_407_, 1, v___x_405_);
lean_ctor_set(v___x_407_, 2, v___x_404_);
return v___x_407_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__34(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_410_ = lean_box(0);
v___x_411_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__33));
v___x_412_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__32, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__32_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__32);
v___x_413_ = lean_box(2);
v___x_414_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
lean_ctor_set(v___x_414_, 1, v___x_412_);
lean_ctor_set(v___x_414_, 2, v___x_411_);
lean_ctor_set(v___x_414_, 3, v___x_410_);
return v___x_414_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__35(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_415_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__34, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__34_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__34);
v___x_416_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__29, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__29_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__29);
v___x_417_ = lean_array_push(v___x_416_, v___x_415_);
return v___x_417_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__36(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_418_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__35, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__35_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__35);
v___x_419_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__9));
v___x_420_ = lean_box(2);
v___x_421_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
lean_ctor_set(v___x_421_, 1, v___x_419_);
lean_ctor_set(v___x_421_, 2, v___x_418_);
return v___x_421_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__37(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_422_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__36, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__36_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__36);
v___x_423_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__19, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__19_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__19);
v___x_424_ = lean_array_push(v___x_423_, v___x_422_);
return v___x_424_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__39(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__38));
v___x_427_ = l_Lean_mkAtom(v___x_426_);
return v___x_427_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__40(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__39, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__39_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__39);
v___x_429_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__37, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__37_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__37);
v___x_430_ = lean_array_push(v___x_429_, v___x_428_);
return v___x_430_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__41(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_431_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__40, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__40_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__40);
v___x_432_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__16));
v___x_433_ = lean_box(2);
v___x_434_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
lean_ctor_set(v___x_434_, 1, v___x_432_);
lean_ctor_set(v___x_434_, 2, v___x_431_);
return v___x_434_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__42(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_435_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__41, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__41_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__41);
v___x_436_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__13, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__13_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__13);
v___x_437_ = lean_array_push(v___x_436_, v___x_435_);
return v___x_437_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__43(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_438_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__42, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__42_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__42);
v___x_439_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__11));
v___x_440_ = lean_box(2);
v___x_441_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_439_);
lean_ctor_set(v___x_441_, 2, v___x_438_);
return v___x_441_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__44(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__43, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__43_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__43);
v___x_443_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5));
v___x_444_ = lean_array_push(v___x_443_, v___x_442_);
return v___x_444_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__45(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_445_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__44, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__44_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__44);
v___x_446_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__9));
v___x_447_ = lean_box(2);
v___x_448_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v___x_446_);
lean_ctor_set(v___x_448_, 2, v___x_445_);
return v___x_448_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__46(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__45, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__45_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__45);
v___x_450_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5));
v___x_451_ = lean_array_push(v___x_450_, v___x_449_);
return v___x_451_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__47(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_452_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__46, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__46_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__46);
v___x_453_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__7));
v___x_454_ = lean_box(2);
v___x_455_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_453_);
lean_ctor_set(v___x_455_, 2, v___x_452_);
return v___x_455_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__48(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_456_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__47, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__47_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__47);
v___x_457_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__5));
v___x_458_ = lean_array_push(v___x_457_, v___x_456_);
return v___x_458_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__49(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_459_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__48, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__48_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__48);
v___x_460_ = ((lean_object*)(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__4));
v___x_461_ = lean_box(2);
v___x_462_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
lean_ctor_set(v___x_462_, 1, v___x_460_);
lean_ctor_set(v___x_462_, 2, v___x_459_);
return v___x_462_;
}
}
static lean_object* _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1(void){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = lean_obj_once(&lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__49, &lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__49_once, _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1___closed__49);
return v___x_463_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Project_Project_FactorizationForest_Split(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Project_Project_FactorizationForest_Forest(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Project_Project_FactorizationForest_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1 = _init_lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1();
lean_mark_persistent(lp_Project_FactorizationForest_restrictSplit__ramsey___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
