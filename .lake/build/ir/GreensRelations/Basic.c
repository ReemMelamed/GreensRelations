// Lean compiler output
// Module: GreensRelations.Basic
// Imports: public import Init public meta import Init public import GreensRelations.Defs public import Mathlib.Data.Setoid.Basic public import Mathlib.Algebra.Group.Opposite
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
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenL_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenL_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenR_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenR_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenH_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenH_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenD_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenD_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenJ_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenJ_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenL_setoid(lean_object* v_S_1_, lean_object* v_inst_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_box(0);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenL_setoid___boxed(lean_object* v_S_4_, lean_object* v_inst_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = lp_GreensTheorems_IsGreenL_setoid(v_S_4_, v_inst_5_);
lean_dec(v_inst_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenR_setoid(lean_object* v_S_7_, lean_object* v_inst_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_box(0);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenR_setoid___boxed(lean_object* v_S_10_, lean_object* v_inst_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lp_GreensTheorems_IsGreenR_setoid(v_S_10_, v_inst_11_);
lean_dec(v_inst_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenH_setoid(lean_object* v_S_13_, lean_object* v_inst_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_box(0);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenH_setoid___boxed(lean_object* v_S_16_, lean_object* v_inst_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lp_GreensTheorems_IsGreenH_setoid(v_S_16_, v_inst_17_);
lean_dec(v_inst_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenD_setoid(lean_object* v_S_19_, lean_object* v_inst_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_box(0);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenD_setoid___boxed(lean_object* v_S_22_, lean_object* v_inst_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_GreensTheorems_IsGreenD_setoid(v_S_22_, v_inst_23_);
lean_dec(v_inst_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenJ_setoid(lean_object* v_S_25_, lean_object* v_inst_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_box(0);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_GreensTheorems_IsGreenJ_setoid___boxed(lean_object* v_S_28_, lean_object* v_inst_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = lp_GreensTheorems_IsGreenJ_setoid(v_S_28_, v_inst_29_);
lean_dec(v_inst_29_);
return v_res_30_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_GreensTheorems_GreensRelations_Defs(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Setoid_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_Group_Opposite(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_GreensTheorems_GreensRelations_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_GreensTheorems_GreensRelations_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Setoid_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_Group_Opposite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
