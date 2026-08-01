// Lean compiler output
// Module: Project.GreensRelations.Basic
// Imports: public import Init public meta import Init public import Mathlib.Algebra.Divisibility.Basic public import Mathlib.Algebra.Group.Basic public import Mathlib.Data.Setoid.Basic public import Mathlib.Algebra.Group.Opposite public import Mathlib.Data.Set.Basic public import Mathlib.Data.Finite.Defs
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
LEAN_EXPORT lean_object* lp_Project_IsGreenL_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenL_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenR_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenR_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenH_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenH_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenD_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenD_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenJ_setoid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenJ_setoid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenH_equivHClassOp___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenH_equivHClassOp___lam__0___boxed(lean_object*);
static const lean_closure_object lp_Project_IsGreenH_equivHClassOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Project_IsGreenH_equivHClassOp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Project_IsGreenH_equivHClassOp___closed__0 = (const lean_object*)&lp_Project_IsGreenH_equivHClassOp___closed__0_value;
static const lean_ctor_object lp_Project_IsGreenH_equivHClassOp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_Project_IsGreenH_equivHClassOp___closed__0_value),((lean_object*)&lp_Project_IsGreenH_equivHClassOp___closed__0_value)}};
static const lean_object* lp_Project_IsGreenH_equivHClassOp___closed__1 = (const lean_object*)&lp_Project_IsGreenH_equivHClassOp___closed__1_value;
LEAN_EXPORT lean_object* lp_Project_IsGreenH_equivHClassOp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenH_equivHClassOp___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenLClass_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenLClass_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenLClass_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenLClass_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenLClass_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenLClass_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenLClass_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenLClass_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenRClass_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenRClass_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenRClass_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenRClass_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenRClass_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenRClass_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenRClass_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenRClass_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenJClass_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenJClass_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenJClass_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenJClass_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenJClass_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenJClass_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenJClass_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenJClass_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenHClass_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenHClass_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenHClass_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenHClass_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenHClass_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenHClass_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenHClass_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenHClass_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenDClass_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenDClass_mk___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenDClass_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenDClass_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenDClass_instInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenDClass_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenDClass_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_GreenDClass_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Project_IsGreenL_setoid(lean_object* v_S_1_, lean_object* v_inst_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_box(0);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenL_setoid___boxed(lean_object* v_S_4_, lean_object* v_inst_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = lp_Project_IsGreenL_setoid(v_S_4_, v_inst_5_);
lean_dec(v_inst_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenR_setoid(lean_object* v_S_7_, lean_object* v_inst_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_box(0);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenR_setoid___boxed(lean_object* v_S_10_, lean_object* v_inst_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = lp_Project_IsGreenR_setoid(v_S_10_, v_inst_11_);
lean_dec(v_inst_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenH_setoid(lean_object* v_S_13_, lean_object* v_inst_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_box(0);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenH_setoid___boxed(lean_object* v_S_16_, lean_object* v_inst_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lp_Project_IsGreenH_setoid(v_S_16_, v_inst_17_);
lean_dec(v_inst_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenD_setoid(lean_object* v_S_19_, lean_object* v_inst_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_box(0);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenD_setoid___boxed(lean_object* v_S_22_, lean_object* v_inst_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = lp_Project_IsGreenD_setoid(v_S_22_, v_inst_23_);
lean_dec(v_inst_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenJ_setoid(lean_object* v_S_25_, lean_object* v_inst_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_box(0);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenJ_setoid___boxed(lean_object* v_S_28_, lean_object* v_inst_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = lp_Project_IsGreenJ_setoid(v_S_28_, v_inst_29_);
lean_dec(v_inst_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenH_equivHClassOp___lam__0(lean_object* v_x_31_){
_start:
{
lean_inc(v_x_31_);
return v_x_31_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenH_equivHClassOp___lam__0___boxed(lean_object* v_x_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = lp_Project_IsGreenH_equivHClassOp___lam__0(v_x_32_);
lean_dec(v_x_32_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenH_equivHClassOp(lean_object* v_S_37_, lean_object* v_inst_38_, lean_object* v_a_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = ((lean_object*)(lp_Project_IsGreenH_equivHClassOp___closed__1));
return v___x_40_;
}
}
LEAN_EXPORT lean_object* lp_Project_IsGreenH_equivHClassOp___boxed(lean_object* v_S_41_, lean_object* v_inst_42_, lean_object* v_a_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = lp_Project_IsGreenH_equivHClassOp(v_S_41_, v_inst_42_, v_a_43_);
lean_dec(v_a_43_);
lean_dec(v_inst_42_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenLClass_mk___redArg(lean_object* v_x_45_){
_start:
{
lean_inc(v_x_45_);
return v_x_45_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenLClass_mk___redArg___boxed(lean_object* v_x_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = lp_Project_GreenLClass_mk___redArg(v_x_46_);
lean_dec(v_x_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenLClass_mk(lean_object* v_S_48_, lean_object* v_inst_49_, lean_object* v_x_50_){
_start:
{
lean_inc(v_x_50_);
return v_x_50_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenLClass_mk___boxed(lean_object* v_S_51_, lean_object* v_inst_52_, lean_object* v_x_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = lp_Project_GreenLClass_mk(v_S_51_, v_inst_52_, v_x_53_);
lean_dec(v_x_53_);
lean_dec(v_inst_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenLClass_instInhabited___redArg(lean_object* v_inst_55_){
_start:
{
lean_inc(v_inst_55_);
return v_inst_55_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenLClass_instInhabited___redArg___boxed(lean_object* v_inst_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = lp_Project_GreenLClass_instInhabited___redArg(v_inst_56_);
lean_dec(v_inst_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenLClass_instInhabited(lean_object* v_S_58_, lean_object* v_inst_59_, lean_object* v_inst_60_){
_start:
{
lean_inc(v_inst_60_);
return v_inst_60_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenLClass_instInhabited___boxed(lean_object* v_S_61_, lean_object* v_inst_62_, lean_object* v_inst_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = lp_Project_GreenLClass_instInhabited(v_S_61_, v_inst_62_, v_inst_63_);
lean_dec(v_inst_63_);
lean_dec(v_inst_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenRClass_mk___redArg(lean_object* v_x_65_){
_start:
{
lean_inc(v_x_65_);
return v_x_65_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenRClass_mk___redArg___boxed(lean_object* v_x_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = lp_Project_GreenRClass_mk___redArg(v_x_66_);
lean_dec(v_x_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenRClass_mk(lean_object* v_S_68_, lean_object* v_inst_69_, lean_object* v_x_70_){
_start:
{
lean_inc(v_x_70_);
return v_x_70_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenRClass_mk___boxed(lean_object* v_S_71_, lean_object* v_inst_72_, lean_object* v_x_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = lp_Project_GreenRClass_mk(v_S_71_, v_inst_72_, v_x_73_);
lean_dec(v_x_73_);
lean_dec(v_inst_72_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenRClass_instInhabited___redArg(lean_object* v_inst_75_){
_start:
{
lean_inc(v_inst_75_);
return v_inst_75_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenRClass_instInhabited___redArg___boxed(lean_object* v_inst_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = lp_Project_GreenRClass_instInhabited___redArg(v_inst_76_);
lean_dec(v_inst_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenRClass_instInhabited(lean_object* v_S_78_, lean_object* v_inst_79_, lean_object* v_inst_80_){
_start:
{
lean_inc(v_inst_80_);
return v_inst_80_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenRClass_instInhabited___boxed(lean_object* v_S_81_, lean_object* v_inst_82_, lean_object* v_inst_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = lp_Project_GreenRClass_instInhabited(v_S_81_, v_inst_82_, v_inst_83_);
lean_dec(v_inst_83_);
lean_dec(v_inst_82_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenJClass_mk___redArg(lean_object* v_x_85_){
_start:
{
lean_inc(v_x_85_);
return v_x_85_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenJClass_mk___redArg___boxed(lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = lp_Project_GreenJClass_mk___redArg(v_x_86_);
lean_dec(v_x_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenJClass_mk(lean_object* v_S_88_, lean_object* v_inst_89_, lean_object* v_x_90_){
_start:
{
lean_inc(v_x_90_);
return v_x_90_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenJClass_mk___boxed(lean_object* v_S_91_, lean_object* v_inst_92_, lean_object* v_x_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = lp_Project_GreenJClass_mk(v_S_91_, v_inst_92_, v_x_93_);
lean_dec(v_x_93_);
lean_dec(v_inst_92_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenJClass_instInhabited___redArg(lean_object* v_inst_95_){
_start:
{
lean_inc(v_inst_95_);
return v_inst_95_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenJClass_instInhabited___redArg___boxed(lean_object* v_inst_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = lp_Project_GreenJClass_instInhabited___redArg(v_inst_96_);
lean_dec(v_inst_96_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenJClass_instInhabited(lean_object* v_S_98_, lean_object* v_inst_99_, lean_object* v_inst_100_){
_start:
{
lean_inc(v_inst_100_);
return v_inst_100_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenJClass_instInhabited___boxed(lean_object* v_S_101_, lean_object* v_inst_102_, lean_object* v_inst_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = lp_Project_GreenJClass_instInhabited(v_S_101_, v_inst_102_, v_inst_103_);
lean_dec(v_inst_103_);
lean_dec(v_inst_102_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenHClass_mk___redArg(lean_object* v_x_105_){
_start:
{
lean_inc(v_x_105_);
return v_x_105_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenHClass_mk___redArg___boxed(lean_object* v_x_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = lp_Project_GreenHClass_mk___redArg(v_x_106_);
lean_dec(v_x_106_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenHClass_mk(lean_object* v_S_108_, lean_object* v_inst_109_, lean_object* v_x_110_){
_start:
{
lean_inc(v_x_110_);
return v_x_110_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenHClass_mk___boxed(lean_object* v_S_111_, lean_object* v_inst_112_, lean_object* v_x_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = lp_Project_GreenHClass_mk(v_S_111_, v_inst_112_, v_x_113_);
lean_dec(v_x_113_);
lean_dec(v_inst_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenHClass_instInhabited___redArg(lean_object* v_inst_115_){
_start:
{
lean_inc(v_inst_115_);
return v_inst_115_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenHClass_instInhabited___redArg___boxed(lean_object* v_inst_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = lp_Project_GreenHClass_instInhabited___redArg(v_inst_116_);
lean_dec(v_inst_116_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenHClass_instInhabited(lean_object* v_S_118_, lean_object* v_inst_119_, lean_object* v_inst_120_){
_start:
{
lean_inc(v_inst_120_);
return v_inst_120_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenHClass_instInhabited___boxed(lean_object* v_S_121_, lean_object* v_inst_122_, lean_object* v_inst_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = lp_Project_GreenHClass_instInhabited(v_S_121_, v_inst_122_, v_inst_123_);
lean_dec(v_inst_123_);
lean_dec(v_inst_122_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenDClass_mk___redArg(lean_object* v_x_125_){
_start:
{
lean_inc(v_x_125_);
return v_x_125_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenDClass_mk___redArg___boxed(lean_object* v_x_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = lp_Project_GreenDClass_mk___redArg(v_x_126_);
lean_dec(v_x_126_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenDClass_mk(lean_object* v_S_128_, lean_object* v_inst_129_, lean_object* v_x_130_){
_start:
{
lean_inc(v_x_130_);
return v_x_130_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenDClass_mk___boxed(lean_object* v_S_131_, lean_object* v_inst_132_, lean_object* v_x_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = lp_Project_GreenDClass_mk(v_S_131_, v_inst_132_, v_x_133_);
lean_dec(v_x_133_);
lean_dec(v_inst_132_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenDClass_instInhabited___redArg(lean_object* v_inst_135_){
_start:
{
lean_inc(v_inst_135_);
return v_inst_135_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenDClass_instInhabited___redArg___boxed(lean_object* v_inst_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = lp_Project_GreenDClass_instInhabited___redArg(v_inst_136_);
lean_dec(v_inst_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenDClass_instInhabited(lean_object* v_S_138_, lean_object* v_inst_139_, lean_object* v_inst_140_){
_start:
{
lean_inc(v_inst_140_);
return v_inst_140_;
}
}
LEAN_EXPORT lean_object* lp_Project_GreenDClass_instInhabited___boxed(lean_object* v_S_141_, lean_object* v_inst_142_, lean_object* v_inst_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = lp_Project_GreenDClass_instInhabited(v_S_141_, v_inst_142_, v_inst_143_);
lean_dec(v_inst_143_);
lean_dec(v_inst_142_);
return v_res_144_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_Divisibility_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_Group_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Setoid_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_Group_Opposite(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Set_Basic(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Data_Finite_Defs(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Project_Project_GreensRelations_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_Divisibility_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_Group_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Setoid_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_Group_Opposite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Set_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Data_Finite_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
