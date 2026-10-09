
·
AWBAdvancedGrayWorld.protoMI_TUNING_AWBCommonDataTypesAWB.proto"‚
MessageWoodCallback6
wood_callback_enable (2.MI_TUNING_AWB.Int32Data?
wood_valid_wb_point_queue_len (2.MI_TUNING_AWB.Int32Data=
callback_triggered_thr (2.MI_TUNING_AWB.Int32ArrayData=
callback_reset_lux_thr (2.MI_TUNING_AWB.Int32ArrayData@
callback_reset_mix_ct_thr (2.MI_TUNING_AWB.Int32ArrayDataC
callback_reset_wood_info_thr (2.MI_TUNING_AWB.Int32ArrayDataG
 callback_reset_stats_percent_thr (2.MI_TUNING_AWB.Int32ArrayData=
gyro_stable_motion_thr (2.MI_TUNING_AWB.FloatArrayDataE
callback_reset_frame_count_thr	 (2.MI_TUNING_AWB.Int32ArrayDataE
#callback_update_hi_ct_stats_percent
 (2.MI_TUNING_AWB.Int32Data8
wood_ct_start_ref (2.MI_TUNING_AWB.Int32ArrayDataA
illum_wood_hi_diff_thr_min (2.MI_TUNING_AWB.Int32ArrayData:
fusion_point_ct_ref (2.MI_TUNING_AWB.Int32ArrayDataK
$fusion_point_with_illum_face_ct_diff (2.MI_TUNING_AWB.Int32ArrayDataX
.fusion_point_with_illum_ct_diff_fusion_percent (2 .MI_TUNING_AWB.Int32ArrayData_2DW
-fusion_point_with_face_ct_diff_fusion_percent (2 .MI_TUNING_AWB.Int32ArrayData_2D"≈	
MessageOutsideGrayCallback>
outside_gray_callback_enable (2.MI_TUNING_AWB.Int32DataG
%outside_gray_valid_wb_point_queue_len (2.MI_TUNING_AWB.Int32Data<
stats_num_percent_ref (2.MI_TUNING_AWB.Int32ArrayDataG
gray_stats_percent_thr_in_out (2 .MI_TUNING_AWB.Int32ArrayData_2DI
average_white_weight_thr_in_out (2 .MI_TUNING_AWB.Int32ArrayData_2DA
gray_stats_percent_min_thr (2.MI_TUNING_AWB.Int32ArrayDataC
average_white_weight_min_thr (2.MI_TUNING_AWB.Int32ArrayData:
duv_dist_percent_max_thr (2.MI_TUNING_AWB.Int32Data5
cct_median_ref	 (2.MI_TUNING_AWB.Int32ArrayData6
cct_std_min_thr
 (2.MI_TUNING_AWB.Int32ArrayDataA
green_stats_fusion_percent (2.MI_TUNING_AWB.Int32ArrayData;
face_num_percent_ref (2.MI_TUNING_AWB.FloatArrayData@
face_stats_fusion_percent (2.MI_TUNING_AWB.Int32ArrayDataA
custom_wb_fusion_ratio_ref (2.MI_TUNING_AWB.FloatArrayData?
custom_wb_fusion_percent (2.MI_TUNING_AWB.Int32ArrayDataC
gray_stats_fusion_percent (2 .MI_TUNING_AWB.Int32ArrayData_2D?
average_white_weight_ref (2.MI_TUNING_AWB.Int32ArrayDataM
#average_white_weight_fusion_percent (2 .MI_TUNING_AWB.Int32ArrayData_2D"ï
MessageHistoryH
outside_gray_callback (2).MI_TUNING_AWB.MessageOutsideGrayCallback9
wood_callback (2".MI_TUNING_AWB.MessageWoodCallback"∫
MessageMixIllumWeightK
$custom_fusion_num_percent_thr_in_out (2.MI_TUNING_AWB.Int32ArrayData6
input_lux_index (2.MI_TUNING_AWB.Int32ArrayData6
input_cct_index (2.MI_TUNING_AWB.Int32ArrayData1
init_rg (2 .MI_TUNING_AWB.Int32ArrayData_2D1
init_bg (2 .MI_TUNING_AWB.Int32ArrayData_2D"è
AWBAdvancedGrayWorld>
mix_illum_weight (2$.MI_TUNING_AWB.MessageMixIllumWeight7
history_callback (2.MI_TUNING_AWB.MessageHistorybproto3
Ì
AWBAiAssistantAnalyze.protoMI_TUNING_AWBCommonDataTypesAWB.proto"Ø
MessageAAAVegAtten5
aaa_vegatten_enable (2.MI_TUNING_AWB.Int32Data;
aaa_vegsa_ctdiff_ref (2.MI_TUNING_AWB.Int32ArrayData8
aaa_veg_sacct_ref (2.MI_TUNING_AWB.Int32ArrayData@
aaa_vegsa_ctdiff_ratio (2 .MI_TUNING_AWB.FloatArrayData_2D9
aaa_vegatten_gbk_enable (2.MI_TUNING_AWB.Int32Data9
aaa_gbk_num_percent_thu (2.MI_TUNING_AWB.Int32Data9
aaa_gbk_ctdiff_ref (2.MI_TUNING_AWB.Int32ArrayData6
aaa_gbk_cct_ref (2.MI_TUNING_AWB.Int32ArrayData@
aaa_ctdiff_gbkct_ratio	 (2 .MI_TUNING_AWB.FloatArrayData_2D"Ö
MessageAAAVeg0
aaa_veg_enable (2.MI_TUNING_AWB.Int32Data9
aaa_veg_num_percent_thu (2.MI_TUNING_AWB.Int32Data>
aaa_vegsa_lux_ratio_ref (2.MI_TUNING_AWB.Int32ArrayDataE
aaa_vegsa_vegvalid_precent_ref (2.MI_TUNING_AWB.Int32ArrayData>
aaa_vegsa_init_ratio (2 .MI_TUNING_AWB.FloatArrayData_2D@
aiassistant_veg_atten (2!.MI_TUNING_AWB.MessageAAAVegAtten"ó
MessageAAASunsetConfE
aaa_sunset_lux_facepercent_ref (2.MI_TUNING_AWB.Int32ArrayDataA
aaa_sunset_facepercent_ref (2.MI_TUNING_AWB.FloatArrayDataD
aaa_sunset_luxfaceper_conf (2 .MI_TUNING_AWB.Int32ArrayData_2D<
aaa_sunset_lux_ir_ref (2.MI_TUNING_AWB.Int32ArrayData8
aaa_sunset_ir_ref (2.MI_TUNING_AWB.FloatArrayData?
aaa_sunset_luxir_conf (2 .MI_TUNING_AWB.Int32ArrayData_2D<
aaa_sunset_agwcct_ref (2.MI_TUNING_AWB.Int32ArrayData?
aaa_sunset_agwctdiff_ref (2.MI_TUNING_AWB.Int32ArrayDataN
$aaa_sunset_facetargetcctagwdiff_conf	 (2 .MI_TUNING_AWB.Int32ArrayData_2D?
aaa_sunset_enable_custom_conf
 (2.MI_TUNING_AWB.Int32DataC
!aaa_sunset_custom_conf_first_type (2.MI_TUNING_AWB.Int32DataD
"aaa_sunset_custom_conf_second_type (2.MI_TUNING_AWB.Int32DataG
 aaa_sunset_custom_conf_first_ref (2.MI_TUNING_AWB.FloatArrayDataH
!aaa_sunset_custom_conf_second_ref (2.MI_TUNING_AWB.FloatArrayDataH
aaa_sunset_custom_trigger_conf (2 .MI_TUNING_AWB.Int32ArrayData_2D"Å
AAARgBgStruct6
aaa_rg_bg_rule (2.MI_TUNING_AWB.StructArrayRule8
aaa_rg_bg_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"Û
MessageAAASunsetTarget2
gain_adjust_mode (2.MI_TUNING_AWB.Int32Data8
trigger_aaa_first_type (2.MI_TUNING_AWB.Int32Data9
trigger_aaa_second_type (2.MI_TUNING_AWB.Int32Data>
trigger_aaa_first_index (2.MI_TUNING_AWB.FloatArrayData?
trigger_aaa_second_index (2.MI_TUNING_AWB.FloatArrayData/
	aaa_rg_bg (2.MI_TUNING_AWB.AAARgBgStruct"ú
MessageAAASunsetFusion@
aaa_sunset_conf_final_ref (2.MI_TUNING_AWB.Int32ArrayData@
aaa_sunset_conf_final_wgt (2.MI_TUNING_AWB.Int32ArrayData"°
MessageAAASunset3
aaa_sunset_enable (2.MI_TUNING_AWB.Int32DataD
aiassistant_sunset_conf (2#.MI_TUNING_AWB.MessageAAASunsetConfH
aiassistant_sunset_target (2%.MI_TUNING_AWB.MessageAAASunsetTargetH
aiassistant_sunset_fusion (2%.MI_TUNING_AWB.MessageAAASunsetFusion"ã
AWBAiAssistantAnalyze5
aiassistant_veg (2.MI_TUNING_AWB.MessageAAAVeg;
aiassistant_sunset (2.MI_TUNING_AWB.MessageAAASunsetbproto3
“
AWBBpsWBCompensate.protoMI_TUNING_AWBCommonDataTypesAWB.proto"à
GainFactorStruct8
gain_factor_rule (2.MI_TUNING_AWB.StructArrayRule:
gain_factor_data (2 .MI_TUNING_AWB.FloatArrayData_2D"™
MessageBpsWBFactor(
enable (2.MI_TUNING_AWB.Int32Data)
lux_num (2.MI_TUNING_AWB.Int32Data)
cct_num (2.MI_TUNING_AWB.Int32Data.
lux_ref (2.MI_TUNING_AWB.Int32ArrayData.
cct_ref (2.MI_TUNING_AWB.Int32ArrayData4
gain_factor (2.MI_TUNING_AWB.GainFactorStruct"Ã
AWBBpsWBCompensate(
enable (2.MI_TUNING_AWB.Int32Data-
se (2!.MI_TUNING_AWB.MessageBpsWBFactor-
sn (2!.MI_TUNING_AWB.MessageBpsWBFactor.
hdr (2!.MI_TUNING_AWB.MessageBpsWBFactorbproto3
ñ
AWBCCM.protoMI_TUNING_AWBCommonDataTypesAWB.proto"‘
AWBCCM3
ccm_use_xawb_tool (2.MI_TUNING_AWB.Int32Data6
ccm_bright_lux_start (2.MI_TUNING_AWB.Int32Data4
ccm_bright_lux_end (2.MI_TUNING_AWB.Int32Data8
ccm_lowlight_lux_start (2.MI_TUNING_AWB.Int32Data6
ccm_lowlight_lux_end (2.MI_TUNING_AWB.Int32Data4
ccm_use_d50_normal (2.MI_TUNING_AWB.Int32Data7
ccm_use_history_ratio (2.MI_TUNING_AWB.FloatData8
ccm_d65_bright (2 .MI_TUNING_AWB.FloatArrayData_2D8
ccm_d65_normal	 (2 .MI_TUNING_AWB.FloatArrayData_2D:
ccm_d65_lowlight
 (2 .MI_TUNING_AWB.FloatArrayData_2D:
ccm_d65_bri_face (2 .MI_TUNING_AWB.FloatArrayData_2D6
ccm_d65_face (2 .MI_TUNING_AWB.FloatArrayData_2D:
ccm_d65_low_face (2 .MI_TUNING_AWB.FloatArrayData_2D8
ccm_d50_bright (2 .MI_TUNING_AWB.FloatArrayData_2D8
ccm_d50_normal (2 .MI_TUNING_AWB.FloatArrayData_2D:
ccm_d50_lowlight (2 .MI_TUNING_AWB.FloatArrayData_2D:
ccm_d50_bri_face (2 .MI_TUNING_AWB.FloatArrayData_2D6
ccm_d50_face (2 .MI_TUNING_AWB.FloatArrayData_2D:
ccm_d50_low_face (2 .MI_TUNING_AWB.FloatArrayData_2D9
ccm_tl84_bright (2 .MI_TUNING_AWB.FloatArrayData_2D9
ccm_tl84_normal (2 .MI_TUNING_AWB.FloatArrayData_2D;
ccm_tl84_lowlight (2 .MI_TUNING_AWB.FloatArrayData_2D;
ccm_tl84_bri_face (2 .MI_TUNING_AWB.FloatArrayData_2D7
ccm_tl84_face (2 .MI_TUNING_AWB.FloatArrayData_2D;
ccm_tl84_low_face (2 .MI_TUNING_AWB.FloatArrayData_2D6
ccm_a_bright (2 .MI_TUNING_AWB.FloatArrayData_2D6
ccm_a_normal (2 .MI_TUNING_AWB.FloatArrayData_2D8
ccm_a_lowlight (2 .MI_TUNING_AWB.FloatArrayData_2D8
ccm_a_bri_face (2 .MI_TUNING_AWB.FloatArrayData_2D4

ccm_a_face (2 .MI_TUNING_AWB.FloatArrayData_2D8
ccm_a_low_face (2 .MI_TUNING_AWB.FloatArrayData_2D6
ccm_h_bright  (2 .MI_TUNING_AWB.FloatArrayData_2D6
ccm_h_normal! (2 .MI_TUNING_AWB.FloatArrayData_2D8
ccm_h_lowlight" (2 .MI_TUNING_AWB.FloatArrayData_2D8
ccm_h_bri_face# (2 .MI_TUNING_AWB.FloatArrayData_2D4

ccm_h_face$ (2 .MI_TUNING_AWB.FloatArrayData_2D8
ccm_h_low_face% (2 .MI_TUNING_AWB.FloatArrayData_2D0
ccm_c1& (2 .MI_TUNING_AWB.FloatArrayData_2D0
ccm_c2' (2 .MI_TUNING_AWB.FloatArrayData_2D0
ccm_c3( (2 .MI_TUNING_AWB.FloatArrayData_2D0
ccm_c4) (2 .MI_TUNING_AWB.FloatArrayData_2D0
ccm_c5* (2 .MI_TUNING_AWB.FloatArrayData_2Dbproto3
¨!
AWBDualCamera.protoMI_TUNING_AWBCommonDataTypesAWB.proto"¡
MergewgtConfLuxIrWpdiffStructN
&mergewgt_confidence_lux_ir_wpdiff_rule (2.MI_TUNING_AWB.StructArrayRuleP
&mergewgt_confidence_lux_ir_wpdiff_data (2 .MI_TUNING_AWB.FloatArrayData_2D"Ÿ
StaticTriglSync,

vertex_num (2.MI_TUNING_AWB.Int32Data+
	trigl_num (2.MI_TUNING_AWB.Int32Data0
vertex (2 .MI_TUNING_AWB.FloatArrayData_2D9
vertex_in_trigl (2 .MI_TUNING_AWB.Int32ArrayData_2D"ú
DynamicROISync.
stat_y_thr_h (2.MI_TUNING_AWB.Int32Data.
stat_y_thr_l (2.MI_TUNING_AWB.Int32Data3
roi_search_radius (2.MI_TUNING_AWB.Int32Data,

roi_grid_w (2.MI_TUNING_AWB.Int32Data,

roi_grid_h (2.MI_TUNING_AWB.Int32DataD
roi_agw_wgt_wpdiffratio_index (2.MI_TUNING_AWB.FloatArrayData<
roi_agw_wgt_value_arr (2.MI_TUNING_AWB.FloatArrayDataA
scene_stability_wpdiffratio_thr (2.MI_TUNING_AWB.FloatData>
common_scene_wpdiffratio_thr	 (2.MI_TUNING_AWB.FloatData=
common_scene_wpnumratio_thr
 (2.MI_TUNING_AWB.FloatData7
dark_scene_luxidx_thr (2.MI_TUNING_AWB.FloatDataD
"aeabnormal_scene_lumadiffratio_thr (2.MI_TUNING_AWB.FloatDataE
#aeabnormal_scene_dstwpdiffratio_thr (2.MI_TUNING_AWB.FloatDataC
!filter_staticvaryratio_strict_thr (2.MI_TUNING_AWB.FloatDataB
 filter_staticvaryratio_loose_thr (2.MI_TUNING_AWB.FloatData8
filter_convspeed_quick (2.MI_TUNING_AWB.FloatData7
filter_convspeed_slow (2.MI_TUNING_AWB.FloatData)
lux_num (2.MI_TUNING_AWB.Int32Data(
ir_num (2.MI_TUNING_AWB.Int32Data5
mergewgt_wpdiff_num (2.MI_TUNING_AWB.Int32Data.
lux_ref (2.MI_TUNING_AWB.FloatArrayData-
ir_ref (2.MI_TUNING_AWB.FloatArrayData:
mergewgt_wpdiff_ref (2.MI_TUNING_AWB.FloatArrayDataR
merge_confidence_luxirwpdiff (2,.MI_TUNING_AWB.MergewgtConfLuxIrWpdiffStruct1
match_conf_good (2.MI_TUNING_AWB.FloatData3
match_conf_common (2.MI_TUNING_AWB.FloatData.
ncc_good_thr (2.MI_TUNING_AWB.FloatData"å
MessageSyncWgt)
cct_num (2.MI_TUNING_AWB.Int32Data.
cct_ref (2.MI_TUNING_AWB.Int32ArrayData2
wp_diffratio_num (2.MI_TUNING_AWB.Int32Data7
wp_diffratio_ref (2.MI_TUNING_AWB.Int32ArrayData2
sync_wgt (2 .MI_TUNING_AWB.Int32ArrayData_2D"|
SyncWgtStruct5
sync_wgt_rule (2.MI_TUNING_AWB.StructArrayRule4
sync_wgt_data (2.MI_TUNING_AWB.MessageSyncWgt"º
ISZLock(
enable (2.MI_TUNING_AWB.Int32Data.
face_disable (2.MI_TUNING_AWB.Int32Data4
fix_lock_frame_num (2.MI_TUNING_AWB.Int32Data7
crop_wp_diffratio_thr (2.MI_TUNING_AWB.FloatData7
lock_wp_diffratio_thr (2.MI_TUNING_AWB.FloatData9
unlock_wp_diffratio_thr (2.MI_TUNING_AWB.FloatData:
unlock_lux_diffratio_thr (2.MI_TUNING_AWB.FloatData8
scene_change_frame_num (2.MI_TUNING_AWB.Int32Data"ÿ

AWBDualCamera-
sync_enable (2.MI_TUNING_AWB.Int32Data-
crop_enable (2.MI_TUNING_AWB.Int32Data:
static_trigl_sync_enable (2.MI_TUNING_AWB.Int32Data5
dynamic_sync_enable (2.MI_TUNING_AWB.Int32Data?
dynamic_pure_dist_sync_enable (2.MI_TUNING_AWB.Int32Data*
cam_type (2.MI_TUNING_AWB.Int32Data+
	fov_ratio (2.MI_TUNING_AWB.FloatData9
static_trigl_sync (2.MI_TUNING_AWB.StaticTriglSync7
dynamic_roi_sync	 (2.MI_TUNING_AWB.DynamicROISync)
lux_num
 (2.MI_TUNING_AWB.Int32Data.
lux_ref (2.MI_TUNING_AWB.Int32ArrayData2
sync_wgt_ref (2.MI_TUNING_AWB.SyncWgtStruct8
click_smooth_frame_thr (2.MI_TUNING_AWB.Int32Data7
zoom_smooth_frame_thr (2.MI_TUNING_AWB.Int32Data<
quicksync_smooth_frame_thr (2.MI_TUNING_AWB.Int32Data5
face_statsratio_thr (2.MI_TUNING_AWB.FloatData7
face_smooth_frame_thr (2.MI_TUNING_AWB.Int32Data(
isz_lock (2.MI_TUNING_AWB.ISZLock;
tripod_gyrosqr_strict_thr (2.MI_TUNING_AWB.FloatData:
tripod_gyrosqr_loose_thr (2.MI_TUNING_AWB.FloatData3
roi_num_ratio_thr (2.MI_TUNING_AWB.FloatData9
master_change_ratio_thr (2.MI_TUNING_AWB.FloatData4
src_diff_ratio_thr (2.MI_TUNING_AWB.FloatData3
warm_diff_cct_thr (2.MI_TUNING_AWB.FloatData:
sync_master_merge_enable (2.MI_TUNING_AWB.Int32Databproto3
Ω	
AWBFlashCommon.protoMI_TUNING_AWBCommonDataTypesAWB.proto"˙
MessageFlashProb(
k2_num (2.MI_TUNING_AWB.Int32Data)
k2 (2.MI_TUNING_AWB.Int32ArrayData/
ref_point_num (2.MI_TUNING_AWB.Int32Data0
	ref_point (2.MI_TUNING_AWB.Int32ArrayData.
prob (2 .MI_TUNING_AWB.Int32ArrayData_2D"w
ProbDataStruct1
	prob_rule (2.MI_TUNING_AWB.StructArrayRule2
	prob_data (2.MI_TUNING_AWB.MessageFlashProb"®
MessageFlashPrefer)
cct_num (2.MI_TUNING_AWB.Int32Data*
cct (2.MI_TUNING_AWB.Int32ArrayData(
k2_num (2.MI_TUNING_AWB.Int32Data)
k2 (2.MI_TUNING_AWB.Int32ArrayData2
prefer_r (2 .MI_TUNING_AWB.Int32ArrayData_2D2
prefer_b (2 .MI_TUNING_AWB.Int32ArrayData_2D"Ñ
FlashPreferDataStruct3
prefer_rule (2.MI_TUNING_AWB.StructArrayRule6
prefer_data (2!.MI_TUNING_AWB.MessageFlashPrefer"¥
MessagePreFlashRatio1
valid_stats_num (2.MI_TUNING_AWB.Int32Data2
valid_stats (2.MI_TUNING_AWB.Int32ArrayData5
preflash_ratio (2.MI_TUNING_AWB.Int32ArrayData"î
PreflashRatioStruct;
preflash_ratio_rule (2.MI_TUNING_AWB.StructArrayRule@
preflash_ratio_data (2#.MI_TUNING_AWB.MessagePreFlashRatiobproto3
÷
AWBFlashPreflash.protoMI_TUNING_AWBCommonDataTypesAWB.protoAWBFlashCommon.proto"Ù
AWBFlashPreflash/
flash_rg (2.MI_TUNING_AWB.Int32ArrayData/
flash_bg (2.MI_TUNING_AWB.Int32ArrayData,

radius_num (2.MI_TUNING_AWB.Int32Data-
radius (2.MI_TUNING_AWB.Int32ArrayData4
radius_weight (2.MI_TUNING_AWB.Int32ArrayData/
led_ratio_num (2.MI_TUNING_AWB.Int32Data3
led_ratio_k2 (2.MI_TUNING_AWB.Int32ArrayData5
led_ratio_data (2.MI_TUNING_AWB.Int32ArrayData0
area_ratio_num (2.MI_TUNING_AWB.Int32Data4
area_ratio_k2 (2.MI_TUNING_AWB.Int32ArrayData6
area_ratio_data (2.MI_TUNING_AWB.Int32ArrayData2
min_reduce_ratio (2.MI_TUNING_AWB.Int32Data'
y_num (2.MI_TUNING_AWB.Int32Data(
y (2.MI_TUNING_AWB.Int32ArrayData/
y_weight (2.MI_TUNING_AWB.Int32ArrayData.
prob_cct_num (2.MI_TUNING_AWB.Int32Data/
prob_cct (2.MI_TUNING_AWB.Int32ArrayData+
prob (2.MI_TUNING_AWB.ProbDataStruct9
preflash_prefer_lux_num (2.MI_TUNING_AWB.Int32Data@
preflash_prefer_lux_index  (2.MI_TUNING_AWB.Int32ArrayData=
preflash_prefer! (2$.MI_TUNING_AWB.FlashPreferDataStruct8
preflash_ratio_lux_num$ (2.MI_TUNING_AWB.Int32Data?
preflash_ratio_lux_index% (2.MI_TUNING_AWB.Int32ArrayData:
preflash_ratio& (2".MI_TUNING_AWB.PreflashRatioStruct8
max_preflash_ratio_num) (2.MI_TUNING_AWB.Int32Data<
max_preflash_ratio_k2* (2.MI_TUNING_AWB.Int32ArrayData>
max_preflash_ratio_data+ (2.MI_TUNING_AWB.Int32ArrayData:
mainflash_prefer_lux_num. (2.MI_TUNING_AWB.Int32DataA
mainflash_prefer_lux_index/ (2.MI_TUNING_AWB.Int32ArrayData>
mainflash_prefer0 (2$.MI_TUNING_AWB.FlashPreferDataStructbproto3
É
AWBFlashTorch.protoMI_TUNING_AWBCommonDataTypesAWB.proto"∫
AWBFlashTorch/
flash_rg (2.MI_TUNING_AWB.Int32ArrayData/
flash_bg (2.MI_TUNING_AWB.Int32ArrayData,

radius_num (2.MI_TUNING_AWB.Int32Data-
radius (2.MI_TUNING_AWB.Int32ArrayData4
radius_weight (2.MI_TUNING_AWB.Int32ArrayData'
y_num (2.MI_TUNING_AWB.Int32Data(
y (2.MI_TUNING_AWB.Int32ArrayData/
y_weight (2.MI_TUNING_AWB.Int32ArrayData1
stats_ratio_num (2.MI_TUNING_AWB.Int32Data2
stats_ratio (2.MI_TUNING_AWB.Int32ArrayData6
stats_led_ratio (2.MI_TUNING_AWB.Int32ArrayData)
lux_num (2.MI_TUNING_AWB.Int32Data0
	lux_index (2.MI_TUNING_AWB.Int32ArrayData4
lux_led_ratio (2.MI_TUNING_AWB.Int32ArrayDatabproto3
‡
AWBFlashTorchPreflash.protoMI_TUNING_AWBCommonDataTypesAWB.protoAWBFlashCommon.proto"˘
AWBFlashTorchPreflash/
flash_rg (2.MI_TUNING_AWB.Int32ArrayData/
flash_bg (2.MI_TUNING_AWB.Int32ArrayData,

radius_num (2.MI_TUNING_AWB.Int32Data-
radius (2.MI_TUNING_AWB.Int32ArrayData4
radius_weight (2.MI_TUNING_AWB.Int32ArrayData/
led_ratio_num (2.MI_TUNING_AWB.Int32Data3
led_ratio_k2 (2.MI_TUNING_AWB.Int32ArrayData5
led_ratio_data (2.MI_TUNING_AWB.Int32ArrayData0
area_ratio_num (2.MI_TUNING_AWB.Int32Data4
area_ratio_k2 (2.MI_TUNING_AWB.Int32ArrayData6
area_ratio_data (2.MI_TUNING_AWB.Int32ArrayData2
min_reduce_ratio (2.MI_TUNING_AWB.Int32Data'
y_num (2.MI_TUNING_AWB.Int32Data(
y (2.MI_TUNING_AWB.Int32ArrayData/
y_weight (2.MI_TUNING_AWB.Int32ArrayData.
prob_cct_num (2.MI_TUNING_AWB.Int32Data/
prob_cct (2.MI_TUNING_AWB.Int32ArrayData+
prob (2.MI_TUNING_AWB.ProbDataStruct9
preflash_prefer_lux_num (2.MI_TUNING_AWB.Int32Data@
preflash_prefer_lux_index  (2.MI_TUNING_AWB.Int32ArrayData=
preflash_prefer! (2$.MI_TUNING_AWB.FlashPreferDataStruct8
preflash_ratio_lux_num$ (2.MI_TUNING_AWB.Int32Data?
preflash_ratio_lux_index% (2.MI_TUNING_AWB.Int32ArrayData:
preflash_ratio& (2".MI_TUNING_AWB.PreflashRatioStruct8
max_preflash_ratio_num) (2.MI_TUNING_AWB.Int32Data<
max_preflash_ratio_k2* (2.MI_TUNING_AWB.Int32ArrayData>
max_preflash_ratio_data+ (2.MI_TUNING_AWB.Int32ArrayData:
mainflash_prefer_lux_num. (2.MI_TUNING_AWB.Int32DataA
mainflash_prefer_lux_index/ (2.MI_TUNING_AWB.Int32ArrayData>
mainflash_prefer0 (2$.MI_TUNING_AWB.FlashPreferDataStructbproto3
Ó
AWBPreference.protoMI_TUNING_AWBCommonDataTypesAWB.proto"g
MessagePreferCt)
rg (2.MI_TUNING_AWB.Int32ArrayData)
bg (2.MI_TUNING_AWB.Int32ArrayData"=
MessagePreferIr*
ir (2.MI_TUNING_AWB.MessagePreferCt"É
PreferLuxStruct7
prefer_lux_rule (2.MI_TUNING_AWB.StructArrayRule7
prefer_lux_data (2.MI_TUNING_AWB.MessagePreferIr"â
PreferLuxStruct_L9
prefer_l_lux_rule (2.MI_TUNING_AWB.StructArrayRule9
prefer_l_lux_data (2.MI_TUNING_AWB.MessagePreferIr"â
PreferLuxStruct_R9
prefer_r_lux_rule (2.MI_TUNING_AWB.StructArrayRule9
prefer_r_lux_data (2.MI_TUNING_AWB.MessagePreferIr"ﬂ
AWBPreference2
is_prefer_enable (2.MI_TUNING_AWB.Int32Data0
prefer_lux_num (2.MI_TUNING_AWB.Int32Data/
prefer_ir_num (2.MI_TUNING_AWB.Int32Data/
prefer_ct_num (2.MI_TUNING_AWB.Int32Data5
prefer_lux_ref (2.MI_TUNING_AWB.Int32ArrayData4
prefer_ir_ref (2.MI_TUNING_AWB.FloatArrayData4
prefer_ct_ref (2.MI_TUNING_AWB.Int32ArrayData2

prefer_lux (2.MI_TUNING_AWB.PreferLuxStruct5
prefer_l_dist_bound	 (2.MI_TUNING_AWB.Int32Data6
prefer_l_lux
 (2 .MI_TUNING_AWB.PreferLuxStruct_L5
prefer_r_dist_bound (2.MI_TUNING_AWB.Int32Data6
prefer_r_lux (2 .MI_TUNING_AWB.PreferLuxStruct_R,

aiq_enable (2.MI_TUNING_AWB.Int32Data7
aiq_convergence_speed (2.MI_TUNING_AWB.FloatData4
adjust_rgain_ratio (2.MI_TUNING_AWB.FloatData4
adjust_bgain_ratio (2.MI_TUNING_AWB.FloatDatabproto3
∑!
AWBPureColor.protoMI_TUNING_AWBCommonDataTypesAWB.proto"Ω

MessagePureColorConfidence-
cluster_num (2.MI_TUNING_AWB.Int32Data-
max_epoches (2.MI_TUNING_AWB.Int32Data6
random_avg_down_step (2.MI_TUNING_AWB.Int32Data3
std_shuffle_times (2.MI_TUNING_AWB.Int32Data?
spectral_pure_color_conf_thre (2.MI_TUNING_AWB.FloatDataA
predominated_cluster_ratio_thre (2.MI_TUNING_AWB.FloatDataC
both_high_conf_std_rg_weight (2.MI_TUNING_AWB.FloatArrayDataC
both_high_conf_std_bg_weight (2.MI_TUNING_AWB.FloatArrayDataH
!both_high_conf_stats_ratio_weight	 (2.MI_TUNING_AWB.FloatArrayDataK
$spectral_low_std_high_conf_rg_weight
 (2.MI_TUNING_AWB.FloatArrayDataK
$spectral_low_std_high_conf_bg_weight (2.MI_TUNING_AWB.FloatArrayDataT
-spectral_low_std_high_conf_stats_ratio_weight (2.MI_TUNING_AWB.FloatArrayDataK
$spectral_high_std_low_conf_rg_weight (2.MI_TUNING_AWB.FloatArrayDataK
$spectral_high_std_low_conf_bg_weight (2.MI_TUNING_AWB.FloatArrayDataF
$spectral_high_std_low_conf_thre_gain (2.MI_TUNING_AWB.FloatData.
lux_ref (2.MI_TUNING_AWB.Int32ArrayData.
cct_ref (2.MI_TUNING_AWB.Int32ArrayData.
gray_rg (2.MI_TUNING_AWB.Int32ArrayData.
gray_bg (2.MI_TUNING_AWB.Int32ArrayData4
rg_std_thresh (2.MI_TUNING_AWB.FloatArrayData4
bg_std_thresh (2.MI_TUNING_AWB.FloatArrayData"ò
ColorCheckerRgBg@
color_checker_rg_bg_rule (2.MI_TUNING_AWB.StructArrayRuleB
color_checker_rg_bg_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"Í
MessageLightSensor1

lux_confid (2.MI_TUNING_AWB.Int32ArrayData0
	lux_index (2.MI_TUNING_AWB.Int32ArrayData0
	ir_confid (2.MI_TUNING_AWB.Int32ArrayData/
ir_index (2.MI_TUNING_AWB.FloatArrayData7
front_cct_confid (2.MI_TUNING_AWB.Int32ArrayData6
front_cct_index (2.MI_TUNING_AWB.Int32ArrayData6
cct_diff_confid (2.MI_TUNING_AWB.Int32ArrayData5
cct_diff_index (2.MI_TUNING_AWB.Int32ArrayData8
pure_color_confid	 (2.MI_TUNING_AWB.Int32ArrayData7
pure_color_index
 (2.MI_TUNING_AWB.Int32ArrayData9
max_light_sensor_confid (2.MI_TUNING_AWB.Int32Data"Ö	
MessagePureColorTarget1

lux_weight (2.MI_TUNING_AWB.Int32ArrayData9
pure_color_cct_ref (2.MI_TUNING_AWB.Int32ArrayData0
	angle_ref (2.MI_TUNING_AWB.Int32ArrayData/
dist_ref (2.MI_TUNING_AWB.Int32ArrayData3
lux_diff_ref (2.MI_TUNING_AWB.Int32ArrayDataA
color_checker_cct_diff_ref (2.MI_TUNING_AWB.Int32ArrayDataJ
 color_checker_lux_cctdiff_weight (2 .MI_TUNING_AWB.Int32ArrayData_2DD
color_checker_angle_weight (2 .MI_TUNING_AWB.Int32ArrayData_2DC
color_checker_dist_weight	 (2 .MI_TUNING_AWB.Int32ArrayData_2D9
color_checker_block_cnt
 (2.MI_TUNING_AWB.Int32DataD
color_checker_block_weight (2 .MI_TUNING_AWB.Int32ArrayData_2D>
color_checker_weight (2 .MI_TUNING_AWB.Int32ArrayData_2D<
color_checker_rg_bg (2.MI_TUNING_AWB.ColorCheckerRgBg>
mid_value_filter_buffer_size (2.MI_TUNING_AWB.Int32Data@
color_checker_green_ratio_thre (2.MI_TUNING_AWB.FloatDataD
color_checker_green_block_idx (2.MI_TUNING_AWB.Int32ArrayDataF
color_checker_lux_cct_weight (2 .MI_TUNING_AWB.Int32ArrayData_2D<
light_sensor_data (2!.MI_TUNING_AWB.MessageLightSensor"ï
LuxDistCtWeight?
lux_dist_ct_weight_rule (2.MI_TUNING_AWB.StructArrayRuleA
lux_dist_ct_weight_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"–
MessagePureColorWeight7
dist_to_line_ref (2.MI_TUNING_AWB.FloatArrayData:
lux_dist_ct_weight (2.MI_TUNING_AWB.LuxDistCtWeightD
"weight_gaussian_filter_buffer_size (2.MI_TUNING_AWB.Int32Data>
weight_gaussian_filter_sigma (2.MI_TUNING_AWB.FloatData;
pure_color_highest_weight (2.MI_TUNING_AWB.Int32Data"¥
AWBPureColor2
down_sample_step (2.MI_TUNING_AWB.Int32Data.
lux_ref (2.MI_TUNING_AWB.Int32ArrayData.
cct_ref (2.MI_TUNING_AWB.Int32ArrayDataH
pure_color_confidence (2).MI_TUNING_AWB.MessagePureColorConfidence@
pure_color_target (2%.MI_TUNING_AWB.MessagePureColorTarget@
pure_color_weight (2%.MI_TUNING_AWB.MessagePureColorWeightB
 pure_color_valid_stats_num_limit (2.MI_TUNING_AWB.Int32Databproto3
∆
AWBSceneAnalyzer.protoMI_TUNING_AWBCommonDataTypesAWB.proto"ª
MessageSAGroup.
trigger_type (2.MI_TUNING_AWB.Int32Data8
sot_trigger_index (2.MI_TUNING_AWB.Int32ArrayData4
trigger_index (2.MI_TUNING_AWB.FloatArrayData4

zone_rg_bg (2 .MI_TUNING_AWB.Int32ArrayData_2D6
bright_value (2 .MI_TUNING_AWB.Int32ArrayData_2D,
ct (2 .MI_TUNING_AWB.Int32ArrayData_2D9
num_confid_percent (2.MI_TUNING_AWB.Int32ArrayData2
num_percent (2.MI_TUNING_AWB.Int32ArrayData"v
SAGroupStruct2

group_rule (2.MI_TUNING_AWB.StructArrayRule1

group_data (2.MI_TUNING_AWB.MessageSAGroup"v

RgBgStruct2

rg_bg_rule (2.MI_TUNING_AWB.StructArrayRule4

rg_bg_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"π
TargetStruct.
target_index (2.MI_TUNING_AWB.Int32Data4
trigger_first_type (2.MI_TUNING_AWB.Int32Data5
trigger_second_type (2.MI_TUNING_AWB.Int32Data3
trigger_first_num (2.MI_TUNING_AWB.Int32Data4
trigger_second_num (2.MI_TUNING_AWB.Int32Data:
trigger_first_index (2.MI_TUNING_AWB.FloatArrayData;
trigger_second_index (2.MI_TUNING_AWB.FloatArrayData(
rg_bg (2.MI_TUNING_AWB.RgBgStruct"ø

MessageSceneAnalyze
name (	+
group (2.MI_TUNING_AWB.SAGroupStruct<
sa_lux_confid_percent (2.MI_TUNING_AWB.Int32ArrayData3
sa_lux_index (2.MI_TUNING_AWB.Int32ArrayData;
sa_ir_confid_percent (2.MI_TUNING_AWB.Int32ArrayData2
sa_ir_index (2.MI_TUNING_AWB.FloatArrayData;
sa_ct_confid_percent (2.MI_TUNING_AWB.Int32ArrayData2
sa_ct_index (2.MI_TUNING_AWB.Int32ArrayDataB
sa_valid_wet_confid_percent	 (2.MI_TUNING_AWB.Int32ArrayData9
sa_valid_wet_index
 (2.MI_TUNING_AWB.Int32ArrayData<
sa_sky_confid_percent (2.MI_TUNING_AWB.Int32ArrayData3
sa_sky_index (2.MI_TUNING_AWB.Int32ArrayData>
sa_green_confid_percent (2.MI_TUNING_AWB.Int32ArrayData5
sa_green_index (2.MI_TUNING_AWB.Int32ArrayDataB
sa_face_area_confid_percent (2.MI_TUNING_AWB.Int32ArrayData;
sa_face_area_percent (2.MI_TUNING_AWB.FloatArrayData=
sa_wood_confid_percent (2.MI_TUNING_AWB.Int32ArrayData4
sa_wood_index (2.MI_TUNING_AWB.Int32ArrayDataC
sa_light_type_confid_percent (2.MI_TUNING_AWB.Int32ArrayData+
	sot_index (2.MI_TUNING_AWB.Int32Data9
sot_confid_percent (2.MI_TUNING_AWB.Int32ArrayData2
sot_percent (2.MI_TUNING_AWB.Int32ArrayData+
target (2.MI_TUNING_AWB.TargetStruct+
	sa_effect (2.MI_TUNING_AWB.Int32Data"z
SceneAnalyzeStruct/
sa_rule (2.MI_TUNING_AWB.StructArrayRule3
sa_data (2".MI_TUNING_AWB.MessageSceneAnalyze"ë
	MessageSA(
sa_num (2.MI_TUNING_AWB.Int32Data+
	valid_num (2.MI_TUNING_AWB.Int32Data-
sa (2!.MI_TUNING_AWB.SceneAnalyzeStruct"?
AWBSceneAnalyzer+
	normal_sa (2.MI_TUNING_AWB.MessageSAbproto3
æn
AWBSkin.protoMI_TUNING_AWBCommonDataTypesAWB.proto"£
BlackSkinSupLuxIrCtStructA
skin_black_color_sup_rule (2.MI_TUNING_AWB.StructArrayRuleC
skin_black_color_sup_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"Æ
SkinWpPercentLuxIrCtStructF
skin_wp_percent_lux_ir_ct_rule (2.MI_TUNING_AWB.StructArrayRuleH
skin_wp_percent_lux_ir_ct_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"÷
$FaceBacklitSALuxIrLumaRatioSupStructU
-face_backlit_sup_factor_lux_ir_lumaratio_rule (2.MI_TUNING_AWB.StructArrayRuleW
-face_backlit_sup_factor_lux_ir_lumaratio_data (2 .MI_TUNING_AWB.FloatArrayData_2D"°
SkinWpMixLightLuxCtStruct@
skin_mix_cct_lux_ct_rule (2.MI_TUNING_AWB.StructArrayRuleB
skin_mix_cct_lux_ct_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"¶
SkinColorGainsIrCTStructC
skin_color_gains_ir_ct_rule (2.MI_TUNING_AWB.StructArrayRuleE
skin_color_gains_ir_ct_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"«
 SkinColorGainsLuxIrCTGainsStructL
$skin_color_gains_lux_ir_ct_gain_rule (2.MI_TUNING_AWB.StructArrayRuleU
$skin_color_gains_lux_ir_ct_gain_data (2'.MI_TUNING_AWB.SkinColorGainsIrCTStruct"®
SkinAIDistTuneIrCTStructD
skin_ai_dist_tune_ir_ct_rule (2.MI_TUNING_AWB.StructArrayRuleF
skin_ai_dist_tune_ir_ct_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"∂
SkinAIDistTuneWeightsStructF
skin_ai_dist_tune_weights_rule (2.MI_TUNING_AWB.StructArrayRuleO
skin_ai_dist_tune_weights_data (2'.MI_TUNING_AWB.SkinAIDistTuneIrCTStruct"∆
"SkinTargetFinetuneChromaIrCTStructN
&skin_target_finetune_chroma_ir_ct_rule (2.MI_TUNING_AWB.StructArrayRuleP
&skin_target_finetune_chroma_ir_ct_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"k
MessageFacePreferCt)
rg (2.MI_TUNING_AWB.Int32ArrayData)
bg (2.MI_TUNING_AWB.Int32ArrayData"E
MessageFacePreferIr.
ir (2".MI_TUNING_AWB.MessageFacePreferCt"ï
FacePreferLuxStruct<
face_prefer_lux_rule (2.MI_TUNING_AWB.StructArrayRule@
face_prefer_lux_data (2".MI_TUNING_AWB.MessageFacePreferIr"õ
FacePreferLuxStruct_L>
face_prefer_l_lux_rule (2.MI_TUNING_AWB.StructArrayRuleB
face_prefer_l_lux_data (2".MI_TUNING_AWB.MessageFacePreferIr"õ
FacePreferLuxStruct_R>
face_prefer_r_lux_rule (2.MI_TUNING_AWB.StructArrayRuleB
face_prefer_r_lux_data (2".MI_TUNING_AWB.MessageFacePreferIr"†
FacePreferFinetune5
face_prefer_lux_num (2.MI_TUNING_AWB.Int32Data4
face_prefer_ir_num (2.MI_TUNING_AWB.Int32Data4
face_prefer_ct_num (2.MI_TUNING_AWB.Int32Data:
face_prefer_lux_ref (2.MI_TUNING_AWB.Int32ArrayData9
face_prefer_ir_ref (2.MI_TUNING_AWB.FloatArrayData9
face_prefer_ct_ref (2.MI_TUNING_AWB.Int32ArrayData;
face_prefer_lux (2".MI_TUNING_AWB.FacePreferLuxStruct:
face_prefer_l_dist_bound (2.MI_TUNING_AWB.Int32Data?
face_prefer_l_lux	 (2$.MI_TUNING_AWB.FacePreferLuxStruct_L:
face_prefer_r_dist_bound
 (2.MI_TUNING_AWB.Int32Data?
face_prefer_r_lux (2$.MI_TUNING_AWB.FacePreferLuxStruct_R"˘
MessageFaceTarget>
skin_ref_point_white_rg (2.MI_TUNING_AWB.Int32ArrayData>
skin_ref_point_white_bg (2.MI_TUNING_AWB.Int32ArrayData?
skin_ref_point_yellow_rg (2.MI_TUNING_AWB.Int32ArrayData?
skin_ref_point_yellow_bg (2.MI_TUNING_AWB.Int32ArrayData>
skin_ref_point_black_rg (2.MI_TUNING_AWB.Int32ArrayData>
skin_ref_point_black_bg (2.MI_TUNING_AWB.Int32ArrayData4
skin_white_h (2.MI_TUNING_AWB.DoubleArrayData5
skin_yellow_h (2.MI_TUNING_AWB.DoubleArrayData4
skin_black_h	 (2.MI_TUNING_AWB.DoubleArrayData=
skin_color_dist_gain_switch
 (2.MI_TUNING_AWB.Int32Data;
skin_color_ai_gain_switch (2.MI_TUNING_AWB.Int32Data:
skin_color_gains_lux_num (2.MI_TUNING_AWB.Int32Data9
skin_color_gains_ir_num (2.MI_TUNING_AWB.Int32Data9
skin_color_gains_ct_num (2.MI_TUNING_AWB.Int32Data0
skin_color_num (2.MI_TUNING_AWB.Int32Data?
skin_color_gains_lux_ref (2.MI_TUNING_AWB.Int32ArrayData>
skin_color_gains_ir_ref (2.MI_TUNING_AWB.FloatArrayData>
skin_color_gains_ct_ref (2.MI_TUNING_AWB.Int32ArrayDataI
skin_color_gains (2/.MI_TUNING_AWB.SkinColorGainsLuxIrCTGainsStructM
skin_ai_dist_tune_weights (2*.MI_TUNING_AWB.SkinAIDistTuneWeightsStruct<
skin_gaussian_filter_sigma (2.MI_TUNING_AWB.FloatDataB
 skin_gaussian_filter_buffer_size (2.MI_TUNING_AWB.Int32DataC
!skin_mid_value_filter_buffer_size (2.MI_TUNING_AWB.Int32Data=
skin_gaussian_filter_weight (2.MI_TUNING_AWB.FloatData"[
MessageFaceTargetCorrect?
face_prefer_finetune (2!.MI_TUNING_AWB.FacePreferFinetune"¡
MessageFaceBacklitSA;
face_backlit_lux_ref (2.MI_TUNING_AWB.Int32ArrayData:
face_backlit_ir_ref (2.MI_TUNING_AWB.FloatArrayDataM
&face_backlit_frame_face_luma_ratio_ref (2.MI_TUNING_AWB.FloatArrayDataG
%face_backlit_luma_ratio_fac_threshold (2.MI_TUNING_AWB.FloatDatae
(face_backlit_sup_factor_lux_ir_lumaratio (23.MI_TUNING_AWB.FaceBacklitSALuxIrLumaRatioSupStruct=
face_backlit_scan_area_size (2.MI_TUNING_AWB.Int32Data<
face_backlit_cct_diff_thre (2.MI_TUNING_AWB.Int32DataF
face_backlit_slide_window_sizes (2.MI_TUNING_AWB.Int32ArrayDataG
 face_backlit_slide_window_y_thre	 (2.MI_TUNING_AWB.Int32ArrayDataQ
*face_backlit_slide_window_dist_to_face_ref
 (2.MI_TUNING_AWB.Int32ArrayDataP
)face_backlit_slide_window_dist_sup_factor (2.MI_TUNING_AWB.FloatArrayData"“
MessageFaceInterferenceSAM
&face_interference_purecolor_std_rg_ref (2.MI_TUNING_AWB.FloatArrayDataX
1face_interference_purecolor_std_rg_enhance_factor (2.MI_TUNING_AWB.FloatArrayDataM
&face_interference_purecolor_std_bg_ref (2.MI_TUNING_AWB.FloatArrayDataX
1face_interference_purecolor_std_bg_enhance_factor (2.MI_TUNING_AWB.FloatArrayDataH
&face_interference_purecolor_gaus_scale (2.MI_TUNING_AWB.FloatDataH
&face_interference_purecolor_gaus_sigma (2.MI_TUNING_AWB.FloatDataN
,face_interference_purecolor_gaus_kernal_size (2.MI_TUNING_AWB.Int32DataM
+face_interference_purecolor_hue_hist_s_thre (2.MI_TUNING_AWB.FloatDataM
+face_interference_purecolor_hue_hist_v_thre	 (2.MI_TUNING_AWB.FloatDataJ
(face_interference_purecolor_hue_hist_num
 (2.MI_TUNING_AWB.Int32DataO
(face_interference_purecolor_hue_hist_ref (2.MI_TUNING_AWB.FloatArrayDataZ
3face_interference_purecolor_hue_hist_enhance_factor (2.MI_TUNING_AWB.FloatArrayDataP
.face_interference_purecolor_skin_noface_switch (2.MI_TUNING_AWB.Int32DataT
-face_purecolor_golden_stats_ratio_enhance_ref (2.MI_TUNING_AWB.FloatArrayDataW
0face_purecolor_golden_stats_ratio_enhance_factor (2.MI_TUNING_AWB.FloatArrayDataT
-face_purecolor_noface_stats_ratio_enhance_ref (2.MI_TUNING_AWB.FloatArrayDataW
0face_purecolor_noface_stats_ratio_enhance_factor (2.MI_TUNING_AWB.FloatArrayDataE
#face_purecolor_noface_cct_diff_thre (2.MI_TUNING_AWB.Int32DataA
face_purecolor_noface_gyro_thre (2.MI_TUNING_AWB.FloatDataU
3face_purecolor_noface_enhance_factor_effective_thre (2.MI_TUNING_AWB.FloatDataN
'face_interference_veg_in_gray_ratio_ref (2.MI_TUNING_AWB.FloatArrayDataK
$face_interference_veg_enhance_factor (2.MI_TUNING_AWB.FloatArrayDataO
(face_interference_soil_in_gray_ratio_ref (2.MI_TUNING_AWB.FloatArrayDataL
%face_interference_soil_enhance_factor (2.MI_TUNING_AWB.FloatArrayDataN
'face_interference_sky_in_gray_ratio_ref (2.MI_TUNING_AWB.FloatArrayDataK
$face_interference_sky_enhance_factor (2.MI_TUNING_AWB.FloatArrayData"•
MessageFaceMixedLightSA6
skin_mix_cct_lux_num (2.MI_TUNING_AWB.Int32Data5
skin_mix_cct_ct_num (2.MI_TUNING_AWB.Int32Data;
skin_mix_cct_lux_ref (2.MI_TUNING_AWB.Int32ArrayData:
skin_mix_cct_ct_ref (2.MI_TUNING_AWB.Int32ArrayDataG
 skin_mix_cct_positive_thresh_ref (2.MI_TUNING_AWB.Int32ArrayDataG
skin_mix_cct_positive (2(.MI_TUNING_AWB.SkinWpMixLightLuxCtStructG
 skin_mix_cct_negative_thresh_ref (2.MI_TUNING_AWB.Int32ArrayDataG
skin_mix_cct_negative (2(.MI_TUNING_AWB.SkinWpMixLightLuxCtStruct"ü
MessageFaceSceneAnalysis<
face_backlit_sa (2#.MI_TUNING_AWB.MessageFaceBacklitSAF
face_interference_sa (2(.MI_TUNING_AWB.MessageFaceInterferenceSAC
face_mixed_light_sa (2&.MI_TUNING_AWB.MessageFaceMixedLightSA7
nonlinear_active_func (2.MI_TUNING_AWB.Int32DataB
 nonlinear_active_compress_factor (2.MI_TUNING_AWB.Int32Data;
backlit_sup_fallback_thre (2.MI_TUNING_AWB.FloatData"”
MessageFaceFusionWeightFactorG
 skin_wp_percent_from_facecct_ref (2.MI_TUNING_AWB.Int32ArrayDataK
$skin_wp_percent_from_face_dist_l_ref (2.MI_TUNING_AWB.FloatArrayDataL
"skin_wp_percent_from_facect_dist_l (2 .MI_TUNING_AWB.Int32ArrayData_2DK
$skin_wp_percent_from_face_dist_r_ref (2.MI_TUNING_AWB.FloatArrayDataL
"skin_wp_percent_from_facect_dist_r (2 .MI_TUNING_AWB.Int32ArrayData_2DN
'skin_wp_percent_from_facect_dist_online (2.MI_TUNING_AWB.Int32ArrayDataF
$skin_wp_percent_from_num_trigger_cnt (2.MI_TUNING_AWB.Int32Data?
skin_wp_percent_from_num (2.MI_TUNING_AWB.Int32ArrayDataA
skin_wp_percent_num_index	 (2.MI_TUNING_AWB.DoubleArrayDataL
*skin_wp_percent_from_skinratio_trigger_cnt
 (2.MI_TUNING_AWB.Int32DataE
skin_wp_percent_from_skinratio (2.MI_TUNING_AWB.Int32ArrayDataF
skin_wp_percent_skinratio_index (2.MI_TUNING_AWB.FloatArrayData.
skin_lux_num (2.MI_TUNING_AWB.Int32Data-
skin_ir_num (2.MI_TUNING_AWB.Int32Data-
skin_ct_num (2.MI_TUNING_AWB.Int32Data3
skin_lux_ref (2.MI_TUNING_AWB.Int32ArrayData2
skin_ir_ref (2.MI_TUNING_AWB.FloatArrayData2
skin_ct_ref (2.MI_TUNING_AWB.Int32ArrayDataL
skin_wp_percent_lux_ir_ct (2).MI_TUNING_AWB.SkinWpPercentLuxIrCtStruct7
black_skin_sup_switch (2.MI_TUNING_AWB.Int32Data;
black_skin_sup_cct_choose (2.MI_TUNING_AWB.Int32DataF
skin_black_color_sup (2(.MI_TUNING_AWB.BlackSkinSupLuxIrCtStruct@
skin_color_score_diff_ref (2.MI_TUNING_AWB.FloatArrayDataA
skin_color_score_diff_gain (2.MI_TUNING_AWB.FloatArrayData"Ã
MessageFaceFusionPreferD
skin_prefer_percent_from_skin (2.MI_TUNING_AWB.Int32ArrayDataH
!skin_prefer_percent_from_grayskin (2.MI_TUNING_AWB.Int32ArrayDataC
skin_prefer_percent_from_num (2.MI_TUNING_AWB.Int32ArrayDataE
skin_prefer_percent_num_index (2.MI_TUNING_AWB.DoubleArrayDataI
"skin_prefer_percent_from_skinratio (2.MI_TUNING_AWB.Int32ArrayDataJ
#skin_prefer_percent_skinratio_index (2.MI_TUNING_AWB.FloatArrayData"∑
MessageFaceFusionCCMA
skin_ccm_percent_from_skin (2.MI_TUNING_AWB.Int32ArrayDataE
skin_ccm_percent_from_grayskin (2.MI_TUNING_AWB.Int32ArrayData@
skin_ccm_percent_from_num (2.MI_TUNING_AWB.Int32ArrayDataB
skin_ccm_percent_num_index (2.MI_TUNING_AWB.DoubleArrayDataF
skin_ccm_percent_from_skinratio (2.MI_TUNING_AWB.Int32ArrayDataG
 skin_ccm_percent_skinratio_index (2.MI_TUNING_AWB.FloatArrayData"Ò
MessageFaceFusionSmooth>
skin_graywp_to_locus_percent (2.MI_TUNING_AWB.Int32Data;
skin_rgbg_use_pre_percent (2.MI_TUNING_AWB.Int32Data=
skin_prefer_use_pre_percent (2.MI_TUNING_AWB.Int32Data:
skin_ccm_use_pre_percent (2.MI_TUNING_AWB.Int32Data;
skin_prefer_keep_cont_max (2.MI_TUNING_AWB.Int32Data8
skin_ccm_keep_cont_max (2.MI_TUNING_AWB.Int32Data4
skin_prefer_attenu (2.MI_TUNING_AWB.Int32Data1
skin_ccm_attenu (2.MI_TUNING_AWB.Int32Data"´
MessageFaceFusionP
face_fusion_weight_factors (2,.MI_TUNING_AWB.MessageFaceFusionWeightFactorB
face_fusion_prefer (2&.MI_TUNING_AWB.MessageFaceFusionPrefer<
face_fusion_ccm (2#.MI_TUNING_AWB.MessageFaceFusionCCMB
face_fusion_smooth (2&.MI_TUNING_AWB.MessageFaceFusionSmooth"Ú
MessageFaceStateMachine@
skin_state_machine_buffer_size (2.MI_TUNING_AWB.Int32DataO
-skin_state_machine_stat_value_diff_ratio_thre (2.MI_TUNING_AWB.FloatDataN
,skin_state_machine_base_gray_diff_ratio_thre (2.MI_TUNING_AWB.FloatDataS
1skin_state_machine_base_gray_diff_ratio_high_thre (2.MI_TUNING_AWB.FloatDataH
&skin_state_machine_s2g_diff_ratio_thre (2.MI_TUNING_AWB.FloatDataM
+skin_state_machine_s2g_diff_ratio_high_thre (2.MI_TUNING_AWB.FloatDataS
1skin_state_machine_combine_weight_diff_ratio_thre (2.MI_TUNING_AWB.FloatDataM
+skin_state_machine_intp_reduce_weight_value (2.MI_TUNING_AWB.Int32DataT
-skin_state_machine_face_none_cur_last_weights	 (2.MI_TUNING_AWB.FloatArrayDataY
2skin_state_machine_face_appearing_cur_last_weights
 (2.MI_TUNING_AWB.FloatArrayData\
5skin_state_machine_face_disappearing_cur_last_weights (2.MI_TUNING_AWB.FloatArrayDataV
/skin_state_machine_face_stable_cur_last_weights (2.MI_TUNING_AWB.FloatArrayDatai
Bskin_state_machine_face_unstable_base_gray_change_cur_last_weights (2.MI_TUNING_AWB.FloatArrayDatah
Askin_state_machine_face_unstable_face_s2g_change_cur_last_weights (2.MI_TUNING_AWB.FloatArrayDatai
Bskin_state_machine_face_unstable_face_stat_change_cur_last_weights (2.MI_TUNING_AWB.FloatArrayDatak
Dskin_state_machine_face_unstable_face_weight_change_cur_last_weights (2.MI_TUNING_AWB.FloatArrayDatad
=skin_state_machine_face_unstable_zoom_change_cur_last_weights (2.MI_TUNING_AWB.FloatArrayDatah
Askin_state_machine_face_unstable_face_cnt_change_cur_last_weights (2.MI_TUNING_AWB.FloatArrayData"ö
MessageFaceHighestWeightB
skin_highest_weight_lux_ref (2.MI_TUNING_AWB.Int32ArrayData:
skin_highest_weight (2.MI_TUNING_AWB.Int32ArrayData"ç
AWBSkin5
face_target (2 .MI_TUNING_AWB.MessageFaceTargetD
face_target_correct (2'.MI_TUNING_AWB.MessageFaceTargetCorrectD
face_scene_analysis (2'.MI_TUNING_AWB.MessageFaceSceneAnalysis5
face_fusion (2 .MI_TUNING_AWB.MessageFaceFusionB
face_state_machine (2&.MI_TUNING_AWB.MessageFaceStateMachineD
face_highest_weight (2'.MI_TUNING_AWB.MessageFaceHighestWeightbproto3
≤D
AWBAiAwb.protoMI_TUNING_AWBCommonDataTypesAWB.proto"–
MessageAiAwbSwitch5
enable_aiawb_feature (2.MI_TUNING_AWB.BoolData3
enable_mlcd_detect (2.MI_TUNING_AWB.BoolData9
enable_multiillum_detect (2.MI_TUNING_AWB.BoolData3
enable_aiawb_model (2.MI_TUNING_AWB.BoolData,

model_type (2.MI_TUNING_AWB.Int32Data0
skip_frame_cnt (2.MI_TUNING_AWB.Int32Data"É
MessageAiAwbColorMatrix3
raw_to_model (2.MI_TUNING_AWB.FloatArrayData3
model_to_raw (2.MI_TUNING_AWB.FloatArrayData"ô
MessageAiAwbStability:
sgw_diff_ratio_thr_false (2.MI_TUNING_AWB.FloatData9
sgw_diff_ratio_thr_true (2.MI_TUNING_AWB.FloatData:
agw_diff_ratio_thr_false (2.MI_TUNING_AWB.FloatData9
agw_diff_ratio_thr_true (2.MI_TUNING_AWB.FloatData5
agw_switch_diff_thr (2.MI_TUNING_AWB.FloatData4
agw_model_diff_thr (2.MI_TUNING_AWB.FloatData4
model_period_frame (2.MI_TUNING_AWB.Int32Data3
mlcd_period_frame (2.MI_TUNING_AWB.Int32Data:
mlcd_fast_converge_frame	 (2.MI_TUNING_AWB.Int32Data"¶
MessageAiAwbSceneStatus=
alpha4_merge_weight_default (2.MI_TUNING_AWB.FloatDataB
 alpha4_merge_weight_scene_effect (2.MI_TUNING_AWB.FloatData@
alpha4_merge_weight_scene_none (2.MI_TUNING_AWB.FloatDataF
$alpha4_merge_weight_scene_transition (2.MI_TUNING_AWB.FloatData"ÿ
MessageAiAwbSceneDetect3
lux_idx_thr_false (2.MI_TUNING_AWB.FloatData2
lux_idx_thr_true (2.MI_TUNING_AWB.FloatData>
face_dominant_conf_thr_false (2.MI_TUNING_AWB.Int32Data=
face_dominant_conf_thr_true (2.MI_TUNING_AWB.Int32Data<
sa_dominant_conf_thr_false (2.MI_TUNING_AWB.Int32Data;
sa_dominant_conf_thr_true (2.MI_TUNING_AWB.Int32Data5
adrc_gain_thr_false (2.MI_TUNING_AWB.FloatData4
adrc_gain_thr_true (2.MI_TUNING_AWB.FloatData;
mlc_stats_ratio_thr_false	 (2.MI_TUNING_AWB.FloatData:
mlc_stats_ratio_thr_true
 (2.MI_TUNING_AWB.FloatDataB
 gray_trad_dist_p2_line_thr_false (2.MI_TUNING_AWB.FloatDataA
gray_trad_dist_p2_line_thr_true (2.MI_TUNING_AWB.FloatData6
gray_ratio_thr_false (2.MI_TUNING_AWB.FloatData5
gray_ratio_thr_true (2.MI_TUNING_AWB.FloatData"L
AiAwbAdrcLowThrLut6
adrc_low_thr (2 .MI_TUNING_AWB.FloatArrayData_2D"ï
MessageAiAwbMultiillumDetect;
adrc_volatility_enter_thr (2.MI_TUNING_AWB.FloatData:
adrc_volatility_exit_thr (2.MI_TUNING_AWB.FloatData2
lux_idx_ref (2.MI_TUNING_AWB.FloatArrayData-
ir_ref (2.MI_TUNING_AWB.FloatArrayData;
adrc_low_thr_lut (2!.MI_TUNING_AWB.AiAwbAdrcLowThrLut:
mlc_outdoor_lux_high_thr (2.MI_TUNING_AWB.FloatData8
mlc_outdoor_ir_low_thr (2.MI_TUNING_AWB.FloatData9
mlc_outdoor_ct_high_thr (2.MI_TUNING_AWB.FloatData8
mlc_indoor_lux_low_thr	 (2.MI_TUNING_AWB.FloatData8
mlc_indoor_ir_high_thr
 (2.MI_TUNING_AWB.FloatData7
mlc_indoor_ct_low_thr (2.MI_TUNING_AWB.FloatData"Ä
AiAwbSceneWeightLutLayer1
lux_index_value (2.MI_TUNING_AWB.Int32Data1
weights (2 .MI_TUNING_AWB.FloatArrayData_2D"R
AiAwbSceneWeightLut;

lut_layers (2'.MI_TUNING_AWB.AiAwbSceneWeightLutLayer"⁄
MessageAiAwbWeight2
lux_idx_ref (2.MI_TUNING_AWB.FloatArrayData.
cct_ref (2.MI_TUNING_AWB.FloatArrayData/
dist_ref (2.MI_TUNING_AWB.FloatArrayData<
scene_weight_lut (2".MI_TUNING_AWB.AiAwbSceneWeightLutB
 special_illum_cct_diff_thr_false (2.MI_TUNING_AWB.FloatDataA
special_illum_cct_diff_thr_true (2.MI_TUNING_AWB.FloatDataK
)special_illum_trad_dist_p2_line_thr_false (2.MI_TUNING_AWB.FloatDataJ
(special_illum_trad_dist_p2_line_thr_true (2.MI_TUNING_AWB.FloatDataI
'special_illum_ai_dist_p2_line_thr_false	 (2.MI_TUNING_AWB.FloatDataH
&special_illum_ai_dist_p2_line_thr_true
 (2.MI_TUNING_AWB.FloatData<
special_illum_weight_limit (2.MI_TUNING_AWB.FloatData"Ç
MessageAiAwbFilterQueLen2
scene_status_len (2.MI_TUNING_AWB.Int32Data5
lackgray_status_len (2.MI_TUNING_AWB.Int32Data5
lowlight_status_len (2.MI_TUNING_AWB.Int32Data0
hdr_status_len (2.MI_TUNING_AWB.Int32Data1
face_status_len (2.MI_TUNING_AWB.Int32Data1
mlcd_status_len (2.MI_TUNING_AWB.Int32Data7
multiillum_status_len (2.MI_TUNING_AWB.Int32Data9
specialillum_status_len (2.MI_TUNING_AWB.Int32Data8
tuningscene_status_len	 (2.MI_TUNING_AWB.Int32Data"ç
MessageAiAwbModel2
y_dark_threshold (2.MI_TUNING_AWB.FloatData1
y_sat_threshold (2.MI_TUNING_AWB.FloatData/
bit_depth_num (2.MI_TUNING_AWB.Int32Data)
bin_num (2.MI_TUNING_AWB.Int32Data5
boundary_value (2.MI_TUNING_AWB.FloatArrayData"Û
MessageAiAwbMLCDDetect2
y_dark_threshold (2.MI_TUNING_AWB.FloatData1
y_sat_threshold (2.MI_TUNING_AWB.FloatData/
bit_depth_num (2.MI_TUNING_AWB.Int32Data-
minor_ratio (2.MI_TUNING_AWB.FloatData/
hist_bins_new (2.MI_TUNING_AWB.Int32Data=
high_saturation_scene_false (2.MI_TUNING_AWB.FloatData<
high_saturation_scene_true (2.MI_TUNING_AWB.FloatData<
grayscale_scene_false (2.MI_TUNING_AWB.FloatArrayData;
grayscale_scene_true	 (2.MI_TUNING_AWB.FloatArrayDataL
%single_narrow_color_block_scene_false
 (2.MI_TUNING_AWB.FloatArrayDataK
$single_narrow_color_block_scene_true (2.MI_TUNING_AWB.FloatArrayDataJ
#dual_narrow_color_block_scene_false (2.MI_TUNING_AWB.FloatArrayDataI
"dual_narrow_color_block_scene_true (2.MI_TUNING_AWB.FloatArrayDataL
%triple_narrow_color_block_scene_false (2.MI_TUNING_AWB.FloatArrayDataK
$triple_narrow_color_block_scene_true (2.MI_TUNING_AWB.FloatArrayData>
single_high_peak_scene_false (2.MI_TUNING_AWB.FloatData=
single_high_peak_scene_true (2.MI_TUNING_AWB.FloatData<
dual_high_peak_scene_false (2.MI_TUNING_AWB.FloatData;
dual_high_peak_scene_true (2.MI_TUNING_AWB.FloatData>
triple_high_peak_scene_false (2.MI_TUNING_AWB.FloatData=
triple_high_peak_scene_true (2.MI_TUNING_AWB.FloatDataH
!strong_dominant_color_scene_false (2.MI_TUNING_AWB.FloatArrayDataG
 strong_dominant_color_scene_true (2.MI_TUNING_AWB.FloatArrayDataP
)overwhelmingly_dominant_color_scene_false (2.MI_TUNING_AWB.FloatArrayDataO
(overwhelmingly_dominant_color_scene_true (2.MI_TUNING_AWB.FloatArrayData3
low_sat_scene_thr (2.MI_TUNING_AWB.FloatData8
low_contrast_scene_thr (2.MI_TUNING_AWB.FloatData"l
MessageAiAwbPreferCt)
rg (2.MI_TUNING_AWB.Int32ArrayData)
bg (2.MI_TUNING_AWB.Int32ArrayData"G
MessageAiAwbPreferIr/
ir (2#.MI_TUNING_AWB.MessageAiAwbPreferCt"ç
AiAwbPreferLuxStruct7
prefer_lux_rule (2.MI_TUNING_AWB.StructArrayRule<
prefer_lux_data (2#.MI_TUNING_AWB.MessageAiAwbPreferIr"ì
AiAwbPreferLuxStruct_L9
prefer_l_lux_rule (2.MI_TUNING_AWB.StructArrayRule>
prefer_l_lux_data (2#.MI_TUNING_AWB.MessageAiAwbPreferIr"ì
AiAwbPreferLuxStruct_R9
prefer_r_lux_rule (2.MI_TUNING_AWB.StructArrayRule>
prefer_r_lux_data (2#.MI_TUNING_AWB.MessageAiAwbPreferIr"˜
MessageAiAwbPreference2
is_prefer_enable (2.MI_TUNING_AWB.Int32Data0
prefer_lux_num (2.MI_TUNING_AWB.Int32Data/
prefer_ir_num (2.MI_TUNING_AWB.Int32Data/
prefer_ct_num (2.MI_TUNING_AWB.Int32Data5
prefer_lux_ref (2.MI_TUNING_AWB.Int32ArrayData4
prefer_ir_ref (2.MI_TUNING_AWB.FloatArrayData4
prefer_ct_ref (2.MI_TUNING_AWB.Int32ArrayData7

prefer_lux (2#.MI_TUNING_AWB.AiAwbPreferLuxStruct5
prefer_l_dist_bound	 (2.MI_TUNING_AWB.Int32Data;
prefer_l_lux
 (2%.MI_TUNING_AWB.AiAwbPreferLuxStruct_L5
prefer_r_dist_bound (2.MI_TUNING_AWB.Int32Data;
prefer_r_lux (2%.MI_TUNING_AWB.AiAwbPreferLuxStruct_R,

aiq_enable (2.MI_TUNING_AWB.Int32Data7
aiq_convergence_speed (2.MI_TUNING_AWB.FloatData4
adjust_rgain_ratio (2.MI_TUNING_AWB.FloatData4
adjust_bgain_ratio (2.MI_TUNING_AWB.FloatData"„
AWBAiAwb8
switch_params (2!.MI_TUNING_AWB.MessageAiAwbSwitchC
color_matrix_params (2&.MI_TUNING_AWB.MessageAiAwbColorMatrix>
stability_params (2$.MI_TUNING_AWB.MessageAiAwbStabilityC
scene_status_params (2&.MI_TUNING_AWB.MessageAiAwbSceneStatusC
scene_detect_params (2&.MI_TUNING_AWB.MessageAiAwbSceneDetectM
multiillum_detect_params (2+.MI_TUNING_AWB.MessageAiAwbMultiillumDetect8
weight_params (2!.MI_TUNING_AWB.MessageAiAwbWeight6
model_params (2 .MI_TUNING_AWB.MessageAiAwbModelA
mlcd_detect_params	 (2%.MI_TUNING_AWB.MessageAiAwbMLCDDetectB
filter_len_params
 (2'.MI_TUNING_AWB.MessageAiAwbFilterQueLenF
aiawb_preference_params (2%.MI_TUNING_AWB.MessageAiAwbPreferencebproto3
√
AWBStatsIllumFilter.protoMI_TUNING_AWBCommonDataTypesAWB.proto"ã
CorrectPropStruct9
correct_prob_rule (2.MI_TUNING_AWB.StructArrayRule;
correct_prob_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"ˆ	
CorrectPropSuppress8
weight_suppress_enable (2.MI_TUNING_AWB.Int32Data9
min_light_source_weight (2.MI_TUNING_AWB.Int32DataK
$illum_suppress_num_percent_base_type (2.MI_TUNING_AWB.Int32ArrayData9
hi_to_lo_ct_ref (2 .MI_TUNING_AWB.Int32ArrayData_2DD
hi_lo_transit_suppress_factor (2.MI_TUNING_AWB.FloatArrayData=
lo_ct_scene_lux_confid (2.MI_TUNING_AWB.Int32ArrayData<
lo_ct_scene_ir_confid (2.MI_TUNING_AWB.Int32ArrayDataJ
#lo_ct_scene_sensor_input_cct_confid (2.MI_TUNING_AWB.Int32ArrayDataC
lo_ct_num_percent_thr_in_out	 (2.MI_TUNING_AWB.Int32ArrayData8
hi_ct_num_percent
 (2.MI_TUNING_AWB.Int32ArrayData;
hi_ct_suppress_shift (2.MI_TUNING_AWB.Int32ArrayDataH
!hi_ct_suppress_face_adjust_factor (2.MI_TUNING_AWB.FloatArrayData=
hi_ct_scene_lux_confid (2.MI_TUNING_AWB.Int32ArrayData<
hi_ct_scene_ir_confid (2.MI_TUNING_AWB.Int32ArrayDataJ
#hi_ct_scene_sensor_input_cct_confid (2.MI_TUNING_AWB.Int32ArrayDataC
hi_ct_num_percent_thr_in_out (2.MI_TUNING_AWB.Int32ArrayData8
lo_ct_num_percent (2.MI_TUNING_AWB.Int32ArrayData;
lo_ct_suppress_shift (2.MI_TUNING_AWB.Int32ArrayDataH
!lo_ct_suppress_face_adjust_factor (2.MI_TUNING_AWB.FloatArrayData"Ì
AWBStatsIllumFilter6
correct_prob_lux_num (2.MI_TUNING_AWB.Int32Data5
correct_prob_ir_num (2.MI_TUNING_AWB.Int32Data6
correct_prob_cct_num (2.MI_TUNING_AWB.Int32Data;
correct_prob_lux_ref (2.MI_TUNING_AWB.Int32ArrayData:
correct_prob_ir_ref (2.MI_TUNING_AWB.FloatArrayData;
correct_prob_cct_ref (2.MI_TUNING_AWB.Int32ArrayData6
correct_prob (2 .MI_TUNING_AWB.CorrectPropStructA
correct_prob_suppress (2".MI_TUNING_AWB.CorrectPropSuppressbproto3
•Y
AWBStatsSceneFilter.protoMI_TUNING_AWBCommonDataTypesAWB.proto"ç
ValidStatsYStruct:
valid_stats_y_rule (2.MI_TUNING_AWB.StructArrayRule<
valid_stats_y_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"ª
MessageYFilter7
y_filter_lux_ref (2.MI_TUNING_AWB.Int32ArrayData7
y_filter_drc_ref (2.MI_TUNING_AWB.FloatArrayData7
valid_stats_y (2 .MI_TUNING_AWB.ValidStatsYStruct"ê
StatsYWeightStruct;
stats_y_weight_rule (2.MI_TUNING_AWB.StructArrayRule=
stats_y_weight_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"Û
MessageYWeight7
y_weight_lux_ref (2.MI_TUNING_AWB.Int32ArrayData7
y_weight_drc_ref (2.MI_TUNING_AWB.FloatArrayData4
stats_y_index (2.MI_TUNING_AWB.Int32ArrayData9
stats_y_weight (2!.MI_TUNING_AWB.StatsYWeightStruct"Ó
MessageStatFilterFace3
skin_zone_rg (2.MI_TUNING_AWB.Int32ArrayData3
skin_zone_bg (2.MI_TUNING_AWB.Int32ArrayData;
reduce_face_wet_per_frame (2.MI_TUNING_AWB.Int32Data:
face_correction_strength (2.MI_TUNING_AWB.Int32Data:
face_width_shrink_margin (2.MI_TUNING_AWB.FloatData;
face_height_shrink_margin (2.MI_TUNING_AWB.FloatDataF
skin_stats_weight_table_lux_ref (2.MI_TUNING_AWB.Int32ArrayDataA
skin_stats_weight_table (2 .MI_TUNING_AWB.Int32ArrayData_2DF
skin_stats_distill_table_weight	 (2.MI_TUNING_AWB.Int32ArrayDataG
%skin_stats_goldenavgtunefusion_enable
 (2.MI_TUNING_AWB.Int32DataF
skin_stats_facestatnumratio_ref (2.MI_TUNING_AWB.FloatArrayDataO
(skin_stats_facestatnumratio_goldenavgwgt (2.MI_TUNING_AWB.Int32ArrayDataD
"skin_stats_pixelface2golden_enable (2.MI_TUNING_AWB.Int32Data"—
MessageStatFilterWoodA
wood_num_percent_base_type (2.MI_TUNING_AWB.Int32ArrayData5
wood_zone_anchor_ct (2.MI_TUNING_AWB.Int32Data>
wood_analyse_num_percent_thu (2.MI_TUNING_AWB.Int32Data3
wood_fractile_num (2.MI_TUNING_AWB.Int32Data7
wood_len_precent (2.MI_TUNING_AWB.Int32ArrayData6
wood_len_confid (2.MI_TUNING_AWB.Int32ArrayData7
wood_num_precent (2.MI_TUNING_AWB.Int32ArrayData6
wood_num_confid (2.MI_TUNING_AWB.Int32ArrayData<
wood_main_eig_precent	 (2.MI_TUNING_AWB.Int32ArrayData;
wood_main_eig_confid
 (2.MI_TUNING_AWB.Int32ArrayData8
wood_theta_rg_ref (2.MI_TUNING_AWB.FloatArrayData;
wood_theta_rg_confid (2.MI_TUNING_AWB.Int32ArrayData6
wood_low_ct_ref (2.MI_TUNING_AWB.Int32ArrayData9
wood_low_ct_confid (2.MI_TUNING_AWB.Int32ArrayData3
wood_lux_ref (2.MI_TUNING_AWB.Int32ArrayData6
wood_lux_confid (2.MI_TUNING_AWB.Int32ArrayData2
wood_ir_ref (2.MI_TUNING_AWB.FloatArrayData5
wood_ir_confid (2.MI_TUNING_AWB.Int32ArrayData<
wood_total_confid_ref (2.MI_TUNING_AWB.Int32ArrayData8
wood_final_confid (2.MI_TUNING_AWB.Int32ArrayDataA
wood_start_supperss_ct_ref (2.MI_TUNING_AWB.Int32ArrayData=
wood_start_low_ct_diff (2.MI_TUNING_AWB.Int32ArrayData9
wood_max_weight (2 .MI_TUNING_AWB.Int32ArrayData_2D=
wood_hi_ct_num_precent (2.MI_TUNING_AWB.Int32ArrayData?
wood_hi_ct_adjust_factor (2.MI_TUNING_AWB.FloatArrayData>
wood_start_face_ct_diff (2.MI_TUNING_AWB.Int32ArrayDataA
wood_face_adjust_factor (2 .MI_TUNING_AWB.FloatArrayData_2D9
wood_dist_precent_start (2.MI_TUNING_AWB.Int32Data7
wood_dist_precent_end (2.MI_TUNING_AWB.Int32Data"ﬂ
MessageStatFilterSky3
sky_attenu_enable (2.MI_TUNING_AWB.Int32Data@
sky_num_percent_base_type (2.MI_TUNING_AWB.Int32ArrayData=
sky_analyse_num_percent_thu (2.MI_TUNING_AWB.Int32Data2
sky_fractile_num (2.MI_TUNING_AWB.Int32Data9
sky_zone_anchor_ct (2.MI_TUNING_AWB.Int32ArrayDataE
sky_anchor_d50_d65_shift_ratio (2.MI_TUNING_AWB.FloatArrayData6
sky_bv_diff_ref (2.MI_TUNING_AWB.Int32ArrayData9
sky_bv_diff_confid (2.MI_TUNING_AWB.Int32ArrayData6
sky_num_precent	 (2.MI_TUNING_AWB.Int32ArrayData5
sky_num_confid
 (2.MI_TUNING_AWB.Int32ArrayData;
sky_main_eig_precent (2.MI_TUNING_AWB.Int32ArrayData:
sky_main_eig_confid (2.MI_TUNING_AWB.Int32ArrayData6
sky_theta_y_ref (2.MI_TUNING_AWB.FloatArrayData9
sky_theta_y_confid (2.MI_TUNING_AWB.Int32ArrayData7
sky_theta_rg_ref (2.MI_TUNING_AWB.FloatArrayData:
sky_theta_rg_confid (2.MI_TUNING_AWB.Int32ArrayData2
sky_lux_ref (2.MI_TUNING_AWB.Int32ArrayData5
sky_lux_confid (2.MI_TUNING_AWB.Int32ArrayData1

sky_ir_ref (2.MI_TUNING_AWB.FloatArrayData4
sky_ir_confid (2.MI_TUNING_AWB.Int32ArrayData;
sky_total_confid_ref (2.MI_TUNING_AWB.Int32ArrayData7
sky_final_confid (2.MI_TUNING_AWB.Int32ArrayData6
sky_fractile_ct (2.MI_TUNING_AWB.Int32ArrayData8
sky_max_weight_ct (2.MI_TUNING_AWB.Int32ArrayData5
sky_fractile_y (2.MI_TUNING_AWB.Int32ArrayData7
sky_max_weight_y (2.MI_TUNING_AWB.Int32ArrayData;
sky_shadow_anchor_ct (2.MI_TUNING_AWB.Int32ArrayData7
sky_shadow_y_max (2.MI_TUNING_AWB.Int32ArrayDataC
sky_shadow_stats_num_precent (2.MI_TUNING_AWB.Int32ArrayData?
sky_shadow_adjust_factor (2.MI_TUNING_AWB.FloatArrayData=
sky_rgbg_dist_precent_start (2.MI_TUNING_AWB.Int32Data;
sky_rgbg_dist_precent_end  (2.MI_TUNING_AWB.Int32Data:
sky_y_dist_precent_start! (2.MI_TUNING_AWB.Int32Data8
sky_y_dist_precent_end" (2.MI_TUNING_AWB.Int32Data"Œ
MessageStatFilterGreen5
green_attenu_enable (2.MI_TUNING_AWB.Int32DataB
green_num_percent_base_type (2.MI_TUNING_AWB.Int32ArrayData4
green_fractile_num (2.MI_TUNING_AWB.Int32Data:
green_middle_zone_weight (2.MI_TUNING_AWB.Int32DataG
 just_gray_num_percent_thr_in_out (2.MI_TUNING_AWB.Int32ArrayDataY
2intersection_num_percent_base_just_gray_thr_in_out (2.MI_TUNING_AWB.Int32ArrayData>
intersection_ct_mid_ref (2.MI_TUNING_AWB.Int32ArrayDataH
!intersection_zone_rg_extend_ratio (2.MI_TUNING_AWB.FloatArrayDataH
!intersection_zone_bg_extend_ratio	 (2.MI_TUNING_AWB.FloatArrayDataF
green_attenu_max_ct_range_hi_lo
 (2.MI_TUNING_AWB.Int32ArrayData6
green_lux_index (2.MI_TUNING_AWB.Int32ArrayData7
green_lux_confid (2.MI_TUNING_AWB.Int32ArrayData5
green_ir_index (2.MI_TUNING_AWB.FloatArrayData6
green_ir_confid (2.MI_TUNING_AWB.Int32ArrayDataE
green_callback_all_num_precent (2.MI_TUNING_AWB.Int32ArrayDataH
!green_callback_num_precent_confid (2.MI_TUNING_AWB.Int32ArrayData<
gray_green_ct_avg_ref (2.MI_TUNING_AWB.Int32ArrayData?
gray_green_ct_avg_confid (2.MI_TUNING_AWB.Int32ArrayData=
gray_green_num_precent (2.MI_TUNING_AWB.Int32ArrayData?
green_attenu_upper_bound (2.MI_TUNING_AWB.Int32ArrayData?
green_attenu_lower_bound (2.MI_TUNING_AWB.Int32ArrayData:
green_ct_diff_index (2.MI_TUNING_AWB.Int32ArrayDataL
"green_face_ct_diff_callback_factor (2 .MI_TUNING_AWB.FloatArrayData_2DL
"green_gray_ct_diff_callback_factor (2 .MI_TUNING_AWB.FloatArrayData_2D"€
MessageWeightStat
wgt_stat_name (	E
wgt_stat_num_percent_base_type (2.MI_TUNING_AWB.Int32ArrayData>
wgt_stat_zone1_rg_bg (2 .MI_TUNING_AWB.Int32ArrayData_2DH
!wgt_stat_zone1_num_confid_percent (2.MI_TUNING_AWB.Int32ArrayDataA
wgt_stat_zone1_num_percent (2.MI_TUNING_AWB.Int32ArrayDataF
wgt_stat_zone1_y_confid_percent (2.MI_TUNING_AWB.Int32ArrayData=
wgt_stat_zone1_y_index (2.MI_TUNING_AWB.Int32ArrayData>
wgt_stat_zone2_rg_bg (2 .MI_TUNING_AWB.Int32ArrayData_2DH
!wgt_stat_zone2_num_confid_percent	 (2.MI_TUNING_AWB.Int32ArrayDataA
wgt_stat_zone2_num_percent
 (2.MI_TUNING_AWB.Int32ArrayDataF
wgt_stat_zone2_y_confid_percent (2.MI_TUNING_AWB.Int32ArrayData=
wgt_stat_zone2_y_index (2.MI_TUNING_AWB.Int32ArrayData>
wgt_stat_ctrange1_hi_lo (2.MI_TUNING_AWB.Int32ArrayDataK
$wgt_stat_ctrange1_num_confid_percent (2.MI_TUNING_AWB.Int32ArrayDataD
wgt_stat_ctrange1_num_percent (2.MI_TUNING_AWB.Int32ArrayDataI
"wgt_stat_ctrange1_y_confid_percent (2.MI_TUNING_AWB.Int32ArrayData@
wgt_stat_ctrange1_y_index (2.MI_TUNING_AWB.Int32ArrayData>
wgt_stat_ctrange2_hi_lo (2.MI_TUNING_AWB.Int32ArrayDataK
$wgt_stat_ctrange2_num_confid_percent (2.MI_TUNING_AWB.Int32ArrayDataD
wgt_stat_ctrange2_num_percent (2.MI_TUNING_AWB.Int32ArrayDataI
"wgt_stat_ctrange2_y_confid_percent (2.MI_TUNING_AWB.Int32ArrayData@
wgt_stat_ctrange2_y_index (2.MI_TUNING_AWB.Int32ArrayData>
wgt_stat_ctrange3_hi_lo (2.MI_TUNING_AWB.Int32ArrayDataK
$wgt_stat_ctrange3_num_confid_percent (2.MI_TUNING_AWB.Int32ArrayDataD
wgt_stat_ctrange3_num_percent (2.MI_TUNING_AWB.Int32ArrayDataI
"wgt_stat_ctrange3_y_confid_percent (2.MI_TUNING_AWB.Int32ArrayData@
wgt_stat_ctrange3_y_index (2.MI_TUNING_AWB.Int32ArrayDataB
wgt_stat_lux_confid_percent (2.MI_TUNING_AWB.Int32ArrayData9
wgt_stat_lux_index (2.MI_TUNING_AWB.Int32ArrayDataA
wgt_stat_ir_confid_percent (2.MI_TUNING_AWB.Int32ArrayData8
wgt_stat_ir_index (2.MI_TUNING_AWB.FloatArrayDataB
wgt_stat_sky_confid_percent  (2.MI_TUNING_AWB.Int32ArrayData9
wgt_stat_sky_index! (2.MI_TUNING_AWB.Int32ArrayDataH
!wgt_stat_green_num_confid_percent" (2.MI_TUNING_AWB.Int32ArrayDataA
wgt_stat_green_num_percent# (2.MI_TUNING_AWB.Int32ArrayDataG
 wgt_stat_face_num_confid_percent$ (2.MI_TUNING_AWB.Int32ArrayData@
wgt_stat_face_num_percent% (2.MI_TUNING_AWB.Int32ArrayDataG
 wgt_stat_sensor_input_cct_confid& (2.MI_TUNING_AWB.Int32ArrayData@
wgt_stat_sensor_input_cct' (2.MI_TUNING_AWB.Int32ArrayDataD
wgt_stat_skin_gray_cct_confid( (2.MI_TUNING_AWB.Int32ArrayData=
wgt_stat_skin_gray_cct) (2.MI_TUNING_AWB.Int32ArrayData?
wgt_stat_custom_num_type* (2.MI_TUNING_AWB.Int32ArrayDataH
wgt_stat_custom_confid_precent+ (2 .MI_TUNING_AWB.Int32ArrayData_2D?
wgt_stat_custom_index, (2 .MI_TUNING_AWB.FloatArrayData_2D5
wgt_stat_wet_select- (2.MI_TUNING_AWB.Int32Data<
wgt_stat_wet_range. (2 .MI_TUNING_AWB.Int32ArrayData_2D<
wgt_stat_confid_index/ (2.MI_TUNING_AWB.Int32ArrayData"Ç
WeightStatStruct5
wgt_stat_rule (2.MI_TUNING_AWB.StructArrayRule7
wgt_stat_data (2 .MI_TUNING_AWB.MessageWeightStat"∂
MessageStatFilterWeightStat.
wgt_stat_num (2.MI_TUNING_AWB.Int32Data4
wgt_stat_apply_num (2.MI_TUNING_AWB.Int32Data1
wgt_stat (2.MI_TUNING_AWB.WeightStatStruct"ó
MessageStatFilterSemanticStat9
is_open_semantic_filter (2.MI_TUNING_AWB.Int32Data:
is_collect_semantic_stat (2.MI_TUNING_AWB.Int32Data:
collect_category_id (2.MI_TUNING_AWB.Int32ArrayDataC
collect_confid_threshold_min (2.MI_TUNING_AWB.Int32ArrayData<
collect_zone_rg_bg (2 .MI_TUNING_AWB.Int32ArrayData_2D@
collect_ct_range_hi_lo (2 .MI_TUNING_AWB.Int32ArrayData_2D"—
AWBStatsSceneFilter/
y_filter (2.MI_TUNING_AWB.MessageYFilter/
y_weight (2.MI_TUNING_AWB.MessageYWeight2
face (2$.MI_TUNING_AWB.MessageStatFilterFace0
sky (2#.MI_TUNING_AWB.MessageStatFilterSky2
wood (2$.MI_TUNING_AWB.MessageStatFilterWood4
green (2%.MI_TUNING_AWB.MessageStatFilterGreenC
normal_wgt_stat (2*.MI_TUNING_AWB.MessageStatFilterWeightStatC
semantic_stat (2,.MI_TUNING_AWB.MessageStatFilterSemanticStatbproto3
Õ
AWBStatsMap.protoMI_TUNING_AWBCommonDataTypesAWB.proto"”
MessageCustomValidZoneSingle
custom_valid_zone_name (	:
circle_center_rg_bg (2.MI_TUNING_AWB.Int32ArrayData3
circle_radius_num (2.MI_TUNING_AWB.Int32Data0
	lux_index (2.MI_TUNING_AWB.Int32ArrayData7
circle_radius (2 .MI_TUNING_AWB.Int32ArrayData_2D7
circle_weight (2 .MI_TUNING_AWB.Int32ArrayData_2D"§
CustomValidZoneStruct>
custom_valid_zone_rule (2.MI_TUNING_AWB.StructArrayRuleK
custom_valid_zone_data (2+.MI_TUNING_AWB.MessageCustomValidZoneSingle"÷
MessageCustomValidZone:
custom_valid_zone_enable (2.MI_TUNING_AWB.Int32Data?
multi_custom_zone_fusion_type (2.MI_TUNING_AWB.Int32Data?
custom_valid_zone (2$.MI_TUNING_AWB.CustomValidZoneStruct"∞
AWBStatsMap/
raw_bit_depth (2.MI_TUNING_AWB.Int32Data6
sky_target_bit_depth (2.MI_TUNING_AWB.Int32Data7
face_target_bit_depth (2.MI_TUNING_AWB.Int32Data,

rg_otp_gld (2.MI_TUNING_AWB.Int32Data,

bg_otp_gld (2.MI_TUNING_AWB.Int32Data3
ref_point_rg (2.MI_TUNING_AWB.Int32ArrayData3
ref_point_bg (2.MI_TUNING_AWB.Int32ArrayData3
ref_point_ct (2.MI_TUNING_AWB.Int32ArrayData,

xbin_start	 (2.MI_TUNING_AWB.Int32Data*
xbin_end
 (2.MI_TUNING_AWB.Int32Data,

ybin_start (2.MI_TUNING_AWB.Int32Data*
ybin_end (2.MI_TUNING_AWB.Int32Data,

xbin_width (2.MI_TUNING_AWB.Int32Data,

ybin_width (2.MI_TUNING_AWB.Int32Data*
xbin_num (2.MI_TUNING_AWB.Int32Data*
ybin_num (2.MI_TUNING_AWB.Int32Data;
custom_d_map (2%.MI_TUNING_AWB.MessageCustomValidZone7
d_map_outdoor (2 .MI_TUNING_AWB.Int32ArrayData_2D6
d_map_indoor (2 .MI_TUNING_AWB.Int32ArrayData_2D4

d_map_dark (2 .MI_TUNING_AWB.Int32ArrayData_2D8
green_zone_wet (2 .MI_TUNING_AWB.Int32ArrayData_2Dbproto3
å
AWBTemporalConv.protoMI_TUNING_AWBCommonDataTypesAWB.proto"û
MessageConditionFilter
filter_name (	4
condition_priority (2.MI_TUNING_AWB.Int32Data<
condition_need_stable_once (2.MI_TUNING_AWB.Int32Data;
analyse_trigger_type (2.MI_TUNING_AWB.Int32ArrayData6
logical_setting (2.MI_TUNING_AWB.Int32ArrayData@
analyse_threshold_trigger (2.MI_TUNING_AWB.Int32ArrayData>
analyse_threshold_value (2.MI_TUNING_AWB.FloatArrayData<
adjust_factor_trigger_type (2.MI_TUNING_AWB.Int32Data@
adjust_factor_trigger_ref	 (2.MI_TUNING_AWB.FloatArrayData4
adjust_factor
 (2.MI_TUNING_AWB.FloatArrayDataN
'adjust_factor_hold_frame_occupy_setting (2.MI_TUNING_AWB.Int32ArrayData"ú
StableConditionStruct=
condition_filter_rule (2.MI_TUNING_AWB.StructArrayRuleD
condition_filter_data (2%.MI_TUNING_AWB.MessageConditionFilter"´
MessageConvergenceFilter8
wb_space_ref_curr (2.MI_TUNING_AWB.Int32ArrayData>
reliable_frame_search_number (2.MI_TUNING_AWB.Int32DataB
reliable_rg_bg_diff_max_thr (2.MI_TUNING_AWB.Int32ArrayDataI
"reliable_dynamic_rg_bg_diff_factor (2.MI_TUNING_AWB.FloatArrayDataG
 convergence_start_rg_bg_diff_thr (2.MI_TUNING_AWB.Int32ArrayData>
wb_point_distance_refer (2.MI_TUNING_AWB.FloatArrayData=
wb_gain_distance_refer (2.MI_TUNING_AWB.FloatArrayData>
wb_convergence_frame (2 .MI_TUNING_AWB.Int32ArrayData_2D"”
AWBTemporalConv9
is_enable_stable_filter (2.MI_TUNING_AWB.Int32DataC
convergence_filter (2'.MI_TUNING_AWB.MessageConvergenceFilter<
is_enable_condition_filter (2.MI_TUNING_AWB.Int32DataB
key_tuning_mode_settings (2 .MI_TUNING_AWB.Int32ArrayData_2D>
condition_filter (2$.MI_TUNING_AWB.StableConditionStructbproto3
·
AWBTrigger.protoMI_TUNING_AWBCommonDataTypesAWB.proto"á
SceneTrigger/
outdoor_index (2.MI_TUNING_AWB.Int32Data2
indoor_bri_index (2.MI_TUNING_AWB.Int32Data2
indoor_dar_index (2.MI_TUNING_AWB.Int32Data,

dark_index (2.MI_TUNING_AWB.Int32Data1
ir_source_selec (2.MI_TUNING_AWB.Int32Data8
flicker_w_compensation (2.MI_TUNING_AWB.FloatData)
high_ir (2.MI_TUNING_AWB.FloatData+
	normal_ir (2.MI_TUNING_AWB.FloatData(
low_ir	 (2.MI_TUNING_AWB.FloatDataA
dcg_statsfusion_y_highlight_thr
 (2.MI_TUNING_AWB.Int32Data"˛
MotionDetectCondition4
gyro_velocity_thrd (2.MI_TUNING_AWB.FloatData;
asensor_acceleration_thrd (2.MI_TUNING_AWB.FloatData7
stable_frame_cnt_thrd (2.MI_TUNING_AWB.Int32Data9
unstable_frame_cnt_thrd (2.MI_TUNING_AWB.Int32Data"¿
DynamicSkipFrame4
wb_point_queue_len (2.MI_TUNING_AWB.Int32Data<
queue_rg_bg_point_ref (2.MI_TUNING_AWB.Int32ArrayData?
rg_gv_ngv_wb_dist_thr (2 .MI_TUNING_AWB.Int32ArrayData_2D?
bg_gv_ngv_wb_dist_thr (2 .MI_TUNING_AWB.Int32ArrayData_2D6
other_state_thr (2.MI_TUNING_AWB.FloatArrayData"Ò
AWBRunControl3
power_save_switch (2.MI_TUNING_AWB.Int32Data0
skip_frame_cnt (2.MI_TUNING_AWB.Int32Data<
is_input_stats_down_sample (2.MI_TUNING_AWB.Int32Data;
dynamic_skip_frame (2.MI_TUNING_AWB.DynamicSkipFrame"Ä
InputSensorCCTProcess5
bound_filter_enable (2.MI_TUNING_AWB.Int32Data3
snr_filter_enable (2.MI_TUNING_AWB.Int32Data4
diff_filter_enable (2.MI_TUNING_AWB.Int32Data4
bound_filter_lower (2.MI_TUNING_AWB.Int32Data4
bound_filter_upper (2.MI_TUNING_AWB.Int32Data7
snr_valid_lux_max_thr (2.MI_TUNING_AWB.Int32Data3
diff_window_width (2.MI_TUNING_AWB.Int32Data.
diff_min_thr (2.MI_TUNING_AWB.Int32Data;
dark_scene_start_init_cct	 (2.MI_TUNING_AWB.Int32Data"¶
WarmUpProcess6
sensor_cct_loose_thr (2.MI_TUNING_AWB.Int32Data7
sensor_cct_strict_thr (2.MI_TUNING_AWB.Int32Data-
dark_luxidx (2.MI_TUNING_AWB.FloatData1
dark_sensor_lux (2.MI_TUNING_AWB.FloatData1
common_duration (2.MI_TUNING_AWB.Int32Data/
face_duration (2.MI_TUNING_AWB.Int32Data,

face_ratio (2.MI_TUNING_AWB.FloatData0
face_ext_frame (2.MI_TUNING_AWB.Int32Data"≠

AWBTrigger5
awb_run_control (2.MI_TUNING_AWB.AWBRunControlE
motion_detect_condition (2$.MI_TUNING_AWB.MotionDetectCondition2
scene_trigger (2.MI_TUNING_AWB.SceneTriggerF
input_sensor_cct_process (2$.MI_TUNING_AWB.InputSensorCCTProcess5
warm_up_process (2.MI_TUNING_AWB.WarmUpProcessC
!skin_pure_color_background_switch (2.MI_TUNING_AWB.Int32DataE
#skin_pure_color_background_cnt_thre (2.MI_TUNING_AWB.Int32DataD
"skin_pure_color_background_rg_thre (2.MI_TUNING_AWB.FloatDataD
"skin_pure_color_background_bg_thre	 (2.MI_TUNING_AWB.FloatDataJ
(skin_pure_color_background_cct_diff_thre
 (2.MI_TUNING_AWB.Int32DataC
!skin_pure_color_background_weight (2.MI_TUNING_AWB.Int32DataE
#skin_pure_color_background_min_gyro (2.MI_TUNING_AWB.FloatDatabproto3
æ
AWBVersion.protoMI_TUNING_AWBCommonDataTypesAWB.proto"¯

AWBVersion3
version_of_sensor (2.MI_TUNING_AWB.Int32Data3
version_of_module (2.MI_TUNING_AWB.Int32Data1
version_of_mode (2.MI_TUNING_AWB.Int32Data1
version_of_year (2.MI_TUNING_AWB.Int32Data2
version_of_month (2.MI_TUNING_AWB.Int32Data0
version_of_day (2.MI_TUNING_AWB.Int32Data4
version_of_edition (2.MI_TUNING_AWB.Int32Databproto3
Ï!
CommonDataTypesAWB.protoMI_TUNING_AWB"s
TuningProjConfig
	proj_name (	
sensor_names (	
tool_major_version (
tool_minor_version ("(
Version
name (	
version (	"2
BoolRule
description (	
	recommend (	"N
	Int32Rule
description (	
	recommend (	
low (
high ("O

Uint32Rule
description (	
	recommend (	
low (
high ("N
	Int64Rule
description (	
	recommend (	
low (
high ("O

Uint64Rule
description (	
	recommend (	
low (
high ("O

DoubleRule
description (	
	recommend (	
low (
high ("N
	FloatRule
description (	
	recommend (	
low (
high ("S
BoolArrayRule
description (	
	recommend (	
order (
len (	"o
Int32ArrayRule
description (	
	recommend (	
order (
low (
high (
len (	"p
Uint32ArrayRule
description (	
	recommend (	
order (
low (
high (
len (	"o
Int64ArrayRule
description (	
	recommend (	
order (
low (
high (
len (	"p
Uint64ArrayRule
description (	
	recommend (	
order (
low (
high (
len (	"p
DoubleArrayRule
description (	
	recommend (	
order (
low (
high (
len (	"o
FloatArrayRule
description (	
	recommend (	
order (
low (
high (
len (	"T
BoolArrayRule_2D
description (	
	recommend (	
row (	
col (	"p
Int32ArrayRule_2D
description (	
	recommend (	
low (
high (
row (	
col (	"q
Uint32ArrayRule_2D
description (	
	recommend (	
low (
high (
row (	
col (	"p
Int64ArrayRule_2D
description (	
	recommend (	
low (
high (
row (	
col (	"q
Uint64ArrayRule_2D
description (	
	recommend (	
low (
high (
row (	
col (	"q
DoubleArrayRule_2D
description (	
	recommend (	
low (
high (
row (	
col (	"p
FloatArrayRule_2D
description (	
	recommend (	
low (
high (
row (	
col (	"3
StructArrayRule
description (	
len (	"@
BoolData%
rule (2.MI_TUNING_AWB.BoolRule
value ("B
	Int32Data&
rule (2.MI_TUNING_AWB.Int32Rule
value ("D

Uint32Data'
rule (2.MI_TUNING_AWB.Uint32Rule
value ("B
	Int64Data&
rule (2.MI_TUNING_AWB.Int64Rule
value ("D

Uint64Data'
rule (2.MI_TUNING_AWB.Uint64Rule
value ("D

DoubleData'
rule (2.MI_TUNING_AWB.DoubleRule
value ("B
	FloatData&
rule (2.MI_TUNING_AWB.FloatRule
value ("
	BoolArray
arr ("

Int32Array
arr ("
Uint32Array
arr ("

Int64Array
arr ("
Uint64Array
arr ("
DoubleArray
arr ("

FloatArray
arr ("H
BoolArrayData*
rule (2.MI_TUNING_AWB.BoolArrayRule
arr ("J
Int32ArrayData+
rule (2.MI_TUNING_AWB.Int32ArrayRule
arr ("L
Uint32ArrayData,
rule (2.MI_TUNING_AWB.Uint32ArrayRule
arr ("J
Int64ArrayData+
rule (2.MI_TUNING_AWB.Int64ArrayRule
arr ("L
Uint64ArrayData,
rule (2.MI_TUNING_AWB.Uint64ArrayRule
arr ("L
DoubleArrayData,
rule (2.MI_TUNING_AWB.DoubleArrayRule
arr ("J
FloatArrayData+
rule (2.MI_TUNING_AWB.FloatArrayRule
arr ("k
BoolArrayData_2D-
rule (2.MI_TUNING_AWB.BoolArrayRule_2D(
arr_2d (2.MI_TUNING_AWB.BoolArray"n
Int32ArrayData_2D.
rule (2 .MI_TUNING_AWB.Int32ArrayRule_2D)
arr_2d (2.MI_TUNING_AWB.Int32Array"q
Uint32ArrayData_2D/
rule (2!.MI_TUNING_AWB.Uint32ArrayRule_2D*
arr_2d (2.MI_TUNING_AWB.Uint32Array"n
Int64ArrayData_2D.
rule (2 .MI_TUNING_AWB.Int64ArrayRule_2D)
arr_2d (2.MI_TUNING_AWB.Int64Array"q
Uint64ArrayData_2D/
rule (2!.MI_TUNING_AWB.Uint64ArrayRule_2D*
arr_2d (2.MI_TUNING_AWB.Uint64Array"q
DoubleArrayData_2D/
rule (2!.MI_TUNING_AWB.DoubleArrayRule_2D*
arr_2d (2.MI_TUNING_AWB.DoubleArray"n
FloatArrayData_2D.
rule (2 .MI_TUNING_AWB.FloatArrayRule_2D)
arr_2d (2.MI_TUNING_AWB.FloatArraybproto3
Å%
AWBExtend.protoMI_TUNING_AWBCommonDataTypesAWB.proto"˛
MessageAAASLStatsMap,

xbin_start (2.MI_TUNING_AWB.Int32Data*
xbin_end (2.MI_TUNING_AWB.Int32Data,

ybin_start (2.MI_TUNING_AWB.Int32Data*
ybin_end (2.MI_TUNING_AWB.Int32Data,

xbin_width (2.MI_TUNING_AWB.Int32Data,

ybin_width (2.MI_TUNING_AWB.Int32Data*
xbin_num (2.MI_TUNING_AWB.Int32Data*
ybin_num (2.MI_TUNING_AWB.Int32Data"Ã
MessageAAASLHSD<
high_sat_ratio1_index (2.MI_TUNING_AWB.FloatArrayData=
high_sat_ratio1_confid (2.MI_TUNING_AWB.Int32ArrayData<
high_sat_ratio2_index (2.MI_TUNING_AWB.FloatArrayData=
high_sat_ratio2_confid (2.MI_TUNING_AWB.Int32ArrayDataB
high_sat_valid_weight_index (2.MI_TUNING_AWB.FloatArrayDataC
high_sat_valid_weight_confid (2.MI_TUNING_AWB.Int32ArrayData9
high_sat_lux_index (2.MI_TUNING_AWB.FloatArrayData:
high_sat_lux_confid (2.MI_TUNING_AWB.Int32ArrayData6
adrc_gain_index	 (2.MI_TUNING_AWB.FloatArrayData8
channel_value_min
 (2.MI_TUNING_AWB.Int32ArrayData5
stat_std_index (2.MI_TUNING_AWB.FloatArrayData6
stat_std_confid (2.MI_TUNING_AWB.Int32ArrayData5
max_timebuffer_size (2.MI_TUNING_AWB.Int32Data4
time_filter_length (2.MI_TUNING_AWB.Int32Data3
min_sat_confid_th (2.MI_TUNING_AWB.Int32Data8
sl_custom_zone (2 .MI_TUNING_AWB.Int32ArrayData_2DE
hight_sat_stats_map_info (2#.MI_TUNING_AWB.MessageAAASLStatsMap;
high_sat_zone_wet (2 .MI_TUNING_AWB.Int32ArrayData_2D"Ï
MessageAAASLHalfSat5
sl_diff_ref (2 .MI_TUNING_AWB.Int32ArrayData_2D>
sl_outgraynumper_ref (2 .MI_TUNING_AWB.Int32ArrayData_2DA
diff_numper_gray_weight (2 .MI_TUNING_AWB.FloatArrayData_2D1

sl_lux_ref (2.MI_TUNING_AWB.FloatArrayData7
sl_lowcctlux_wgt (2.MI_TUNING_AWB.FloatArrayData8
sl_highcctlux_wgt (2.MI_TUNING_AWB.FloatArrayData8
sl_lowhighcct_ref (2.MI_TUNING_AWB.Int32ArrayData;
sl_lowhighcct_fusion (2.MI_TUNING_AWB.Int32ArrayData"~
slRgBgStruct5
sl_rg_bg_rule (2.MI_TUNING_AWB.StructArrayRule7
sl_rg_bg_data (2 .MI_TUNING_AWB.Int32ArrayData_2D"ï
MessageAAASLHighSat4
trigger_first_type (2.MI_TUNING_AWB.Int32Data5
trigger_second_type (2.MI_TUNING_AWB.Int32Data3
trigger_first_num (2.MI_TUNING_AWB.Int32Data4
trigger_second_num (2.MI_TUNING_AWB.Int32Data:
trigger_first_index (2.MI_TUNING_AWB.FloatArrayData;
trigger_second_index (2.MI_TUNING_AWB.FloatArrayData-
sl_rg_bg (2.MI_TUNING_AWB.slRgBgStruct"á
MessageAAASLSkin=
sl_skinface_statcnt_th (2.MI_TUNING_AWB.Int32ArrayData>
sl_skinface_statcnt_wgt (2.MI_TUNING_AWB.FloatArrayData8
sl_skin_statuswgt (2.MI_TUNING_AWB.FloatArrayData;
sl_facesizeth_ref (2 .MI_TUNING_AWB.Int32ArrayData_2D?
sl_facelocationth_ref (2 .MI_TUNING_AWB.Int32ArrayData_2DF
sl_face_size_location_weight (2 .MI_TUNING_AWB.FloatArrayData_2D:
sl_depend_facestatus_wgt (2.MI_TUNING_AWB.FloatData8
sl_skin_atten_wgt (2.MI_TUNING_AWB.FloatArrayData"‘
MessageAAASL/
aaa_sl_enable (2.MI_TUNING_AWB.Int32Data2
sl_confidence_th (2.MI_TUNING_AWB.FloatData6
sl_outside_numper_th (2.MI_TUNING_AWB.Int32Data4
sl_prio_check (2.MI_TUNING_AWB.Int32ArrayData7
sl_limicct_range (2.MI_TUNING_AWB.Int32ArrayDataF
aiassistantsl_highsat_detector (2.MI_TUNING_AWB.MessageAAASLHSDA
aiassistantsl_halfsat (2".MI_TUNING_AWB.MessageAAASLHalfSatA
aiassistantsl_highsat (2".MI_TUNING_AWB.MessageAAASLHighSat;
aiassistantsl_skin	 (2.MI_TUNING_AWB.MessageAAASLSkin4
sl_confid_ref
 (2.MI_TUNING_AWB.Int32ArrayData:
sl_confid_fusionwgt (2.MI_TUNING_AWB.FloatArrayData:
sl_max_historysmooth_cnt (2.MI_TUNING_AWB.Int32Data;
change_type_maxsmooth_cnt (2.MI_TUNING_AWB.Int32Data7
sl_smooth_wgt (2 .MI_TUNING_AWB.FloatArrayData_2D4
nosl_diff_ref (2.MI_TUNING_AWB.FloatArrayData5
nosl_diff_step (2.MI_TUNING_AWB.FloatArrayData5
nosl_max_smooth_cnt (2.MI_TUNING_AWB.Int32Data1
insl_stable_cnt (2.MI_TUNING_AWB.Int32Data2
outsl_stable_cnt (2.MI_TUNING_AWB.Int32Data"`
floatArrayStruct

param_name (	8
reserve_floatarry (2.MI_TUNING_AWB.FloatArrayData"h
floatArray2DStruct

param_name (	>
reserve_floatarry_2d (2 .MI_TUNING_AWB.FloatArrayData_2D"Ø
extendFeature
module_name (	A
reserve_floatarry_struct (2.MI_TUNING_AWB.floatArrayStructF
reserve_floatarry_2d_struct (2!.MI_TUNING_AWB.floatArray2DStruct"Ü
	AWBExtend
version (	3
aiassistant_sl (2.MI_TUNING_AWB.MessageAAASL3
extend_params (2.MI_TUNING_AWB.extendFeaturebproto3