// Lean compiler output
// Module: Project.GreensRelations.MulSeq
// Imports: public import Init public meta import Init public import Project.GreensRelations.Basic public import Mathlib.Data.Fintype.Pigeonhole
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_MulSeq_rightMulSeq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_MulSeq_rightMulSeq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_MulSeq_rightMulSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_MulSeq_rightMulSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_MulSeq_leftMulSeq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_MulSeq_leftMulSeq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_MulSeq_leftMulSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_MulSeq_leftMulSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_MulSeq_rightMulSeq___redArg(lean_object* v_inst_1_, lean_object* v_a_2_, lean_object* v_c_3_, lean_object* v_x_4_){
_start:
{
lean_object* v_zero_5_; uint8_t v_isZero_6_; 
v_zero_5_ = lean_unsigned_to_nat(0u);
v_isZero_6_ = lean_nat_dec_eq(v_x_4_, v_zero_5_);
if (v_isZero_6_ == 1)
{
lean_dec(v_c_3_);
lean_dec(v_inst_1_);
lean_inc(v_a_2_);
return v_a_2_;
}
else
{
lean_object* v_one_7_; lean_object* v_n_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v_one_7_ = lean_unsigned_to_nat(1u);
v_n_8_ = lean_nat_sub(v_x_4_, v_one_7_);
lean_inc(v_c_3_);
lean_inc(v_inst_1_);
v___x_9_ = lp_Project_MulSeq_rightMulSeq___redArg(v_inst_1_, v_a_2_, v_c_3_, v_n_8_);
lean_dec(v_n_8_);
v___x_10_ = lean_apply_2(v_inst_1_, v___x_9_, v_c_3_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* lp_Project_MulSeq_rightMulSeq___redArg___boxed(lean_object* v_inst_11_, lean_object* v_a_12_, lean_object* v_c_13_, lean_object* v_x_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lp_Project_MulSeq_rightMulSeq___redArg(v_inst_11_, v_a_12_, v_c_13_, v_x_14_);
lean_dec(v_x_14_);
lean_dec(v_a_12_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* lp_Project_MulSeq_rightMulSeq(lean_object* v_S_16_, lean_object* v_inst_17_, lean_object* v_a_18_, lean_object* v_c_19_, lean_object* v_x_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lp_Project_MulSeq_rightMulSeq___redArg(v_inst_17_, v_a_18_, v_c_19_, v_x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_Project_MulSeq_rightMulSeq___boxed(lean_object* v_S_22_, lean_object* v_inst_23_, lean_object* v_a_24_, lean_object* v_c_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = lp_Project_MulSeq_rightMulSeq(v_S_22_, v_inst_23_, v_a_24_, v_c_25_, v_x_26_);
lean_dec(v_x_26_);
lean_dec(v_a_24_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter___redArg(lean_object* v_x_28_, lean_object* v_h__1_29_, lean_object* v_h__2_30_){
_start:
{
lean_object* v_zero_31_; uint8_t v_isZero_32_; 
v_zero_31_ = lean_unsigned_to_nat(0u);
v_isZero_32_ = lean_nat_dec_eq(v_x_28_, v_zero_31_);
if (v_isZero_32_ == 1)
{
lean_object* v___x_33_; lean_object* v___x_34_; 
lean_dec(v_h__2_30_);
v___x_33_ = lean_box(0);
v___x_34_ = lean_apply_1(v_h__1_29_, v___x_33_);
return v___x_34_;
}
else
{
lean_object* v_one_35_; lean_object* v_n_36_; lean_object* v___x_37_; 
lean_dec(v_h__1_29_);
v_one_35_ = lean_unsigned_to_nat(1u);
v_n_36_ = lean_nat_sub(v_x_28_, v_one_35_);
v___x_37_ = lean_apply_1(v_h__2_30_, v_n_36_);
return v___x_37_;
}
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter___redArg___boxed(lean_object* v_x_38_, lean_object* v_h__1_39_, lean_object* v_h__2_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter___redArg(v_x_38_, v_h__1_39_, v_h__2_40_);
lean_dec(v_x_38_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter(lean_object* v_motive_42_, lean_object* v_x_43_, lean_object* v_h__1_44_, lean_object* v_h__2_45_){
_start:
{
lean_object* v_zero_46_; uint8_t v_isZero_47_; 
v_zero_46_ = lean_unsigned_to_nat(0u);
v_isZero_47_ = lean_nat_dec_eq(v_x_43_, v_zero_46_);
if (v_isZero_47_ == 1)
{
lean_object* v___x_48_; lean_object* v___x_49_; 
lean_dec(v_h__2_45_);
v___x_48_ = lean_box(0);
v___x_49_ = lean_apply_1(v_h__1_44_, v___x_48_);
return v___x_49_;
}
else
{
lean_object* v_one_50_; lean_object* v_n_51_; lean_object* v___x_52_; 
lean_dec(v_h__1_44_);
v_one_50_ = lean_unsigned_to_nat(1u);
v_n_51_ = lean_nat_sub(v_x_43_, v_one_50_);
v___x_52_ = lean_apply_1(v_h__2_45_, v_n_51_);
return v___x_52_;
}
}
}
LEAN_EXPORT lean_object* lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter___boxed(lean_object* v_motive_53_, lean_object* v_x_54_, lean_object* v_h__1_55_, lean_object* v_h__2_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = lp_Project___private_Project_GreensRelations_MulSeq_0__MulSeq_rightMulSeq_match__1_splitter(v_motive_53_, v_x_54_, v_h__1_55_, v_h__2_56_);
lean_dec(v_x_54_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* lp_Project_MulSeq_leftMulSeq___redArg(lean_object* v_inst_58_, lean_object* v_c_59_, lean_object* v_a_60_, lean_object* v_x_61_){
_start:
{
lean_object* v_zero_62_; uint8_t v_isZero_63_; 
v_zero_62_ = lean_unsigned_to_nat(0u);
v_isZero_63_ = lean_nat_dec_eq(v_x_61_, v_zero_62_);
if (v_isZero_63_ == 1)
{
lean_dec(v_c_59_);
lean_dec(v_inst_58_);
lean_inc(v_a_60_);
return v_a_60_;
}
else
{
lean_object* v_one_64_; lean_object* v_n_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v_one_64_ = lean_unsigned_to_nat(1u);
v_n_65_ = lean_nat_sub(v_x_61_, v_one_64_);
lean_inc(v_c_59_);
lean_inc(v_inst_58_);
v___x_66_ = lp_Project_MulSeq_leftMulSeq___redArg(v_inst_58_, v_c_59_, v_a_60_, v_n_65_);
lean_dec(v_n_65_);
v___x_67_ = lean_apply_2(v_inst_58_, v_c_59_, v___x_66_);
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* lp_Project_MulSeq_leftMulSeq___redArg___boxed(lean_object* v_inst_68_, lean_object* v_c_69_, lean_object* v_a_70_, lean_object* v_x_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = lp_Project_MulSeq_leftMulSeq___redArg(v_inst_68_, v_c_69_, v_a_70_, v_x_71_);
lean_dec(v_x_71_);
lean_dec(v_a_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* lp_Project_MulSeq_leftMulSeq(lean_object* v_S_73_, lean_object* v_inst_74_, lean_object* v_c_75_, lean_object* v_a_76_, lean_object* v_x_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lp_Project_MulSeq_leftMulSeq___redArg(v_inst_74_, v_c_75_, v_a_76_, v_x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* lp_Project_MulSeq_leftMulSeq___boxed(lean_object* v_S_79_, lean_object* v_inst_80_, lean_object* v_c_81_, lean_object* v_a_82_, lean_object* v_x_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = lp_Project_MulSeq_leftMulSeq(v_S_79_, v_inst_80_, v_c_81_, v_a_82_, v_x_83_);
lean_dec(v_x_83_);
lean_dec(v_a_82_);
return v_res_84_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Project_Project_GreensRelations_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Fintype_Pigeonhole(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Project_Project_GreensRelations_MulSeq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Project_Project_GreensRelations_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Fintype_Pigeonhole(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
