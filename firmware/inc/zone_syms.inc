; Shared symbols for the SIMK43 Program segment modules.

; --- SFRs not in REG167.INC ---
SFR_FE38                     DEFR 0FE38H
SFR_FE3A                     DEFR 0FE3AH
SFR_FE3C                     DEFR 0FE3CH
SFR_FE3E                     DEFR 0FE3EH
SFR_FEA8                     DEFR 0FEA8H
SFR_FEE8                     DEFR 0FEE8H
SFR_FF2E                     DEFR 0FF2EH

; --- bit-addressable RAM words ---
kwp_comms_flags              DEFA 0FD00H
bl_prog_comm_flags           DEFA 0FD02H
kwp_prog_flags               DEFA 0FD04H
lv_iga_fd06                  DEFA 0FD06H
bl_mode_status_flags         DEFA 0FD0AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_ct_lv_iga_er_ad_ena_lv_iga_er_ad_lim_lv_er_std_fdout_lv_drv1_er_fdout_lv_lamb_er_ad_ena"
lv_ct                        DEFA 0FD0CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_act_cle_slv_ivvt_lv_dly_cle_slv_ivvt_lv_n_max_lv_n_max_req_fcut"
lv_act_cle_slv_ivvt          DEFA 0FD0EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_fcut_fast_lv_fcut_tra_lv_intv_cru_lv_intv_vsl_lv_tq_cru_act_lv_ti_lam_cor_cp_lv_ramp_open_end"
lv_fcut_fast                 DEFA 0FD10H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_dc_rbm_lv_igk_cyc_rbm_lv_sel_cyl_lv_pas_ramp_act_i_is"
lv_dc_rbm                    DEFA 0FD12H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_cam_ad_req_ivvt_lv_cam_ad_di_ivvt_lv_trip_act_ivvt_lv_trip_end_ivvt_lv_t_dly_ad_done"
lv_cam_ad_di_ivvt            DEFA 0FD14H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_mtv_req_lv_inh_fsd_cp"
lv_inh_fsd_cp                DEFA 0FD16H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_vls_down_afl_lv_vls_down_afr_lv_err_pres_mwss_lv_th_diag_act_lv_err_th_det_lv_th_diag_end_lv_th_diag_inh"
lv_err_pres_mwss             DEFA 0FD18H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_tq_tra_lv_tib_dif_pos_lv_pos_vo_chg_lv_carb_err"
lv_carb_err                  DEFA 0FD1AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_lih_imob_lv_fmy_imob_lv_tester_err_imob"
lv_fmy_imob                  DEFA 0FD1CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_er_carb_b4_lv_mis_state_a_lv_mis_state_b_lv_inh_seg_ad_lv_inh_er"
lv_er_carb_b4                DEFA 0FD1EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_ch_lv_ti_ch_lv_ch_set_off_lv_dt"
lv_ch                        DEFA 0FD20H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_iga_tra_knk_lv_tq_iga_act_lv_tq_iga_req"
lv_iga_tra_knk               DEFA 0FD22H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_inh_diag_slv_ivvt_in_1_lv_err_lih_ivvt_lv_slv_ivvt_scg_lih_lv_slv_ivvt_h_in_1_err_lv_slv_ivvt_l_in_1_err_lv_slv_ivvt_oc_i"
lv_diag_trip_avl_ivvt        DEFA 0FD24H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_req_ad_ext_edge_2_ivvt_lv_cam_ad_avl_nvmy_ivvt_lv_cam_ad_pwl_not_save_in_1_lv_ena_rev_clc_ivvt_lv_knk_ctl_ena_lv_knk_tra_"
lv_cam_ad_avl_nvmy_ivvt      DEFA 0FD26H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_maf_puls_lv_vb_n_min_add"
lv_maf_puls                  DEFA 0FD28H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_wup_lv_ti_ast_lv_ast_lv_tq_min_clu"
lv_ast                       DEFA 0FD2AH
lv_lam_fd2c                  DEFA 0FD2CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_gs_ena_lv_tqi_bol_set_lv_tq_inc_lv_tq_fast_ena_lv_tq_iga_ena_lv_asr_act"
lv_asr_act                   DEFA 0FD2EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_act_aj_lv_ini_aj_lv_aj_inh_obd_lv_req_aj_lv_pas_aj_lv_dly_n_sp_is"
lv_act_aj                    DEFA 0FD30H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_crk_tooth_err"
lv_crk_tooth_err             DEFA 0FD32H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_n_max_isa_err_lv_vs_max_lv_state_rr_lv_tia_plaus"
lv_n_max_isa_err             DEFA 0FD34H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_fl_lv_err_tps_det_lv_tps_lih_act_lv_tps_fl"
lv_err_tps_det               DEFA 0FD36H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_vs_diag_act_once_lv_cdn_diag_vs_plaus"
lv_cdn_diag_vs_plaus         DEFA 0FD38H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_cp_ena_lv_cp_act"
lv_cp_act                    DEFA 0FD3AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_obd_inh_lam_1_lv_inh_int_puc_1_lv_inh_lam_dly_1_lv_obd_auth_cp_close_1_lv_obd_auth_cp_min_1_lv_inh_r_up_ls_1"
lv_inh_int_puc_1             DEFA 0FD3CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_inh_vls_down_puc_diag_1_lv_inh_fsd_1_lv_cat_diag_inh_1_lv_cat_diag_rbm_inh_1_lv_ls_diag_1_lv_ls_up_rbm_inh_1_lv_ls_down_d"
lv_cat_diag_inh_1            DEFA 0FD3EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_is_ad_inh_obd_lv_is_ad_inh_lv_lam_tco_lscl_lv_lam_tco_lscl_is_lv_lam_mv_ok_lv_cp_set_close"
lv_cp_set_close              DEFA 0FD40H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_ar_red_ctl_stop_lv_ar_red_ad_rst_lv_ar_red_ad_stop_lv_amp_ctl_rst_lv_amp_ctl_stop_lv_amp_ad_rst_lv_amp_ad_stop"
lv_amp_ad_rst                DEFA 0FD42H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_err_maf_tps_ratio_2_lv_sym_err_maf_tps_ratio_lv_maf_tps_ratio_chk_act_lv_tra_state_lv_sov"
lv_err_maf_tps_ratio_2       DEFA 0FD44H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_diagcp_cdn_nok"
lv_diagcp_cdn_nok            DEFA 0FD46H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_act_diagcps_lv_ti_lam_cor_diagcp_lv_dtp_evac_slop_lv_dtp_slop_lv_dtp_dif"
lv_act_diagcps               DEFA 0FD48H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_seg_ad_state_lv_seg_ad_fdout_lv_iga_dif_max_er"
lv_iga_dif_max_er            DEFA 0FD4AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_asr_req_lv_gs_act_msr_c_req_can_lv_msr_req"
lv_asr_req                   DEFA 0FD4CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_dri_lv_at_abs_def_f_obd_tcu_stat"
abs_def                      DEFA 0FD4EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_inh_diag_maf_dif_ch_int_lv_cdn_diag_maf_dif_ch_int"
lv_cdn_diag_maf_dif_ch_int   DEFA 0FD50H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_pl_lv_pu_lv_puc_lv_reac_lv_st_lv_puc_req_lv_pu_puc_tra_fast"
lv_pl                        DEFA 0FD52H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_ti_min_lv_ti_lim_min_lv_rest_lv_st_es_lv_maf_trim"
lv_maf_trim                  DEFA 0FD54H
state_out_act                DEFA 0FD56H
can_fd58                     DEFA 0FD58H
state_mtv                    DEFA 0FD5AH
smartra_comms_status         DEFA 0FD5CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_err_com_resp_imob"
lv_err_com_resp_imob         DEFA 0FD5EH
ccp_engine_flags             DEFA 0FD60H
sched_flags2                 DEFA 0FD62H
sched_flags                  DEFA 0FD64H
state_lam_ctl                DEFA 0FD66H
diag_fd68                    DEFA 0FD68H
state_lam_ctl2               DEFA 0FD6AH
state_cat_diag               DEFA 0FD6CH
;@a2l MEASUREMENT UWORD conv=cv_none
imob_bw                      DEFA 0FD6EH
kwp_bitasm_scratch           DEFA 0FD70H
kwp_bitasm_byte              DEFA 0FD72H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_knks_1_err_dyw_lv_knks_1_err_rng_lv_knks_1_err_slave"
lv_knks_1_err_dyw            DEFA 0FD74H
eng_state_marker             DEFA 0FD76H
dtc_status_work              DEFA 0FD78H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_tps_err_lv_tps_plaus_err_lv_maf_err_lv_maf_plaus_err_lv_maf_dif_diag_ch_int_err_lv_crk_err_lv_cam_err_lv_vs_err"
lv_cam_err                   DEFA 0FD7AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_tco_grd_err_lv_tco_plaus_err_lv_th_err_lv_vls_up_1_err_lv_vls_up_1_plaus_err_lv_vls_up_1_puc_err_lv_vls_up_1_stk_err_lv_l"
lv_lam_lim_1_err             DEFA 0FD7CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_vls_swt_1_err_lv_vls_frq_1_err_lv_ls_down_swt_1_err_lv_vls_down_plaus_pue_1_err_lv_fsd_1_err_lv_cps_err_lv_cps_mecha_err_"
lv_cps_err                   DEFA 0FD7EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_iv_0_err_lv_iv_1_err_lv_iv_2_err_lv_iv_3_err_lv_dur_igc_0_err_lv_dur_igc_1_err_lv_dur_igc_2_err_lv_dur_igc_3_err"
lv_dur_igc_0_err             DEFA 0FD80H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_isapwm_h_err_lv_rly_accout_err_lv_rly_efp_err_lv_ecu_err_lv_vin_diag_err_lv_seg_t_ad_err_lv_mis_mpl_err_lv_mis_0_err"
lv_ecu_err                   DEFA 0FD82H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_data_imob_err_lv_mil_imob_err_lv_rly_fan_l_err_lv_rly_fan_h_err_lv_rly_main_err_lv_can_bus_off_err_lv_timeout_tcu1_err"
lv_can_bus_off_err           DEFA 0FD84H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_vb_l_err_lv_vb_h_err_lv_acp_err"
lv_acp_err                   DEFA 0FD86H
;@a2l MEASUREMENT UWORD conv=cv_none
obd_sf                       DEFA 0FD88H
obd_rdy_cont                 DEFA 0FD8AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_conf_mis"
lv_conf_mis                  DEFA 0FD8EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_conf_mtv"
lv_conf_mtv                  DEFA 0FD90H
lv_iga_fd92                  DEFA 0FD92H
state_out_diag               DEFA 0FD94H
state_out_fault              DEFA 0FD96H
state_out_req                DEFA 0FD98H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_im_acin_lv_im_prs_acc"
lv_im_acin                   DEFA 0FD9CH
can_fd9e                     DEFA 0FD9EH
imob_fda0                    DEFA 0FDA0H
dtc_cond_s1                  DEFA 0FDA2H
dtc_cond_s2                  DEFA 0FDA4H
dtc_cond_s3                  DEFA 0FDA6H
diag_fda8                    DEFA 0FDA8H
capcom_12                    DEFA 0FDAAH
dtc_rly_cond1                DEFA 0FDACH
dtc_rly_cond2                DEFA 0FDAEH
can_sched_flags0             DEFA 0FDB0H
can_sched_flags2             DEFA 0FDB2H
can_sched_flags1             DEFA 0FDB4H
g_fdc0                       DEFA 0FDC0H
inj_cc_13                    DEFA 0FDFEH

; --- named RAM/XRAM/cal data (16-bit operand values) ---
g_202                        EQU  00202H
g_204                        EQU  00204H
ccp_206                      EQU  00206H
ccp_208                      EQU  00208H
kwp_20a                      EQU  0020AH
kwp_20c                      EQU  0020CH
kwp_21a                      EQU  0021AH
kwp_21c                      EQU  0021CH
g_21e                        EQU  0021EH
g_220                        EQU  00220H
g_222                        EQU  00222H
g_224                        EQU  00224H
g_226                        EQU  00226H
g_228                        EQU  00228H
kwp_22a                      EQU  0022AH
kwp_22c                      EQU  0022CH
g_22e                        EQU  0022EH
g_230                        EQU  00230H
g_232                        EQU  00232H
g_234                        EQU  00234H
imob_23e                     EQU  0023EH
imob_240                     EQU  00240H
kwp_24a                      EQU  0024AH
kwp_24c                      EQU  0024CH
kwp_24e                      EQU  0024EH
kwp_250                      EQU  00250H
kwp_252                      EQU  00252H
kwp_254                      EQU  00254H
ccp_25a                      EQU  0025AH
ccp_25c                      EQU  0025CH
lv_isc_25e                   EQU  0025EH
lv_isc_260                   EQU  00260H
diag_27e                     EQU  0027EH
diag_280                     EQU  00280H
ccp_282                      EQU  00282H
ccp_284                      EQU  00284H
kwp_286                      EQU  00286H
kwp_288                      EQU  00288H
secacc_hyundai_autogrant_fuse EQU  03E00H
kwp_vin_3e1d                 EQU  03E1DH
kwp_vin_3e1e                 EQU  03E1EH
kwp_vin_3e1f                 EQU  03E1FH
kwp_vin_3e20                 EQU  03E20H
kwp_vin_3e21                 EQU  03E21H
kwp_vin_3e22                 EQU  03E22H
kwp_vin_3e23                 EQU  03E23H
kwp_vin_3e24                 EQU  03E24H
kwp_vin_3e25                 EQU  03E25H
kwp_vin_3e26                 EQU  03E26H
kwp_vin_3e27                 EQU  03E27H
kwp_vin_3e28                 EQU  03E28H
kwp_vin_3e29                 EQU  03E29H
kwp_vin_3e2a                 EQU  03E2AH
kwp_vin_3e2b                 EQU  03E2BH
kwp_vin_3e2c                 EQU  03E2CH
kwp_vin_3e2d                 EQU  03E2DH
lv_maf_3f28                  EQU  03F28H
lv_maf_3f29                  EQU  03F29H
lv_maf_3f2a                  EQU  03F2AH
lv_maf_3f2b                  EQU  03F2BH
lv_maf_3f2c                  EQU  03F2CH
lv_maf_3f2d                  EQU  03F2DH
secacc_siemens_autogrant_fuse EQU  03FBEH
g_a000                       EQU  0A000H
g_c000                       EQU  0C000H
lv_crank_c162                EQU  0C162H
c_p3_max_kwp                 EQU  0C164H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
cks_crc_cal                  EQU  0C17EH
bl_can2_rx_msgid             EQU  0C192H
bl_can2_poll_result          EQU  0C194H
bl_can2_rx_dlc               EQU  0C195H
can_c196                     EQU  0C196H
bl_can2_channel              EQU  0C197H
bl_can2_msgobj_idx           EQU  0C198H
bl_can2_rx_dataword0         EQU  0C19AH
bl_can2_rx_dataword1         EQU  0C19CH
g_c19f                       EQU  0C19FH
can_c1a0                     EQU  0C1A0H
can_c1a1                     EQU  0C1A1H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=6.3
iga_er_ad_clc                EQU  0C200H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=6.3
iga_er_ad_add                EQU  0C201H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=6.3
iga_er_ad_cor                EQU  0C202H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=6.3
iga_er_ad_lim                EQU  0C203H
lv_tco_c204                  EQU  0C204H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_ref_cor                  EQU  0C205H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=4.1
iga_bas_temp_cor             EQU  0C206H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=4.1
iga_ref_temp_cor             EQU  0C207H
lv_iga_c208                  EQU  0C208H
lv_iga_c209                  EQU  0C209H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_ref                      EQU  0C20AH
lv_tco_c20b                  EQU  0C20BH
lv_tco_c20c                  EQU  0C20CH
lv_isc_c20d                  EQU  0C20DH
lv_ivvt_c20e                 EQU  0C20EH
lv_ivvt_c20f                 EQU  0C20FH
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=4.1
ivvtpwm_cle_slv              EQU  0C212H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_cyc_cle_slv_ivvt         EQU  0C213H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_step_cle_slv_ivvt        EQU  0C214H
lv_ivvt_c215                 EQU  0C215H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
fac_cor_ivvtpwm              EQU  0C216H
;@a2l MEASUREMENT SBYTE conv=cv_rpm_per_s fmt=5.0
n_grd_fil                    EQU  0C217H
;@a2l MEASUREMENT SBYTE conv=cv_rpm_per_s fmt=5.0
n_grd_fil_fil                EQU  0C218H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=4.1
pv_av                        EQU  0C219H
g_c21a                       EQU  0C21AH
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
tmag_ivvt                    EQU  0C21BH
lv_ivvt_c21c                 EQU  0C21CH
;@a2l MEASUREMENT UBYTE conv=cv_kpa fmt=7.2
acp                          EQU  0C21DH
;@a2l MEASUREMENT UBYTE conv=cv_none_94
state_acp                    EQU  0C21EH
g_c21f                       EQU  0C21FH
lam_sum_cp                   EQU  0C220H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
lam_p_sum_cp                 EQU  0C221H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=4.0
cps_ad_step_ctr              EQU  0C222H
g_c223                       EQU  0C223H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
state_dc_rbm                 EQU  0C225H
cnt_prescale_rbm             EQU  0C226H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=4.1
iga_bas_amp_cor              EQU  0C227H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=7.3
iga_bas_vvt_cor              EQU  0C228H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=7.3
iga_ref_vvt_cor              EQU  0C229H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
vo_ratio                     EQU  0C22AH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=1.0
nr_pat_sel_cyl               EQU  0C22BH
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_fcut_aj                    EQU  0C22CH
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_osc_dt                     EQU  0C22DH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=1.0
nr_sel_cyl                   EQU  0C22EH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=1.0
case_sel_cyl                 EQU  0C22FH
lv_cyl_c230                  EQU  0C230H
lv_tq_c231                   EQU  0C231H
;@a2l MEASUREMENT SBYTE conv=cv_rpm_per_s fmt=5.0
n_grd_p_d_is                 EQU  0C232H
;@a2l MEASUREMENT UBYTE conv=cv_none_106
state_p_d_isc                EQU  0C233H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
fac_n_grd_is                 EQU  0C234H
;@a2l MEASUREMENT UBYTE conv=cv_none_96
state_i_isc                  EQU  0C235H
;@a2l MEASUREMENT SBYTE conv=cv_rpm_per_s fmt=5.0
n_grd_i_is                   EQU  0C236H
;@a2l MEASUREMENT SBYTE conv=cv_rpm_per_s fmt=5.0
n_grd_fil_isc_act_ast        EQU  0C237H
;@a2l MEASUREMENT UBYTE conv=cv_none_107
state_req_isc                EQU  0C238H
;@a2l MEASUREMENT UBYTE conv=cv_s_10 fmt=4.2
t_n_dif_ofs_pred             EQU  0C239H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
lv_cam_ad_save_in_1          EQU  0C23AH
;@a2l MEASUREMENT UBYTE conv=cv_none_88 fmt=3.0
idx_cam_ad_ivvt              EQU  0C23BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
lv_cam_ad_avl_dc_ivvt        EQU  0C23CH
state_ivvt_cammeas           EQU  0C23DH
;@a2l MEASUREMENT UBYTE conv=cv_s fmt=4.1
t_dly_n_maf_dyw              EQU  0C23FH
diag_c240                    EQU  0C240H
diag_c241                    EQU  0C241H
diag_c242                    EQU  0C242H
diag_c243                    EQU  0C243H
g_c244                       EQU  0C244H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
temp_ls_ini                  EQU  0C245H
lv_iga_c246                  EQU  0C246H
g_c247                       EQU  0C247H
g_c249                       EQU  0C249H
g_c24a                       EQU  0C24AH
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
n_32                         EQU  0C24BH
;@a2l MEASUREMENT SBYTE conv=cv_rpm_per_s fmt=5.0
n_grd                        EQU  0C24CH
g_c24d                       EQU  0C24DH
idx_knk_load_zone            EQU  0C24EH
ctr_cyl_knk                  EQU  0C24FH
g_c250                       EQU  0C250H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
seg_nr                       EQU  0C251H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_cat_diag           EQU  0C252H
g_c253                       EQU  0C253H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_tco_plaus          EQU  0C254H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_ls_down_swt        EQU  0C255H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_vls_down_plaus     EQU  0C256H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_lsh_down_obd2      EQU  0C257H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_th_det             EQU  0C258H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
puc_perc_th_diag             EQU  0C259H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
load_min_perc_th_diag        EQU  0C25AH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tia_de_th_diag               EQU  0C25BH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tia_min_th_diag              EQU  0C25CH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_th_diag                  EQU  0C25DH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_de_ini_th_diag           EQU  0C25EH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_de_th_diag               EQU  0C25FH
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
vs_min_perc_th_diag          EQU  0C260H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
vs_max_perc_th_diag          EQU  0C261H
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
t_tam1                       EQU  0C262H
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
t_tam2                       EQU  0C263H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tam_min_diagcp               EQU  0C264H
diag_c265                    EQU  0C265H
;@a2l MEASUREMENT SBYTE conv=cv_none_27 fmt=6.3
ti_is                        EQU  0C266H
;@a2l MEASUREMENT SBYTE conv=cv_none_27 fmt=6.3
ti_is_mmv                    EQU  0C267H
st_ti_is                     EQU  0C268H
;@a2l MEASUREMENT SBYTE conv=cv_none_2 fmt=6.4
ti_cor_ivvt                  EQU  0C269H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
v_toil                       EQU  0C26AH
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
toil                         EQU  0C26BH
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
toil_max                     EQU  0C26CH
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
toil_mes                     EQU  0C26DH
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
toil_stop                    EQU  0C26EH
g_c26f                       EQU  0C26FH
;@a2l MEASUREMENT UBYTE conv=cv_degc_5 fmt=3.0
toil_mes_dif_diag            EQU  0C270H
;@a2l MEASUREMENT UBYTE conv=cv_degc_5 fmt=3.0
toil_mdl_dif_diag            EQU  0C271H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_toil_stuck         EQU  0C272H
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
toil_mes_min_diag            EQU  0C273H
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
toil_mes_max_diag            EQU  0C274H
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
toil_mdl_min_diag            EQU  0C275H
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
toil_mdl_max_diag            EQU  0C276H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=6.4
fac_ch_red                   EQU  0C277H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=6.4
fac_ch_red_at                EQU  0C278H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=6.4
fac_ch_red_dri               EQU  0C279H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=6.4
fac_ch_red_cor               EQU  0C27AH
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=6.4
fac_ch_red_acin              EQU  0C27BH
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=6.4
fac_wf_vo_fdout              EQU  0C27CH
g_c27d                       EQU  0C27DH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
crk_seg_sum_frq_osc          EQU  0C27EH
;@a2l MEASUREMENT UBYTE conv=cv_none_82
er_ad_state                  EQU  0C27FH
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=6.3
iga_er_ad_mem                EQU  0C280H
;@a2l MEASUREMENT UBYTE conv=cv_none_82
er_ad_state_lst              EQU  0C281H
;@a2l MEASUREMENT UBYTE conv=cv_none_89
key_state_imob               EQU  0C282H
diag_c283                    EQU  0C283H
smartra_cmd                  EQU  0C284H
smartra_proto_step           EQU  0C285H
imob_c286                    EQU  0C286H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ans_err_com_imob             EQU  0C287H
imob_key_wr_idx              EQU  0C288H
lv_crank_c289                EQU  0C289H
imob_key_wr_done             EQU  0C28AH
imob_new_key0                EQU  0C28BH
imob_new_key1                EQU  0C28CH
imob_new_key2                EQU  0C28DH
imob_new_key3                EQU  0C28EH
imob_c28f                    EQU  0C28FH
imob_c290                    EQU  0C290H
imob_resp_ready              EQU  0C291H
imob_c292                    EQU  0C292H
diag_c293                    EQU  0C293H
diag_c294                    EQU  0C294H
imob_c295                    EQU  0C295H
imob_c296                    EQU  0C296H
imob_c297                    EQU  0C297H
imob_c298                    EQU  0C298H
t_ign_dly_imob               EQU  0C299H
smartra_send_req             EQU  0C29AH
smartra_send_state           EQU  0C29BH
imob_tx_src0                 EQU  0C29CH
imob_tx_src1                 EQU  0C29DH
imob_tx_src2                 EQU  0C29EH
imob_tx_src3                 EQU  0C29FH
imob_c2a0                    EQU  0C2A0H
imob_c2a1                    EQU  0C2A1H
imob_c2a2                    EQU  0C2A2H
imob_c2a3                    EQU  0C2A3H
imob_c2a4                    EQU  0C2A4H
imob_c2a5                    EQU  0C2A5H
imob_c2a6                    EQU  0C2A6H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
mis_b4_obd_ctr               EQU  0C2A7H
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
mis_maf_bol                  EQU  0C2A8H
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
mis_maf_tol                  EQU  0C2A9H
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
mis_n_bol                    EQU  0C2AAH
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
mis_n_tol                    EQU  0C2ABH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
mis_nr_off_iv                EQU  0C2ACH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
inh_iv_mis                   EQU  0C2ADH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
mis_nr_puc                   EQU  0C2AEH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
mis_nr_a                     EQU  0C2AFH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
mis_nr_b                     EQU  0C2B0H
ctr_mis_b_startup            EQU  0C2B1H
can_c2b2                     EQU  0C2B2H
can_c2b3                     EQU  0C2B3H
can_c2b4                     EQU  0C2B4H
g_c2b5                       EQU  0C2B5H
g_c2b6                       EQU  0C2B6H
state_fuel_req               EQU  0C2B8H
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_dt_trans                   EQU  0C2B9H
g_c2ba                       EQU  0C2BAH
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_n_rise_gear_shift          EQU  0C2BBH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
gr_mt                        EQU  0C2BCH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
gr_at                        EQU  0C2BDH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
gear                         EQU  0C2BEH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
gr_sub                       EQU  0C2BFH
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_plaus_gr                   EQU  0C2C0H
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_not_plaus_gr               EQU  0C2C1H
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_gr_chg_lim                 EQU  0C2C2H
g_c2c3                       EQU  0C2C3H
g_c2c4                       EQU  0C2C4H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_av_mv                    EQU  0C2C5H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_11 fmt=5.1
iga_dif_bas_knk_fil          EQU  0C2C6H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_av_0                     EQU  0C2C7H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_av_1                     EQU  0C2C8H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_av_2                     EQU  0C2C9H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_av_3                     EQU  0C2CAH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_sp_max_1                 EQU  0C2CBH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_11 fmt=5.1
iga_dif_av                   EQU  0C2CCH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_11 fmt=5.1
iga_dif_bas                  EQU  0C2CDH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_bas_cor_knk_add          EQU  0C2CEH
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=4.1
iga_mv_knk_fil               EQU  0C2CFH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_bas_cor_knk_fil          EQU  0C2D0H
lv_iga_c2d1                  EQU  0C2D1H
lv_iga_c2d2                  EQU  0C2D2H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_0                        EQU  0C2D3H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_1                        EQU  0C2D4H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_2                        EQU  0C2D5H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_3                        EQU  0C2D6H
lv_iga_c2d7                  EQU  0C2D7H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_bas_cor                  EQU  0C2D8H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_11 fmt=5.1
iga_dif_min_ext_lim          EQU  0C2D9H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_11 fmt=5.1
iga_dif_min_ext_lim_max      EQU  0C2DAH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_bas                      EQU  0C2DBH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_11 fmt=5.1
iga_dif_min                  EQU  0C2DCH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_min                      EQU  0C2DDH
lv_iga_c2de                  EQU  0C2DEH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_sp                       EQU  0C2DFH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_11 fmt=5.1
iga_dif_sp                   EQU  0C2E0H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_min_teg                  EQU  0C2E1H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_11 fmt=5.1
iga_dif_min_teg              EQU  0C2E2H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_11 fmt=5.1
iga_dif_min_teg_bas          EQU  0C2E3H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
igc_diag_mis                 EQU  0C2E4H
lv_iga_c2e5                  EQU  0C2E5H
lv_iga_c2ea                  EQU  0C2EAH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=4.0
t_dly_diag_ivvt              EQU  0C2EBH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_cam_dif_ivvt_in    EQU  0C2ECH
lv_ivvt_c2ed                 EQU  0C2EDH
lv_ivvt_c2ee                 EQU  0C2EEH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_cam_sp_chg               EQU  0C2EFH
cam_ad_avl_nvm               EQU  0C2F0H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_2 fmt=4.1
cam_in_1_dif                 EQU  0C2F1H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_2 fmt=4.1
cam_in_2_dif                 EQU  0C2F2H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_2 fmt=4.1
cam_in_1_2_dif               EQU  0C2F3H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_cam_req_ad_ext           EQU  0C2F4H
lv_ivvt_c2f5                 EQU  0C2F5H
lv_ivvt_c2f6                 EQU  0C2F6H
cam_ad_avl_nvm_z             EQU  0C2F7H
cam_ad_save_nvm              EQU  0C2F8H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
ctr_rev_clc_ivvt             EQU  0C2F9H
lv_knk_c2fa                  EQU  0C2FAH
;@a2l MEASUREMENT UBYTE conv=cv_s fmt=4.1
dly_iga_adj_knk_diag         EQU  0C2FBH
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=6.3
iga_adj_knk_max_diag         EQU  0C2FCH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_6 fmt=3.1
iga_adj_knk_0_               EQU  0C2FDH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_6 fmt=3.1
iga_adj_knk_1_               EQU  0C2FEH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_6 fmt=3.1
iga_adj_knk_2_               EQU  0C2FFH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_6 fmt=3.1
iga_adj_knk_3_               EQU  0C300H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_6 fmt=6.3
iga_mv_adj_knk               EQU  0C301H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
cyl_id_knk                   EQU  0C302H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_6 fmt=6.3
iga_mv_knk                   EQU  0C303H
;@a2l MEASUREMENT SBYTE conv=cv_none fmt=3.0
knks_cmd_gain_ad_0_          EQU  0C304H
;@a2l MEASUREMENT SBYTE conv=cv_none fmt=3.0
knks_cmd_gain_ad_1_          EQU  0C305H
;@a2l MEASUREMENT SBYTE conv=cv_none fmt=3.0
knks_cmd_gain_ad_2_          EQU  0C306H
;@a2l MEASUREMENT SBYTE conv=cv_none fmt=3.0
knks_cmd_gain_ad_3_          EQU  0C307H
idx_knk_event                EQU  0C308H
hold_iga_knk                 EQU  0C30DH
step_iga_dec_knk             EQU  0C30EH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_per_720degcrk_4 fmt=6.3
iga_dec_knk_2                EQU  0C30FH
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
maf_knk                      EQU  0C314H
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
n_knk                        EQU  0C315H
;@a2l MEASUREMENT UBYTE conv=cv_none_4 fmt=5.3
fac_iga_max_knk              EQU  0C316H
t_tps_tra_knk                EQU  0C317H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_6 fmt=6.3
iga_adj_max_knk              EQU  0C318H
ctr_knk_ad_cyc               EQU  0C319H
idx_knk_nl_ad                EQU  0C31AH
flags_knk_cyl_chg            EQU  0C31BH
lv_maf_c31f                  EQU  0C31FH
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
maf_fac_alti_mmv             EQU  0C320H
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
maf_alti_cor                 EQU  0C321H
g_c322                       EQU  0C322H
;@a2l MEASUREMENT UBYTE conv=cv_v_3 fmt=5.2
vb_mmv                       EQU  0C323H
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
n_max_tol_st                 EQU  0C324H
tco_prev_idle                EQU  0C325H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=7.2
fac_int_teg_maf_sa           EQU  0C326H
teg_fac_tmp                  EQU  0C327H
lv_ti_c328                   EQU  0C328H
g_c329                       EQU  0C329H
lv_tq_c32a                   EQU  0C32AH
lv_lam_c32b                  EQU  0C32BH
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
ratio_tqi_bas_max_stnd       EQU  0C32CH
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
ratio_tqi_bas_max_stnd_1     EQU  0C32DH
lv_tq_c32e                   EQU  0C32EH
g_c32f                       EQU  0C32FH
g_c330                       EQU  0C330H
g_c331                       EQU  0C331H
g_c332                       EQU  0C332H
;@a2l MEASUREMENT UBYTE conv=cv_degc_11 fmt=3.0
toil_gb_inter                EQU  0C333H
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_tq_conv_tra                EQU  0C334H
st_tq_conv_sm                EQU  0C335H
tq_conv_aj_ctr               EQU  0C336H
tq_conv_dly                  EQU  0C337H
;@a2l MEASUREMENT UBYTE conv=cv_none_4 fmt=5.3
n_ratio_conv                 EQU  0C338H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
nr_pat_scc                   EQU  0C339H
g_c33a                       EQU  0C33AH
g_c33b                       EQU  0C33BH
g_c33c                       EQU  0C33CH
g_c33d                       EQU  0C33DH
g_c33e                       EQU  0C33EH
;@a2l MEASUREMENT UBYTE conv=cv_none_93
state_acc_dly                EQU  0C33FH
diag_c340                    EQU  0C340H
crank_tim_0                  EQU  0C341H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
cam_fall_av                  EQU  0C342H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
cam_rise_av                  EQU  0C343H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
nr_pat_eng_rev               EQU  0C344H
diag_c345                    EQU  0C345H
diag_c346                    EQU  0C346H
crank_tim_1                  EQU  0C347H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
conf_vin_diag                EQU  0C348H
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
n_max_vs_0                   EQU  0C349H
lv_vs_c34a                   EQU  0C34AH
lv_vs_c34b                   EQU  0C34BH
lv_vs_c34c                   EQU  0C34CH
lv_vs_c34d                   EQU  0C34DH
lv_vs_c34e                   EQU  0C34EH
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
n_max_tm                     EQU  0C34FH
;@a2l MEASUREMENT UBYTE conv=cv_none_3 fmt=1.0
state_rbm_tia_plaus          EQU  0C350H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tia_min_tia_plaus_diag       EQU  0C351H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tia_max_tia_plaus_diag       EQU  0C352H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_tco_stuck          EQU  0C353H
;@a2l MEASUREMENT UBYTE conv=cv_none_3 fmt=1.0
state_rbm_tco_stuck_rng      EQU  0C354H
g_c355                       EQU  0C355H
lv_tco_c356                  EQU  0C356H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=4.0
ctr_tps_noise                EQU  0C357H
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_tps_noise_1                EQU  0C358H
lv_tps_c359                  EQU  0C359H
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h fmt=3.0
vs                           EQU  0C35AH
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h_per_rpm fmt=6.4
crk_vs_n_ratio_osc           EQU  0C35BH
vs_max                       EQU  0C35CH
vs_cap_ctr0                  EQU  0C35DH
vs_cap_ctr1                  EQU  0C35EH
diag_c35f                    EQU  0C35FH
kwp_c360                     EQU  0C360H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=5.3
cat_diag_clc_1_backup        EQU  0C361H
g_c362                       EQU  0C362H
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=6.1
maf_sp_hb                    EQU  0C363H
lv_teg_coldst                EQU  0C364H
kwp_c365                     EQU  0C365H
kwp_c366                     EQU  0C366H
kwp_c367                     EQU  0C367H
kwp_c368                     EQU  0C368H
kwp_c369                     EQU  0C369H
kwp_dl_mask                  EQU  0C36AH
kwp_c36b                     EQU  0C36BH
kwp_c36c                     EQU  0C36CH
kwp_c36d                     EQU  0C36DH
kwp_c36e                     EQU  0C36EH
kwp_c36f                     EQU  0C36FH
sn_rbm_cat_diag              EQU  0C370H
sn_rbm_vls_up_frq            EQU  0C371H
sn_rbm_vls_up_plaus          EQU  0C372H
sn_rbm_leak_small            EQU  0C373H
sn_rbm_cam_dif_ivvt_in       EQU  0C374H
sn_rbm_lsh_up_obd2           EQU  0C375H
sn_rbm_lsh_down_obd2         EQU  0C376H
sn_rbm_tco_stuck             EQU  0C377H
sn_rbm_tco_plaus             EQU  0C378H
sn_rbm_th_det                EQU  0C379H
sn_rbm_ls_down_swt           EQU  0C37AH
sn_rbm_vls_down_plaus        EQU  0C37BH
sn_rbm_toil_stuck            EQU  0C37CH
sn_rbm_cps_mecha             EQU  0C37DH
sn_rbm_leak_large            EQU  0C37EH
sn_rbm_dtp_noise             EQU  0C37FH
sn_rbm_maf_dif_ch            EQU  0C380H
sn_rbm_tco_stuck_rng         EQU  0C381H
sn_rbm_tia_plaus             EQU  0C382H
lv_cat_c383                  EQU  0C383H
dtc_vls_down_rst             EQU  0C384H
lv_maf_c385                  EQU  0C385H
lv_maf_c386                  EQU  0C386H
lv_maf_c387                  EQU  0C387H
;@a2l MEASUREMENT UBYTE conv=cv_none_95
state_diagcp                 EQU  0C388H
;@a2l MEASUREMENT UBYTE conv=cv_none_81
eol_state_diagcp             EQU  0C389H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
diagcp_vol                   EQU  0C38AH
;@a2l MEASUREMENT UBYTE conv=cv_s fmt=4.1
t_dly_dtp_evac_inc           EQU  0C38BH
;@a2l MEASUREMENT UBYTE conv=cv_mm fmt=7.5
diagcp_dia                   EQU  0C38CH
;@a2l MEASUREMENT UBYTE conv=cv_mm fmt=7.5
diagcp_dia_mod_6             EQU  0C38DH
idx_cp_prs_ring              EQU  0C38EH
;@a2l MEASUREMENT UBYTE conv=cv_s_7 fmt=5.2
t_v_dtp_mes                  EQU  0C38FH
;@a2l MEASUREMENT UBYTE conv=cv_none_71
cdn_dtp_noise_state_diag     EQU  0C390H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tam_st                       EQU  0C391H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_dtp_noise          EQU  0C392H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_cps_mecha          EQU  0C393H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_leak_small         EQU  0C394H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_leak_large         EQU  0C395H
g_c396                       EQU  0C396H
g_c397                       EQU  0C397H
;@a2l MEASUREMENT UBYTE conv=cv_none_72
cdn_state_diagcp             EQU  0C398H
g_c399                       EQU  0C399H
g_c39a                       EQU  0C39AH
;@a2l MEASUREMENT UBYTE conv=cv_l fmt=6.2
diagcp_vol_cor               EQU  0C39BH
g_c39c                       EQU  0C39CH
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h fmt=4.2
vs_dtp_max_diag              EQU  0C39DH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
nr_dtp_con_diag_sample       EQU  0C39EH
diag_c39f                    EQU  0C39FH
;@a2l MEASUREMENT UBYTE conv=cv_s_7 fmt=5.2
t_vap_chk                    EQU  0C3A0H
;@a2l MEASUREMENT UBYTE conv=cv_s_7 fmt=5.2
t_dtp_grd_vap_chk            EQU  0C3A1H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_t_is                EQU  0C3A2H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_t_dly_3             EQU  0C3A3H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_dtp_diag            EQU  0C3A4H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_diagcp_start        EQU  0C3A5H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_intr_diagcp         EQU  0C3A6H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_tco                 EQU  0C3A7H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_t_ast               EQU  0C3A8H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_t_pl_diagcp         EQU  0C3A9H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_intr_6              EQU  0C3AAH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_intr_7              EQU  0C3ABH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_intr_8              EQU  0C3ACH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_intr_10             EQU  0C3ADH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_intr_11             EQU  0C3AEH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_evap_intr_14             EQU  0C3AFH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_vls_up_plaus       EQU  0C3B0H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_vls_up_frq         EQU  0C3B1H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_rbm_lsh_up_obd2        EQU  0C3B2H
;@a2l MEASUREMENT UBYTE conv=cv_none_52 fmt=4.2
er_igc_dur_iv_sum            EQU  0C3B3H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0 mask=0xF
mis_state_er                 EQU  0C3B4H
g_c3b5                       EQU  0C3B5H
mis_iga_dif_ctr              EQU  0C3B6H
mis_segt_inh                 EQU  0C3B7H
g_c3b8                       EQU  0C3B8H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
iv_off_er                    EQU  0C3B9H
mis_er_cfg                   EQU  0C3BEH
n_32_z_er                    EQU  0C3BFH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
seg_nr_er                    EQU  0C3C0H
mis_er_cyl_bit               EQU  0C3C1H
mis_iga_snap0                EQU  0C3C2H
mis_iga_snap3                EQU  0C3C5H
div_dtc_g1                   EQU  0C3C6H
div_dtc_g2                   EQU  0C3C7H
div_dtc_g3                   EQU  0C3C8H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_6 fmt=7.3
iga_cop                      EQU  0C3C9H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_cfa                    EQU  0C3CAH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_cfa_1                  EQU  0C3CBH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_cfa_is                 EQU  0C3CCH
t_cfa_rtd                    EQU  0C3CDH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
vs_state_cfa                 EQU  0C3CEH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_cfa_new                EQU  0C3CFH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_hys_cfa                  EQU  0C3D0H
vs_state_cfa_prev            EQU  0C3D1H
state_cfa_is_prev            EQU  0C3D2H
t_cfa_low_hys                EQU  0C3D3H
;@a2l MEASUREMENT UBYTE conv=cv_none_3 fmt=1.0
state_rbm_maf_dif_ch         EQU  0C3D4H
;@a2l MEASUREMENT UBYTE conv=cv_none_83
err_sym_maf_dif_diag_ch_int  EQU  0C3D5H
;@a2l MEASUREMENT SBYTE conv=cv_rpm_per_s fmt=5.0
n_grd_diag_ch                EQU  0C3D6H
n_grd_z0                     EQU  0C3D7H
n_grd_z1                     EQU  0C3D8H
n_grd_z2                     EQU  0C3D9H
n_grd_z3                     EQU  0C3DAH
g_c4a7                       EQU  0C4A7H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
mis_a_obd_ctr                EQU  0C4A8H
can_tcu_obd_status           EQU  0C4A9H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ready_dc_ctr                 EQU  0C4AAH
diag_c4ab                    EQU  0C4ABH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_knk_1               EQU  0C4ACH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_vs                  EQU  0C4ADH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_tia                 EQU  0C4AEH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_tco                 EQU  0C4AFH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_vls_up_1            EQU  0C4B0H
;@a2l MEASUREMENT UBYTE conv=cv_none_70
carb_cod_vls_up_1_puc        EQU  0C4B1H
;@a2l MEASUREMENT UBYTE conv=cv_none_70
carb_cod_vls_up_1_stk        EQU  0C4B2H
;@a2l MEASUREMENT UBYTE conv=cv_none_70
carb_cod_vls_up_1_plaus      EQU  0C4B3H
lv_maf_c4b4                  EQU  0C4B4H
;@a2l MEASUREMENT UBYTE conv=cv_none_70
carb_cod_vls_frq_1           EQU  0C4B5H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_vls_down_1          EQU  0C4B6H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_vls_down_1_puc      EQU  0C4B7H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_lsh_down_1          EQU  0C4B8H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_cat_diag_1          EQU  0C4B9H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_lsh_down_obd2_1     EQU  0C4BAH
;@a2l MEASUREMENT UBYTE conv=cv_none_70
carb_cod_vls_down_plaus_pue_1 EQU  0C4BBH
;@a2l MEASUREMENT UBYTE conv=cv_none_70
carb_cod_vls_down_plaus_1    EQU  0C4BCH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_ls_down_swt_1       EQU  0C4BDH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_maf_plaus           EQU  0C4BEH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_lam_lim_1           EQU  0C4BFH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_tps_plaus           EQU  0C4C0H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_dtp_con             EQU  0C4C1H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_dtp_noise           EQU  0C4C2H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_cps_mecha           EQU  0C4C3H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_tc                  EQU  0C4C4H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_leak_large          EQU  0C4C5H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_leak_small_1mm      EQU  0C4C6H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_leak_small_05mm     EQU  0C4C7H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_isapwm_h            EQU  0C4C8H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_isapwm_l            EQU  0C4C9H
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_tco_plaus           EQU  0C4CAH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_lsh_up_1            EQU  0C4CBH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_th                  EQU  0C4CCH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_lsh_up_obd2_1       EQU  0C4CDH
;@a2l MEASUREMENT UBYTE conv=cv_none_69
carb_cod_tco_stuck           EQU  0C4CEH
obd_m09_b0                   EQU  0C4D0H
obd_m09_b1                   EQU  0C4D1H
obd_m09_b2                   EQU  0C4D2H
obd_m09_b3                   EQU  0C4D3H
obd_m09_b4                   EQU  0C4D4H
obd_m09_b5                   EQU  0C4D5H
obd_m09_b6                   EQU  0C4D6H
obd_m09_b7                   EQU  0C4D7H
obd_m09_b8                   EQU  0C4D8H
obd_m09_b9                   EQU  0C4D9H
obd_m09_b10                  EQU  0C4DAH
obd_m09_b11                  EQU  0C4DBH
obd_m09_b12                  EQU  0C4DCH
obd_m09_b13                  EQU  0C4DDH
obd_m09_b14                  EQU  0C4DEH
obd_m09_b15                  EQU  0C4DFH
obd_m09_b16                  EQU  0C4E0H
obd_m09_b17                  EQU  0C4E1H
obd_m09_b18                  EQU  0C4E2H
obd_m09_b19                  EQU  0C4E3H
obd_m09_b20                  EQU  0C4E4H
obd_m09_b21                  EQU  0C4E5H
obd_m09_b22                  EQU  0C4E6H
obd_m09_b23                  EQU  0C4E7H
obd_m09_b24                  EQU  0C4E8H
obd_m09_b25                  EQU  0C4E9H
obd_m09_b26                  EQU  0C4EAH
obd_m09_b27                  EQU  0C4EBH
obd_m09_b28                  EQU  0C4ECH
obd_m09_b29                  EQU  0C4EDH
obd_m09_b30                  EQU  0C4EEH
obd_m09_b31                  EQU  0C4EFH
obd_m09_count                EQU  0C4F0H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_wup_dtc_clr              EQU  0C4F1H
obd_c4f2                     EQU  0C4F2H
obd_c4f3                     EQU  0C4F3H
obd_c4f4                     EQU  0C4F4H
;@a2l MEASUREMENT UBYTE conv=cv_none_10 fmt=7.5
fac_maf_trim                 EQU  0C4F5H
;@a2l MEASUREMENT UBYTE conv=cv_none_105
state_maf_trim               EQU  0C4F6H
div_out_cps_diag             EQU  0C4F7H
div_out_fan_diag             EQU  0C4F8H
kwp_lid91_stat0              EQU  0C4F9H
kwp_lid91_stat1              EQU  0C4FAH
kwp_lid91_stat2              EQU  0C4FBH
kwp_lid91_stat3              EQU  0C4FCH
kwp_lid91_stat4              EQU  0C4FDH
kwp_lid91_stat5              EQU  0C4FEH
kwp_lid92_stat0              EQU  0C4FFH
kwp_lid92_stat1              EQU  0C500H
kwp_lid92_stat2              EQU  0C501H
kwp_lid92_stat3              EQU  0C502H
kwp_lid91_stat6              EQU  0C503H
ccp_cmd_err_cnt              EQU  0C504H
ccp_c505                     EQU  0C505H
ccp_c506                     EQU  0C506H
ccp_c507                     EQU  0C507H
ccp_c50a                     EQU  0C50AH
ccp_c50b                     EQU  0C50BH
ccp_c50e                     EQU  0C50EH
ccp_c50f                     EQU  0C50FH
ccp_security_err_cnt         EQU  0C510H
ccp_c511                     EQU  0C511H
ccp_c51a                     EQU  0C51AH
smartra_frame_buf            EQU  0C51BH
smartra_tx_cmd               EQU  0C51CH
smartra_tx_len               EQU  0C51DH
smartra_tx_seed              EQU  0C51EH
smartra_tx_sdr0              EQU  0C51FH
smartra_tx_sdr1              EQU  0C520H
smartra_tx_sdr2              EQU  0C521H
smartra_tx_c0                EQU  0C522H
smartra_tx_c1                EQU  0C523H
smartra_tx_c2                EQU  0C524H
smartra_tx_sdr3              EQU  0C525H
smartra_tx_sdr4              EQU  0C526H
smartra_tx_c3                EQU  0C527H
smartra_tx_c4                EQU  0C528H
smartra_tx_respkey           EQU  0C529H
smartra_tx_mac0              EQU  0C52AH
smartra_tx_mac1              EQU  0C52BH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
conf_acp                     EQU  0C52FH
div_acp_avg                  EQU  0C530H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
iga_er_ad_cor_dly_ctr        EQU  0C532H
g_c534                       EQU  0C534H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_std_av_sword_1_           EQU  0C536H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_std_0_                    EQU  0C558H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_std_1_                    EQU  0C55AH
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_std_2_                    EQU  0C55CH
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_std_3_                    EQU  0C55EH
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_std_max                   EQU  0C560H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_dif_max                   EQU  0C562H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
drv1_er_stnd                 EQU  0C564H
;@a2l MEASUREMENT SWORD conv=cv_none_24 fmt=5.2
lamb_er_ad_clc               EQU  0C566H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=4.2
ti_er_ad                     EQU  0C568H
;@a2l MEASUREMENT SWORD conv=cv_none_24 fmt=5.2
lamb_er_ad_cor               EQU  0C56AH
;@a2l MEASUREMENT SWORD conv=cv_none_24 fmt=5.2
lamb_er_ad_lim               EQU  0C56CH
;@a2l MEASUREMENT SWORD conv=cv_none_24 fmt=5.2
lamb_er_ad_add               EQU  0C56EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lamb_er_ad_cor_dly_ctr       EQU  0C570H
lv_lam_c572                  EQU  0C572H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_is_ad_acc_conv        EQU  0C574H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_is_ad_acc_1           EQU  0C576H
;@a2l MEASUREMENT UBYTE conv=cv_none_98
state_ivvt                   EQU  0C578H
;@a2l MEASUREMENT UBYTE conv=cv_none_101
state_ivvt_tran              EQU  0C57AH
;@a2l MEASUREMENT SWORD conv=cv_mg_per_stk_8
maf_ivvt_grd                 EQU  0C57CH
lv_ivvt_c57e                 EQU  0C57EH
lv_ivvt_c580                 EQU  0C580H
lv_ivvt_c582                 EQU  0C582H
lv_ivvt_c584                 EQU  0C584H
lv_ivvt_c586                 EQU  0C586H
lv_ivvt_c588                 EQU  0C588H
;@a2l MEASUREMENT UWORD conv=cv_ms_3 fmt=6.0
t_st_cle_slv_ivvt            EQU  0C58AH
;@a2l MEASUREMENT UWORD conv=cv_hz fmt=3.0
ivvthpwm_frq                 EQU  0C58CH
;@a2l MEASUREMENT UWORD conv=cv_hz fmt=3.0
ivvtepwm_frq                 EQU  0C58EH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_lamb_bas_cor             EQU  0C590H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_lamb_av                  EQU  0C592H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_lamb_min                 EQU  0C594H
;@a2l MEASUREMENT UWORD conv=cv_none_41 fmt=7.4
lamb_ref_cor                 EQU  0C596H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_lamb_sp_bas              EQU  0C598H
;@a2l MEASUREMENT UWORD conv=cv_none_41 fmt=7.4
lamb_ref                     EQU  0C59AH
;@a2l MEASUREMENT SWORD conv=cv_none_41 fmt=7.4
lamb_ref_add_tco             EQU  0C59CH
;@a2l MEASUREMENT SWORD conv=cv_none_41 fmt=7.4
lamb_dif_bas                 EQU  0C59EH
;@a2l MEASUREMENT SWORD conv=cv_none_41 fmt=7.4
lamb_dif_av                  EQU  0C5A0H
;@a2l MEASUREMENT SWORD conv=cv_none_41 fmt=7.4
lamb_dif_max                 EQU  0C5A2H
;@a2l MEASUREMENT SWORD conv=cv_none_41 fmt=7.4
lamb_dif_sp_bas              EQU  0C5A4H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_n_max                    EQU  0C5A6H
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_max_lim                EQU  0C5A8H
;@a2l MEASUREMENT SWORD conv=cv_nm_7 fmt=7.4
tq_n_max_inp_i               EQU  0C5AAH
;@a2l MEASUREMENT SLONG conv=cv_nm_8 fmt=12.7
tq_n_max_dif_i               EQU  0C5ACH
g_c5ae                       EQU  0C5AEH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_n_max_dif_p               EQU  0C5B0H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_n_max_1                  EQU  0C5B2H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_n_max_2                  EQU  0C5B4H
g_c5b6                       EQU  0C5B6H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_pred_max_lim               EQU  0C5B8H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_n_max_ref                EQU  0C5BAH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_n_max_dif                 EQU  0C5BCH
;@a2l MEASUREMENT UWORD conv=cv_pct_7 fmt=5.3
pv_av_h                      EQU  0C5BEH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=4.2
ti_ch                        EQU  0C5C0H
;@a2l MEASUREMENT UWORD conv=cv_none_41 fmt=9.7
lamb_ch_av                   EQU  0C5C2H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
opg_sp_mdl_isa               EQU  0C5C4H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
prs_up_thr_ivs               EQU  0C5C6H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_kgh_sp                   EQU  0C5C8H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=8.2
map_sp                       EQU  0C5CAH
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
pq_sp                        EQU  0C5CCH
;@a2l MEASUREMENT UWORD conv=cv_none_35 fmt=6.4
psi_sp                       EQU  0C5CEH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
amp_mdl_ivs                  EQU  0C5D0H
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_sp_1                  EQU  0C5D2H
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_sp                    EQU  0C5D4H
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=6.3
ar_red_sp_isa                EQU  0C5D6H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
opg_sp_mdl_bas_isa           EQU  0C5D8H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
maf_ratio_isa                EQU  0C5DAH
g_c5dc                       EQU  0C5DCH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_driv              EQU  0C5DEH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_pv                EQU  0C5E0H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_fil_driv                   EQU  0C5E2H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
fac_slop_driv                EQU  0C5E4H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_driv_act          EQU  0C5E6H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_driv_pas          EQU  0C5E8H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_driv_at           EQU  0C5EAH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_tqi_bas           EQU  0C5ECH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_tps_lih           EQU  0C5EEH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_min_maf           EQU  0C5F0H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_min_maf_1         EQU  0C5F2H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_min_maf                  EQU  0C5F4H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_min_clu_maf               EQU  0C5F6H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_max_clu                   EQU  0C5F8H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_max                      EQU  0C5FAH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref_max                  EQU  0C5FCH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_bas_max                  EQU  0C5FEH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_fast                     EQU  0C600H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_sp                       EQU  0C602H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_sp_tqi                   EQU  0C604H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_sp_1                     EQU  0C606H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_sp_2                     EQU  0C608H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_sp_3                     EQU  0C60AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_bas_cor                  EQU  0C60CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_sp_maf                   EQU  0C60EH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_bas_cor_ch               EQU  0C610H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_sp_maf_1                 EQU  0C612H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_sp_maf_2                 EQU  0C614H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_av                       EQU  0C616H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_av                        EQU  0C618H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqe                          EQU  0C61AH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_tot_av                   EQU  0C61CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_av_hom                   EQU  0C61EH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqe_dif                      EQU  0C620H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref                      EQU  0C622H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_bas                      EQU  0C624H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref_lamb_scc             EQU  0C626H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref_lamb                 EQU  0C628H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref_iga_lamb             EQU  0C62AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref_iga                  EQU  0C62CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref_scc                  EQU  0C62EH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref_iga_scc              EQU  0C630H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref_iga_min_lamb         EQU  0C632H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=6.5
eff_tot_bas                  EQU  0C634H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_tot_bas_slow             EQU  0C636H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_add_act                  EQU  0C638H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_add_max                  EQU  0C63AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_act                   EQU  0C63CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_req_act               EQU  0C63EH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_kgh_add_max              EQU  0C640H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_add_max                  EQU  0C642H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
eff_iga_min_add_max          EQU  0C644H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_max                   EQU  0C646H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_add_max_tol              EQU  0C648H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_req                   EQU  0C64AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_add_act_tmp_1            EQU  0C64CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_add_act_tmp_2            EQU  0C64EH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_add_act_tmp_3            EQU  0C650H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_add_max_teg              EQU  0C652H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_req_max_teg           EQU  0C654H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_req_ch                EQU  0C656H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_tra                   EQU  0C658H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_tra_1                 EQU  0C65AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_tra_2                 EQU  0C65CH
;@a2l MEASUREMENT UWORD conv=cv_none_39 fmt=7.4
fac_tq_tra                   EQU  0C65EH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_cp                    EQU  0C660H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_loss                      EQU  0C662H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_loss_req_clu              EQU  0C664H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqfr_add                     EQU  0C666H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqfr_st                      EQU  0C668H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqfr_bas                     EQU  0C66AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqfr                         EQU  0C66CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqfr_mec                     EQU  0C66EH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_loss_1                    EQU  0C670H
lv_tq_c672                   EQU  0C672H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_st                        EQU  0C674H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_st_1                      EQU  0C676H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=7.3
ti_add_ad_cp_1               EQU  0C678H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
fuel_flow_add_ad_cp          EQU  0C67AH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
fuel_flow_add_ad_dly         EQU  0C67CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_req_clu                   EQU  0C67EH
;@a2l MEASUREMENT UWORD conv=cv_nm_2 fmt=7.2
tqi_min_req                  EQU  0C680H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req_clu               EQU  0C682H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_req                   EQU  0C684H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tq_cru_sub               EQU  0C686H
;@a2l MEASUREMENT SWORD conv=cv_none_75
cp_state                     EQU  0C688H
;@a2l MEASUREMENT SWORD conv=cv_none_77
cp_tra_state                 EQU  0C68AH
;@a2l MEASUREMENT SWORD conv=cv_none_74
cp_norm_deac_state           EQU  0C68CH
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
ti_lam_cp_1                  EQU  0C68EH
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
rel_flow_cps                 EQU  0C690H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
lam_dif_cp                   EQU  0C692H
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_mmv                       EQU  0C694H
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_mmv_norm_purge_end        EQU  0C696H
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_mmv_di                    EQU  0C698H
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_mmv_old                   EQU  0C69AH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_dly_mmv                  EQU  0C69CH
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
rel_flow_cps_old_min         EQU  0C69EH
state_cp_ctl                 EQU  0C6A0H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_di_ramp_open_cp            EQU  0C6A2H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_di_max_cp                  EQU  0C6A4H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_wait_ramp_open             EQU  0C6A6H
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl                           EQU  0C6A8H
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_di                        EQU  0C6AAH
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_mmv_old_di                EQU  0C6ACH
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
rel_flow_cps_di              EQU  0C6AEH
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
rel_flow_cps_old_di          EQU  0C6B0H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
rel_flow_cps_old             EQU  0C6B2H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
ti_lam_cp_mmv                EQU  0C6B4H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
lam_0_cp_di                  EQU  0C6B6H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_cyl_dly                  EQU  0C6B8H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_cyl_dly_old              EQU  0C6BAH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_cyl_old                  EQU  0C6BCH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_cyl_old2                 EQU  0C6BEH
;@a2l MEASUREMENT SWORD conv=cv_kg_per_h_5 fmt=7.4
fuel_flow_cp                 EQU  0C6C0H
lv_maf_c6c2                  EQU  0C6C2H
lv_maf_c6c4                  EQU  0C6C4H
lv_maf_c6c6                  EQU  0C6C6H
;@a2l MEASUREMENT UWORD conv=cv_pct_4 fmt=6.3
cppwm                        EQU  0C6C8H
;@a2l MEASUREMENT UWORD conv=cv_pct_4 fmt=6.3
cppwm_cps                    EQU  0C6CAH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
maf_cps                      EQU  0C6CCH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
maf_cps_dly                  EQU  0C6CEH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
maf_cps_dly_2_mmv            EQU  0C6D0H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
rel_flow_cps_dly_mmv         EQU  0C6D2H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
flow_cor_cps                 EQU  0C6D4H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
flow_sp_cps                  EQU  0C6D6H
;@a2l MEASUREMENT SWORD conv=cv_hpa fmt=8.2
prs_cps                      EQU  0C6D8H
;@a2l MEASUREMENT UWORD conv=cv_pct_4 fmt=6.3
cppwm_sp                     EQU  0C6DAH
lv_cp_c6dc                   EQU  0C6DCH
lv_cp_c6de                   EQU  0C6DEH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
maf_cps_dly_2                EQU  0C6E0H
lv_cp_c6e2                   EQU  0C6E2H
lv_cp_c6e4                   EQU  0C6E4H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
rel_flow_cps_dly             EQU  0C6E6H
lv_cp_c6e8                   EQU  0C6E8H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
rel_flow_cps_av              EQU  0C6EAH
lv_cp_c6ec                   EQU  0C6ECH
lv_cp_c6ee                   EQU  0C6EEH
lv_cp_c6f0                   EQU  0C6F0H
lv_cp_c6f2                   EQU  0C6F2H
;@a2l MEASUREMENT UWORD conv=cv_pct_4 fmt=6.3
cppwm_add_ad                 EQU  0C6F4H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_cps_ad                     EQU  0C6F6H
;@a2l MEASUREMENT UWORD conv=cv_km fmt=6.0
ctr_km_mil_on                EQU  0C6F8H
g_c6fa                       EQU  0C6FAH
g_c6fc                       EQU  0C6FCH
;@a2l MEASUREMENT UWORD conv=cv_km fmt=5.0
vs_pulse_nr                  EQU  0C6FEH
g_c700                       EQU  0C700H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_igk_cyc_rbm              EQU  0C702H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_obd_rbm              EQU  0C704H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=5.1
t_ast_rbm                    EQU  0C706H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=5.1
t_vs_rbm                     EQU  0C708H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=5.1
t_is_rbm                     EQU  0C70AH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
ratio_tmp_rbm                EQU  0C70CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
idx_tmp_rbm                  EQU  0C70EH
;@a2l MEASUREMENT SWORD conv=cv_degcrk_2 fmt=8.3
vo_sp                        EQU  0C710H
;@a2l MEASUREMENT SWORD conv=cv_degcrk_2 fmt=8.3
vo_ini                       EQU  0C712H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_p_d_slow_is           EQU  0C714H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_p_d_fast_is           EQU  0C716H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_i_is                  EQU  0C718H
lv_tq_c71a                   EQU  0C71AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_p_d_ramp              EQU  0C71CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_p_d_is                EQU  0C71EH
lv_tq_c720                   EQU  0C720H
lv_tq_c722                   EQU  0C722H
tqi_dif_i_is                 EQU  0C724H
lv_tq_c726                   EQU  0C726H
;@a2l MEASUREMENT SWORD conv=cv_nm_7 fmt=7.4
tq_add_i_is                  EQU  0C728H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_i_ramp                EQU  0C72AH
lv_tq_c72c                   EQU  0C72CH
lv_tq_c72e                   EQU  0C72EH
st_tqi_dif_i_is              EQU  0C730H
st_isc_req                   EQU  0C732H
lv_isc_c734                  EQU  0C734H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_is_bol                EQU  0C736H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_add_is_tol            EQU  0C738H
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_pred                   EQU  0C73AH
lv_tq_c73c                   EQU  0C73CH
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_ofs_pred               EQU  0C73EH
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_mmv_dly                    EQU  0C740H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_tdc fmt=6.2
maf_mmv_dly                  EQU  0C742H
lv_lam_c744                  EQU  0C744H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_mmv_dyw                    EQU  0C746H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_tdc fmt=7.2
maf_mmv_dyw                  EQU  0C748H
;@a2l MEASUREMENT UWORD conv=cv_g_2 fmt=7.2
maf_int_dyw                  EQU  0C74AH
lamb_sp_z                    EQU  0C74CH
cp_sp_lim                    EQU  0C750H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_lam_up_lam_up_carrier EQU  0C752H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.1
lam_bank_1_lam_up_ti_lam     EQU  0C756H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=6.2
lam_bank_1_lam_up_lam        EQU  0C758H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=6.2
lam_bank_1_lam_up_lam_mv     EQU  0C75AH
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=6.2
lam_bank_1_lam_up_lam_mv_lpf EQU  0C75CH
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=6.2
lam_bank_1_lam_up_ti_ad_fac_mmv EQU  0C762H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=7.2
lam_bank_1_lam_up_ti_ad_add_mmv EQU  0C764H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=7.2
lam_bank_1_lam_up_ti_ad_add_mmv_rel EQU  0C768H
ti_fac_mis                   EQU  0C76CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
lam_bank_1_lam_up_lam_p_ctr  EQU  0C76EH
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_lam_up_lam_ctr_cycnr EQU  0C770H
;@a2l MEASUREMENT UWORD conv=cv_ms_10 fmt=7.2
lam_bank_1_lam_up_t_lam_dly_pos EQU  0C774H
g_c782                       EQU  0C782H
g_c784                       EQU  0C784H
g_c788                       EQU  0C788H
g_c78a                       EQU  0C78AH
;@a2l MEASUREMENT SWORD conv=cv_ms_4 fmt=7.2
lam_bank_1_lam_dly_t_lam_dly EQU  0C794H
;@a2l MEASUREMENT SWORD conv=cv_ms_4 fmt=7.2
lam_bank_1_lam_dly_t_dly_i_ad EQU  0C796H
g_c79e                       EQU  0C79EH
;@a2l MEASUREMENT SWORD conv=cv_ms_4 fmt=7.2
lam_bank_1_lam_dly_t_dly_i_sword_1_ EQU  0C7A0H
;@a2l MEASUREMENT UBYTE conv=cv_none_4 fmt=5.3
lam_bank_1_lam_dly_fac_cat_dly EQU  0C7A2H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.2
lam_bank_1_lam_dly_lam_mv_mmv_dly EQU  0C7A4H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_up_ls_up_carrier EQU  0C7B4H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_up_vls_up      EQU  0C7B6H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
lam_bank_1_ls_up_vls_up_high EQU  0C7B8H
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
lam_bank_1_ls_up_t_vls_cyc_afr EQU  0C7B9H
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
lam_bank_1_ls_up_t_vls_cyc_afl EQU  0C7BAH
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
lam_bank_1_ls_up_t_vls_cyc_afl_hld EQU  0C7BBH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_up_ctr_vls_afl_cyc EQU  0C7BCH
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_up_vls_bol     EQU  0C7BEH
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_up_vls_tol     EQU  0C7C0H
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=5.3
lam_bank_1_ls_up_vls_mmv_max EQU  0C7C2H
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=5.3
lam_bank_1_ls_up_vls_mmv_min EQU  0C7C4H
diag_c7c5                    EQU  0C7C5H
;@a2l MEASUREMENT UWORD conv=cv_v_7 fmt=5.3
lam_bank_1_ls_up_vls_up_mmv_hys EQU  0C7C6H
;@a2l MEASUREMENT SWORD conv=cv_v_per_10ms fmt=6.3
lam_bank_1_ls_up_drv1_vls_up_mmv EQU  0C7C8H
;@a2l MEASUREMENT SWORD conv=cv_v_per_10ms fmt=6.3
lam_bank_1_ls_up_drv1_vls_up_mmv_min EQU  0C7CAH
;@a2l MEASUREMENT UWORD conv=cv_v_per_10ms fmt=5.3
lam_bank_1_ls_up_drv1_vls_up_abs_max EQU  0C7CCH
g_c7dc                       EQU  0C7DCH
g_c7de                       EQU  0C7DEH
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
lam_bank_1_ls_up_t_afl_lock  EQU  0C7DFH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_down_struct_ls_down_carrier EQU  0C7E0H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_down_struct_vls_down EQU  0C7E2H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_down_struct_vls_down_bol EQU  0C7E6H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_down_struct_vls_down_tol EQU  0C7E8H
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=5.3
lam_bank_1_ls_down_struct_vls_down_mmv_max EQU  0C7EAH
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=5.3
lam_bank_1_ls_down_struct_vls_down_mmv_min EQU  0C7ECH
;@a2l MEASUREMENT UWORD conv=cv_v_7 fmt=5.3
lam_bank_1_ls_down_struct_vls_down_mmv_hys EQU  0C7EEH
;@a2l MEASUREMENT SWORD conv=cv_v_per_10ms fmt=6.3
lam_bank_1_ls_down_struct_drv1_vls_down_mmv EQU  0C7F0H
;@a2l MEASUREMENT SWORD conv=cv_v_per_10ms fmt=6.3
lam_bank_1_ls_down_struct_drv1_vls_down_mmv_min EQU  0C7F2H
;@a2l MEASUREMENT UWORD conv=cv_v_per_10ms fmt=5.3
lam_bank_1_ls_down_struct_drv1_vls_down_abs_max EQU  0C7F4H
g_c806                       EQU  0C806H
g_c808                       EQU  0C808H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_cur_struct_ls_cur_carrier EQU  0C80AH
g_c80c                       EQU  0C80CH
;@a2l MEASUREMENT UBYTE conv=cv_none_57 fmt=5.2
lam_bank_1_ls_cur_struct_fac_t_drv1_vls_up_abs EQU  0C80EH
;@a2l MEASUREMENT UBYTE conv=cv_none_58 fmt=5.2
lam_bank_1_ls_cur_struct_fac_t_drv1_vls_up_mmv EQU  0C80FH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_cur_struct_ctr_cycnr_r_up_ls EQU  0C810H
;@a2l MEASUREMENT UWORD conv=cv_ohm fmt=5.0
lam_bank_1_ls_cur_struct_r_up_ls EQU  0C812H
diag_c813                    EQU  0C813H
;@a2l MEASUREMENT UWORD conv=cv_ohm fmt=5.0
lam_bank_1_ls_cur_struct_r_up_ls_mes EQU  0C814H
g_c816                       EQU  0C816H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_ls_cur_struct_t_sample_r_up_ls EQU  0C818H
;@a2l MEASUREMENT SWORD conv=cv_v_per_10ms fmt=6.3
lam_bank_1_ls_cur_struct_drv1_vls_up_mmv_thd_max EQU  0C81AH
;@a2l MEASUREMENT SWORD conv=cv_v_per_10ms fmt=6.3
lam_bank_1_ls_cur_struct_drv1_vls_up_mmv_thd_min EQU  0C81CH
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_up_mes EQU  0C81EH
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_up_mes_tol EQU  0C820H
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_up_mes_bol EQU  0C822H
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_up_mes_tol_mmv EQU  0C824H
g_c826                       EQU  0C826H
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_up_mes_bol_mmv EQU  0C828H
g_c82a                       EQU  0C82AH
g_c82c                       EQU  0C82CH
;@a2l MEASUREMENT UBYTE conv=cv_none_57 fmt=5.2
lam_bank_1_ls_cur_struct_fac_t_drv1_vls_down_abs EQU  0C82EH
;@a2l MEASUREMENT UBYTE conv=cv_none_58 fmt=5.2
lam_bank_1_ls_cur_struct_fac_t_drv1_vls_down_mmv EQU  0C82FH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_cur_struct_ctr_cycnr_r_down_ls EQU  0C832H
;@a2l MEASUREMENT UWORD conv=cv_ohm fmt=5.0
lam_bank_1_ls_cur_struct_r_down_ls EQU  0C834H
diag_c835                    EQU  0C835H
;@a2l MEASUREMENT UWORD conv=cv_ohm fmt=5.0
lam_bank_1_ls_cur_struct_r_down_ls_mes EQU  0C836H
g_c838                       EQU  0C838H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_ls_cur_struct_t_sample_r_down_ls EQU  0C83AH
;@a2l MEASUREMENT SWORD conv=cv_v_per_10ms fmt=6.3
lam_bank_1_ls_cur_struct_drv1_vls_down_mmv_thd_max EQU  0C83CH
;@a2l MEASUREMENT SWORD conv=cv_v_per_10ms fmt=6.3
lam_bank_1_ls_cur_struct_drv1_vls_down_mmv_thd_min EQU  0C83EH
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_down_mes EQU  0C840H
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_down_mes_tol EQU  0C842H
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_down_mes_bol EQU  0C844H
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_down_mes_tol_mmv EQU  0C846H
g_c848                       EQU  0C848H
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.1
lam_bank_1_ls_cur_struct_ttip_ls_down_mes_bol_mmv EQU  0C84AH
g_c84c                       EQU  0C84CH
g_c84e                       EQU  0C84EH
g_c850                       EQU  0C850H
;@a2l MEASUREMENT UWORD conv=cv_none_102
lam_bank_1_lsh_down_struct_state_lsh_down EQU  0C852H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
lam_bank_1_lsh_down_struct_lshpwm_down EQU  0C854H
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
lam_bank_1_lsh_down_struct_t_lsh_down_prev EQU  0C855H
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
lam_bank_1_lsh_down_struct_t_lshpwm_down_lim EQU  0C856H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=5.3
lam_bank_1_lsh_down_struct_fac_lshpwm_down_ctl EQU  0C858H
dtc_mux_vls_up               EQU  0C85CH
dtc_mux_vls_down             EQU  0C85EH
dtc_vls_up_sub               EQU  0C86CH
dtc_vls_down_sub             EQU  0C86DH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_cat_eff_struct_cat_eff_carrier EQU  0C870H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=5.3
lam_bank_1_cat_eff_struct_cat_diag EQU  0C872H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.2
lam_bank_1_cat_eff_struct_lam_mv_mmv_cat EQU  0C874H
;@a2l MEASUREMENT UWORD conv=cv_g_2 fmt=7.2
lam_bank_1_cat_eff_struct_maf_int_ldc_cat EQU  0C876H
lv_cat_c878                  EQU  0C878H
;@a2l MEASUREMENT UWORD conv=cv_degtps_per_s_2 fmt=8.1
lam_bank_1_cat_eff_struct_tps_grd_sum EQU  0C87AH
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=5.3
lam_bank_1_cat_eff_struct_cat_diag_clc EQU  0C87CH
;@a2l MEASUREMENT UBYTE conv=cv_none_113
lam_bank_1_cat_eff_struct_vls_cyc_step EQU  0C87DH
;@a2l MEASUREMENT UWORD conv=cv_v_ms fmt=6.2
lam_bank_1_cat_eff_struct_vls_cat_sum EQU  0C87EH
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_cat_eff_struct_vls_cat_mv EQU  0C880H
lv_cat_c882                  EQU  0C882H
;@a2l MEASUREMENT UWORD conv=cv_v_ms fmt=6.2
lam_bank_1_cat_eff_struct_vls_cat_dif_sum EQU  0C884H
lv_cat_c886                  EQU  0C886H
lv_cat_c88a                  EQU  0C88AH
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=4.2
lam_bank_1_cat_eff_struct_vls_cat_ratio EQU  0C88CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_cat_eff_struct_sum_cat_diag EQU  0C88EH
;@a2l MEASUREMENT UWORD conv=cv_none_5 fmt=7.2
lam_bank_1_cat_eff_struct_vls_cat_ratio_sum EQU  0C890H
cp_vsdiag_max                EQU  0C892H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_up_obd2_struct_ls_up_obd2_carrier EQU  0C894H
obd_c896                     EQU  0C896H
obd_c898                     EQU  0C898H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_up_obd2_struct_sum_cyc EQU  0C89AH
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cyc_afl_ratio EQU  0C89CH
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cyc_afr_ratio EQU  0C89DH
;@a2l MEASUREMENT UWORD conv=cv_none_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cyc_afl_ratio_sum EQU  0C89EH
;@a2l MEASUREMENT UWORD conv=cv_none_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cyc_afr_ratio_sum EQU  0C8A0H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cyc_afl_ratio_mv EQU  0C8A2H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cyc_afr_ratio_mv EQU  0C8A3H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cycnr_max EQU  0C8A4H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cycnr_min EQU  0C8A6H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_ls_up_obd2_struct_t_vls_cycnr EQU  0C8A8H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_up_obd2_struct_sum_cycnr_afl EQU  0C8AAH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_up_obd2_struct_sum_cycnr_afr EQU  0C8ACH
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=4.2
lam_bank_1_ls_up_obd2_struct_vls_cycnr_afl_ratio EQU  0C8AEH
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=4.2
lam_bank_1_ls_up_obd2_struct_vls_cycnr_afr_ratio EQU  0C8AFH
;@a2l MEASUREMENT UWORD conv=cv_none_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cycnr_afl_ratio_sum EQU  0C8B0H
;@a2l MEASUREMENT UWORD conv=cv_none_5 fmt=5.3
lam_bank_1_ls_up_obd2_struct_vls_cycnr_afr_ratio_sum EQU  0C8B2H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=4.2
lam_bank_1_ls_up_obd2_struct_vls_cycnr_afl_ratio_mv EQU  0C8B4H
;@a2l MEASUREMENT UBYTE conv=cv_none_5 fmt=4.2
lam_bank_1_ls_up_obd2_struct_vls_cycnr_afr_ratio_mv EQU  0C8B5H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_ls_up_obd2_struct_t_vls_afr_to_afl_sum EQU  0C8B6H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_ls_up_obd2_struct_t_vls_afr_to_afl_sum_max EQU  0C8B8H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_ls_up_obd2_struct_t_vls_afl_to_afr_sum EQU  0C8BAH
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_ls_up_obd2_struct_t_vls_afl_to_afr_sum_max EQU  0C8BCH
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_ls_up_obd2_struct_t_vls_cyc_afr_sum EQU  0C8BEH
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
lam_bank_1_ls_up_obd2_struct_t_vls_cyc_afr_sum_max EQU  0C8C0H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
lam_bank_1_ls_up_obd2_struct_t_ls_frq_diag EQU  0C8C2H
obd_c8c4                     EQU  0C8C4H
obd_c8c5                     EQU  0C8C5H
obd_c8c6                     EQU  0C8C6H
obd_c8c7                     EQU  0C8C7H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_down_obd2_struct_ls_down_obd2_carrier EQU  0C8CAH
obd_c8cc                     EQU  0C8CCH
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_down_obd2_struct_vls_down_tran_puc EQU  0C8CEH
;@a2l MEASUREMENT UBYTE conv=cv_ms_13 fmt=4.0
lam_bank_1_ls_down_obd2_struct_cycnr_vls_down_act EQU  0C8D2H
;@a2l MEASUREMENT UWORD conv=cv_none_7 fmt=7.3
lam_bank_1_ls_down_obd2_struct_cycnr_quo_vls_down EQU  0C8D4H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
lam_bank_1_ls_down_obd2_struct_ctr_vls_down_diag EQU  0C8D6H
;@a2l MEASUREMENT UWORD conv=cv_none_7 fmt=7.3
lam_bank_1_ls_down_obd2_struct_ctr_cycnr_quo_vls_down_sum EQU  0C8D8H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
lam_bank_1_ls_down_obd2_struct_cycnr_ratio_vls_down EQU  0C8DAH
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
lam_bank_1_ls_down_obd2_struct_cycnr_ratio_vls_down_mod_6 EQU  0C8DBH
diag_c8dc                    EQU  0C8DCH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
lam_bank_1_ls_down_obd2_struct_ctr_vls_down_diag_pue EQU  0C8DDH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
lam_bank_1_ls_down_obd2_struct_ctr_diag_vls_down_diag_pue EQU  0C8DEH
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_down_obd2_struct_vls_down_pue EQU  0C8E0H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_down_obd2_struct_vls_diag_pue_ls_down_mod_6 EQU  0C8E2H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_down_obd2_struct_vls_diag_pue_ls_down EQU  0C8E4H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_down_obd2_struct_vls_up_cat_purge_max EQU  0C8E6H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_ls_down_obd2_struct_vls_diag_pue_max_ls_down EQU  0C8E8H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_lsh_up_obd2_struct_ctr_cycnr_r_lsh_up_obd2 EQU  0C8EAH
;@a2l MEASUREMENT UWORD conv=cv_j fmt=5.0
lam_bank_1_lsh_up_obd2_struct_pow_int_lsh_up_obd2 EQU  0C8ECH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=4.0
lam_bank_1_lsh_up_obd2_struct_tcc_stc_lsh_up_obd2 EQU  0C8EEH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=4.0
lam_bank_1_lsh_up_obd2_struct_frc_stc_lsh_up_obd2 EQU  0C8F0H
obd_c8f2                     EQU  0C8F2H
;@a2l MEASUREMENT UBYTE conv=cv_none_103
lam_bank_1_lsh_up_obd2_struct_state_lsh_up_obd2 EQU  0C8F4H
obd_c8f6                     EQU  0C8F6H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_lsh_down_obd2_struct_ctr_cycnr_r_lsh_down_obd2 EQU  0C8F8H
;@a2l MEASUREMENT UWORD conv=cv_j fmt=5.0
lam_bank_1_lsh_down_obd2_struct_pow_int_lsh_down_obd2 EQU  0C8FAH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=4.0
lam_bank_1_lsh_down_obd2_struct_tcc_stc_lsh_down_obd2 EQU  0C8FCH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=4.0
lam_bank_1_lsh_down_obd2_struct_frc_stc_lsh_down_obd2 EQU  0C8FEH
obd_c900                     EQU  0C900H
;@a2l MEASUREMENT UBYTE conv=cv_none_103
lam_bank_1_lsh_down_obd2_struct_state_lsh_down_obd2 EQU  0C902H
obd_c904                     EQU  0C904H
lv_cp_diag_stat              EQU  0C906H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_fsd_obd2_struct_fsd_obd2_carrier EQU  0C908H
;@a2l MEASUREMENT UWORD conv=cv_s_8 fmt=6.1
lam_bank_1_fsd_obd2_struct_t_sum_max_fsd EQU  0C90AH
diag_c90b                    EQU  0C90BH
;@a2l MEASUREMENT UWORD conv=cv_s_8 fmt=6.1
lam_bank_1_fsd_obd2_struct_t_sum_min_fsd EQU  0C90CH
diag_c90d                    EQU  0C90DH
;@a2l MEASUREMENT UWORD conv=cv_s_3 fmt=5.0
lam_bank_1_fsd_obd2_struct_t_sum_rst_fsd EQU  0C90EH
p_lam_bank1                  EQU  0C914H
;@a2l MEASUREMENT UWORD conv=cv_none_104
lsh_up_bank_1_state_lsh_up   EQU  0C916H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
lsh_up_bank_1_lshpwm_up      EQU  0C918H
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
lsh_up_bank_1_t_lsh_up       EQU  0C919H
;@a2l MEASUREMENT UBYTE conv=cv_v fmt=4.1
lsh_up_bank_1_v_efc_lsh_up   EQU  0C91AH
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
lsh_up_bank_1_t_lsh_up_tol   EQU  0C91BH
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
lsh_up_bank_1_t_lsh_up_lim   EQU  0C91CH
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_min_cor                  EQU  0C91EH
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_max_cor                  EQU  0C920H
;@a2l MEASUREMENT UWORD conv=cv_none_85 fmt=7.5
fac_maf_max                  EQU  0C922H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_max_tot                  EQU  0C924H
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_max_avl_isa           EQU  0C926H
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_min_avl               EQU  0C928H
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_max_avl               EQU  0C92AH
;@a2l MEASUREMENT UWORD conv=cv_none_67 fmt=7.3
fac_1_pq_min                 EQU  0C92CH
;@a2l MEASUREMENT UWORD conv=cv_none_67 fmt=7.3
fac_1_pq_max                 EQU  0C92EH
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
fac_2_pq                     EQU  0C930H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
pq_min_avl                   EQU  0C932H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
pq_max_avl                   EQU  0C934H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=5.3
fac_mtv                      EQU  0C936H
g_c938                       EQU  0C938H
g_c93a                       EQU  0C93AH
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0 name=n
n_C93C                       EQU  0C93CH
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=7.3
t_seg_av                     EQU  0C93EH
g_c948                       EQU  0C948H
g_c94a                       EQU  0C94AH
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_mmv_cat                    EQU  0C94CH
;@a2l MEASUREMENT UWORD conv=cv_mg_per_tdc fmt=6.2
maf_mmv_cat                  EQU  0C94EH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_cat_diag            EQU  0C950H
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_tco_plaus           EQU  0C956H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_ast_max_lscl               EQU  0C958H
;@a2l MEASUREMENT UWORD conv=cv_s_5 fmt=7.1
t_tco_min                    EQU  0C95AH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_ls_down_swt         EQU  0C95CH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_vls_down_plaus      EQU  0C95EH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_kgh_min_puc              EQU  0C960H
;@a2l MEASUREMENT UWORD conv=cv_g_2 fmt=7.2
maf_int_pue                  EQU  0C962H
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_lsh_down_obd2       EQU  0C964H
;@a2l MEASUREMENT UWORD conv=cv_k fmt=4.0
temp_dif_lsh_down_obd2       EQU  0C966H
;@a2l MEASUREMENT SWORD conv=cv_none_108
state_th_diag                EQU  0C968H
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_th_det              EQU  0C96AH
;@a2l MEASUREMENT UWORD conv=cv_s_5 fmt=7.1
t_act_th_diag                EQU  0C96CH
;@a2l MEASUREMENT UWORD conv=cv_s_5 fmt=7.1
t_puc_th_diag                EQU  0C96EH
;@a2l MEASUREMENT UWORD conv=cv_s_5 fmt=7.1
t_load_min_th_diag           EQU  0C970H
;@a2l MEASUREMENT UWORD conv=cv_s_5 fmt=7.2
t_tco_de_th_diag             EQU  0C972H
;@a2l MEASUREMENT UWORD conv=cv_s_5 fmt=7.1
t_vs_min_th_diag             EQU  0C974H
;@a2l MEASUREMENT UWORD conv=cv_s_5 fmt=7.1
t_vs_max_th_diag             EQU  0C976H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=7.2
ti_co_is                     EQU  0C978H
lv_ti_c97a                   EQU  0C97AH
g_c97c                       EQU  0C97CH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_toil_stuck          EQU  0C97EH
g_c980                       EQU  0C980H
toil_mdl                     EQU  0C982H
;@a2l MEASUREMENT UBYTE conv=cv_degc_6 fmt=3.0
toil_mdl_byte_3_             EQU  0C983H
;@a2l MEASUREMENT UWORD conv=cv_nm_2 fmt=7.2
tqi_req_tra                  EQU  0C984H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_req_tra_clu               EQU  0C986H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_req_dif_tra               EQU  0C988H
st_tq_tra_ramp               EQU  0C98AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_req_tra_old_clu           EQU  0C98CH
;@a2l MEASUREMENT UBYTE conv=cv_none_112
tq_req_tra_state             EQU  0C98EH
;@a2l MEASUREMENT UBYTE conv=cv_none_111
tq_range                     EQU  0C990H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
t_tra                        EQU  0C992H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=8.3
ti_add_wf                    EQU  0C994H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=8.3
ti_fast_wf_post_thd          EQU  0C996H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=8.3
ti_slow_wf_post_thd          EQU  0C998H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=8.2
ti_dif_fast_wf_post_thd      EQU  0C99AH
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=8.2
ti_dif_slow_wf_post_thd      EQU  0C99CH
;@a2l MEASUREMENT SWORD conv=cv_ms_16 fmt=8.2
ti_cor_fast_wf               EQU  0C99EH
;@a2l MEASUREMENT SWORD conv=cv_ms_16 fmt=8.2
ti_cor_slow_wf               EQU  0C9A0H
;@a2l MEASUREMENT SWORD conv=cv_ms_16 fmt=8.2
ti_dif_fast_pu_wf            EQU  0C9A2H
;@a2l MEASUREMENT SWORD conv=cv_ms_16 fmt=8.2
ti_dif_slow_pu_wf            EQU  0C9A4H
ti_fast_wf_acc_lo            EQU  0C9A6H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=7.3
ti_fast_wf_sword_1_          EQU  0C9A8H
ti_slow_wf_acc_lo            EQU  0C9AAH
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=7.3
ti_slow_wf_sword_1_          EQU  0C9ACH
ti_dif_fast_wf               EQU  0C9AEH
ti_dif_slow_wf               EQU  0C9B0H
;@a2l MEASUREMENT UWORD conv=cv_seg fmt=5.0
seg_ctr_wf                   EQU  0C9B2H
seg_ctr_inh_wf               EQU  0C9B4H
mass_fast_wf_z0              EQU  0C9B6H
mass_fast_wf_z1              EQU  0C9B8H
mass_fast_wf_z2              EQU  0C9BAH
mass_fast_wf_z3              EQU  0C9BCH
mass_slow_wf_z0              EQU  0C9BEH
mass_slow_wf_z1              EQU  0C9C0H
mass_slow_wf_z2              EQU  0C9C2H
mass_slow_wf_z3              EQU  0C9C4H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=6.2
ti_add_wf_vo                 EQU  0C9C6H
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=6.2
ti_dif_wf_vo_post_thd        EQU  0C9C8H
;@a2l MEASUREMENT UWORD conv=cv_none_37 fmt=6.2
fac_tco_st_cor_wf_pos_vo     EQU  0C9CAH
;@a2l MEASUREMENT UWORD conv=cv_none_37 fmt=6.2
fac_tco_st_cor_wf_neg_vo     EQU  0C9CCH
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=6.2
ti_dif_wf_vo_cor             EQU  0C9CEH
;@a2l MEASUREMENT UWORD conv=cv_ms_7 fmt=10.3
tib_int                      EQU  0C9D0H
ti_dif_vo_wf                 EQU  0C9D2H
ti_vo_acc_lo                 EQU  0C9D4H
ti_vo_acc_hi                 EQU  0C9D6H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_tib_cor                  EQU  0C9D8H
vo_prev_wf                   EQU  0C9DAH
tib_int_vo_lo                EQU  0C9DCH
tib_int_vo_hi                EQU  0C9DEH
ti_vo_fb_lo                  EQU  0C9E0H
ti_vo_fb_hi                  EQU  0C9E2H
vo_fast_wf_z0                EQU  0C9E4H
vo_fast_wf_z1                EQU  0C9E6H
vo_fast_wf_z2                EQU  0C9E8H
vo_fast_wf_z3                EQU  0C9EAH
vo_slow_wf_z0                EQU  0C9ECH
vo_slow_wf_z1                EQU  0C9EEH
vo_slow_wf_z2                EQU  0C9F0H
vo_slow_wf_z3                EQU  0C9F2H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
crk_mis_seg_max_osc          EQU  0C9F4H
;@a2l MEASUREMENT UWORD conv=cv_us fmt=5.0
drv0_er_sum_osc              EQU  0C9F6H
;@a2l MEASUREMENT UWORD conv=cv_us fmt=5.0
drv0_er_thd_osc_sam          EQU  0CA00H
g_ca02                       EQU  0CA02H
g_ca04                       EQU  0CA04H
;@a2l MEASUREMENT SWORD conv=cv_none_24 fmt=5.2
lamb_er_ad_mem               EQU  0CA06H
imob_eeprom_block_sig        EQU  0CA08H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
imob_data_ram_ctr_lih_imob   EQU  0CA09H
imob_auth_state              EQU  0CA0BH
imob_key_table               EQU  0CA0CH
imob_key_tab_c               EQU  0CA0EH
imob_ca10                    EQU  0CA10H
imob_ca12                    EQU  0CA12H
imob_ca14                    EQU  0CA14H
imob_ca16                    EQU  0CA16H
imob_ca18                    EQU  0CA18H
imob_ca1a                    EQU  0CA1AH
;@a2l MEASUREMENT UBYTE conv=cv_none_97
imob_data_ram_state_imob     EQU  0CA1CH
key_nr_learn_dflt_imob       EQU  0CA1DH
q_imob_seed_material         EQU  0CA1EH
imob_sdr_b0                  EQU  0CA1FH
imob_sdr_b1                  EQU  0CA20H
imob_sdr_b2                  EQU  0CA21H
imob_sdr_b3                  EQU  0CA22H
imob_sdr_b4                  EQU  0CA23H
q_imob_resp_key              EQU  0CA24H
imob_ca25                    EQU  0CA25H
imob_ca26                    EQU  0CA26H
imob_sdr_ctr                 EQU  0CA27H
imob_sdr_b5                  EQU  0CA28H
imob_ca2a                    EQU  0CA2AH
ctr_dflt_imob_1              EQU  0CA2BH
ctr_dflt_imob_2              EQU  0CA2CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
imob_data_ram_ctr_key_fast_imob EQU  0CA2DH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
imob_data_ram_ctr_sdr_1_imob EQU  0CA2EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
imob_data_ram_ctr_sdr_2_imob EQU  0CA30H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
imob_data_ram_ctr_sdr_3_imob EQU  0CA32H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
imob_data_ram_ctr_sdr_4_imob EQU  0CA34H
smartra_lcg_seed             EQU  0CA36H
smartra_lcg_const            EQU  0CA38H
bw_imob_dflt                 EQU  0CA3AH
diag_ca3c                    EQU  0CA3CH
inj_cc_0                     EQU  0CA3EH
imob_ca40                    EQU  0CA40H
imob_ca42                    EQU  0CA42H
imob_ca44                    EQU  0CA44H
lv_lam_ca46                  EQU  0CA46H
diag_ca48                    EQU  0CA48H
imob_resp_len                EQU  0CA4AH
imob_resp_seed               EQU  0CA4BH
imob_resp_b0                 EQU  0CA4CH
imob_resp_b1                 EQU  0CA4DH
;@a2l MEASUREMENT ULONG conv=cv_none_73 fmt=10.0
key_imob_1                   EQU  0CA4EH
imob_ca50                    EQU  0CA50H
;@a2l MEASUREMENT ULONG conv=cv_none_73 fmt=10.0
key_imob_2                   EQU  0CA52H
imob_ca54                    EQU  0CA54H
;@a2l MEASUREMENT ULONG conv=cv_none_73 fmt=10.0
key_imob_3                   EQU  0CA56H
imob_ca58                    EQU  0CA58H
;@a2l MEASUREMENT ULONG conv=cv_none_73 fmt=10.0
key_imob_4                   EQU  0CA5AH
imob_ca5c                    EQU  0CA5CH
imob_ca5e                    EQU  0CA5EH
imob_ca5f                    EQU  0CA5FH
imob_ca60                    EQU  0CA60H
imob_ca61                    EQU  0CA61H
imob_ca62                    EQU  0CA62H
imob_ca63                    EQU  0CA63H
imob_ca64                    EQU  0CA64H
imob_ca66                    EQU  0CA66H
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
mis_a_win_n_32_unt                  EQU  0CA68H
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
mis_a_win_lm_unt             EQU  0CA69H
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
mis_a_win_n_32_ob            EQU  0CA6AH
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
mis_a_win_lm_ob              EQU  0CA6BH
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
mis_b_win_n_32_unt                  EQU  0CA6CH
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
mis_b_win_lm_unt             EQU  0CA6DH
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
mis_b_win_n_32_ob            EQU  0CA6EH
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
mis_b_win_lm_ob              EQU  0CA6FH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_nr_tdc_a                 EQU  0CA72H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_nr_tdc_b                 EQU  0CA74H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_sum_a                    EQU  0CA76H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_sum_b                    EQU  0CA78H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_a_0_                EQU  0CA7AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_a_1_                     EQU  0CA7CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_a_2_                     EQU  0CA7EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_a_3_                     EQU  0CA80H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_nr_a_inside_ftp          EQU  0CA82H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_b_0_                EQU  0CA84H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_b_1_                     EQU  0CA86H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_b_2_                     EQU  0CA88H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_b_3_                     EQU  0CA8AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_nr_tdc_er_lw             EQU  0CA8CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_nr_tdc_er_hw             EQU  0CA8EH
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
cpu_load_max_word            EQU  0CA90H
g_ca92                       EQU  0CA92H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_gear_shift_beg             EQU  0CA94H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
t_dt_is_shift                EQU  0CA96H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
t_pv_av_gr_sub               EQU  0CA98H
;@a2l MEASUREMENT UWORD conv=cv_h_per_km_min fmt=7.3
n_vs_ratio_fil               EQU  0CA9AH
;@a2l MEASUREMENT UWORD conv=cv_h_per_km_min fmt=7.3
n_vs_ratio                   EQU  0CA9CH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_iga_av                   EQU  0CA9EH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_iga_bas_cor              EQU  0CAA0H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_iga_min                  EQU  0CAA2H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_iga_bas_cor_knk_fil      EQU  0CAA4H
lv_iga_caa6                  EQU  0CAA6H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_iga_sp                   EQU  0CAA8H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_iga_sp_1                 EQU  0CAAAH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=4.3
eff_iga_min_teg              EQU  0CAACH
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.2
teg_dyn_hys                  EQU  0CAAEH
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
isapwm_isa                   EQU  0CAB0H
diag_cab1                    EQU  0CAB1H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
opg_av_isa                   EQU  0CAB2H
diag_cab3                    EQU  0CAB3H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
opg_sp_isa                   EQU  0CAB4H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
opg_sp_tra_st_mdl_isa        EQU  0CAB6H
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_cam_dif_ivvt_in     EQU  0CAB8H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_ivvt_lv_inh_ivvt EQU  0CADAH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_1_struct_raw_ivvt_cam_raw EQU  0CADCH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_raw_ivvt_lv_cam_level_save_ivvt EQU  0CADDH
;@a2l MEASUREMENT ULONG conv=cv_us_4 fmt=11.0
ivvt_in_1_struct_raw_ivvt_cam_psn_cap_save_ivvt EQU  0CADEH
lv_ivvt_cae0                 EQU  0CAE0H
;@a2l MEASUREMENT SWORD conv=cv_degcrk_2 fmt=7.3
ivvt_in_1_struct_pos_ivvt_cam_ref_dif_ivvt EQU  0CAE6H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_1_struct_pos_ivvt_cam EQU  0CAEEH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ivvt_in_1_struct_pos_ivvt_ctr_cam_ad_ivvt EQU  0CAF9H
;@a2l MEASUREMENT ULONG conv=cv_us_4 fmt=11.0
ivvt_in_1_struct_ctl_ivvt_t_stop_ivvt EQU  0CB02H
ivvt_pwm_frq_z               EQU  0CB04H
;@a2l MEASUREMENT UBYTE conv=cv_none_99
ivvt_in_1_struct_ctl_ivvt_state_ivvt_act EQU  0CB0EH
;@a2l MEASUREMENT UBYTE conv=cv_none_100
ivvt_in_1_struct_ctl_ivvt_state_ivvt_pwm EQU  0CB10H
;@a2l MEASUREMENT UWORD conv=cv_us_2 fmt=6.0
ivvt_in_1_struct_ctl_ivvt_t_sum_if_ivvt EQU  0CB2CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_ctl_ivvt_lv_hld_req_ivvt EQU  0CB40H
ivvt_hld_edge                EQU  0CB46H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_ctl_ivvt_lv_inh_ctl_diag_slv_ivvt EQU  0CB7BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_hpwm_de_ad_ivvt_lv_adh_end_ivvt EQU  0CB94H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.3
ivvt_in_1_struct_hpwm_ivvt_ivvtpwm EQU  0CBAEH
diag_cbaf                    EQU  0CBAFH
;@a2l MEASUREMENT UBYTE conv=cv_none_109
ivvt_in_1_struct_diag_mec_ivvt_state_trip_ivvt EQU  0CBBAH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_diag_mec_ivvt_lv_err_ad_mec_ref_ivvt EQU  0CBBCH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_diag_mec_ivvt_lv_err_cam_dif_ivvt EQU  0CBBDH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_diag_mec_ivvt_lv_end_psn_act_diag_ivvt EQU  0CBC0H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_diag_mec_ivvt_lv_err_tooth_off EQU  0CBC1H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_diag_mec_inci_ivvt_lv_inh_diag_cam_dif_ivvt EQU  0CBC2H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_diag_mec_inci_ivvt_lv_inh_rbm_cam_dif_ivvt EQU  0CBC3H
lv_ivvt_cbc4                 EQU  0CBC4H
lv_ivvt_cbc6                 EQU  0CBC6H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ivvt_in_1_struct_diag_el_ivvt_ctr_diag_slv_ivvt EQU  0CBC8H
lv_ivvt_cbca                 EQU  0CBCAH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_struct_sp_afl_ivvt_cam_sp_clc_afl_ivvt EQU  0CBCCH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_struct_sp_ivvt_cam_sp_ivvt EQU  0CBCEH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_struct_sp_ivvt_cam_sp_clc_ivvt EQU  0CBCFH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_struct_sp_ivvt_cam_sp_clc_lgrd_ivvt EQU  0CBD0H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_struct_sp_ivvt_cam_sp_clc_afs_ivvt EQU  0CBD1H
;@a2l MEASUREMENT SBYTE conv=cv_none_84 fmt=5.2
ivvt_in_struct_sp_ivvt_fac_cam_sp_is_ivvt EQU  0CBD2H
;@a2l MEASUREMENT SBYTE conv=cv_none_84 fmt=5.2
ivvt_in_struct_sp_ivvt_fac_cam_sp_pl_ivvt EQU  0CBD3H
lv_ivvt_cbd4                 EQU  0CBD4H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_struct_sp_ivvt_cam_sp_dyw_ivvt EQU  0CBD5H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_struct_sp_ivvt_lv_cam_sp_dyw_ivvt EQU  0CBD6H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_struct_sp_ivvt_lv_tog_cam_sp EQU  0CBD7H
lv_ivvt_cbd8                 EQU  0CBD8H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=6.3
ivvt_in_struct_ctl_cam_ivvt_ivvtepwm EQU  0CBD9H
;@a2l MEASUREMENT UBYTE conv=cv_ms_3 fmt=4.0
ivvt_in_struct_dly_ivvt_dly_adc_ivvt EQU  0CBDAH
;@a2l MEASUREMENT UBYTE conv=cv_ms_3 fmt=4.0
ivvt_in_struct_dly_ivvt_dly_rtd_ivvt EQU  0CBDBH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_struct_diag_mec_cam_ivvt_cam_sp_trip_ivvt EQU  0CBE0H
;@a2l MEASUREMENT SWORD conv=cv_degcrk_2 fmt=7.3
ivvt_in_struct_sp_add_ivvt_cam_sp_add_ivvt EQU  0CBE2H
lv_ivvt_cbe4                 EQU  0CBE4H
lv_ivvt_cbe6                 EQU  0CBE6H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_struct_sp_add_ivvt_cam_sp_value_ivvt EQU  0CBE8H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_struct_sp_add_ivvt_lv_cam_sp_add_ivvt EQU  0CBE9H
p_ivvt_cam_s                 EQU  0CBECH
p_ivvt_cam_m                 EQU  0CBEEH
;@a2l MEASUREMENT UWORD conv=cv_ms_3 fmt=6.0
t_dly_mes_ivvt               EQU  0CBF0H
cycnr_ad2_inc_knk            EQU  0CC12H
cycnr_ad2_dec_knk            EQU  0CC14H
ctr_ad2_inc_knk              EQU  0CC16H
ctr_ad2_dec_knk              EQU  0CC18H
nl_knk_ad_ref                EQU  0CC1AH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_kgh_mes                  EQU  0CC20H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_kgh_mes_bas              EQU  0CC22H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=6.2
maf_mes                      EQU  0CC24H
lv_maf_cc26                  EQU  0CC26H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_puls                     EQU  0CC28H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_word                     EQU  0CC2AH
lv_iga_cc2b                  EQU  0CC2BH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_kgh_clc                  EQU  0CC2CH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_thr                      EQU  0CC2EH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_cyl                      EQU  0CC30H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_cyl_stk                  EQU  0CC32H
;@a2l MEASUREMENT UWORD conv=cv_s_per_m fmt=9.7
maf_mdl_con_1                EQU  0CC34H
lv_maf_cc36                  EQU  0CC36H
;@a2l MEASUREMENT UWORD conv=cv_none_35 fmt=6.4
maf_fac_ofs_egr              EQU  0CC38H
;@a2l MEASUREMENT UWORD conv=cv_none_35 fmt=6.4
maf_fac_slop_egr             EQU  0CC3AH
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=5.2
egr_ratio                    EQU  0CC3CH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_egr                      EQU  0CC3EH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
map_egr                      EQU  0CC40H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
pq_egr                       EQU  0CC42H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_fg_cyl                   EQU  0CC44H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_fg_cyl_stk               EQU  0CC46H
;@a2l MEASUREMENT UWORD conv=cv_none_35 fmt=6.4
maf_fac_ofs                  EQU  0CC48H
;@a2l MEASUREMENT UWORD conv=cv_none_35 fmt=6.4
maf_fac_slop                 EQU  0CC4AH
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
pq                           EQU  0CC4CH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
map_fg                       EQU  0CC4EH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
map                          EQU  0CC50H
;@a2l MEASUREMENT SWORD conv=cv_hpa_per_ms_2 fmt=7.3
map_drv1                     EQU  0CC52H
lv_maf_cc54                  EQU  0CC54H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_kgh                      EQU  0CC56H
;@a2l MEASUREMENT SWORD conv=cv_mg_per_stk_8 fmt=5.2
maf_dif                      EQU  0CC58H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=6.2
maf_mmv                      EQU  0CC5AH
lv_maf_cc5b                  EQU  0CC5BH
;@a2l MEASUREMENT SWORD conv=cv_hpa_per_ms_2 fmt=7.3
map_egr_drv1                 EQU  0CC5CH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
map_pred                     EQU  0CC5EH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
map_egr_pred                 EQU  0CC60H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
map_fg_pred                  EQU  0CC62H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
pq_estim                     EQU  0CC64H
;@a2l MEASUREMENT UWORD conv=cv_none_16 fmt=7.5
pq_egr_estim                 EQU  0CC66H
;@a2l MEASUREMENT UWORD conv=cv_1_per_s2_m fmt=10.1
maf_mdl_con_0                EQU  0CC68H
lv_maf_cc6a                  EQU  0CC6AH
g_cc6c                       EQU  0CC6CH
g_cc6e                       EQU  0CC6EH
g_cc70                       EQU  0CC70H
;@a2l MEASUREMENT SWORD conv=cv_kg_per_h_2 fmt=7.2
maf_pred_kgh                 EQU  0CC72H
;@a2l MEASUREMENT SWORD conv=cv_mg_per_stk_4 fmt=7.2
maf_pred                     EQU  0CC74H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_im_mdl                   EQU  0CC76H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_mes_fil                  EQU  0CC78H
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red                       EQU  0CC7AH
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.3
ar_red_dif_rel               EQU  0CC7CH
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.3
ar_red_dif_i_rel             EQU  0CC7EH
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.3
ar_red_dif_i_rel_mmv         EQU  0CC80H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_mdl_mv                   EQU  0CC82H
;@a2l MEASUREMENT SWORD conv=cv_kg_per_h_2 fmt=7.2
maf_mdl_dif                  EQU  0CC84H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
map_mdl_mv                   EQU  0CC86H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
amp                          EQU  0CC8AH
diag_cc8b                    EQU  0CC8BH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
amp_mdl                      EQU  0CC8CH
;@a2l MEASUREMENT SWORD conv=cv_hpa_3 fmt=6.2
amp_mdl_dif_i                EQU  0CC8EH
;@a2l MEASUREMENT SWORD conv=cv_hpa fmt=6.2
amp_mdl_dif_i_mmv            EQU  0CC90H
g_cc92                       EQU  0CC92H
g_cc94                       EQU  0CC94H
lv_maf_cc96                  EQU  0CC96H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_mdl                      EQU  0CC98H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
map_mdl                      EQU  0CC9AH
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.3
ar_red_dif_p_rel             EQU  0CC9CH
g_cc9e                       EQU  0CC9EH
lv_maf_cca0                  EQU  0CCA0H
lv_maf_cca2                  EQU  0CCA2H
lv_maf_cca4                  EQU  0CCA4H
;@a2l MEASUREMENT SWORD conv=cv_hpa fmt=6.2
amp_ad_dif                   EQU  0CCA6H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
amp_estim                    EQU  0CCA8H
;@a2l MEASUREMENT SWORD conv=cv_hpa fmt=6.2
amp_mdl_dif_p                EQU  0CCAAH
;@a2l MEASUREMENT SWORD conv=cv_hpa fmt=6.2
amp_mdl_dif                  EQU  0CCACH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
seg_ctr_amp_ad_pl            EQU  0CCAEH
g_ccb0                       EQU  0CCB0H
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_bas_mmv               EQU  0CCB2H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_kgh_mmv                  EQU  0CCB4H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_sp_is                      EQU  0CCB6H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_sp_is_cor                  EQU  0CCB8H
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif                        EQU  0CCBAH
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_3                      EQU  0CCBCH
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_cor                    EQU  0CCBEH
;@a2l MEASUREMENT UWORD conv=cv_none_32 fmt=6.4
n_sp_is_ratio                EQU  0CCC0H
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_st                     EQU  0CCC2H
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_mmv                    EQU  0CCC4H
n_sp_is_ramp                 EQU  0CCC6H
n_sp_is_base_0               EQU  0CCC8H
n_sp_is_base_1               EQU  0CCCAH
n_sp_is_base_2               EQU  0CCCCH
n_sp_is_base_3               EQU  0CCCEH
n_sp_is_base_4               EQU  0CCD0H
n_sp_is_base_5               EQU  0CCD2H
n_sp_is_add_ch0              EQU  0CCD4H
n_sp_is_add_ch1              EQU  0CCD6H
n_sp_is_add_conv             EQU  0CCD8H
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_1                      EQU  0CCDAH
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_2                      EQU  0CCDCH
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_sp_is_cor_1                EQU  0CCDEH
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_sp_is_cor_2                EQU  0CCE0H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_sp_is_cor_3                EQU  0CCE2H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_sp_is_cor_add              EQU  0CCE4H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_sp_is_cor_add_lp_inp       EQU  0CCE6H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_sp_is_cor_add_mmv          EQU  0CCE8H
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
t_dly_vb_on                  EQU  0CCEAH
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
t_dly_vb_off                 EQU  0CCECH
n_sp_is_base_sel             EQU  0CCEEH
lv_n_sp_is_sel               EQU  0CCF0H
n_sp_is_add_vb               EQU  0CCF2H
n_sp_is_min_vs               EQU  0CCF4H
n_sp_is_add_cfa              EQU  0CCF6H
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_sp_is_dif                  EQU  0CCF8H
t_hys_n_sp_dif               EQU  0CCFAH
n_sp_is_prev                 EQU  0CCFCH
n_sp_is_ramp_rate            EQU  0CCFEH
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_dyn                      EQU  0CD00H
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_cat_down_mdl             EQU  0CD02H
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_cat_down_mdl_1           EQU  0CD04H
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
temp_cat_mdl_1               EQU  0CD06H
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_stat_max                 EQU  0CD08H
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_stat_max_1               EQU  0CD0AH
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_cat_up_mdl_1             EQU  0CD0CH
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_stat_1                   EQU  0CD0EH
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_stat_hom_1               EQU  0CD10H
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_stat_s_1                 EQU  0CD12H
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
add_teg_exo_1                EQU  0CD14H
;@a2l MEASUREMENT UWORD conv=cv_kw fmt=6.2
pow_dif_1                    EQU  0CD16H
pow_dif_max                  EQU  0CD18H
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_subt_st                  EQU  0CD1CH
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_down_subt_st             EQU  0CD1EH
;@a2l MEASUREMENT UWORD conv=cv_degc_9 fmt=6.2
temp_cat_word                EQU  0CD20H
lv_cat_diag_cond             EQU  0CD21H
;@a2l MEASUREMENT UWORD conv=cv_degc_8 fmt=7.2
teg_cat_down_stat_1          EQU  0CD22H
;@a2l MEASUREMENT UWORD conv=cv_g fmt=6.2
int_teg_maf                  EQU  0CD24H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
map_amp_dif                  EQU  0CD26H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=7.3
tib                          EQU  0CD28H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_loss_add                  EQU  0CD2AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_loss_trans                EQU  0CD2CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_min_clu                   EQU  0CD2EH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_min_req_pu               EQU  0CD30H
;@a2l MEASUREMENT SWORD conv=cv_none_86 fmt=6.3
fac_n_dif_is                 EQU  0CD32H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_min_clu_1                 EQU  0CD34H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_min_clu_2                 EQU  0CD36H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_min_req_pu                EQU  0CD38H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_pste                  EQU  0CD3AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_heat_acc              EQU  0CD3CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_trans                 EQU  0CD3EH
;@a2l MEASUREMENT UWORD conv=cv_nm_2 fmt=7.2
tqi_req_tra_slow             EQU  0CD40H
;@a2l MEASUREMENT UWORD conv=cv_nm_2 fmt=7.2
tqi_req_driv                 EQU  0CD42H
lv_lam_cd44                  EQU  0CD44H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
isapwm                       EQU  0CD48H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.2
eff_egr_hom                  EQU  0CD4AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_min_pu                   EQU  0CD4CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_bol                      EQU  0CD4EH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_min_pu_1                 EQU  0CD50H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_add_puc                  EQU  0CD52H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_req_slow                 EQU  0CD54H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_req_fast                 EQU  0CD56H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ems                      EQU  0CD58H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_inter_slow               EQU  0CD5AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_inter_fast               EQU  0CD5CH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_req_fast_inc             EQU  0CD5EH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_req_fast_dec             EQU  0CD60H
;@a2l MEASUREMENT UWORD conv=cv_nm_3 fmt=7.2
tqi_asr_slow                 EQU  0CD62H
;@a2l MEASUREMENT UWORD conv=cv_nm_3 fmt=7.2
tqi_asr_fast                 EQU  0CD64H
;@a2l MEASUREMENT UWORD conv=cv_nm_3 fmt=7.2
tqi_msr                      EQU  0CD66H
;@a2l MEASUREMENT UWORD conv=cv_nms fmt=6.2
tq_msr_int                   EQU  0CD68H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
t_msr                        EQU  0CD6AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_av_ems                   EQU  0CD6CH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_iga_bas                  EQU  0CD6EH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
ratio_tqi_bas_max_stnd_2     EQU  0CD70H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
ratio_tqi_bas_max_stnd_2_inter EQU  0CD72H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
ratio_tqi_bas_max_stnd_3     EQU  0CD74H
lv_tq_cd76                   EQU  0CD76H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_aj                    EQU  0CD78H
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_aj                     EQU  0CD7AH
lv_tq_cd7c                   EQU  0CD7CH
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_ref_aj_sword_1_            EQU  0CD7EH
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_ref_aj                 EQU  0CD80H
;@a2l MEASUREMENT SWORD conv=cv_rpm_8 fmt=6.2
n_dif_ref_lpf_aj             EQU  0CD82H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_fast_clu                  EQU  0CD84H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_mdl_de_aj                 EQU  0CD86H
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=6.0
n_dif_ref_aj_inter           EQU  0CD88H
lv_tq_cd8a                   EQU  0CD8AH
lv_tq_cd8c                   EQU  0CD8CH
lv_tq_cd8e                   EQU  0CD8EH
lv_tq_cd90                   EQU  0CD90H
g_cd92                       EQU  0CD92H
g_cd94                       EQU  0CD94H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_ch                    EQU  0CD96H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_req_act_fil_ch        EQU  0CD98H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_req_act_ch            EQU  0CD9AH
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_conv                      EQU  0CD9CH
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=7.2
n_tur_conv_inter             EQU  0CD9EH
tq_conv_step                 EQU  0CDA0H
st_tq_conv                   EQU  0CDA2H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_scc_sp_hys               EQU  0CDA4H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_scc_sp                   EQU  0CDA6H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=4.3
eff_iga_min_scc              EQU  0CDA8H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tqi_ref_iga_min_scc          EQU  0CDAAH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_scc_bas                  EQU  0CDACH
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_scc_av                   EQU  0CDAEH
g_cdb0                       EQU  0CDB0H
g_cdb2                       EQU  0CDB2H
g_cdb4                       EQU  0CDB4H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
fac_iga_min_teg_iga_bas      EQU  0CDB6H
g_cdb8                       EQU  0CDB8H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_accin_dly                  EQU  0CDBAH
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_accin_off_dly              EQU  0CDBCH
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
t_gs_act_dly                 EQU  0CDBEH
diag_cdc0                    EQU  0CDC0H
diag_cdc2                    EQU  0CDC2H
lv_vs_cdc4                   EQU  0CDC4H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_max_vs_max                 EQU  0CDC6H
;@a2l MEASUREMENT UWORD conv=cv_none_114 fmt=7.4
vs_ratio                     EQU  0CDC8H
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_tco_stuck           EQU  0CDCAH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_tco_stuck_rng       EQU  0CDCCH
g_cdce                       EQU  0CDCEH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_tia_plaus           EQU  0CDD0H
lv_tps_cdd2                  EQU  0CDD2H
lv_tps_cdd4                  EQU  0CDD4H
;@a2l MEASUREMENT SWORD conv=cv_v_2 fmt=5.4
tps_mes_dif                  EQU  0CDD6H
vs_fac                       EQU  0CDD8H
vs_rbm                       EQU  0CDDAH
;@a2l MEASUREMENT UWORD conv=cv_km_per_h_3 fmt=6.2
vs_word                      EQU  0CDDCH
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
t_vs_min_diag                EQU  0CDDEH
vs_cap_acc0                  EQU  0CDE0H
vs_cap_acc1                  EQU  0CDE1H
p_vs_cc_a                    EQU  0CDE4H
p_vs_cc_b                    EQU  0CDE6H
p_vs_cc_c                    EQU  0CDE8H
p_vs_cc_d                    EQU  0CDEAH
vs_cap_acc2                  EQU  0CDECH
vs_cap_acc3                  EQU  0CDEDH
p_vs_cc_e                    EQU  0CDF0H
p_vs_cc_f                    EQU  0CDF2H
p_vs_cc_g                    EQU  0CDF4H
p_vs_cc_h                    EQU  0CDF6H
p_vs_meas                    EQU  0CDF8H
vs_fac_div                   EQU  0CDFAH
vs_scale                     EQU  0CDFCH
t_vs_min_learn               EQU  0CDFEH
;@a2l MEASUREMENT SWORD conv=cv_ms fmt=7.2
ti_ad_add_mmv_1_backup       EQU  0CEA0H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=6.2
ti_ad_fac_mmv_1_backup       EQU  0CEA2H
;@a2l MEASUREMENT SWORD conv=cv_ms_4 fmt=7.2
t_dly_i_ad_1_backup          EQU  0CEA4H
cp_vsmdl_0                   EQU  0CEA6H
cp_vsmdl_1                   EQU  0CEA8H
cp_vsmdl_2                   EQU  0CEAAH
cp_vsmdl_3                   EQU  0CEACH
cp_vsmdl_4                   EQU  0CEAEH
cp_vsmdl_5                   EQU  0CEB0H
cp_vsmdl_6                   EQU  0CEB2H
cp_vsmdl_7                   EQU  0CEB6H
cp_vsmdl_8                   EQU  0CEB8H
teg_load_idx                 EQU  0CEBCH
kwp_cebe                     EQU  0CEBEH
kwp_cec0                     EQU  0CEC0H
kwp_cec2                     EQU  0CEC2H
kwp_cec3                     EQU  0CEC3H
kwp_cec4                     EQU  0CEC4H
kwp_cec5                     EQU  0CEC5H
kwp_dl_crc0                  EQU  0CED4H
kwp_dl_crc1                  EQU  0CED5H
kwp_dl_crc2                  EQU  0CED6H
kwp_dl_crc3                  EQU  0CED7H
kwp_dl_addr                  EQU  0CF02H
kwp_cf03                     EQU  0CF03H
kwp_dl_count                 EQU  0CF04H
kwp_cf05                     EQU  0CF05H
kwp_dl_len                   EQU  0CF06H
kwp_cf08                     EQU  0CF08H
ccp_cf0a                     EQU  0CF0AH
;@a2l MEASUREMENT SWORD conv=cv_none_76
cp_t_state                   EQU  0CF0CH
cp_flow                      EQU  0CF0EH
lv_cp_cf10                   EQU  0CF10H
cp_flow_lim                  EQU  0CF12H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=4.0
t_cp                         EQU  0CF14H
lv_ti_cf16                   EQU  0CF16H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=4.0
t_cp_ad_1                    EQU  0CF18H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_cat_diag        EQU  0CF1AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_cat_diag         EQU  0CF1CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_vls_up_frq      EQU  0CF20H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_vls_up_frq       EQU  0CF22H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_vls_up_plaus    EQU  0CF26H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_vls_up_plaus     EQU  0CF28H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_leak_small      EQU  0CF2CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_leak_small       EQU  0CF2EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_cam_dif_ivvt_in EQU  0CF32H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_cam_dif_ivvt_in  EQU  0CF34H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_lsh_up_obd2     EQU  0CF38H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_lsh_up_obd2      EQU  0CF3AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_lsh_down_obd2   EQU  0CF3EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_lsh_down_obd2    EQU  0CF40H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_tco_stuck       EQU  0CF44H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_tco_stuck        EQU  0CF46H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_tco_plaus       EQU  0CF4AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_tco_plaus        EQU  0CF4CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_th_det          EQU  0CF50H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_th_det           EQU  0CF52H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_ls_down_swt     EQU  0CF56H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_ls_down_swt      EQU  0CF58H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_vls_down_plaus  EQU  0CF5CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_vls_down_plaus   EQU  0CF5EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_toil_stuck      EQU  0CF62H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_toil_stuck       EQU  0CF64H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_cps_mecha       EQU  0CF68H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_cps_mecha        EQU  0CF6AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_leak_large      EQU  0CF6EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_leak_large       EQU  0CF70H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_dtp_noise       EQU  0CF74H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_dtp_noise        EQU  0CF76H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_maf_dif_ch      EQU  0CF7AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_maf_dif_ch       EQU  0CF7CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_tco_stuck_rng   EQU  0CF80H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_tco_stuck_rng    EQU  0CF82H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_comp_rbm_tia_plaus       EQU  0CF86H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_cdn_rbm_tia_plaus        EQU  0CF88H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_dly_isapwm_diag            EQU  0CF8CH
lv_iga_cf8e                  EQU  0CF8EH
lv_cp_cf90                   EQU  0CF90H
lv_cp_cf92                   EQU  0CF92H
lv_cp_cf94                   EQU  0CF94H
;@a2l MEASUREMENT UWORD conv=cv_none_21 fmt=6.3
lamb_sp                      EQU  0CF96H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=5.2
opg_sp_lim_isa               EQU  0CF98H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
sum_maf_tps_plaus_diag_1     EQU  0CF9AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
sum_maf_tps_plaus_diag_2     EQU  0CF9CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
sum_maf_tps_plaus_1          EQU  0CF9EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
sum_maf_tps_plaus_2          EQU  0CFA0H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
sum_lam_plaus_diag_1         EQU  0CFA2H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
sum_lam_plaus_diag_2         EQU  0CFA4H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=4.0
intr_state_diagcp            EQU  0CFA6H
;@a2l MEASUREMENT UWORD conv=cv_s_7 fmt=7.2
t_diagcp                     EQU  0CFA8H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_pl_diagcp                  EQU  0CFAAH
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_mv_per_sword             EQU  0CFACH
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_dif_prs_dyn_sword        EQU  0CFAEH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
flow_sp_cps_ext              EQU  0CFB0H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_mv_ref                   EQU  0CFB2H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
lam_mv_1_diagcp              EQU  0CFB4H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=7.3
ti_add_ad_diagcp             EQU  0CFB6H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
v_dtp_mes                    EQU  0CFB8H
g_cfba                       EQU  0CFBAH
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
v_dtp_dif_diag               EQU  0CFBCH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
flow_sp_cps_vap_chk          EQU  0CFBEH
;@a2l MEASUREMENT UWORD conv=cv_s_3 fmt=5.0
t_ast_evap_rbm               EQU  0CFC0H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
v_dtp                        EQU  0CFC2H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_mv                       EQU  0CFC4H
g_cfc6                       EQU  0CFC6H
g_cfc8                       EQU  0CFC8H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_ofs                      EQU  0CFCAH
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_mv_dyw                   EQU  0CFCCH
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_dif_dyw                  EQU  0CFCEH
g_cfd0                       EQU  0CFD0H
g_cfd2                       EQU  0CFD2H
g_cfd4                       EQU  0CFD4H
g_cfd6                       EQU  0CFD6H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_cor                      EQU  0CFD8H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_evac_beg_diagcp          EQU  0CFDAH
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_dif_act_grd_diagcp       EQU  0CFDCH
;@a2l MEASUREMENT UWORD conv=cv_s_7 fmt=7.2
t_dtp_grd_diagcp             EQU  0CFDEH
;@a2l MEASUREMENT SWORD conv=cv_hpa_per_s_3 fmt=8.3
dtp_grd                      EQU  0CFE0H
g_cfe2                       EQU  0CFE2H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=4.0
maf_mmv_diagcp               EQU  0CFE4H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_evac_mmv                 EQU  0CFE6H
;@a2l MEASUREMENT SWORD conv=cv_hpa_per_s fmt=8.3
dtp_evac_slop                EQU  0CFE8H
;@a2l MEASUREMENT SWORD conv=cv_hpa_per_s fmt=8.3
dtp_evac_slop_mmv            EQU  0CFEAH
;@a2l MEASUREMENT SWORD conv=cv_hpa_per_s fmt=8.3
dtp_evac_slop_mmv_max        EQU  0CFECH
;@a2l MEASUREMENT SWORD conv=cv_hpa_per_s fmt=8.3
dtp_evac_slop_mmv_min        EQU  0CFEEH
;@a2l MEASUREMENT UWORD conv=cv_hpa_per_s fmt=8.3
dtp_evac_slop_mmv_dif        EQU  0CFF0H
;@a2l MEASUREMENT SWORD conv=cv_hpa_per_s fmt=8.3
dtp_slop                     EQU  0CFF2H
g_cff4                       EQU  0CFF4H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_sum_dtp                  EQU  0CFF6H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
tot_sum_dtp                  EQU  0CFF8H
;@a2l MEASUREMENT SLONG conv=cv_none_110 fmt=12.2
tot_dif_sig_bas              EQU  0CFFAH
g_cffc                       EQU  0CFFCH
;@a2l MEASUREMENT SLONG conv=cv_none_110 fmt=12.2
tot_dif_sig_diag             EQU  0CFFEH
g_d000                       EQU  0D000H
;@a2l MEASUREMENT UWORD conv=cv_none_18 fmt=8.5
diagcp_mdl_bas               EQU  0D002H
;@a2l MEASUREMENT UWORD conv=cv_none_18 fmt=8.5
diagcp_mdl_estim             EQU  0D004H
;@a2l MEASUREMENT UWORD conv=cv_none_18 fmt=8.5
diagcp_mdl_diag              EQU  0D006H
;@a2l MEASUREMENT UWORD conv=cv_none_18 fmt=8.5
diagcp_mdl_end               EQU  0D008H
;@a2l MEASUREMENT UWORD conv=cv_dm2 fmt=9.7
diagcp_ar                    EQU  0D00AH
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_mmv_diagcp                EQU  0D00CH
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
v_dtp_max_diag               EQU  0D00EH
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
v_dtp_min_diag               EQU  0D010H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
maf_cps_max_diag             EQU  0D012H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
maf_cps_min_diag             EQU  0D014H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
maf_cps_dif_diag             EQU  0D016H
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_vap_chk                   EQU  0D018H
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_mmv_vap_chk               EQU  0D01AH
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_mmv_vap_chk_grd           EQU  0D01CH
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_mmv_vap_chk_grd_sum       EQU  0D01EH
;@a2l MEASUREMENT UWORD conv=cv_none_17 fmt=6.4
cl_vap_chk_tmp               EQU  0D020H
;@a2l MEASUREMENT SWORD conv=cv_kg_per_h_5 fmt=7.4
fuel_flow_cp_vap_chk         EQU  0D022H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
lam_dif_cp_vap_chk           EQU  0D024H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
lam_0_cp_vap_chk             EQU  0D026H
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_dtp_noise           EQU  0D028H
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_cps_mecha           EQU  0D02AH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_leak_small          EQU  0D02CH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_leak_large          EQU  0D02EH
lv_cp_d030                   EQU  0D030H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_dif_cor_sword            EQU  0D032H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_dif_cor_mod_6_sword      EQU  0D034H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_dif_act_sword            EQU  0D036H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_mv_mod_6_sword           EQU  0D038H
;@a2l MEASUREMENT SWORD conv=cv_hpa_2 fmt=8.3
dtp_sword                    EQU  0D03AH
;@a2l MEASUREMENT SBYTE conv=cv_hpa_9 fmt=8.3
dtp_sbyte_1_                 EQU  0D03BH
g_d03c                       EQU  0D03CH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_vls_up_plaus        EQU  0D03EH
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_vls_up_frq          EQU  0D040H
;@a2l MEASUREMENT UWORD conv=cv_k fmt=4.0
temp_dif_lsh_up_obd2         EQU  0D042H
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_lsh_up_obd2         EQU  0D044H
mis_crank_seg                EQU  0D046H
mis_maf_in                   EQU  0D048H
diag_d049                    EQU  0D049H
;@a2l MEASUREMENT SWORD conv=cv_us fmt=6.0
er_av                        EQU  0D04AH
;@a2l MEASUREMENT SWORD conv=cv_us fmt=6.0
thd_er_av                    EQU  0D04CH
;@a2l MEASUREMENT SLONG conv=cv_us fmt=11.0
drv0_er                      EQU  0D04EH
er_drv0_carry                EQU  0D050H
;@a2l MEASUREMENT SWORD conv=cv_us fmt=6.0
drv1_er                      EQU  0D052H
;@a2l MEASUREMENT UWORD conv=cv_us fmt=5.0
seg_t_cor                    EQU  0D054H
er_seg_t0                    EQU  0D056H
er_seg_t2                    EQU  0D05AH
er_seg_t4                    EQU  0D05EH
er_seg_t5                    EQU  0D060H
er_seg_t6                    EQU  0D062H
g_d066                       EQU  0D066H
;@a2l MEASUREMENT SWORD conv=cv_us fmt=6.0
drv2_mmv_er                  EQU  0D06EH
;@a2l MEASUREMENT ULONG conv=cv_none_73 fmt=10.0
mis_nr_tdc_er                EQU  0D070H
mis_nr_tdc_er_hi             EQU  0D072H
mis_maf_dif_dly              EQU  0D074H
maf_min_er                   EQU  0D076H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_mis_tot_dc               EQU  0D090H
;@a2l MEASUREMENT ULONG conv=cv_none_73 fmt=10.0
ctr_mis_tot_nvmy             EQU  0D092H
ctr_mis_tot_hi               EQU  0D094H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_mis_dc_cyl_0_            EQU  0D096H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_mis_dc_cyl_1_            EQU  0D098H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_mis_dc_cyl_2_            EQU  0D09AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_mis_dc_cyl_3_            EQU  0D09CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_mis_dc_mmv_cyl_0_        EQU  0D09EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_mis_dc_mmv_cyl_1_        EQU  0D0A0H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_mis_dc_mmv_cyl_2_        EQU  0D0A2H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ctr_mis_dc_mmv_cyl_3_        EQU  0D0A4H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_loss_ecf                  EQU  0D0A6H
;@a2l MEASUREMENT SWORD conv=cv_mg_per_stk_8 fmt=5.2
maf_dif_diag_ch_1            EQU  0D0A8H
;@a2l MEASUREMENT SLONG conv=cv_mg_2 fmt=10.2
maf_dif_diag_ch_int_1        EQU  0D0AAH
maf_dif_int1_hi              EQU  0D0ACH
;@a2l MEASUREMENT SWORD conv=cv_mg_per_stk_8 fmt=5.2
maf_dif_diag_ch_2            EQU  0D0AEH
;@a2l MEASUREMENT SLONG conv=cv_mg_2 fmt=10.2
maf_dif_diag_ch_int_2        EQU  0D0B0H
maf_dif_int2_hi              EQU  0D0B2H
;@a2l MEASUREMENT SWORD conv=cv_mg_per_stk_8 fmt=5.2
maf_sp_grd_diag_ch           EQU  0D0B4H
;@a2l MEASUREMENT SWORD conv=cv_mg_per_stk_4 fmt=7.2
maf_mes_fil_dif_diag_ch      EQU  0D0B6H
;@a2l MEASUREMENT SWORD conv=cv_mg_per_stk_4 fmt=7.2
maf_im_mdl_dif_diag_ch       EQU  0D0B8H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
nr_seg_ctr_maf_dif_diag_ch_1 EQU  0D0BAH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
nr_seg_ctr_maf_dif_diag_ch_2 EQU  0D0BCH
maf_sp_z0                    EQU  0D0BEH
maf_sp_z1                    EQU  0D0C0H
maf_sp_z2                    EQU  0D0C2H
maf_sp_z3                    EQU  0D0C4H
maf_mes_fil_z                EQU  0D0C6H
maf_im_mdl_z                 EQU  0D0C8H
;@a2l MEASUREMENT UWORD conv=cv_none_92 fmt=7.5
rate_rbm_maf_dif_ch          EQU  0D0CAH
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_is                         EQU  0D0CCH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
fmy_f_anz                    EQU  0D0CEH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
fmy_s_f_anz                  EQU  0D0CFH
lv_tps_d0d1                  EQU  0D0D1H
dtc_table                    EQU  0D0DAH
obd_d0e8                     EQU  0D0E8H
obd_ff_ctl                   EQU  0D0ECH
lv_maf_d0ed                  EQU  0D0EDH
lv_maf_d0f6                  EQU  0D0F6H
lv_maf_d104                  EQU  0D104H
dtc_done_maf_dif_ch          EQU  0D112H
diag_d120                    EQU  0D120H
diag_d12e                    EQU  0D12EH
g_d13c                       EQU  0D13CH
diag_d14a                    EQU  0D14AH
diag_d158                    EQU  0D158H
g_d15d                       EQU  0D15DH
g_d166                       EQU  0D166H
lv_tco_d16b                  EQU  0D16BH
lv_tco_d174                  EQU  0D174H
tco_diag_ena                 EQU  0D179H
dtc_done_tco                 EQU  0D182H
dtc_done_tco_sub             EQU  0D190H
g_d19e                       EQU  0D19EH
dtc_done_tco_rat             EQU  0D1ACH
dtc_done_tco_grd             EQU  0D1BAH
g_d1c8                       EQU  0D1C8H
lv_lam_d1d6                  EQU  0D1D6H
dtc_st_vls_up                EQU  0D1DAH
dtc_flg_vls_up               EQU  0D1DBH
dtc_done_vls_up              EQU  0D1E4H
dtc_flg_vls_up_b             EQU  0D1E9H
dtc_done_vls_up_b            EQU  0D1F2H
dtc_flg_vls_up_puc           EQU  0D1F7H
dtc_done_vls_up_puc          EQU  0D200H
dtc_flg_vls_up_stk           EQU  0D205H
dtc_done_vls_up_stk          EQU  0D20EH
dtc_flg_vls_up_c             EQU  0D213H
dtc_done_vls_up_c            EQU  0D21CH
dtc_st_vls_down              EQU  0D220H
dtc_flg_vls_down             EQU  0D221H
dtc_done_vls_down            EQU  0D22AH
dtc_flg_vls_down_puc         EQU  0D22FH
dtc_done_vls_down_puc        EQU  0D238H
diag_d246                    EQU  0D246H
dtc_st_lsh_up                EQU  0D254H
dtc_st_lsh_down              EQU  0D262H
dtc_done_m06_lsh_up          EQU  0D266H
dtc_done_o2h_0               EQU  0D270H
dtc_done_m06_lsh_down        EQU  0D274H
dtc_done_o2h_1               EQU  0D27EH
dtc_done_m06_misrate         EQU  0D282H
diag_d28c                    EQU  0D28CH
g_d29a                       EQU  0D29AH
dtc_done_m06_o2up            EQU  0D29EH
dtc_done_o2_0                EQU  0D2A8H
dtc_done_m06_cat             EQU  0D2ACH
dtc_done_o2_1                EQU  0D2B6H
dtc_done_m06_o2dn            EQU  0D2BAH
dtc_done_o2_2                EQU  0D2C4H
dtc_done_m06_fsd             EQU  0D2C8H
lv_cps_d2c9                  EQU  0D2C9H
diag_d2d2                    EQU  0D2D2H
dtc_st_cps                   EQU  0D2E0H
dtc_done_m06_cp_cps          EQU  0D2E4H
dtc_done_cp_4                EQU  0D2EEH
g_d2fc                       EQU  0D2FCH
g_d301                       EQU  0D301H
diag_d30a                    EQU  0D30AH
diag_d318                    EQU  0D318H
dtc_done_m06_cp_dia2         EQU  0D31CH
dtc_done_cp_0                EQU  0D326H
g_d328                       EQU  0D328H
dtc_done_m06_cp_dia          EQU  0D32AH
dtc_done_cp_1                EQU  0D334H
g_d336                       EQU  0D336H
dtc_done_m06_cp_dtp          EQU  0D338H
dtc_done_cp_2                EQU  0D342H
g_d344                       EQU  0D344H
dtc_done_cp_3                EQU  0D350H
g_d352                       EQU  0D352H
dtc_st_sov                   EQU  0D35EH
g_d36c                       EQU  0D36CH
dtc_st_inj_cyl0              EQU  0D370H
dtc_st_igc0                  EQU  0D37AH
dtc_st_inj_cyl1              EQU  0D37EH
dtc_st_igc1                  EQU  0D388H
dtc_st_inj_cyl2              EQU  0D38CH
dtc_st_igc2                  EQU  0D396H
dtc_st_inj_cyl3              EQU  0D39AH
dtc_st_igc3                  EQU  0D3A4H
lv_iga_d3b2                  EQU  0D3B2H
lv_iga_d3c0                  EQU  0D3C0H
lv_iga_d3ce                  EQU  0D3CEH
lv_iga_d3dc                  EQU  0D3DCH
lv_knk_d3ea                  EQU  0D3EAH
g_d426                       EQU  0D426H
diag_d430                    EQU  0D430H
g_d434                       EQU  0D434H
diag_d43e                    EQU  0D43EH
lv_iga_d44c                  EQU  0D44CH
lv_iga_d45a                  EQU  0D45AH
dtc_cond_rly_ac              EQU  0D45EH
dtc_st_rly_ac                EQU  0D468H
dtc_cond_rly_efp             EQU  0D46CH
dtc_st_rly_efp               EQU  0D476H
dtc_st_ecu_mil               EQU  0D47AH
dtc_occ_ctr                  EQU  0D47CH
dtc_st_scratch               EQU  0D47DH
dtc_ff_ram0                  EQU  0D47EH
dtc_ff_ram1                  EQU  0D47FH
dtc_act_acc_lo               EQU  0D480H
dtc_act_acc_hi               EQU  0D481H
dtc_ff_trt_hi                EQU  0D482H
dtc_ff_trt_lo                EQU  0D483H
dtc_ecu_flags                EQU  0D484H
dtc_ff_len                   EQU  0D487H
diag_d492                    EQU  0D492H
diag_d494                    EQU  0D494H
obd_mon_cat_ena              EQU  0D496H
diag_d4a0                    EQU  0D4A0H
obd_mon_o2_ena               EQU  0D4A4H
diag_d4ae                    EQU  0D4AEH
diag_d4b0                    EQU  0D4B0H
dtc_st_mis_cyl0              EQU  0D4B2H
g_d4b3                       EQU  0D4B3H
dtc_flg_mis_cyl0             EQU  0D4BCH
dtc_st_mis_cyl1              EQU  0D4C0H
g_d4c1                       EQU  0D4C1H
dtc_flg_mis_cyl1             EQU  0D4CAH
dtc_st_mis_cyl2              EQU  0D4CEH
g_d4cf                       EQU  0D4CFH
dtc_flg_mis_cyl2             EQU  0D4D8H
dtc_st_mis_cyl3              EQU  0D4DCH
g_d4dd                       EQU  0D4DDH
dtc_flg_mis_cyl3             EQU  0D4E6H
dtc_cond_mil                 EQU  0D4EAH
dtc_st_mil                   EQU  0D4F4H
dtc_done_imob_a              EQU  0D502H
dtc_done_imob_b              EQU  0D510H
dtc_done_imob_c              EQU  0D51EH
dtc_done_imob_d              EQU  0D52CH
imob_d53a                    EQU  0D53AH
dtc_st_imob                  EQU  0D53EH
dtc_st_mil_imob              EQU  0D548H
dtc_cond_fan_l               EQU  0D54CH
dtc_st_rly_fan_l             EQU  0D556H
dtc_cond_fan_h               EQU  0D55AH
dtc_st_rly_fan_h             EQU  0D564H
can_d568                     EQU  0D568H
can_d572                     EQU  0D572H
can_d580                     EQU  0D580H
can_d58e                     EQU  0D58EH
can_d59c                     EQU  0D59CH
can_d5aa                     EQU  0D5AAH
dtc_toil_sub                 EQU  0D5AFH
dtc_done_toil                EQU  0D5B8H
dtc_done_toil_stuck          EQU  0D5C6H
dtc_done_toil_plaus_h        EQU  0D5D4H
dtc_done_toil_plaus_l        EQU  0D5E2H
dtc_done_toil_rat            EQU  0D5F0H
lv_ivvt_d5f5                 EQU  0D5F5H
g_d5fe                       EQU  0D5FEH
lv_ivvt_d603                 EQU  0D603H
lv_ivvt_d60c                 EQU  0D60CH
g_d61a                       EQU  0D61AH
lv_ivvt_d61f                 EQU  0D61FH
lv_ivvt_d628                 EQU  0D628H
diag_d62c                    EQU  0D62CH
lv_ivvt_d62d                 EQU  0D62DH
g_d636                       EQU  0D636H
diag_d644                    EQU  0D644H
diag_d652                    EQU  0D652H
diag_d660                    EQU  0D660H
kwp_d664                     EQU  0D664H
kwp_d665                     EQU  0D665H
obd_d672                     EQU  0D672H
obd_d673                     EQU  0D673H
obd_d674                     EQU  0D674H
obd_d675                     EQU  0D675H
obd_ff_rpm                   EQU  0D676H
obd_ff_ti_lam                EQU  0D678H
obd_ff_lam_ad                EQU  0D67AH
obd_ff_lam_carrier           EQU  0D67CH
obd_ff_maf                   EQU  0D67EH
obd_ff_tast                  EQU  0D680H
obd_ff_cp_duty               EQU  0D682H
obd_ff_amp                   EQU  0D684H
obd_ff_tps                   EQU  0D686H
obd_ff_maf_ratio             EQU  0D688H
obd_ff_lamb_sp               EQU  0D68AH
obd_ff_purge_vol             EQU  0D68CH
obd_ff_vbat                  EQU  0D68DH
obd_ff_tam                   EQU  0D68FH
obd_ff_lam_ready             EQU  0D690H
obd_ff_load                  EQU  0D691H
obd_ff_misc                  EQU  0D692H
obd_ff_vs                    EQU  0D693H
obd_ff_tco                   EQU  0D694H
obd_ff_iga                   EQU  0D695H
obd_ff_tia                   EQU  0D696H
obd_ff_tps_raw               EQU  0D697H
obd_ff_mon_id                EQU  0D698H
obd_ff_src                   EQU  0D699H
obd_rdy_complete             EQU  0D70CH
obd_rdy_support              EQU  0D70EH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
sum_obd_diag_ram_sum_cat_eff_1_diag EQU  0D718H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
sum_obd_diag_ram_sum_diagcp  EQU  0D71AH
ctr_mis_a                    EQU  0D71CH
ctr_mis_b                    EQU  0D71DH
;@a2l MEASUREMENT UWORD conv=cv_km fmt=6.0
dist_dtc_clr                 EQU  0D71EH
obd_d720                     EQU  0D720H
obd_d722                     EQU  0D722H
lv_maf_d724                  EQU  0D724H
lv_maf_d726                  EQU  0D726H
;@a2l MEASUREMENT UWORD conv=cv_m fmt=5.0
t_act_mil                    EQU  0D728H
;@a2l MEASUREMENT UWORD conv=cv_m fmt=5.0
t_dtc_clr                    EQU  0D72AH
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
v_maf_trim                   EQU  0D72CH
kwp_lid90_idx                EQU  0D73FH
ccp_svc_cmd                  EQU  0D740H
ccp_svc_param                EQU  0D742H
g_d743                       EQU  0D743H
ccp_svc_arg                  EQU  0D744H
g_d745                       EQU  0D745H
g_d746                       EQU  0D746H
g_d747                       EQU  0D747H
g_d748                       EQU  0D748H
g_d749                       EQU  0D749H
g_d74a                       EQU  0D74AH
g_d74b                       EQU  0D74BH
ccp_d74c                     EQU  0D74CH
ccp_d750                     EQU  0D750H
ccp_d752                     EQU  0D752H
ccp_session_state            EQU  0D754H
ccp_d756                     EQU  0D756H
ccp_d760                     EQU  0D760H
ccp_d762                     EQU  0D762H
g_d768                       EQU  0D768H
g_d76a                       EQU  0D76AH
ccp_d76c                     EQU  0D76CH
ccp_d76e                     EQU  0D76EH
ccp_d770                     EQU  0D770H
ign_cc_0                     EQU  0D77CH
ign_cc_1                     EQU  0D77EH
kwp_cmd_id                   EQU  0D780H
kwp_cmd_param                EQU  0D781H
kwp_dl_buf                   EQU  0D782H
kwp_dl_data1                 EQU  0D783H
kwp_dl_data2                 EQU  0D784H
kwp_dl_data3                 EQU  0D785H
kwp_dl_data4                 EQU  0D786H
kwp_dl_data5                 EQU  0D787H
kwp_sec_level                EQU  0D788H
kwp_resp_pad                 EQU  0D78AH
kwp_nrc_D78B                 EQU  0D78BH
kwp_resp_cmd_echo            EQU  0D78CH
kwp_resp_status2             EQU  0D78DH
kwp_resp_addr_lo             EQU  0D78EH
kwp_resp_addr_hi             EQU  0D78FH
kwp_resp_cnt_lo              EQU  0D790H
kwp_resp_cnt_hi              EQU  0D791H
kwp_resp_status              EQU  0D792H
ccp_d794                     EQU  0D794H
ccp_d796                     EQU  0D796H
ccp_prog_state_D798          EQU  0D798H
ccp_d7b8                     EQU  0D7B8H
ccp_d7ba                     EQU  0D7BAH
ccp_d7bc                     EQU  0D7BCH
ccp_d7be                     EQU  0D7BEH
ccp_d7c0                     EQU  0D7C0H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
cyl_id_sam_trig              EQU  0E000H
lamb_mv                      EQU  0E002H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
maf_bas                      EQU  0E004H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
v_acp_mes                    EQU  0E006H
acp_avg_acc                  EQU  0E008H
kwp_nrsp0                    EQU  0E00AH
kwp_nrsp_len                 EQU  0E00CH
kwp_nrsp_pad                 EQU  0E00DH
kwp_nrsp_nrc                 EQU  0E00EH
kwp_nrsp_cmd                 EQU  0E00FH
kwp_nrsp_status              EQU  0E010H
kwp_nrsp_addr_lo             EQU  0E011H
kwp_nrsp_addr_hi             EQU  0E012H
kwp_nrsp_cnt_lo              EQU  0E013H
kwp_nrsp_cnt_hi              EQU  0E014H
kwp_nrsp_end                 EQU  0E015H
ccp_dto_err0                 EQU  0E01AH
ccp_dto_err2                 EQU  0E01CH
ccp_dto_err3                 EQU  0E01DH
ccp_dto_err4                 EQU  0E01EH
ccp_dto_err5                 EQU  0E01FH
ccp_dto_err6                 EQU  0E020H
ccp_dto_err7                 EQU  0E021H
ccp_dto_err8                 EQU  0E022H
ccp_dto_err9                 EQU  0E023H
ccp_dto_err10                EQU  0E024H
ccp_dto_err11                EQU  0E025H
ccp_e156                     EQU  0E156H
ccp_e158                     EQU  0E158H
ccp_e15a                     EQU  0E15AH
ccp_e164                     EQU  0E164H
ccp_daq_enable_flag          EQU  0E166H
ccp_security_state           EQU  0E168H
ccp_daq_active_mask          EQU  0E16AH
ccp_e1a8                     EQU  0E1A8H
ccp_e1aa                     EQU  0E1AAH
ccp_e1ac                     EQU  0E1ACH
ccp_e1ae                     EQU  0E1AEH
kwp_dl_crc_snap0             EQU  0E1B6H
kwp_dl_crc_snap1             EQU  0E1B7H
kwp_dl_crc_snap2             EQU  0E1B8H
kwp_dl_crc_snap3             EQU  0E1B9H
kwp_e1ba                     EQU  0E1BAH
kwp_buf_limit                EQU  0E546H
kwp_msg_len                  EQU  0E548H
kwp_timing_counter           EQU  0E54AH
kwp_session_p3_timeout       EQU  0E54CH
kwp_dyndef_len               EQU  0E54EH
kwp_req_ptr                  EQU  0E550H
kwp_buf_base                 EQU  0E552H
bl_kwp_sid                   EQU  0E558H
bl_kwp_subfn                 EQU  0E559H
g_e55a                       EQU  0E55AH
g_e55b                       EQU  0E55BH
kwp_session_type_idx         EQU  0E65CH
secacc_unlocked_bits         EQU  0E65DH
kwp_timing_thr_a             EQU  0E65EH
kwp_timing_thr_b             EQU  0E65FH
kwp_session_state            EQU  0E660H
kwp_nrc                      EQU  0E661H
kwp_record_fmt               EQU  0E662H
kwp_dyndef_count             EQU  0E665H
kwp_e666                     EQU  0E666H
kwp_dyndef_fmt               EQU  0E668H
kwp_e765                     EQU  0E765H
bl_kline_baud_reload_lo      EQU  0E772H
bl_kline_baud_reload_hi      EQU  0E774H
bl_kline_proto_state         EQU  0E782H
kwp_req_arg0                 EQU  0E788H
kwp_req_arg1                 EQU  0E78AH
kwp_commobj_handle_tx        EQU  0E78FH
ccp_e79e                     EQU  0E79EH
bl_exec_addr_lo              EQU  0E7A0H
bl_exec_addr_hi              EQU  0E7A2H
bl_exec_src_ptr              EQU  0E7A4H
bl_exec_len                  EQU  0E7A6H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
crc_status                   EQU  0E7B6H
bl_exec_arm_magic            EQU  0E7BCH
bl_exec_magic_b1             EQU  0E7BDH
bl_exec_magic_b2             EQU  0E7BEH
bl_exec_magic_b3             EQU  0E7BFH
kwp_e7c3                     EQU  0E7C3H
bl_prog_session_state        EQU  0E7C5H
imob_e7c6                    EQU  0E7C6H
kwp_range_chk_ptr            EQU  0E7C8H
bl_mem_len                   EQU  0E7CAH
bl_mem_len_hi                EQU  0E7CCH
bl_mem_addr                  EQU  0E7CEH
bl_mem_addr_hi               EQU  0E7D0H
bl_addr_size                 EQU  0E7D2H
kwp_e7d4                     EQU  0E7D4H
kwp_e7d6                     EQU  0E7D6H
inj_cc_1                     EQU  0E7E0H
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
imob_data_ctl_n_32_imob      EQU  0E7E2H
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h fmt=3.0
imob_data_ctl_vs_imob        EQU  0E7E3H
bw_imob_nvm                  EQU  0E7E4H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
imob_data_ctl_key_nr_learn_imob EQU  0E7E6H
ctr_imob_nvm_1               EQU  0E7E7H
ctr_imob_nvm_2               EQU  0E7E8H
cks_imob_nvm                 EQU  0E7EAH
lv_maf_e7fc                  EQU  0E7FCH
lv_maf_e7fe                  EQU  0E7FEH
can_tx_ctrl                  EQU  0EE00H
can_tx_obj_idx               EQU  0EE02H
C1CSR                        EQU  0EF00H
can1_sr                      EQU  0EF01H
C1IR                         EQU  0EF02H
C1BTR                        EQU  0EF04H
C1GMS                        EQU  0EF06H
C1UGML                       EQU  0EF08H
C1LGML                       EQU  0EF0AH
C1UMLM                       EQU  0EF0CH
C1LMLM                       EQU  0EF0EH
C1MCR1                       EQU  0EF10H
C1AR1                        EQU  0EF12H
C1MCFG1                      EQU  0EF16H
C1AR2                        EQU  0EF22H
C1MCFG2                      EQU  0EF26H
C1MCR3                       EQU  0EF30H
C1AR3                        EQU  0EF32H
C1MCFG3                      EQU  0EF36H
PP0_F038                     EQU  0F038H
PP1_F03A                     EQU  0F03AH
PP2_F03C                     EQU  0F03CH
PP3_F03E                     EQU  0F03EH
T7_F050                      EQU  0F050H
T8_F052                      EQU  0F052H
SSCTB_F0B0                   EQU  0F0B0H
SSCRB_F0B2                   EQU  0F0B2H
ODP2_F1C2                    EQU  0F1C2H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_stop_fsd                 EQU  0F37CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_stop_fsd_new             EQU  0F37DH
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=5.3
v_dif_max_mwss_diag          EQU  0F37EH
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=5.3
v_dif_mwss_diag              EQU  0F37FH
diag_f380                    EQU  0F380H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=5.3
v_max_mwss_diag              EQU  0F381H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=5.3
v_min_mwss_diag              EQU  0F382H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
nr_mwss_diag_sample          EQU  0F383H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tam                          EQU  0F384H
;@a2l MEASUREMENT UBYTE conv=cv_none_57 fmt=5.2
fac_teg_min_cor              EQU  0F385H
;@a2l MEASUREMENT UBYTE conv=cv_none_57 fmt=5.2
fac_teg_cat_down_min_cor     EQU  0F386H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
nr_pat_scc_teg_1             EQU  0F387H
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=5.1
iga_tra_knk                  EQU  0F388H
lv_knk_f389                  EQU  0F389H
lv_knk_f38a                  EQU  0F38AH
g_f38b                       EQU  0F38BH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_7 fmt=5.1
iga_st                       EQU  0F38CH
st_isa_pwl                   EQU  0F38DH
;@a2l MEASUREMENT UBYTE conv=cv_rpm_3 fmt=3.0
n_sp_is_adj_asa              EQU  0F38EH
kwp_f38f                     EQU  0F38FH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
pat_inh_iv                   EQU  0F390H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
nr_pat                       EQU  0F391H
;@a2l MEASUREMENT UBYTE conv=cv_none_4 fmt=5.3
fac_vvt_1                    EQU  0F392H
lv_cyl_f393                  EQU  0F393H
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_tdc_2 fmt=4.0
maf_add_isa                  EQU  0F394H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_6 fmt=6.2
iga_ad2_knk                  EQU  0F485H
lv_knk_f486                  EQU  0F486H
lv_iga_f487                  EQU  0F487H
lv_iga_f488                  EQU  0F488H
lv_iga_f489                  EQU  0F489H
lv_iga_f48a                  EQU  0F48AH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
state_iv                     EQU  0F48BH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
state_iv_mis                 EQU  0F48CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ctr_cold_st                  EQU  0F48DH
maf_as_base                  EQU  0F48EH
lv_ti_f48f                   EQU  0F48FH
lv_ti_f490                   EQU  0F490H
lv_ti_f491                   EQU  0F491H
lv_ti_f492                   EQU  0F492H
lv_ti_f493                   EQU  0F493H
lv_lam_f494                  EQU  0F494H
lv_lam_f495                  EQU  0F495H
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
t_acc_fast                   EQU  0F49EH
;@a2l MEASUREMENT UBYTE conv=cv_s_3 fmt=3.0
t_acc_slow                   EQU  0F49FH
t_acc_slow_div               EQU  0F4A0H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
sum_rr                       EQU  0F4A1H
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h fmt=3.0
vs_rr                        EQU  0F4A2H
g_f4a3                       EQU  0F4A3H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco                          EQU  0F4A4H
tco_eng_start                EQU  0F4A5H
lv_ti_f4a6                   EQU  0F4A6H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_mes                      EQU  0F4A7H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_st                       EQU  0F4A8H
;@a2l MEASUREMENT UBYTE conv=cv_degc fmt=6.2
tco_mes_dif_diag             EQU  0F4A9H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_stop                     EQU  0F4AAH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tia                          EQU  0F4ABH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tia_mes                      EQU  0F4ACH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tia_st                       EQU  0F4ADH
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
v_tia                        EQU  0F4AEH
lv_cyl_f4af                  EQU  0F4AFH
tco_sub_state                EQU  0F4B0H
;@a2l MEASUREMENT UBYTE conv=cv_s_5 fmt=5.1
t_dly_tco_sub                EQU  0F4B1H
tco_adc_cnt                  EQU  0F4B2H
tco_mes_grd                  EQU  0F4B3H
tco_mes_z                    EQU  0F4B4H
;@a2l MEASUREMENT UBYTE conv=cv_degtps fmt=5.1
tps                          EQU  0F4B5H
lv_tps_f4b6                  EQU  0F4B6H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
tps_mes                      EQU  0F4B7H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
tps_mes_diag                 EQU  0F4B8H
lv_tps_f4b9                  EQU  0F4B9H
lv_tps_f4ba                  EQU  0F4BAH
lv_tps_f4bb                  EQU  0F4BBH
lv_tps_f4bc                  EQU  0F4BCH
;@a2l MEASUREMENT UBYTE conv=cv_degtps fmt=5.1
tps_sub_diag                 EQU  0F4BDH
;@a2l MEASUREMENT SBYTE conv=cv_degcrk_2 fmt=6.3
iga_er_ad_mem_backup         EQU  0F4BEH
g_f4c3                       EQU  0F4C3H
g_f4c4                       EQU  0F4C4H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
maf_kgh_mes_fac              EQU  0F4C5H
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=6.1
maf_hb                       EQU  0F4C6H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
pwl_dly_ctr                  EQU  0F4C7H
lv_iga_f4c8                  EQU  0F4C8H
g_f4c9                       EQU  0F4C9H
g_f4ca                       EQU  0F4CAH
;@a2l MEASUREMENT UBYTE conv=cv_degc_11 fmt=3.0
toil_gb                      EQU  0F4CBH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
tar_gc                       EQU  0F4CCH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
tcu_obd                      EQU  0F4CDH
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
tqi_tcu_can                  EQU  0F4CEH
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
tqi_msr_can                  EQU  0F4CFH
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
tqi_slw_tcs_can              EQU  0F4D0H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
tqi_tcs_can                  EQU  0F4D1H
can_gear_tcu                 EQU  0F4D2H
;@a2l MEASUREMENT UBYTE conv=cv_nm fmt=3.0
tq_stnd                      EQU  0F4D3H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
state_tq_intv                EQU  0F4D4H
;@a2l MEASUREMENT UBYTE conv=cv_none_4 fmt=5.3
tq_intv_rel_err              EQU  0F4D5H
can_statusmux_idx            EQU  0F4D6H
can_statusmux_div            EQU  0F4D7H
can_statusmux_byte           EQU  0F4D8H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
f_tcu                        EQU  0F4D9H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
swi_cc                       EQU  0F4DAH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
g_sel_disp                   EQU  0F4DBH
ctr_can_busoff               EQU  0F4DCH
ctr_can_tcs_arb_to           EQU  0F4DDH
ctr_can_abs_to               EQU  0F4DEH
ctr_can_tcu_to               EQU  0F4DFH
ctr_can_tcs_to               EQU  0F4E0H
;@a2l MEASUREMENT UBYTE conv=cv_pct_10 fmt=6.2
tps_can                      EQU  0F4E1H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
tqfr_can                     EQU  0F4E2H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
tqi_acor_can                 EQU  0F4E3H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=5.2
tqi_can                      EQU  0F4E4H
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h fmt=3.0
wheel                        EQU  0F4E5H
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h fmt=3.0
wheel_fl_tcs                 EQU  0F4E6H
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h fmt=3.0
wheel_fr_tcs                 EQU  0F4E7H
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h fmt=3.0
wheel_rl_tcs                 EQU  0F4E8H
;@a2l MEASUREMENT UBYTE conv=cv_km_per_h fmt=3.0
wheel_rr_tcs                 EQU  0F4E9H
;@a2l MEASUREMENT UBYTE conv=cv_mmhg fmt=6.2
amp_can                      EQU  0F4EAH
can_ratio_tx                 EQU  0F4EBH
;@a2l MEASUREMENT UBYTE conv=cv_none_80
eng_state                    EQU  0F4ECH
n_hys_pu                     EQU  0F4EDH
n_min_pl_cond                EQU  0F4EEH
dtc_test_result              EQU  0F4EFH
cp_vsdiag_hb                 EQU  0F4F0H
;@a2l MEASUREMENT UBYTE conv=cv_degc_14 fmt=7.2
teg_dyn_hb                   EQU  0F4F1H
;@a2l MEASUREMENT UBYTE conv=cv_hpa_8 fmt=7.2
amp_hb                       EQU  0F4F2H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=6.3
cppwm_hb                     EQU  0F4F3H
;@a2l MEASUREMENT UBYTE conv=cv_s_11 fmt=5.0
t_sum_min_fsd_1_hb           EQU  0F4F4H
;@a2l MEASUREMENT UBYTE conv=cv_s_11 fmt=5.0
t_sum_max_fsd_1_hb           EQU  0F4F5H
;@a2l MEASUREMENT UBYTE conv=cv_ohm_3 fmt=5.0
r_up_ls_1_hb                 EQU  0F4F6H
;@a2l MEASUREMENT UBYTE conv=cv_ohm fmt=5.0
r_up_ls_1_lb                 EQU  0F4F7H
;@a2l MEASUREMENT UBYTE conv=cv_ohm_3 fmt=5.0
r_down_ls_1_hb               EQU  0F4F8H
;@a2l MEASUREMENT UBYTE conv=cv_ohm fmt=5.0
r_down_ls_1_lb               EQU  0F4F9H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=5.3
vls_mmv_min_1_hb             EQU  0F4FAH
;@a2l MEASUREMENT SBYTE conv=cv_pct_2 fmt=6.2
lam_mv_1_hb                  EQU  0F4FBH
;@a2l MEASUREMENT SBYTE conv=cv_pct_2 fmt=5.1
ti_lam_1_hb                  EQU  0F4FCH
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
v_dtp_mes_hb                 EQU  0F4FDH
;@a2l MEASUREMENT UBYTE conv=cv_v_5 fmt=5.3
v_dtp_dif_diag_lb            EQU  0F4FEH
;@a2l MEASUREMENT UBYTE conv=cv_none_78 fmt=8.5
diagcp_mdl_estim_hb          EQU  0F4FFH
;@a2l MEASUREMENT SBYTE conv=cv_hpa_9 fmt=8.3
dtp_mv_hb                    EQU  0F500H
;@a2l MEASUREMENT UBYTE conv=cv_degc fmt=6.2
tco_sub_dif_diag_hb          EQU  0F501H
;@a2l MEASUREMENT UBYTE conv=cv_kg_per_h_6 fmt=6.1
maf_kgh_diag_4               EQU  0F502H
;@a2l MEASUREMENT UBYTE conv=cv_kg_per_h_6 fmt=6.1
maf_kgh_mes_4                EQU  0F503H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=6.3
isapwm_isa_hb                EQU  0F508H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=6.3
opg_av_isa_hb                EQU  0F509H
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=6.3
ivvtpwm_in_1_hb              EQU  0F50AH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
inh_iv_as                    EQU  0F50BH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_rest                     EQU  0F50CH
lv_ti_f50d                   EQU  0F50DH
;@a2l MEASUREMENT SBYTE conv=cv_degcrk fmt=5.0
soi_as                       EQU  0F50EH
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
ti_as_0_                     EQU  0F50FH
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
ti_as_1_                     EQU  0F510H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
ti_as_2_                     EQU  0F511H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
ti_as_3_                     EQU  0F512H
soi_cam_cor                  EQU  0F513H
;@a2l MEASUREMENT UBYTE conv=cv_1_per_10ms_2 fmt=1.0
fco_nr                       EQU  0F514H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_16 fmt=3.0
soi_ast                      EQU  0F515H
ip_idx                       EQU  0F516H
knk_idx_base                 EQU  0F517H
g_f518                       EQU  0F518H
KWP_LID01_StagingBlock       EQU  0F520H
kwp_lid1_id2                 EQU  0F521H
kwp_lid1_id3                 EQU  0F522H
kwp_lid1_id4                 EQU  0F523H
kwp_lid1_stat0               EQU  0F524H
kwp_lid1_stat1               EQU  0F525H
kwp_lid1_stat2               EQU  0F526H
kwp_lid1_stat3               EQU  0F527H
kwp_lid1_stat4               EQU  0F528H
kwp_lid1_stat5               EQU  0F529H
kwp_lid1_stat6               EQU  0F52AH
kwp_lid1_stat7               EQU  0F52BH
kwp_lid1_stat8               EQU  0F52CH
kwp_lid2_id1                 EQU  0F52DH
kwp_lid2_id2                 EQU  0F52EH
kwp_lid2_id3                 EQU  0F52FH
kwp_lid2_id4                 EQU  0F530H
kwp_m_rpm_b                  EQU  0F531H
kwp_m_alti                   EQU  0F532H
kwp_m_vbat                   EQU  0F533H
kwp_lid3_id1                 EQU  0F535H
kwp_lid3_id2                 EQU  0F536H
kwp_lid3_id3                 EQU  0F537H
kwp_lid3_id4                 EQU  0F538H
kwp_m_lshpwm_up              EQU  0F539H
kwp_m_lshpwm_down            EQU  0F53AH
kwp_m_n_sp_is                EQU  0F53BH
kwp_m_lam_dly                EQU  0F53CH
kwp_m_toil                   EQU  0F53DH
kwp_m_iga_cyl1               EQU  0F53EH
kwp_m_iga_cyl2               EQU  0F53FH
kwp_m_iga_cyl3               EQU  0F540H
kwp_m_iga_cyl4               EQU  0F541H
kwp_m_vs                     EQU  0F542H
kwp_lid4_id1                 EQU  0F543H
kwp_lid4_id2                 EQU  0F544H
kwp_lid4_id3                 EQU  0F545H
kwp_lid4_id4                 EQU  0F546H
kwp_m_teg                    EQU  0F547H
kwp_m_cat_max                EQU  0F548H
kwp_lid5_id1                 EQU  0F549H
kwp_lid5_id2                 EQU  0F54AH
kwp_lid5_id3                 EQU  0F54BH
kwp_lid5_id4                 EQU  0F54CH
kwp_lid8_id1                 EQU  0F54DH
kwp_lid8_id2                 EQU  0F54EH
kwp_lid8_id3                 EQU  0F54FH
kwp_lid8_id4                 EQU  0F550H
kwp_lidf1_id1                EQU  0F555H
kwp_lidf1_id2                EQU  0F556H
kwp_lidf1_id3                EQU  0F557H
kwp_lidf1_id4                EQU  0F558H
kwp_lidf1_stat0              EQU  0F559H
kwp_lidf1_stat1              EQU  0F55AH
kwp_m_pv_av                  EQU  0F55BH
kwp_m_vls_up                 EQU  0F55CH
kwp_m_lam_dly_pos            EQU  0F55DH
kwp_m_lam_dly_t              EQU  0F55EH
kwp_m_lam_dly_i              EQU  0F55FH
kwp_lid_len                  EQU  0F560H
lv_cp_f561                   EQU  0F561H
;@a2l MEASUREMENT UBYTE conv=cv_v_3 fmt=5.2
vb                           EQU  0F574H
;@a2l MEASUREMENT UBYTE conv=cv_v_3 fmt=5.2
v_igk                        EQU  0F575H
ctr_maf_rng                  EQU  0F576H
div_maf_avg                  EQU  0F577H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
mtv_ctr                      EQU  0F578H
thd_mtv                      EQU  0F579H
st_mtv                       EQU  0F57AH
capcom_0                     EQU  0F57BH
capcom_1                     EQU  0F57CH
capcom_2                     EQU  0F57DH
capcom_3                     EQU  0F57EH
capcom_4                     EQU  0F57FH
diag_f580                    EQU  0F580H
diag_f581                    EQU  0F581H
g_f582                       EQU  0F582H
diag_f583                    EQU  0F583H
diag_f584                    EQU  0F584H
diag_f585                    EQU  0F585H
diag_f586                    EQU  0F586H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
prev_state_iv                EQU  0F587H
lv_ti_f588                   EQU  0F588H
lv_ti_f589                   EQU  0F589H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
tooth_nr_tipr_first          EQU  0F58AH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
tooth_nr_tipr_fol            EQU  0F58BH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
cyl_tipr_first_cam_high      EQU  0F58CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
cyl_tipr_first_cam_low       EQU  0F58DH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
cyl_tipr_fol_cam_high        EQU  0F58EH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
cyl_tipr_fol_cam_low         EQU  0F58FH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_8 fmt=4.0
soi                          EQU  0F590H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_13 fmt=4.0
eoi                          EQU  0F591H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_8 fmt=4.0
soi_tipr                     EQU  0F592H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_14 fmt=4.0
eoi_tipr                     EQU  0F593H
msk_inj_cyl_ok               EQU  0F594H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
diag_iv                      EQU  0F595H
inj_cc_3                     EQU  0F596H
inj_cc_4                     EQU  0F597H
inj_arm_mask                 EQU  0F598H
inj_cc_5                     EQU  0F599H
diag_f59a                    EQU  0F59AH
inj_ic_cyl0                  EQU  0F59BH
inj_ic_cyl1                  EQU  0F59CH
inj_ic_cyl2                  EQU  0F59DH
inj_ic_cyl3                  EQU  0F59EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
dbl_igc                      EQU  0F59FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
mpl_iga_act                  EQU  0F5A0H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
ign_mpl_crk_max              EQU  0F5A1H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ign_mpl_nr                   EQU  0F5A2H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
inh_igc                      EQU  0F5A3H
ign_cc_3                     EQU  0F5A5H
iga_er_seg                   EQU  0F5A8H
lv_iga_f5a9                  EQU  0F5A9H
lv_iga_f5aa                  EQU  0F5AAH
lv_iga_f5ab                  EQU  0F5ABH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
td_igc_cut                   EQU  0F5ACH
ign_cmp_a                    EQU  0F5ADH
ign_cmp_b                    EQU  0F5AEH
ign_cc_6                     EQU  0F5AFH
ign_cc_7                     EQU  0F5B0H
ign_dwell_a                  EQU  0F5B3H
ign_dwell_b                  EQU  0F5B4H
imob_f5b5                    EQU  0F5B5H
ign_cc_8                     EQU  0F5B6H
capcom_5                     EQU  0F5B7H
smartra_comms_phase          EQU  0F5B8H
smartra_io_subphase          EQU  0F5BAH
smartra_frame_cksum          EQU  0F5BBH
smartra_rx_cksum_rcvd        EQU  0F5BCH
smartra_frame_len_rem        EQU  0F5BDH
diag_f5be                    EQU  0F5BEH
g_f5bf                       EQU  0F5BFH
diag_f5c0                    EQU  0F5C0H
diag_f5c1                    EQU  0F5C1H
diag_f5c2                    EQU  0F5C2H
g_f5c3                       EQU  0F5C3H
diag_f5c4                    EQU  0F5C4H
diag_f5c5                    EQU  0F5C5H
adc_ch_sel                   EQU  0F5C6H
div_adc_ch1                  EQU  0F5C7H
div_adc_ch2                  EQU  0F5C8H
ctr_maf_fault                EQU  0F5C9H
crank_tim_5                  EQU  0F5CAH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
cam_1_level                  EQU  0F5CBH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
cam_err_lih                  EQU  0F5CCH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
first_vld_tooth              EQU  0F5CDH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
crk_tooth_det                EQU  0F5CEH
diag_f5cf                    EQU  0F5CFH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
crk_err_lih_req              EQU  0F5D0H
crank_tim_6                  EQU  0F5D1H
cam_fall_av_z                EQU  0F5D2H
cam_rise_av_z                EQU  0F5D3H
imob_f5d4                    EQU  0F5D4H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
stop_eng                     EQU  0F5D5H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
run_eng                      EQU  0F5D6H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
syn_eng                      EQU  0F5D7H
crank_tim_7                  EQU  0F5D8H
crank_tim_8                  EQU  0F5D9H
crank_tim_9                  EQU  0F5DAH
crank_tim_10                 EQU  0F5DBH
crank_tim_11                 EQU  0F5DCH
crank_tim_12                 EQU  0F5DDH
g_f5e6                       EQU  0F5E6H
capcom_6                     EQU  0F5E7H
capcom_7                     EQU  0F5E8H
capcom_8                     EQU  0F5E9H
g_f5ea                       EQU  0F5EAH
g_f5eb                       EQU  0F5EBH
capcom_9                     EQU  0F5ECH
g_f5ed                       EQU  0F5EDH
g_f5ee                       EQU  0F5EEH
g_f5ef                       EQU  0F5EFH
capcom_10                    EQU  0F5F0H
g_f5f1                       EQU  0F5F1H
ivvt_hpwm_rdy                EQU  0F5F2H
ivvt_hpwm_rng                EQU  0F5F3H
ivvt_cc16_a                  EQU  0F5F4H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1
hld_adj_ivvt_in_1            EQU  0F5F5H
ivvt_cc16_b                  EQU  0F5F6H
dbc_igc0                     EQU  0F5F7H
dbc_igc1                     EQU  0F5F8H
dbc_igc2                     EQU  0F5F9H
dbc_igc3                     EQU  0F5FAH
g_f5fb                       EQU  0F5FBH
g_f5fc                       EQU  0F5FCH
g_f5fd                       EQU  0F5FDH
dbc_cps                      EQU  0F5FEH
dbc_sov                      EQU  0F5FFH
dbc_mil_imob                 EQU  0F600H
dbc_lsh_down                 EQU  0F601H
dbc_lsh_up                   EQU  0F602H
dbc_rly_fan_l                EQU  0F605H
dbc_rly_fan_h                EQU  0F607H
dbc_rly_ac                   EQU  0F608H
dbc_rly_efp                  EQU  0F609H
dbc_mil                      EQU  0F60AH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
iv_diag_mis                  EQU  0F60BH
iga_knk_win_lo_z0            EQU  0F60CH
iga_knk_win_lo_z1            EQU  0F60DH
iga_knk_win_lo_z2            EQU  0F60EH
iga_knk_win_lo_z3            EQU  0F60FH
iga_knk_win_hi_z0            EQU  0F610H
iga_knk_win_hi_z1            EQU  0F611H
iga_knk_win_hi_z2            EQU  0F612H
iga_knk_win_hi_z3            EQU  0F613H
lv_knk_f614                  EQU  0F614H
lv_knk_f615                  EQU  0F615H
lv_knk_f616                  EQU  0F616H
lv_knk_f617                  EQU  0F617H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_gain_0_             EQU  0F618H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_gain_1_             EQU  0F619H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_gain_2_             EQU  0F61AH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_gain_3_             EQU  0F61BH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_int_0_              EQU  0F61CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_int_1_              EQU  0F61DH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_int_2_              EQU  0F61EH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_int_3_              EQU  0F61FH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_fil_0_              EQU  0F620H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_fil_1_              EQU  0F621H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_fil_2_              EQU  0F622H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
knks_cmd_fil_3_              EQU  0F623H
inj_cc_6                     EQU  0F624H
tgl_maf_tbase                EQU  0F626H
lv_sched_diag_inh            EQU  0F627H
tq_hi_rd                     EQU  0F628H
tq_hi_wr                     EQU  0F629H
tq_mid_rd                    EQU  0F62AH
tq_mid_wr                    EQU  0F62BH
tq_lo_rd                     EQU  0F62CH
tq_lo_wr                     EQU  0F62DH
div_maf_tick                 EQU  0F68EH
div_sched_fast               EQU  0F68FH
div_sched_med                EQU  0F690H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
drv1_er_seg_dly_ctr          EQU  0F692H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_is_ad                 EQU  0F694H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_is_ad_conv            EQU  0F696H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_is_ad_acc             EQU  0F698H
;@a2l MEASUREMENT SLONG conv=cv_nm_8 fmt=12.7
tq_dif_is_ad_inter           EQU  0F69AH
lv_tq_f69c                   EQU  0F69CH
;@a2l MEASUREMENT SLONG conv=cv_nm_8 fmt=12.7
tq_dif_is_ad_acc_1_inter     EQU  0F69EH
lv_tq_f6a0                   EQU  0F6A0H
;@a2l MEASUREMENT SLONG conv=cv_nm_8 fmt=12.7
tq_dif_is_ad_acc_conv_inter  EQU  0F6A2H
lv_tq_f6a4                   EQU  0F6A4H
;@a2l MEASUREMENT SLONG conv=cv_nm_8 fmt=12.7
tq_dif_is_ad_conv_inter      EQU  0F6A6H
lv_tq_f6a8                   EQU  0F6A8H
;@a2l MEASUREMENT UWORD conv=cv_pct_4 fmt=6.3
cppwm_ad_mem                 EQU  0F6AAH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h fmt=6.4
flow_cor_cps_old             EQU  0F6ACH
obd_f6ae                     EQU  0F6AEH
obd_f6af                     EQU  0F6AFH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_20 fmt=7.3
cam_ref_ivvt_in_1            EQU  0F6D0H
g_f6d1                       EQU  0F6D1H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_20 fmt=7.3
cam_ref_ivvt_in_lst_1        EQU  0F6D2H
g_f6d3                       EQU  0F6D3H
;@a2l MEASUREMENT SWORD conv=cv_degcrk_18 fmt=7.3
cam_ad_ivvt_in_1             EQU  0F6D4H
g_f6d5                       EQU  0F6D5H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_s_2
cam_dif_int_save_ivvt_in_1   EQU  0F6D6H
diag_f6d8                    EQU  0F6D8H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
opg_sp_st_isa                EQU  0F6DAH
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
opg_rel_st                   EQU  0F6DCH
;@a2l MEASUREMENT SWORD conv=cv_degc_8 fmt=7.2
add_teg_cor                  EQU  0F6DEH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
teg_inci_1_bf_lv_teg_min_thd EQU  0F6E0H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_iga_av_cbk_1             EQU  0F6E2H
;@a2l MEASUREMENT UWORD conv=cv_none_24 fmt=7.4
ti_fl                        EQU  0F6E4H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=6.2
tipr                         EQU  0F6E6H
tib_prev_wf                  EQU  0F6E8H
thd_dif_fast_wf              EQU  0F6EAH
thd_dif_slow_wf              EQU  0F6ECH
tmp32_lo                     EQU  0F6F2H
tmp32_hi                     EQU  0F6F4H
vs_div_num_lo                EQU  0F6F6H
vs_div_num_hi                EQU  0F6F8H
;@a2l MEASUREMENT UWORD conv=cv_g fmt=7.2
maf_int_ch                   EQU  0F6FAH
lv_cat_f6fc                  EQU  0F6FCH
lv_cat_f6fe                  EQU  0F6FEH
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
opg_sp_pwl_isa               EQU  0F708H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_sp_is_max                  EQU  0F70AH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_2 fmt=5.1
vo                           EQU  0F70CH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_2 fmt=5.1
vo_iga                       EQU  0F70EH
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_ivvt                     EQU  0F710H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_2 fmt=5.1
vo_1                         EQU  0F712H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_sub_ivvt                 EQU  0F714H
cam_ref_nvm                  EQU  0F716H
cam_ad_nvm                   EQU  0F718H
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_bas                   EQU  0F71AH
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_bas_thr               EQU  0F71CH
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_bas_thr_ivs           EQU  0F71EH
;@a2l MEASUREMENT UWORD conv=cv_cm2 fmt=7.4
ar_red_bas_isa               EQU  0F720H
;@a2l MEASUREMENT SWORD conv=cv_cm2 fmt=6.4
ar_red_ad_add                EQU  0F722H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.3
ar_red_ad_fac                EQU  0F724H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.3
ar_red_ad_fac_cor            EQU  0F726H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
amp_ad                       EQU  0F728H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.3
prs_ex                       EQU  0F72AH
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_sp                       EQU  0F72CH
;@a2l MEASUREMENT UWORD conv=cv_us fmt=5.0
seg_t_mes                    EQU  0F72EH
vb_filt_idle                 EQU  0F730H
;@a2l MEASUREMENT UWORD conv=cv_none_24 fmt=7.4
ti_wup                       EQU  0F732H
;@a2l MEASUREMENT UWORD conv=cv_none_24 fmt=7.4
ti_cast                      EQU  0F734H
maf_wf_init                  EQU  0F736H
lv_ti_f738                   EQU  0F738H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=5.2
tpspwm                       EQU  0F73AH
lv_tq_f73c                   EQU  0F73CH
lv_lam_f740                  EQU  0F740H
lv_tq_f742                   EQU  0F742H
lv_tq_f744                   EQU  0F744H
lamb_mv_max                  EQU  0F746H
g_f748                       EQU  0F748H
lv_lam_f74a                  EQU  0F74AH
lv_lam_f74e                  EQU  0F74EH
lv_tq_f752                   EQU  0F752H
lv_lam_f754                  EQU  0F754H
lv_lam_f756                  EQU  0F756H
lv_lam_f758                  EQU  0F758H
;@a2l MEASUREMENT UWORD conv=cv_nm_2 fmt=7.2
tqi_gs_fast_dec              EQU  0F75AH
;@a2l MEASUREMENT UWORD conv=cv_nm_2 fmt=7.2
tqi_gs_slow_dec              EQU  0F75CH
;@a2l MEASUREMENT UWORD conv=cv_nm_2 fmt=7.2
tqi_gs_fast_inc              EQU  0F75EH
;@a2l MEASUREMENT UWORD conv=cv_nm_2 fmt=7.2
tqi_gs_slow_inc              EQU  0F760H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_add_acc                   EQU  0F762H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_loss_acc                  EQU  0F764H
tq_loss_acc_z                EQU  0F766H
tq_loss_acc_ramp             EQU  0F768H
;@a2l MEASUREMENT UWORD conv=cv_rpm_3 fmt=4.0
n_max_thd                    EQU  0F76AH
;@a2l MEASUREMENT UWORD conv=cv_us_2 fmt=6.0
seg_t_mes_0_rr_bas           EQU  0F76CH
;@a2l MEASUREMENT UWORD conv=cv_us_5 fmt=6.0
seg_t_mes_0_rr               EQU  0F76EH
;@a2l MEASUREMENT UWORD conv=cv_us_2 fmt=6.0
seg_t_mes_1_rr_bas           EQU  0F770H
;@a2l MEASUREMENT UWORD conv=cv_us_5 fmt=6.0
seg_t_mes_1_rr               EQU  0F772H
;@a2l MEASUREMENT UWORD conv=cv_per_mill_2 fmt=6.2
wheel_grd                    EQU  0F774H
;@a2l MEASUREMENT UWORD conv=cv_per_mill_2 fmt=6.2
wheel_grd_mmv                EQU  0F776H
;@a2l MEASUREMENT UWORD conv=cv_per_mill_2 fmt=6.2
wheel_grd_mmv_thd            EQU  0F778H
g_f77a                       EQU  0F77AH
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=5.3
v_tco_word                   EQU  0F77CH
;@a2l MEASUREMENT UWORD conv=cv_degc_7 fmt=6.2
tco_sub_word                 EQU  0F77EH
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_sub_byte_1_              EQU  0F77FH
;@a2l MEASUREMENT UWORD conv=cv_degc_10 fmt=7.3
tco_sub_dif_diag             EQU  0F780H
diag_f781                    EQU  0F781H
tco_sub_deb_ctr              EQU  0F782H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_mes_min_diag             EQU  0F784H
;@a2l MEASUREMENT UBYTE conv=cv_degc_3 fmt=6.2
tco_mes_max_diag             EQU  0F785H
;@a2l MEASUREMENT UWORD conv=cv_degc_7 fmt=7.3
tco_sub_min_diag             EQU  0F786H
;@a2l MEASUREMENT UWORD conv=cv_degc_7 fmt=7.3
tco_sub_max_diag             EQU  0F788H
tco_adc_sum                  EQU  0F78AH
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=5.3
v_tco_fil                    EQU  0F78CH
;@a2l MEASUREMENT UWORD conv=cv_degtps_4 fmt=6.2
tps_ad_mmv_is                EQU  0F78EH
lv_tps_f78f                  EQU  0F78FH
;@a2l MEASUREMENT UWORD conv=cv_degtps_2 fmt=7.3
tps_seg                      EQU  0F790H
;@a2l MEASUREMENT UWORD conv=cv_degtps_2 fmt=7.3
tps_av                       EQU  0F792H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
tps_mes_10_diag              EQU  0F794H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
maf_tps_diag                 EQU  0F796H
lv_tps_f798                  EQU  0F798H
;@a2l MEASUREMENT UWORD conv=cv_degtps_2 fmt=7.3
tps_av_raw                   EQU  0F79AH
;@a2l MEASUREMENT SWORD conv=cv_degtps_per_s fmt=5.0
tps_grd_sam                  EQU  0F79CH
;@a2l MEASUREMENT SWORD conv=cv_per_mill fmt=6.3
seg_ad_mmv_backup_0_         EQU  0F7A0H
;@a2l MEASUREMENT SWORD conv=cv_per_mill fmt=6.3
seg_ad_mmv_backup_1_         EQU  0F7A2H
;@a2l MEASUREMENT SWORD conv=cv_per_mill fmt=6.3
seg_ad_mmv_backup_2_         EQU  0F7A4H
;@a2l MEASUREMENT SWORD conv=cv_per_mill fmt=6.3
seg_ad_mmv_backup_3_         EQU  0F7A6H
;@a2l MEASUREMENT UBYTE conv=cv_none_2 fmt=5.3
maf_fac_alti_mmv_backup      EQU  0F7A8H
;@a2l MEASUREMENT UWORD conv=cv_degtps_4 fmt=6.2
tps_ad_mmv_is_backup         EQU  0F7AAH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
amp_ad_backup                EQU  0F7ACH
;@a2l MEASUREMENT UWORD conv=cv_none_87 fmt=6.4
fac_thd_ad_er_backup         EQU  0F7AEH
;@a2l MEASUREMENT SWORD conv=cv_cm2 fmt=6.4
ar_red_ad_add_backup         EQU  0F7B0H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=5.3
ar_red_ad_fac_backup         EQU  0F7B2H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_is_ad_backup          EQU  0F7B4H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_is_ad_conv_backup     EQU  0F7B6H
;@a2l MEASUREMENT SWORD conv=cv_nm_2 fmt=7.2
tq_dif_is_ad_acc_backup      EQU  0F7B8H
;@a2l MEASUREMENT UWORD conv=cv_pct_4 fmt=6.3
cppwm_ad_mem_backup          EQU  0F7BAH
;@a2l MEASUREMENT SWORD conv=cv_none_24 fmt=5.2
lamb_er_ad_mem_backup        EQU  0F7BCH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_20 fmt=7.3
cam_ref_ivvt_in_1_backup     EQU  0F7BEH
;@a2l MEASUREMENT SWORD conv=cv_degcrk_18 fmt=7.3
cam_ad_ivvt_in_1_backup      EQU  0F7C0H
cp_vsdiag_lim                EQU  0F7C2H
diag_f7c3                    EQU  0F7C3H
lv_maf_f7c4                  EQU  0F7C4H
lv_maf_f7c5                  EQU  0F7C5H
lamb_sp_cp                   EQU  0F7C6H
cp_vsdiag_acc0               EQU  0F7C8H
cp_vsdiag_acc1               EQU  0F7CAH
cp_vsdiag_acc2               EQU  0F7CCH
cp_vsdiag_acc3               EQU  0F7CEH
cp_vsdiag_acc4               EQU  0F7D0H
cp_vsdiag_acc5               EQU  0F7D2H
cp_vsdiag_acc6               EQU  0F7D4H
cp_vsdiag_acc7               EQU  0F7D6H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.3
isapwm_lih                   EQU  0F7D8H
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.3
opg_av_lih_isa               EQU  0F7DAH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
prs_up_thr                   EQU  0F7DCH
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
prs_up_thr_max               EQU  0F7DEH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_2 fmt=7.2
eff_vol_ofs                  EQU  0F7E0H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_hpa fmt=7.4
eff_vol_slop                 EQU  0F7E2H
;@a2l MEASUREMENT UWORD conv=cv_mg_per_stk_2 fmt=7.2
maf_tqi_ref                  EQU  0F7E4H
g_f7e6                       EQU  0F7E6H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_vol_cor                  EQU  0F7E8H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=7.5
eff_vol_cor_mmv              EQU  0F7EAH
lv_maf_f7ec                  EQU  0F7ECH
;@a2l MEASUREMENT UWORD conv=cv_none_87 fmt=6.4
fac_thd_ad_er                EQU  0F816H
;@a2l MEASUREMENT SWORD conv=cv_per_mill fmt=6.3
seg_ad_mmv_0_                EQU  0F818H
;@a2l MEASUREMENT UWORD conv=cv_none_24 fmt=7.4
ti_cop                       EQU  0F820H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
cppwm_as                     EQU  0F822H
;@a2l MEASUREMENT SBYTE conv=cv_pct_2 fmt=7.2
opg_sp_isa_ext_adj           EQU  0F824H
;@a2l MEASUREMENT UWORD conv=cv_nm_3 fmt=7.2
tqi_asr_req                  EQU  0F826H
;@a2l MEASUREMENT UWORD conv=cv_nm_3 fmt=7.2
tqi_gs_req                   EQU  0F828H
;@a2l MEASUREMENT UWORD conv=cv_nm_3 fmt=7.2
tqi_asr_slw_req              EQU  0F82AH
;@a2l MEASUREMENT UWORD conv=cv_nm_3 fmt=7.2
tqi_msr_req                  EQU  0F82CH
;@a2l MEASUREMENT SWORD conv=cv_rpm_3 fmt=7.2
n_tur_conv                   EQU  0F82EH
can1_tq_scale_tmp            EQU  0F830H
can1_tx_dlc                  EQU  0F832H
can1_tx_b0                   EQU  0F833H
can1_tx_b1                   EQU  0F834H
can_f835                     EQU  0F835H
can1_tx_b3                   EQU  0F836H
can1_tx_b4                   EQU  0F837H
can1_tx_b5                   EQU  0F838H
can_f839                     EQU  0F839H
can1_tx_b7                   EQU  0F83AH
can_f83d                     EQU  0F83DH
can1_rx_b2                   EQU  0F83EH
can1_rx_b3                   EQU  0F83FH
can1_rx_b4                   EQU  0F840H
can1_rx_b5                   EQU  0F841H
can1_rx_b6                   EQU  0F842H
can1_rx_b7                   EQU  0F843H
cycnr_hys_pu                 EQU  0F846H
;@a2l MEASUREMENT UWORD conv=cv_s fmt=6.1
t_ast                        EQU  0F848H
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
t_pu                         EQU  0F84AH
;@a2l MEASUREMENT UWORD conv=cv_s_4 fmt=6.2
t_min_pu                     EQU  0F84CH
maf_mmv_dif                  EQU  0F84EH
lv_maf_f84f                  EQU  0F84FH
ctr_bol_st                   EQU  0F850H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
ecu_diag_sf_word             EQU  0F852H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ecu_diag_sf_byte_1_          EQU  0F853H
obd_mode06_avail2            EQU  0F856H
obd_mode06_avail             EQU  0F858H
dtc_mil_grp                  EQU  0F85CH
can_f85e                     EQU  0F85EH
dtc_grp_maf_dif              EQU  0F862H
diag_f864                    EQU  0F864H
dtc_st_grp_cp                EQU  0F866H
dtc_st_grp_igc               EQU  0F868H
dtc_st_grp_ecu               EQU  0F86AH
dtc_st_grp_can               EQU  0F86CH
diag_f86e                    EQU  0F86EH
dtc_grp_tco                  EQU  0F870H
g_f872                       EQU  0F872H
lv_cat_f874                  EQU  0F874H
g_f876                       EQU  0F876H
lv_iga_f878                  EQU  0F878H
dtc_grp_toil                 EQU  0F87AH
;@a2l MEASUREMENT UWORD conv=cv_h fmt=6.1
trt_word                     EQU  0F87EH
diag_f87f                    EQU  0F87FH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_act                      EQU  0F880H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_act_shadow               EQU  0F882H
ctr_wdt_service              EQU  0F88EH
diag_f890                    EQU  0F890H
diag_f892                    EQU  0F892H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
conf_ad_rst                  EQU  0F894H
diag_f896                    EQU  0F896H
diag_f898                    EQU  0F898H
;@a2l MEASUREMENT UWORD conv=cv_s_3 fmt=6.0
t_ast_obd                    EQU  0F89AH
lv_ti_f89c                   EQU  0F89CH
;@a2l MEASUREMENT UWORD conv=cv_ul fmt=8.2
fco_word_1_                  EQU  0F89EH
wf_sync_fac0                 EQU  0F8A0H
wf_sync_fac1                 EQU  0F8A2H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=6.2
ti_mv                        EQU  0F8A4H
;@a2l MEASUREMENT UWORD conv=cv_none_24 fmt=7.4
ti_fac_cor                   EQU  0F8A6H
;@a2l MEASUREMENT UWORD conv=cv_none_26 fmt=6.4
ti_rfu                       EQU  0F8A8H
ti_mv_add                    EQU  0F8AAH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
cycnr_st_ast                 EQU  0F8ACH
ti_as_min_base               EQU  0F8AEH
ti_as_min                    EQU  0F8B0H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=6.2
ti_cyl_sam                   EQU  0F8B2H
;@a2l MEASUREMENT UWORD conv=cv_hpa fmt=7.2
amp_map_dif                  EQU  0F8B4H
lv_ti_f8b6                   EQU  0F8B6H
lv_ti_f8b8                   EQU  0F8B8H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=6.2
ti1                          EQU  0F8BAH
lv_ti_f8bc                   EQU  0F8BCH
ip_frac                      EQU  0F8BEH
g_f8c0                       EQU  0F8C0H
kwp_m_maf_kgh                EQU  0F90AH
kwp_m_maf_max                EQU  0F90CH
kwp_m_maf_min                EQU  0F90EH
kwp_m_map                    EQU  0F910H
kwp_m_maf_load               EQU  0F912H
kwp_m_tps                    EQU  0F914H
kwp_m_cppwm                  EQU  0F916H
kwp_m_cl                     EQU  0F918H
kwp_m_purge_flow             EQU  0F91AH
kwp_m_ti_cyl1                EQU  0F91CH
kwp_m_ti_cyl2                EQU  0F91EH
kwp_m_ti_cyl3                EQU  0F920H
kwp_m_ti_cyl4                EQU  0F922H
kwp_m_maf_isa                EQU  0F924H
kwp_m_rpm_w                  EQU  0F926H
kwp_m_knk_lvl                EQU  0F928H
kwp_m_lam_ad                 EQU  0F92AH
kwp_m_cat_diag_sum           EQU  0F92CH
kwp_m_lam_frq_diag           EQU  0F92EH
kwp_m_cam_pos                EQU  0F930H
kwp_m_cam_sp                 EQU  0F932H
kwp_m_cam_ref_dif            EQU  0F934H
kwp_m_cam_ad                 EQU  0F936H
kwp_m_cppwm2                 EQU  0F938H
kwp_lid_desc_ptr             EQU  0F93AH
t_oneshot_sched              EQU  0F93CH
sw_timer_a                   EQU  0F93EH
lv_isc_f940                  EQU  0F940H
lv_tco_f942                  EQU  0F942H
g_f944                       EQU  0F944H
g_f946                       EQU  0F946H
req_imob_a                   EQU  0F948H
g_f94a                       EQU  0F94AH
t_max_rest                   EQU  0F94CH
lv_ti_f94e                   EQU  0F94EH
g_f950                       EQU  0F950H
lv_ivvt_f952                 EQU  0F952H
sw_timer_b                   EQU  0F954H
lv_isc_f956                  EQU  0F956H
lv_cp_f958                   EQU  0F958H
lv_cp_f95a                   EQU  0F95AH
lv_cp_f95c                   EQU  0F95CH
g_f95e                       EQU  0F95EH
g_f960                       EQU  0F960H
g_f962                       EQU  0F962H
g_f964                       EQU  0F964H
t_tia_tco_diag               EQU  0F966H
g_f968                       EQU  0F968H
lv_cat_f96a                  EQU  0F96AH
g_f96c                       EQU  0F96CH
g_f96e                       EQU  0F96EH
req_imob_b                   EQU  0F970H
lv_imob_init_done            EQU  0F972H
g_f974                       EQU  0F974H
diag_f976                    EQU  0F976H
state_diagcp_F978            EQU  0F978H
g_f97a                       EQU  0F97AH
t_mis_min_pu                 EQU  0F97CH
diag_f97e                    EQU  0F97EH
lv_ivvt_f980                 EQU  0F980H
t_ref_req_ivvt               EQU  0F982H
lv_vs_f984                   EQU  0F984H
sw_timer_c                   EQU  0F986H
crank_tim_13                 EQU  0F988H
g_f98a                       EQU  0F98AH
lv_cp_f98c                   EQU  0F98CH
lv_isc_f98e                  EQU  0F98EH
cfa_pwl_flag                 EQU  0F990H
g_f992                       EQU  0F992H
req_imob_c                   EQU  0F994H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
conf_lam                     EQU  0F996H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
conf_cat_eff                 EQU  0F998H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
conf_cp                      EQU  0F999H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
conf_diagcp                  EQU  0F99AH
g_f99d                       EQU  0F99DH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
conf_vs                      EQU  0F99FH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
conf_mil_fmy_sam             EQU  0F9A2H
bl_blk_addr_lo               EQU  0F9A6H
bl_blk_addr_hi               EQU  0F9A8H
bl_blk_cnt_lo                EQU  0F9AAH
bl_blk_cnt_hi                EQU  0F9ACH
bl_blk_hdr0                  EQU  0F9AEH
bl_blk_hdr1                  EQU  0F9B0H
bl_blk_end0                  EQU  0F9B2H
bl_blk_end1                  EQU  0F9B4H
bl_cur_addr_lo               EQU  0F9B6H
bl_cur_addr_hi               EQU  0F9B8H
maf_avg                      EQU  0F9BAH
maf_avg2                     EQU  0F9BCH
maf_avg_acc                  EQU  0F9BEH
div_maf_avg2                 EQU  0F9C0H
maf_avg2_acc                 EQU  0F9C2H
mtv_pos_sr                   EQU  0F9C4H
g_f9c6                       EQU  0F9C6H
lv_ivvt_f9c8                 EQU  0F9C8H
cps_pwm_base                 EQU  0F9D4H
cps_pwm_cmp                  EQU  0F9D6H
maf_pwm_base                 EQU  0F9D8H
lv_maf_f9da                  EQU  0F9DAH
imob_pwm_base                EQU  0F9DCH
imob_f9de                    EQU  0F9DEH
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=6.2
tipr_bas                     EQU  0F9E0H
ti_inj_min_pw                EQU  0F9E2H
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=6.2
ti_hom_bas_1                 EQU  0F9E4H
ti_as_cyl0                   EQU  0F9E6H
ti_as_cyl1                   EQU  0F9E8H
ti_as_cyl2                   EQU  0F9EAH
ti_as_cyl3                   EQU  0F9ECH
ti_inj_ext                   EQU  0F9EEH
cp_flowmdl_p0                EQU  0F9F0H
cp_flowmdl_p1                EQU  0F9F2H
cp_flowmdl_p2                EQU  0F9F4H
cp_flowmdl_p3                EQU  0F9F6H
cp_flowmdl_i0                EQU  0F9F8H
cp_flowmdl_i1                EQU  0F9FAH
cp_flowmdl_i2                EQU  0F9FCH
cp_flowmdl_i3                EQU  0F9FEH
ti_wf_sync0                  EQU  0FA00H
ti_wf_sync1                  EQU  0FA02H
ti_wf_inc                    EQU  0FA04H
ti_wf_dec                    EQU  0FA06H
ti_n_pos_rg                  EQU  0FA08H
ti_dur_cyl0                  EQU  0FA0AH
ti_dur_cyl1                  EQU  0FA0CH
ti_dur_cyl2                  EQU  0FA0EH
ti_dur_cyl3                  EQU  0FA10H
inj_cc_7                     EQU  0FA12H
inj_cc_8                     EQU  0FA14H
inj_cc_9                     EQU  0FA16H
inj_cc_10                    EQU  0FA18H
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=6.2
ti_cyl_0_                    EQU  0FA1AH
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=6.2
ti_cyl_1_                    EQU  0FA1CH
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=6.2
ti_cyl_2_                    EQU  0FA1EH
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=6.2
ti_cyl_3_                    EQU  0FA20H
lv_inj_pattern               EQU  0FA22H
fco_acc_lo                   EQU  0FA24H
fco_acc_hi                   EQU  0FA26H
;@a2l MEASUREMENT ULONG conv=cv_us_4 fmt=11.0
fco_sum                      EQU  0FA28H
fco_cyl0                     EQU  0FA2AH
fco_cyl1                     EQU  0FA2CH
fco_cyl2                     EQU  0FA2EH
fco_cyl3                     EQU  0FA30H
fco_cyl4                     EQU  0FA32H
inj_cc_11                    EQU  0FA34H
inj_cc_12                    EQU  0FA36H
;@a2l MEASUREMENT UWORD conv=cv_none_19 fmt=8.6
td_wdt_fac                   EQU  0FA38H
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=7.3
td_mpl_bas                   EQU  0FA3AH
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=7.3
td_mpl_dly_bas               EQU  0FA3CH
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=7.3
td_igc                       EQU  0FA3EH
;@a2l MEASUREMENT UWORD conv=cv_ms_15 fmt=7.3
td_bas                       EQU  0FA40H
ign_cc_9                     EQU  0FA42H
ign_cc_10                    EQU  0FA44H
ign_cc_11                    EQU  0FA46H
ign_cc_12                    EQU  0FA48H
ign_cc_13                    EQU  0FA52H
ign_cc_14                    EQU  0FA54H
ign_cc_15                    EQU  0FA56H
ign_cc_16                    EQU  0FA58H
ign_cc_17                    EQU  0FA5AH
smartra_byte_timer           EQU  0FA5CH
smartra_tx_ptr               EQU  0FA5EH
smartra_rx_ptr               EQU  0FA60H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
vls_cur_off_vls_up_1         EQU  0FA62H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
vls_cur_on_vls_up_1          EQU  0FA64H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
vls_cur_off_vls_down_1       EQU  0FA66H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=5.3
vls_cur_on_vls_down_1        EQU  0FA68H
maf_raw                      EQU  0FA6AH
adc_maf_st                   EQU  0FA6CH
g_fa70                       EQU  0FA70H
lv_maf_fa72                  EQU  0FA72H
g_fa76                       EQU  0FA76H
adc_fa78                     EQU  0FA78H
adc_cp_prs                   EQU  0FA7AH
lv_tps_fa7e                  EQU  0FA7EH
g_fa80                       EQU  0FA80H
diag_fa82                    EQU  0FA82H
lv_maf_fa84                  EQU  0FA84H
lv_tco_fa86                  EQU  0FA86H
g_fa88                       EQU  0FA88H
p_maf_lin_tab                EQU  0FA8AH
imob_fa8c                    EQU  0FA8CH
maf_acc_lo                   EQU  0FA8EH
maf_acc_hi                   EQU  0FA90H
maf_acc2_lo                  EQU  0FA92H
maf_acc2_hi                  EQU  0FA94H
maf_acc_cnt                  EQU  0FA96H
maf_acc2_cnt                 EQU  0FA98H
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_7 fmt=7.2
maf_max                      EQU  0FA9AH
;@a2l MEASUREMENT UWORD conv=cv_kg_per_h_7 fmt=7.2
maf_min                      EQU  0FA9CH
capcom_11                    EQU  0FA9EH
crank_tim_14                 EQU  0FAA0H
crank_tim_15                 EQU  0FAA2H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_2 fmt=5.1
cam_1_psn_av                 EQU  0FAA4H
crank_tim_16                 EQU  0FAA6H
crank_tim_17                 EQU  0FAA8H
;@a2l MEASUREMENT UWORD conv=cv_us_6 fmt=5.0
seg_t_mes_bas                EQU  0FAAAH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
cam_1_edge_ctr               EQU  0FAACH
crank_tim_18                 EQU  0FAAEH
diag_faaf                    EQU  0FAAFH
g_fab0                       EQU  0FAB0H
g_fab2                       EQU  0FAB2H
crank_tim_19                 EQU  0FAD8H
crank_tim_20                 EQU  0FADAH
crank_tim_21                 EQU  0FADCH
g_fade                       EQU  0FADEH
g_fae0                       EQU  0FAE0H
crank_tim_22                 EQU  0FAE2H
crank_tim_23                 EQU  0FAE4H
crank_tim_24                 EQU  0FAE6H
crank_tim_25                 EQU  0FAE8H
g_fae9                       EQU  0FAE9H
crank_tim_26                 EQU  0FAEAH
imob_faec                    EQU  0FAECH
imob_faee                    EQU  0FAEEH
crank_tim_27                 EQU  0FAF0H
crank_tim_28                 EQU  0FAF2H
can_tx_retry                 EQU  0FAF4H
can_tx_status                EQU  0FAF6H
can_tx_full_msk              EQU  0FAF8H
can_tx_ovf_msk               EQU  0FAFAH
ccp_fafc                     EQU  0FAFCH
g_fb06                       EQU  0FB06H
g_fb48                       EQU  0FB48H
g_fb4a                       EQU  0FB4AH
g_fb4c                       EQU  0FB4CH
g_fb8e                       EQU  0FB8EH
g_fb90                       EQU  0FB90H
ivvt_hpwm_cmp_hold           EQU  0FB92H
ivvt_hpwm_div                EQU  0FB94H
ivvt_hpwm_frq_z              EQU  0FB96H
ivvt_hpwm_cmp                EQU  0FB98H
;@a2l MEASUREMENT ULONG conv=cv_us_4 fmt=11.0
t_stop_adj_ivvt_in_1         EQU  0FB9AH
ivvt_epwm_frq                EQU  0FB9CH
ivvt_epwm_sum                EQU  0FB9EH
ivvt_epwm_duty               EQU  0FBA0H
ivvt_epwm_div                EQU  0FBA2H
dtc_mil_req                  EQU  0FBA4H
lv_ivvt_fba6                 EQU  0FBA6H
diag_fba8                    EQU  0FBA8H
diag_fbaa                    EQU  0FBAAH
g_fbac                       EQU  0FBACH
g_fbae                       EQU  0FBAEH
ign_cc_mode                  EQU  0FBB0H
g_fbb2                       EQU  0FBB2H
diag_fbbc                    EQU  0FBBCH
g_fbbe                       EQU  0FBBEH
diag_fbc0                    EQU  0FBC0H
ctr_maf_tick                 EQU  0FBC2H
g_fbdc                       EQU  0FBDCH
ctr_cpu_idle                 EQU  0FBDEH
;@a2l MEASUREMENT UWORD conv=cv_pct fmt=6.2
cpu_load                     EQU  0FBE0H
div_sched_slow               EQU  0FBE2H
SRCP4_FCF0                   EQU  0FCF0H
DSTP4_FCF2                   EQU  0FCF2H
SRCP7_FCFC                   EQU  0FCFCH
DSTP7_FCFE                   EQU  0FCFEH
DPP0_FE00                    EQU  0FE00H
DPP1_FE02                    EQU  0FE02H
DPP2_FE04                    EQU  0FE04H
DPP3_FE06                    EQU  0FE06H
MDH_FE0C                     EQU  0FE0CH
ign_cc_stat                  EQU  0FE0FH
ADDRSEL2_FE1A                EQU  0FE1AH
PW0_FE30                     EQU  0FE30H
PW1_FE32                     EQU  0FE32H
PW2_FE34                     EQU  0FE34H
PW3_FE36                     EQU  0FE36H
T2_FE40                      EQU  0FE40H
T5_FE46                      EQU  0FE46H
T6_FE48                      EQU  0FE48H
CAPREL_FE4A                  EQU  0FE4AH
T0_FE50                      EQU  0FE50H
T1_FE52                      EQU  0FE52H
CC16_FE60                    EQU  0FE60H
CC17_FE62                    EQU  0FE62H
CC19_FE66                    EQU  0FE66H
CC21_FE6A                    EQU  0FE6AH
CC22_FE6C                    EQU  0FE6CH
CC24_FE70                    EQU  0FE70H
CC25_FE72                    EQU  0FE72H
CC26_FE74                    EQU  0FE74H
CC27_FE76                    EQU  0FE76H
CC28_FE78                    EQU  0FE78H
CC29_FE7A                    EQU  0FE7AH
CC30_FE7C                    EQU  0FE7CH
CC0_FE80                     EQU  0FE80H
CC1_FE82                     EQU  0FE82H
CC2_FE84                     EQU  0FE84H
CC3_FE86                     EQU  0FE86H
CC4_FE88                     EQU  0FE88H
CC5_FE8A                     EQU  0FE8AH
CC6_FE8C                     EQU  0FE8CH
CC7_FE8E                     EQU  0FE8EH
CC11_FE96                    EQU  0FE96H
CC12_FE98                    EQU  0FE98H
CC13_FE9A                    EQU  0FE9AH
CC14_FE9C                    EQU  0FE9CH
CC15_FE9E                    EQU  0FE9EH
ADDAT_FEA0                   EQU  0FEA0H
WDT_FEAE                     EQU  0FEAEH
S0TBUF_FEB0                  EQU  0FEB0H
S0RBUF_FEB2                  EQU  0FEB2H
PECC4_FEC8                   EQU  0FEC8H
PECC7_FECE                   EQU  0FECEH
PSW_FF10                     EQU  0FF10H
T78CON_FF20                  EQU  0FF20H
CCM4_FF22                    EQU  0FF22H
CCM5_FF24                    EQU  0FF24H
CCM6_FF26                    EQU  0FF26H
CCM7_FF28                    EQU  0FF28H
T5CON_FF46                   EQU  0FF46H
T01CON_FF50                  EQU  0FF50H
CCM0_FF52                    EQU  0FF52H
CCM1_FF54                    EQU  0FF54H
CCM2_FF56                    EQU  0FF56H
CCM3_FF58                    EQU  0FF58H
T1IC_FF9E                    EQU  0FF9EH
ADCON_FFA0                   EQU  0FFA0H
SSCCON_FFB2                  EQU  0FFB2H
P2_FFC0                      EQU  0FFC0H
DP2_FFC2                     EQU  0FFC2H
P3_FFC4                      EQU  0FFC4H
DP3_FFC6                     EQU  0FFC6H
P4_FFC8                      EQU  0FFC8H
P6_FFCC                      EQU  0FFCCH
P7_FFD0                      EQU  0FFD0H

; --- targets in other link units (boot runtime at 0x2000, bootloader in segment 8) ---
rt_callfar_via_r5r4          EQU  002000H
cstart_reset_selftest_ramtest EQU  088046H
CommObj_Tp_SubmitSegment     EQU  08A6C0H
CommObj_SetPendingByHandle   EQU  08A7CCH
CommObj_ClearPendingFlagByHandle EQU  08A84AH
CommObj_Tp_OnRxFrame         EQU  08A8A6H
CommObj_Tp_TxStateMachine    EQU  08B0F6H
;@a2l MEASUREMENT UWORD conv=cv_ms_10 fmt=7.2
lam_bank_1_lam_up_t_lam_dly_neg EQU  0C778H
BL_Sub_8C778                 EQU  08C778H
BL_Kline_SetBaudrate_Wrapper EQU  08C790H
BL_Kline_SetRxErrIrqEnables  EQU  08C7A8H
KWP_Check_ServicePermission  EQU  08EEE0H
NMITRAP_handler              EQU  08F42EH
NMITRAP_handler_F432         EQU  08F432H
NMITRAP_handler_F436         EQU  08F436H
NMITRAP_handler_F43A         EQU  08F43AH



; ---- RAM objects (A2L measurements) not referenced by the code ----
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
cks_crc_ecu                          EQU  0C17AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
cks_crc_boot                         EQU  0C17CH
;@a2l MEASUREMENT ULONG conv=cv_none_73 fmt=10.0
cks_adr_ecu                          EQU  0C180H
;@a2l MEASUREMENT ULONG conv=cv_none_73 fmt=10.0
cks_adr_boot                         EQU  0C184H
;@a2l MEASUREMENT ULONG conv=cv_none_73 fmt=10.0
cks_adr_cal                          EQU  0C188H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
lv_idx_trip_ivvt                     EQU  0C23EH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=0.0
dummy                                EQU  0C2B7H
;@a2l MEASUREMENT UBYTE conv=cv_ms_12 fmt=5.3
v_dur_igc_envd_0_                    EQU  0C2E6H
;@a2l MEASUREMENT UBYTE conv=cv_ms_12 fmt=5.3
v_dur_igc_envd_1_                    EQU  0C2E7H
;@a2l MEASUREMENT UBYTE conv=cv_ms_12 fmt=5.3
v_dur_igc_envd_2_                    EQU  0C2E8H
;@a2l MEASUREMENT UBYTE conv=cv_ms_12 fmt=5.3
v_dur_igc_envd_3_                    EQU  0C2E9H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
knk_thd_0_                           EQU  0C310H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
knk_thd_1_                           EQU  0C311H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
knk_thd_2_                           EQU  0C312H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
knk_thd_3_                           EQU  0C313H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
cycnr_int_knks_diag                  EQU  0C31CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
cycnr_dyw_knks_diag                  EQU  0C31DH
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_0_                           EQU  0C538H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_1_                           EQU  0C53AH
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_2_                           EQU  0C53CH
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_3_                           EQU  0C53EH
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_mmv_0__sword_1_              EQU  0C542H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_mmv_1__sword_1_              EQU  0C546H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_mmv_2__sword_1_              EQU  0C54AH
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_mmv_3__sword_1_              EQU  0C54EH
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_dif_0_                       EQU  0C550H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_dif_1_                       EQU  0C552H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_dif_2_                       EQU  0C554H
;@a2l MEASUREMENT SWORD conv=cv_1_per_s2 fmt=7.2
er_stnd_dif_3_                       EQU  0C556H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x400 "member of lam_bank_1.lam_up.lam_up_carrier"
lv_auth_lam_cycnr_1                  EQU  0C752H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x1 "member of lam_bank_1.lam_up.lam_up_carrier"
lv_lscl_1                            EQU  0C752H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x2 "member of lam_bank_1.lam_up.lam_up_carrier"
lv_ti_ad_act_1                       EQU  0C752H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x20 "member of lam_bank_1.lam_up.lam_up_carrier"
lv_lam_dyw_1                         EQU  0C752H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x4 "member of lam_bank_1.lam_up.lam_up_carrier"
lv_lam_lim_min_1                     EQU  0C752H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x40 "member of lam_bank_1.lam_up.lam_up_carrier"
lv_lam_once_act_1                    EQU  0C752H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x8 "member of lam_bank_1.lam_up.lam_up_carrier"
lv_lam_lim_max_1                     EQU  0C752H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=6.2
lam_bank_1_lam_up_ti_lam_min         EQU  0C75EH
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=6.2
lam_bank_1_lam_up_ti_lam_max         EQU  0C760H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=6.2
lam_bank_1_lam_up_ti_ad_fac_mmv_rel  EQU  0C766H
;@a2l MEASUREMENT SWORD conv=cv_pct_4 fmt=7.3
lam_bank_1_lam_up_ti_ad_add_mmv_rel_quo EQU  0C76AH
;@a2l MEASUREMENT UWORD conv=cv_ms_10 fmt=7.2
lam_bank_1_lam_up_t_lam_dly_pos_bas  EQU  0C776H
;@a2l MEASUREMENT UWORD conv=cv_ms_10 fmt=7.2
lam_bank_1_lam_up_t_lam_dly_neg_bas  EQU  0C77AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_lam_dly_lam_dly_carrier   EQU  0C792H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x1 "member of lam_bank_1.lam_dly.lam_dly_carrier"
lv_lam_dly_act_1                     EQU  0C792H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x2 "member of lam_bank_1.lam_dly.lam_dly_carrier"
lv_ldc_dly_1                         EQU  0C792H
;@a2l MEASUREMENT UWORD conv=cv_g_2 fmt=7.2
lam_bank_1_lam_dly_maf_int_dly       EQU  0C798H
;@a2l MEASUREMENT SWORD conv=cv_v_5 fmt=4.3
lam_bank_1_lam_dly_vls_dif_dly       EQU  0C79AH
;@a2l MEASUREMENT SWORD conv=cv_ms_4 fmt=7.2
lam_bank_1_lam_dly_t_dly_p           EQU  0C79CH
;@a2l MEASUREMENT UWORD conv=cv_g_2 fmt=7.2
lam_bank_1_lam_dly_maf_int_ldc_dly   EQU  0C7A6H
;@a2l MEASUREMENT UWORD conv=cv_degtps_per_s_2 fmt=8.1
lam_bank_1_lam_dly_tps_grd_sum_dly   EQU  0C7AAH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_lam_puc_struct_lam_puc_carrier EQU  0C7ACH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x2000 "member of lam_bank_1.lam_puc_struct.lam_puc_carrier"
lv_act_int_puc_1                     EQU  0C7ACH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x4000 "member of lam_bank_1.lam_puc_struct.lam_puc_carrier"
lv_int_puc_cdn_1                     EQU  0C7ACH
;@a2l MEASUREMENT UWORD conv=cv_ms_10 fmt=7.2
lam_bank_1_lam_puc_struct_t_dly_puc  EQU  0C7AEH
;@a2l MEASUREMENT UWORD conv=cv_g_2 fmt=7.2
lam_bank_1_lam_puc_struct_maf_int_dly_puc EQU  0C7B0H
;@a2l MEASUREMENT UWORD conv=cv_g_2 fmt=7.2
lam_bank_1_lam_puc_struct_maf_int_puc EQU  0C7B2H
;@a2l MEASUREMENT UWORD conv=cv_none_90 mask=0x200 "member of lam_bank_1.ls_up.ls_up_carrier"
lv_afl_1                             EQU  0C7B4H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x100 "member of lam_bank_1.ls_up.ls_up_carrier"
lv_up_ls_1                           EQU  0C7B4H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x1000 "member of lam_bank_1.ls_up.ls_up_carrier"
lv_vls_up_mmv_lmt_1                  EQU  0C7B4H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x2000 "member of lam_bank_1.ls_up.ls_up_carrier"
lv_vls_up_mmv_stk_vld_1              EQU  0C7B4H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x800 "member of lam_bank_1.ls_up.ls_up_carrier"
lv_up_ls_cdn_1                       EQU  0C7B4H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x1 "member of lam_bank_1.ls_down_struct.ls_down_carrier"
lv_down_ls_1                         EQU  0C7E0H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x2 "member of lam_bank_1.ls_down_struct.ls_down_carrier"
lv_vls_down_mmv_lmt_1                EQU  0C7E0H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x4 "member of lam_bank_1.ls_down_struct.ls_down_carrier"
lv_vls_down_mmv_act_1                EQU  0C7E0H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
lam_bank_1_ls_down_struct_vls_down_high EQU  0C7E4H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x100 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_r_up_ls_vls_rng_cdn_1             EQU  0C80AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x1000 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_r_down_ls_det_1                   EQU  0C80AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x200 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_r_up_ls_drv1_vls_cdn_1            EQU  0C80AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x2000 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_r_down_ls_vls_rng_cdn_1           EQU  0C80AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x40 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_r_up_ls_ena_1                     EQU  0C80AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x400 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_vls_not_vld_up_1                  EQU  0C80AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x4000 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_r_down_ls_drv1_vls_cdn_1          EQU  0C80AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x80 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_r_up_ls_det_1                     EQU  0C80AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x800 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_r_down_ls_ena_1                   EQU  0C80AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x8000 "member of lam_bank_1.ls_cur_struct.ls_cur_carrier"
lv_vls_not_vld_down_1                EQU  0C80AH
;@a2l MEASUREMENT UBYTE conv=cv_s_4 fmt=4.2
lam_bank_1_ls_cur_struct_t_vls_cyc_afl_hld_r_down_ls EQU  0C830H
;@a2l MEASUREMENT SWORD conv=cv_ohm fmt=6.0
lam_bank_1_lsh_down_struct_r_dif_down_ls EQU  0C85AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_diag_struct_ctr_cycnr_r_vls_down_diag EQU  0C866H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_diag_struct_ctr_cycnr_r_vls_down_scg EQU  0C868H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
lam_bank_1_ls_diag_struct_ctr_cycnr_r_vls_up_scg EQU  0C86AH
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x20 "member of lam_bank_1.cat_eff_struct.cat_eff_carrier"
lv_cat_diag_act_1                    EQU  0C870H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x4 "member of lam_bank_1.cat_eff_struct.cat_eff_carrier"
lv_ldc_cat_1                         EQU  0C870H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x40 "member of lam_bank_1.cat_eff_struct.cat_eff_carrier"
lv_cat_diag_cdn_1                    EQU  0C870H
;@a2l MEASUREMENT UWORD conv=cv_v_5 fmt=4.2
lam_bank_1_cat_eff_struct_vls_cat_int EQU  0C888H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x1 "member of lam_bank_1.ls_up_obd2_struct.ls_up_obd2_carrier"
lv_ls_frq_diag_ready_1               EQU  0C894H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x2 "member of lam_bank_1.ls_up_obd2_struct.ls_up_obd2_carrier"
lv_ls_swt_diag_ready_1               EQU  0C894H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x80 "member of lam_bank_1.ls_down_obd2_struct.ls_down_obd2_carrier"
lv_ls_down_diag_1                    EQU  0C8CAH
;@a2l MEASUREMENT UWORD conv=cv_none_68 "member of lam_bank_1.fsd_obd2_struct.fsd_obd2_carrier"
lv_err_max_fsd_1                     EQU  0C908H
;@a2l MEASUREMENT UWORD conv=cv_none_68 "member of lam_bank_1.fsd_obd2_struct.fsd_obd2_carrier"
lv_err_min_fsd_1                     EQU  0C908H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x200 "member of lam_bank_1.fsd_obd2_struct.fsd_obd2_carrier"
lv_act_fsd_1                         EQU  0C908H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x400 "member of lam_bank_1.fsd_obd2_struct.fsd_obd2_carrier"
lv_lam_max_fsd_1                     EQU  0C908H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x800 "member of lam_bank_1.fsd_obd2_struct.fsd_obd2_carrier"
lv_lam_min_fsd_1                     EQU  0C908H
;@a2l MEASUREMENT UWORD conv=cv_s_8 fmt=6.1
lam_bank_1_fsd_obd2_struct_t_sum_diag_fsd EQU  0C912H
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
fsd_win_n_32_unt                     EQU  0C952H
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
fsd_win_lm_unt                       EQU  0C953H
;@a2l MEASUREMENT UBYTE conv=cv_rpm fmt=4.0
fsd_win_n_32_ob                      EQU  0C954H
;@a2l MEASUREMENT UBYTE conv=cv_mg_per_stk fmt=4.0
fsd_win_lm_ob                        EQU  0C955H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_pos_ivvt_lv_cam_raw_dyw_ivvt EQU  0CAEFH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_1_struct_pos_ivvt_cam_raw_dyw_ivvt EQU  0CAF0H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_1_struct_pos_ivvt_cam_ref_raw EQU  0CAF1H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_pos_ivvt_lv_act_cam_ad_ivvt EQU  0CAFAH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_pos_ivvt_lv_tooth_off_det_ena EQU  0CAFBH
;@a2l MEASUREMENT ULONG conv=cv_us_4 fmt=11.0
ivvt_in_1_struct_ctl_ivvt_t_st_adj_ivvt EQU  0CB06H
;@a2l MEASUREMENT ULONG conv=cv_us_4 fmt=11.0
ivvt_in_1_struct_ctl_ivvt_t_act_ivvt EQU  0CB0AH
;@a2l MEASUREMENT SWORD conv=cv_degcrk_2 fmt=7.3
ivvt_in_1_struct_ctl_ivvt_cam_sp_dif_ivvt EQU  0CB12H
;@a2l MEASUREMENT SWORD conv=cv_degcrk_2 fmt=7.3
ivvt_in_1_struct_ctl_ivvt_cam_dif_ivvt EQU  0CB14H
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_sum_ivvt EQU  0CB16H
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_ivvt     EQU  0CB18H
;@a2l MEASUREMENT SWORD conv=cv_degcrk_2 fmt=7.3
ivvt_in_1_struct_ctl_ivvt_cam_mdl_dif_ivvt EQU  0CB1AH
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_ctl_ivvt EQU  0CB1CH
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_ctl_i_ivvt EQU  0CB1EH
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_ctl_i_lim_ivvt EQU  0CB20H
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_ctl_i_lim_1_ivvt EQU  0CB22H
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_slv_tmp_ivvt EQU  0CB24H
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_slv_ivvt EQU  0CB26H
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_lim_ivvt EQU  0CB28H
;@a2l MEASUREMENT SWORD conv=cv_ms_14 fmt=8.1
ivvt_in_1_struct_ctl_ivvt_t_sum_tmp_ivvt EQU  0CB2AH
;@a2l MEASUREMENT UWORD conv=cv_ms_14 fmt=7.1
ivvt_in_1_struct_ctl_ivvt_t_sum_subt_ivvt EQU  0CB30H
;@a2l MEASUREMENT UWORD conv=cv_ms_14 fmt=7.1
ivvt_in_1_struct_ctl_ivvt_t_adj_new_ivvt EQU  0CB34H
;@a2l MEASUREMENT UWORD conv=cv_ms_14 fmt=7.1
ivvt_in_1_struct_ctl_ivvt_t_adj_old_ivvt EQU  0CB36H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_20 fmt=7.3
ivvt_in_1_struct_ctl_ivvt_cam_mdl_dly_not_ivvt_word EQU  0CB38H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_20 fmt=7.3
ivvt_in_1_struct_ctl_ivvt_cam_mdl_ivvt_word EQU  0CB3AH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_19 fmt=6.3
ivvt_in_1_struct_ctl_ivvt_cam_clc_delta_word EQU  0CB3CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_ctl_ivvt_lv_adj_chg_dir_ivvt EQU  0CB3EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_ctl_ivvt_lv_adj_pos_ivvt EQU  0CB3FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_ctl_ivvt_lv_tog_cam_dif EQU  0CB41H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_ctl_ivvt_lv_mdl_adc_ivvt EQU  0CB44H
;@a2l MEASUREMENT UBYTE conv=cv_ms_3 fmt=3.0
ivvt_in_1_struct_ctl_ivvt_dly_ivvt   EQU  0CB45H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_ctl_ivvt_lv_t_sum_if_min_ivvt EQU  0CB7CH
;@a2l MEASUREMENT UBYTE conv=cv_ms_3 fmt=4.0
ivvt_in_1_struct_dly_mes_ivvt_dly_mes_adc_ivvt EQU  0CB7EH
;@a2l MEASUREMENT UBYTE conv=cv_ms_3 fmt=4.0
ivvt_in_1_struct_dly_mes_ivvt_dly_mes_rtd_ivvt EQU  0CB7FH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=4.0
ivvt_in_1_struct_hpwm_de_ad_ivvt_sum_cyc_adh_ivvt EQU  0CB86H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
ivvt_in_1_struct_hpwm_de_ad_ivvt_ivvthpwm_adh EQU  0CB8EH
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
ivvt_in_1_struct_hpwm_de_ad_ivvt_ivvthpwm_adh_save EQU  0CB90H
;@a2l MEASUREMENT SWORD conv=cv_degcrk_s fmt=8.3
ivvt_in_1_struct_hpwm_de_ad_ivvt_cam_dif_int_adh_ivvt EQU  0CB92H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_hpwm_de_ad_ivvt_lv_adh_req_ivvt EQU  0CB95H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ivvt_in_1_struct_hpwm_de_ad_ivvt_sum_state_act_adj_ivvt EQU  0CB96H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_hpwm_mng_ad_ivvt_lv_ivvthpwm_adh_save EQU  0CB9CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_hpwm_mng_ad_ivvt_lv_ivvthpwm_drift_ad_save EQU  0CB9DH
;@a2l MEASUREMENT SWORD conv=cv_degcrk_per_s fmt=7.3
ivvt_in_1_struct_hpwm_drift_ad_ivvt_vel_drift_ivvt EQU  0CBA4H
;@a2l MEASUREMENT SWORD conv=cv_pct fmt=7.3
ivvt_in_1_struct_hpwm_drift_ad_ivvt_ivvthpwm_drift_ad_save EQU  0CBA6H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_hpwm_drift_ad_ivvt_lv_drift_ad_act_ivvt EQU  0CBA8H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ivvt_in_1_struct_hpwm_drift_ad_ivvt_sum_cyc_drift_ad_ivvt EQU  0CBA9H
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_1_struct_hpwm_drift_ad_ivvt_cam_drift_ad_st_ivvt EQU  0CBAAH
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvt_in_1_struct_hpwm_ivvt_ivvthpwm_ad EQU  0CBB0H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_s_2
ivvt_in_1_struct_diag_mec_ivvt_cam_dif_int_diag_ivvt EQU  0CBB2H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_s_2
ivvt_in_1_struct_diag_mec_ivvt_cam_dif_int_rst_diag_ivvt EQU  0CBB4H
;@a2l MEASUREMENT UBYTE conv=cv_none_68
ivvt_in_1_struct_diag_mec_ivvt_lv_err_trip_ivvt EQU  0CBBFH
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=4.1
ivvt_in_struct_hpwm_cam_ivvt_ivvtpwm_rtd EQU  0CBDCH
;@a2l MEASUREMENT UBYTE conv=cv_pct_2 fmt=4.1
ivvt_in_struct_hpwm_cam_ivvt_ivvtpwm_adc EQU  0CBDDH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=4.0
ivvt_in_struct_diag_mec_cam_ivvt_ctr_cam_sp_neut_ivvt EQU  0CBDEH
;@a2l MEASUREMENT UBYTE conv=cv_degcrk_4 fmt=7.3
ivvt_in_struct_pos_mv_ivvt_cam_mv    EQU  0CBEAH
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=4.2
nl_0_                                EQU  0CBF2H
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=4.2
nl_1_                                EQU  0CBF4H
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=4.2
nl_2_                                EQU  0CBF6H
;@a2l MEASUREMENT UWORD conv=cv_v_6 fmt=4.2
nl_3_                                EQU  0CBF8H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=4.1
iga_ad1_knk_0_                       EQU  0CBFAH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=4.1
iga_ad1_knk_1_                       EQU  0CBFCH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=4.1
iga_ad1_knk_2_                       EQU  0CBFEH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=4.1
iga_ad1_knk_3_                       EQU  0CC00H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=6.2
iga_knk_0_                           EQU  0CC02H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=6.2
iga_knk_1_                           EQU  0CC04H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=6.2
iga_knk_2_                           EQU  0CC06H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=6.2
iga_knk_3_                           EQU  0CC08H
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=6.3
iga_ad1_ad2_knk_0_                   EQU  0CC0AH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=6.3
iga_ad1_ad2_knk_1_                   EQU  0CC0CH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=6.3
iga_ad1_ad2_knk_2_                   EQU  0CC0EH
;@a2l MEASUREMENT UWORD conv=cv_degcrk_21 fmt=6.3
iga_ad1_ad2_knk_3_                   EQU  0CC10H
;@a2l MEASUREMENT UWORD conv=cv_none_79 fmt=4.3
dyw_knks_diag                        EQU  0CC1CH
;@a2l MEASUREMENT UWORD conv=cv_none_79 fmt=7.3
v_int_knks_diag                      EQU  0CC1EH
;@a2l MEASUREMENT SWORD conv=cv_hpa fmt=8.2
map_mdl_dif                          EQU  0CC88H
;@a2l MEASUREMENT UWORD conv=cv_kw fmt=6.2
pow_dif_max_1                        EQU  0CD1AH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_cat_diag               EQU  0CF1EH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_vls_up_frq             EQU  0CF24H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_vls_up_plaus           EQU  0CF2AH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_leak_small             EQU  0CF30H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_cam_dif_ivvt_in        EQU  0CF36H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_lsh_up_obd2            EQU  0CF3CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_lsh_down_obd2          EQU  0CF42H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_tco_stuck              EQU  0CF48H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_tco_plaus              EQU  0CF4EH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_th_det                 EQU  0CF54H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_ls_down_swt            EQU  0CF5AH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_vls_down_plaus         EQU  0CF60H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_toil_stuck             EQU  0CF66H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_cps_mecha              EQU  0CF6CH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_leak_large             EQU  0CF72H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_dtp_noise              EQU  0CF78H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_maf_dif_ch             EQU  0CF7EH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_tco_stuck_rng          EQU  0CF84H
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=2.0
state_ctr_rbm_tia_plaus              EQU  0CF8AH
;@a2l MEASUREMENT SBYTE conv=cv_hpa_9 fmt=8.3
dtp_mv_per_sbyte_1_                  EQU  0CFADH
;@a2l MEASUREMENT SBYTE conv=cv_hpa_9 fmt=8.3
dtp_dif_prs_dyn_sbyte_1_             EQU  0CFAFH
;@a2l MEASUREMENT SBYTE conv=cv_hpa_9 fmt=8.3
dtp_dif_cor_sbyte_1_                 EQU  0D033H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_sum_er_0_                        EQU  0D088H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_sum_er_1_                        EQU  0D08AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_sum_er_2_                        EQU  0D08CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
mis_sum_er_3_                        EQU  0D08EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_cfm_0_                       EQU  0D668H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_cfm_1_                       EQU  0D66AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_cfm_2_                       EQU  0D66CH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_cfm_3_                       EQU  0D66EH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_cfm_4_                       EQU  0D670H
;@a2l MEASUREMENT SBYTE conv=cv_none fmt=3.0
knks_cmd_gain_ad_backup_0_           EQU  0F4BFH
;@a2l MEASUREMENT SBYTE conv=cv_none fmt=3.0
knks_cmd_gain_ad_backup_1_           EQU  0F4C0H
;@a2l MEASUREMENT SBYTE conv=cv_none fmt=3.0
knks_cmd_gain_ad_backup_2_           EQU  0F4C1H
;@a2l MEASUREMENT SBYTE conv=cv_none fmt=3.0
knks_cmd_gain_ad_backup_3_           EQU  0F4C2H
;@a2l MEASUREMENT UBYTE conv=cv_ms_17 fmt=6.2
ti_cyl_hb_0_                         EQU  0F504H
;@a2l MEASUREMENT UBYTE conv=cv_ms_17 fmt=6.2
ti_cyl_hb_1_                         EQU  0F505H
;@a2l MEASUREMENT UBYTE conv=cv_ms_17 fmt=6.2
ti_cyl_hb_2_                         EQU  0F506H
;@a2l MEASUREMENT UBYTE conv=cv_ms_17 fmt=6.2
ti_cyl_hb_3_                         EQU  0F507H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_0_                  EQU  0F6B0H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_1_                  EQU  0F6B2H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_2_                  EQU  0F6B4H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_3_                  EQU  0F6B6H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_4_                  EQU  0F6B8H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_5_                  EQU  0F6BAH
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_6_                  EQU  0F6BCH
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_7_                  EQU  0F6BEH
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_8_                  EQU  0F6C0H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_9_                  EQU  0F6C2H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_10_                 EQU  0F6C4H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_11_                 EQU  0F6C6H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_12_                 EQU  0F6C8H
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_13_                 EQU  0F6CAH
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_14_                 EQU  0F6CCH
;@a2l MEASUREMENT UWORD conv=cv_pct_6 fmt=7.3
ivvthpwm_ad_in_1_15_                 EQU  0F6CEH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x1 "member of teg_inci_1.bf.lv_teg_min_thd"
lv_teg_min_thd_1                     EQU  0F6E0H
;@a2l MEASUREMENT UWORD conv=cv_none_91 mask=0x2 "member of teg_inci_1.bf.lv_teg_min_thd"
lv_teg_cat_down_min_thd_1            EQU  0F6E0H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=7.3
v_dur_igc_0_                         EQU  0F700H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=7.3
v_dur_igc_1_                         EQU  0F702H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=7.3
v_dur_igc_2_                         EQU  0F704H
;@a2l MEASUREMENT UWORD conv=cv_ms fmt=7.3
v_dur_igc_3_                         EQU  0F706H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
v_tco_byte_1_                        EQU  0F77DH
;@a2l MEASUREMENT SWORD conv=cv_per_mill fmt=6.3
seg_ad_mmv_1_                        EQU  0F81AH
;@a2l MEASUREMENT SWORD conv=cv_per_mill fmt=6.3
seg_ad_mmv_2_                        EQU  0F81CH
;@a2l MEASUREMENT SWORD conv=cv_per_mill fmt=6.3
seg_ad_mmv_3_                        EQU  0F81EH
;@a2l MEASUREMENT UBYTE conv=cv_none fmt=3.0
ecu_diag_sf_byte_0_                  EQU  0F852H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_0_                           EQU  0F884H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_1_                           EQU  0F886H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_2_                           EQU  0F888H
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_3_                           EQU  0F88AH
;@a2l MEASUREMENT UWORD conv=cv_none fmt=5.0
dtc_fmy_4_                           EQU  0F88CH
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
knks_0__byte_1_                      EQU  0FBB5H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
knks_1__byte_1_                      EQU  0FBB7H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
knks_2__byte_1_                      EQU  0FBB9H
;@a2l MEASUREMENT UBYTE conv=cv_v_2 fmt=4.2
knks_3__byte_1_                      EQU  0FBBBH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_ct_lv_iga_er_ad_ena_lv_iga_er_ad_lim_lv_er_std_fdout_lv_drv1_er_fdout_lv_lamb_er_ad_ena"
lv_er_std_fdout                      EQU  0FD0CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_ct_lv_iga_er_ad_ena_lv_iga_er_ad_lim_lv_er_std_fdout_lv_drv1_er_fdout_lv_lamb_er_ad_ena"
lv_iga_er_ad_ena                     EQU  0FD0CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_ct_lv_iga_er_ad_ena_lv_iga_er_ad_lim_lv_er_std_fdout_lv_drv1_er_fdout_lv_lamb_er_ad_ena"
lv_drv1_er_fdout                     EQU  0FD0CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_ct_lv_iga_er_ad_ena_lv_iga_er_ad_lim_lv_er_std_fdout_lv_drv1_er_fdout_lv_lamb_er_ad_ena"
lv_iga_er_ad_lim                     EQU  0FD0CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_ct_lv_iga_er_ad_ena_lv_iga_er_ad_lim_lv_er_std_fdout_lv_drv1_er_fdout_lv_lamb_er_ad_ena"
lv_lamb_er_ad_ena                    EQU  0FD0CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_lamb_er_ad_lim_lv_is_ad_cnd_lv_tco_ad_cnd_is_lv_dly_ad_is_lv_pvs_fl_ivvt_lv_act_ctl_ivvt"
lv_lamb_er_ad_lim                    EQU  0FD0DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_lamb_er_ad_lim_lv_is_ad_cnd_lv_tco_ad_cnd_is_lv_dly_ad_is_lv_pvs_fl_ivvt_lv_act_ctl_ivvt"
lv_dly_ad_is                         EQU  0FD0DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_lamb_er_ad_lim_lv_is_ad_cnd_lv_tco_ad_cnd_is_lv_dly_ad_is_lv_pvs_fl_ivvt_lv_act_ctl_ivvt"
lv_is_ad_cnd                         EQU  0FD0DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_lamb_er_ad_lim_lv_is_ad_cnd_lv_tco_ad_cnd_is_lv_dly_ad_is_lv_pvs_fl_ivvt_lv_act_ctl_ivvt"
lv_pvs_fl_ivvt                       EQU  0FD0DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_lamb_er_ad_lim_lv_is_ad_cnd_lv_tco_ad_cnd_is_lv_dly_ad_is_lv_pvs_fl_ivvt_lv_act_ctl_ivvt"
lv_tco_ad_cnd_is                     EQU  0FD0DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_lamb_er_ad_lim_lv_is_ad_cnd_lv_tco_ad_cnd_is_lv_dly_ad_is_lv_pvs_fl_ivvt_lv_act_ctl_ivvt"
lv_act_ctl_ivvt                      EQU  0FD0DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_act_cle_slv_ivvt_lv_dly_cle_slv_ivvt_lv_n_max_lv_n_max_req_fcut"
lv_dly_cle_slv_ivvt                  EQU  0FD0EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_act_cle_slv_ivvt_lv_dly_cle_slv_ivvt_lv_n_max_lv_n_max_req_fcut"
lv_n_max                             EQU  0FD0EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_act_cle_slv_ivvt_lv_dly_cle_slv_ivvt_lv_n_max_lv_n_max_req_fcut"
lv_n_max_req_fcut                    EQU  0FD0EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_lamb_ch_fdout_lv_chg_tmag_ivvt_lv_tq_intv_req_lv_tq_intv_lv_tq_add_req_lv_tq_add_req_1_lv_tq_add_req_2_lv_tq_loss_lim_act"
lv_lamb_ch_fdout                     EQU  0FD0FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_lamb_ch_fdout_lv_chg_tmag_ivvt_lv_tq_intv_req_lv_tq_intv_lv_tq_add_req_lv_tq_add_req_1_lv_tq_add_req_2_lv_tq_loss_lim_act"
lv_tq_add_req                        EQU  0FD0FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_lamb_ch_fdout_lv_chg_tmag_ivvt_lv_tq_intv_req_lv_tq_intv_lv_tq_add_req_lv_tq_add_req_1_lv_tq_add_req_2_lv_tq_loss_lim_act"
lv_chg_tmag_ivvt                     EQU  0FD0FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_lamb_ch_fdout_lv_chg_tmag_ivvt_lv_tq_intv_req_lv_tq_intv_lv_tq_add_req_lv_tq_add_req_1_lv_tq_add_req_2_lv_tq_loss_lim_act"
lv_tq_add_req_1                      EQU  0FD0FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_lamb_ch_fdout_lv_chg_tmag_ivvt_lv_tq_intv_req_lv_tq_intv_lv_tq_add_req_lv_tq_add_req_1_lv_tq_add_req_2_lv_tq_loss_lim_act"
lv_tq_intv_req                       EQU  0FD0FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_lamb_ch_fdout_lv_chg_tmag_ivvt_lv_tq_intv_req_lv_tq_intv_lv_tq_add_req_lv_tq_add_req_1_lv_tq_add_req_2_lv_tq_loss_lim_act"
lv_tq_add_req_2                      EQU  0FD0FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_lamb_ch_fdout_lv_chg_tmag_ivvt_lv_tq_intv_req_lv_tq_intv_lv_tq_add_req_lv_tq_add_req_1_lv_tq_add_req_2_lv_tq_loss_lim_act"
lv_tq_intv                           EQU  0FD0FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_lamb_ch_fdout_lv_chg_tmag_ivvt_lv_tq_intv_req_lv_tq_intv_lv_tq_add_req_lv_tq_add_req_1_lv_tq_add_req_2_lv_tq_loss_lim_act"
lv_tq_loss_lim_act                   EQU  0FD0FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_fcut_fast_lv_fcut_tra_lv_intv_cru_lv_intv_vsl_lv_tq_cru_act_lv_ti_lam_cor_cp_lv_ramp_open_end"
lv_tq_cru_act                        EQU  0FD10H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_fcut_fast_lv_fcut_tra_lv_intv_cru_lv_intv_vsl_lv_tq_cru_act_lv_ti_lam_cor_cp_lv_ramp_open_end"
lv_fcut_tra                          EQU  0FD10H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_fcut_fast_lv_fcut_tra_lv_intv_cru_lv_intv_vsl_lv_tq_cru_act_lv_ti_lam_cor_cp_lv_ramp_open_end"
lv_intv_cru                          EQU  0FD10H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_fcut_fast_lv_fcut_tra_lv_intv_cru_lv_intv_vsl_lv_tq_cru_act_lv_ti_lam_cor_cp_lv_ramp_open_end"
lv_ti_lam_cor_cp                     EQU  0FD10H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_fcut_fast_lv_fcut_tra_lv_intv_cru_lv_intv_vsl_lv_tq_cru_act_lv_ti_lam_cor_cp_lv_ramp_open_end"
lv_intv_vsl                          EQU  0FD10H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_fcut_fast_lv_fcut_tra_lv_intv_cru_lv_intv_vsl_lv_tq_cru_act_lv_ti_lam_cor_cp_lv_ramp_open_end"
lv_ramp_open_end                     EQU  0FD10H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_ramp_close_end_lv_max_purge_end_lv_norm_purge_end_1_lv_wait_ramp_open_cp_lv_ti_ad_cp_inh"
lv_ramp_close_end                    EQU  0FD11H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_ramp_close_end_lv_max_purge_end_lv_norm_purge_end_1_lv_wait_ramp_open_cp_lv_ti_ad_cp_inh"
lv_max_purge_end                     EQU  0FD11H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_ramp_close_end_lv_max_purge_end_lv_norm_purge_end_1_lv_wait_ramp_open_cp_lv_ti_ad_cp_inh"
lv_ti_ad_cp_inh                      EQU  0FD11H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_ramp_close_end_lv_max_purge_end_lv_norm_purge_end_1_lv_wait_ramp_open_cp_lv_ti_ad_cp_inh"
lv_norm_purge_end_1                  EQU  0FD11H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_ramp_close_end_lv_max_purge_end_lv_norm_purge_end_1_lv_wait_ramp_open_cp_lv_ti_ad_cp_inh"
lv_wait_ramp_open_cp                 EQU  0FD11H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_dc_rbm_lv_igk_cyc_rbm_lv_sel_cyl_lv_pas_ramp_act_i_is"
lv_igk_cyc_rbm                       EQU  0FD12H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_dc_rbm_lv_igk_cyc_rbm_lv_sel_cyl_lv_pas_ramp_act_i_is"
lv_sel_cyl                           EQU  0FD12H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_dc_rbm_lv_igk_cyc_rbm_lv_sel_cyl_lv_pas_ramp_act_i_is"
lv_pas_ramp_act_i_is                 EQU  0FD12H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_pas_ramp_act_p_d_is_lv_tq_p_d_act_lv_req_isc_lv_neg_n_grd_fil_mem_lv_cam_ad_avl_ivvt"
lv_pas_ramp_act_p_d_is               EQU  0FD13H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_pas_ramp_act_p_d_is_lv_tq_p_d_act_lv_req_isc_lv_neg_n_grd_fil_mem_lv_cam_ad_avl_ivvt"
lv_tq_p_d_act                        EQU  0FD13H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_pas_ramp_act_p_d_is_lv_tq_p_d_act_lv_req_isc_lv_neg_n_grd_fil_mem_lv_cam_ad_avl_ivvt"
lv_neg_n_grd_fil_mem                 EQU  0FD13H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_pas_ramp_act_p_d_is_lv_tq_p_d_act_lv_req_isc_lv_neg_n_grd_fil_mem_lv_cam_ad_avl_ivvt"
lv_req_isc                           EQU  0FD13H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_pas_ramp_act_p_d_is_lv_tq_p_d_act_lv_req_isc_lv_neg_n_grd_fil_mem_lv_cam_ad_avl_ivvt"
lv_cam_ad_avl_ivvt                   EQU  0FD13H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_cam_ad_req_ivvt_lv_cam_ad_di_ivvt_lv_trip_act_ivvt_lv_trip_end_ivvt_lv_t_dly_ad_done"
lv_cam_ad_req_ivvt                   EQU  0FD14H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_cam_ad_req_ivvt_lv_cam_ad_di_ivvt_lv_trip_act_ivvt_lv_trip_end_ivvt_lv_t_dly_ad_done"
lv_trip_act_ivvt                     EQU  0FD14H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_cam_ad_req_ivvt_lv_cam_ad_di_ivvt_lv_trip_act_ivvt_lv_trip_end_ivvt_lv_t_dly_ad_done"
lv_trip_end_ivvt                     EQU  0FD14H
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x40 "member of c_lv_cam_ad_req_ivvt_lv_cam_ad_di_ivvt_lv_trip_act_ivvt_lv_trip_end_ivvt_lv_t_dly_ad_done"
lv_t_dly_ad_done                     EQU  0FD14H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_n_maf_dyw"
lv_n_maf_dyw                         EQU  0FD15H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_mtv_req_lv_inh_fsd_cp"
lv_mtv_req                           EQU  0FD16H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_tco_plaus_diag_end_lv_purge_vld_pue_ls_down_lv_diag_pue_vld_ls_down_lv_cdn_vls_down_diag_pue_lv_end_vls_down_diag_pue"
lv_purge_vld_pue_ls_down             EQU  0FD17H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_tco_plaus_diag_end_lv_purge_vld_pue_ls_down_lv_diag_pue_vld_ls_down_lv_cdn_vls_down_diag_pue_lv_end_vls_down_diag_pue"
lv_tco_plaus_diag_end                EQU  0FD17H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_tco_plaus_diag_end_lv_purge_vld_pue_ls_down_lv_diag_pue_vld_ls_down_lv_cdn_vls_down_diag_pue_lv_end_vls_down_diag_pue"
lv_diag_pue_vld_ls_down              EQU  0FD17H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_tco_plaus_diag_end_lv_purge_vld_pue_ls_down_lv_diag_pue_vld_ls_down_lv_cdn_vls_down_diag_pue_lv_end_vls_down_diag_pue"
lv_cdn_vls_down_diag_pue             EQU  0FD17H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_tco_plaus_diag_end_lv_purge_vld_pue_ls_down_lv_diag_pue_vld_ls_down_lv_cdn_vls_down_diag_pue_lv_end_vls_down_diag_pue"
lv_end_vls_down_diag_pue             EQU  0FD17H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_vls_down_afl_lv_vls_down_afr_lv_err_pres_mwss_lv_th_diag_act_lv_err_th_det_lv_th_diag_end_lv_th_diag_inh"
lv_vls_down_afl                      EQU  0FD18H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_vls_down_afl_lv_vls_down_afr_lv_err_pres_mwss_lv_th_diag_act_lv_err_th_det_lv_th_diag_end_lv_th_diag_inh"
lv_th_diag_act                       EQU  0FD18H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_vls_down_afl_lv_vls_down_afr_lv_err_pres_mwss_lv_th_diag_act_lv_err_th_det_lv_th_diag_end_lv_th_diag_inh"
lv_vls_down_afr                      EQU  0FD18H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_vls_down_afl_lv_vls_down_afr_lv_err_pres_mwss_lv_th_diag_act_lv_err_th_det_lv_th_diag_end_lv_th_diag_inh"
lv_err_th_det                        EQU  0FD18H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_vls_down_afl_lv_vls_down_afr_lv_err_pres_mwss_lv_th_diag_act_lv_err_th_det_lv_th_diag_end_lv_th_diag_inh"
lv_th_diag_end                       EQU  0FD18H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_vls_down_afl_lv_vls_down_afr_lv_err_pres_mwss_lv_th_diag_act_lv_err_th_det_lv_th_diag_end_lv_th_diag_inh"
lv_th_diag_inh                       EQU  0FD18H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_tco_de_max_th_diag_lv_ti_is_act_lv_toil_stuck_diag_end_lv_toil_det_err_lv_tq_tra_dyn"
lv_ti_is_act                         EQU  0FD19H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_tco_de_max_th_diag_lv_ti_is_act_lv_toil_stuck_diag_end_lv_toil_det_err_lv_tq_tra_dyn"
lv_tco_de_max_th_diag                EQU  0FD19H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_tco_de_max_th_diag_lv_ti_is_act_lv_toil_stuck_diag_end_lv_toil_det_err_lv_tq_tra_dyn"
lv_toil_stuck_diag_end               EQU  0FD19H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_tco_de_max_th_diag_lv_ti_is_act_lv_toil_stuck_diag_end_lv_toil_det_err_lv_tq_tra_dyn"
lv_toil_det_err                      EQU  0FD19H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_tco_de_max_th_diag_lv_ti_is_act_lv_toil_stuck_diag_end_lv_toil_det_err_lv_tq_tra_dyn"
lv_tq_tra_dyn                        EQU  0FD19H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_tq_tra_lv_tib_dif_pos_lv_pos_vo_chg_lv_carb_err"
lv_tq_tra                            EQU  0FD1AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_tq_tra_lv_tib_dif_pos_lv_pos_vo_chg_lv_carb_err"
lv_tib_dif_pos                       EQU  0FD1AH
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x20 "member of c_lv_tq_tra_lv_tib_dif_pos_lv_pos_vo_chg_lv_carb_err"
lv_pos_vo_chg                        EQU  0FD1AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_diag_err_lv_state_crk_osc_lv_state_crk_mis_seg_max_osc_lv_er_ad_fuel_lv_er_ad_act_lv_iga_er_ad_on_lv_lamb_er_ad_on"
lv_diag_err                          EQU  0FD1BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_diag_err_lv_state_crk_osc_lv_state_crk_mis_seg_max_osc_lv_er_ad_fuel_lv_er_ad_act_lv_iga_er_ad_on_lv_lamb_er_ad_on"
lv_er_ad_act                         EQU  0FD1BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_diag_err_lv_state_crk_osc_lv_state_crk_mis_seg_max_osc_lv_er_ad_fuel_lv_er_ad_act_lv_iga_er_ad_on_lv_lamb_er_ad_on"
lv_state_crk_osc                     EQU  0FD1BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_diag_err_lv_state_crk_osc_lv_state_crk_mis_seg_max_osc_lv_er_ad_fuel_lv_er_ad_act_lv_iga_er_ad_on_lv_lamb_er_ad_on"
lv_iga_er_ad_on                      EQU  0FD1BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_diag_err_lv_state_crk_osc_lv_state_crk_mis_seg_max_osc_lv_er_ad_fuel_lv_er_ad_act_lv_iga_er_ad_on_lv_lamb_er_ad_on"
lv_state_crk_mis_seg_max_osc         EQU  0FD1BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_diag_err_lv_state_crk_osc_lv_state_crk_mis_seg_max_osc_lv_er_ad_fuel_lv_er_ad_act_lv_iga_er_ad_on_lv_lamb_er_ad_on"
lv_lamb_er_ad_on                     EQU  0FD1BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_diag_err_lv_state_crk_osc_lv_state_crk_mis_seg_max_osc_lv_er_ad_fuel_lv_er_ad_act_lv_iga_er_ad_on_lv_lamb_er_ad_on"
lv_er_ad_fuel                        EQU  0FD1BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_lih_imob_lv_fmy_imob_lv_tester_err_imob"
lv_lih_imob                          EQU  0FD1CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_lih_imob_lv_fmy_imob_lv_tester_err_imob"
lv_tester_err_imob                   EQU  0FD1CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_ans_err_imob_lv_ans_not_imob_lv_secu_1_imob_lv_secu_a_imob_lv_not_plaus_data_imob"
lv_secu_1_imob                       EQU  0FD1DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_ans_err_imob_lv_ans_not_imob_lv_secu_1_imob_lv_secu_a_imob_lv_not_plaus_data_imob"
lv_secu_a_imob                       EQU  0FD1DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_ans_err_imob_lv_ans_not_imob_lv_secu_1_imob_lv_secu_a_imob_lv_not_plaus_data_imob"
lv_ans_err_imob                      EQU  0FD1DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_ans_err_imob_lv_ans_not_imob_lv_secu_1_imob_lv_secu_a_imob_lv_not_plaus_data_imob"
lv_not_plaus_data_imob               EQU  0FD1DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_ans_err_imob_lv_ans_not_imob_lv_secu_1_imob_lv_secu_a_imob_lv_not_plaus_data_imob"
lv_ans_not_imob                      EQU  0FD1DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_er_carb_b4_lv_mis_state_a_lv_mis_state_b_lv_inh_seg_ad_lv_inh_er"
lv_mis_state_a                       EQU  0FD1EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_er_carb_b4_lv_mis_state_a_lv_mis_state_b_lv_inh_seg_ad_lv_inh_er"
lv_mis_state_b                       EQU  0FD1EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_er_carb_b4_lv_mis_state_a_lv_mis_state_b_lv_inh_seg_ad_lv_inh_er"
lv_inh_seg_ad                        EQU  0FD1EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_er_carb_b4_lv_mis_state_a_lv_mis_state_b_lv_inh_seg_ad_lv_inh_er"
lv_inh_er                            EQU  0FD1EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_first_eol_fdout_lv_state_mis_on_lv_mis_state_off_iv_lv_th_diag_cnl_lv_inh_rbm_th_diag"
lv_first_eol_fdout                   EQU  0FD1FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_first_eol_fdout_lv_state_mis_on_lv_mis_state_off_iv_lv_th_diag_cnl_lv_inh_rbm_th_diag"
lv_mis_state_off_iv                  EQU  0FD1FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_first_eol_fdout_lv_state_mis_on_lv_mis_state_off_iv_lv_th_diag_cnl_lv_inh_rbm_th_diag"
lv_state_mis_on                      EQU  0FD1FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_first_eol_fdout_lv_state_mis_on_lv_mis_state_off_iv_lv_th_diag_cnl_lv_inh_rbm_th_diag"
lv_th_diag_cnl                       EQU  0FD1FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_first_eol_fdout_lv_state_mis_on_lv_mis_state_off_iv_lv_th_diag_cnl_lv_inh_rbm_th_diag"
lv_inh_rbm_th_diag                   EQU  0FD1FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_ch_lv_ti_ch_lv_ch_set_off_lv_dt"
lv_ti_ch                             EQU  0FD20H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_ch_lv_ti_ch_lv_ch_set_off_lv_dt"
lv_ch_set_off                        EQU  0FD20H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_ch_lv_ti_ch_lv_ch_set_off_lv_dt"
lv_dt                                EQU  0FD20H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_n_rise_gear_shift_lv_n_gear_shift_beg_auth_lv_wide_rng_act_gr_lv_n_grd_pos_lv_n_grd_pos_prev_lv_iga_grd_act"
lv_wide_rng_act_gr                   EQU  0FD21H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_n_rise_gear_shift_lv_n_gear_shift_beg_auth_lv_wide_rng_act_gr_lv_n_grd_pos_lv_n_grd_pos_prev_lv_iga_grd_act"
lv_n_grd_pos                         EQU  0FD21H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_n_rise_gear_shift_lv_n_gear_shift_beg_auth_lv_wide_rng_act_gr_lv_n_grd_pos_lv_n_grd_pos_prev_lv_iga_grd_act"
lv_n_rise_gear_shift                 EQU  0FD21H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_n_rise_gear_shift_lv_n_gear_shift_beg_auth_lv_wide_rng_act_gr_lv_n_grd_pos_lv_n_grd_pos_prev_lv_iga_grd_act"
lv_n_grd_pos_prev                    EQU  0FD21H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_n_rise_gear_shift_lv_n_gear_shift_beg_auth_lv_wide_rng_act_gr_lv_n_grd_pos_lv_n_grd_pos_prev_lv_iga_grd_act"
lv_n_gear_shift_beg_auth             EQU  0FD21H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_n_rise_gear_shift_lv_n_gear_shift_beg_auth_lv_wide_rng_act_gr_lv_n_grd_pos_lv_n_grd_pos_prev_lv_iga_grd_act"
lv_iga_grd_act                       EQU  0FD21H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_iga_tra_knk_lv_tq_iga_act_lv_tq_iga_req"
lv_tq_iga_act                        EQU  0FD22H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_iga_tra_knk_lv_tq_iga_act_lv_tq_iga_req"
lv_tq_iga_req                        EQU  0FD22H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_opg_sp_tra_st_mdl_isa_lv_puc_iv_off_lv_err_slv_ivvt_in_1"
lv_opg_sp_tra_st_mdl_isa             EQU  0FD23H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_opg_sp_tra_st_mdl_isa_lv_puc_iv_off_lv_err_slv_ivvt_in_1"
lv_puc_iv_off                        EQU  0FD23H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_opg_sp_tra_st_mdl_isa_lv_puc_iv_off_lv_err_slv_ivvt_in_1"
lv_err_slv_ivvt_in_1                 EQU  0FD23H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_inh_diag_slv_ivvt_in_1_lv_err_lih_ivvt_lv_slv_ivvt_scg_lih_lv_slv_ivvt_h_in_1_err_lv_slv_ivvt_l_in_1_err_lv_slv_ivvt_oc_i"
lv_inh_diag_slv_ivvt_in_1            EQU  0FD24H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_inh_diag_slv_ivvt_in_1_lv_err_lih_ivvt_lv_slv_ivvt_scg_lih_lv_slv_ivvt_h_in_1_err_lv_slv_ivvt_l_in_1_err_lv_slv_ivvt_oc_i"
lv_slv_ivvt_l_in_1_err               EQU  0FD24H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_inh_diag_slv_ivvt_in_1_lv_err_lih_ivvt_lv_slv_ivvt_scg_lih_lv_slv_ivvt_h_in_1_err_lv_slv_ivvt_l_in_1_err_lv_slv_ivvt_oc_i"
lv_err_lih_ivvt                      EQU  0FD24H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_inh_diag_slv_ivvt_in_1_lv_err_lih_ivvt_lv_slv_ivvt_scg_lih_lv_slv_ivvt_h_in_1_err_lv_slv_ivvt_l_in_1_err_lv_slv_ivvt_oc_i"
lv_slv_ivvt_oc_in_1_err              EQU  0FD24H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_inh_diag_slv_ivvt_in_1_lv_err_lih_ivvt_lv_slv_ivvt_scg_lih_lv_slv_ivvt_h_in_1_err_lv_slv_ivvt_l_in_1_err_lv_slv_ivvt_oc_i"
lv_slv_ivvt_scg_lih                  EQU  0FD24H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_inh_diag_slv_ivvt_in_1_lv_err_lih_ivvt_lv_slv_ivvt_scg_lih_lv_slv_ivvt_h_in_1_err_lv_slv_ivvt_l_in_1_err_lv_slv_ivvt_oc_i"
lv_inh_diag_trip_ivvt                EQU  0FD24H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_inh_diag_slv_ivvt_in_1_lv_err_lih_ivvt_lv_slv_ivvt_scg_lih_lv_slv_ivvt_h_in_1_err_lv_slv_ivvt_l_in_1_err_lv_slv_ivvt_oc_i"
lv_slv_ivvt_h_in_1_err               EQU  0FD24H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_cam_ad_di_ext_ivvt_lv_ivvt_diag_ext_adj_lv_cam_sp_chg_lv_ena_cle_slv_ivvt_lv_err_cam_ivvt"
lv_cam_ad_di_ext_ivvt                EQU  0FD25H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_cam_ad_di_ext_ivvt_lv_ivvt_diag_ext_adj_lv_cam_sp_chg_lv_ena_cle_slv_ivvt_lv_err_cam_ivvt"
lv_ivvt_diag_ext_adj                 EQU  0FD25H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_cam_ad_di_ext_ivvt_lv_ivvt_diag_ext_adj_lv_cam_sp_chg_lv_ena_cle_slv_ivvt_lv_err_cam_ivvt"
lv_ena_cle_slv_ivvt                  EQU  0FD25H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_cam_ad_di_ext_ivvt_lv_ivvt_diag_ext_adj_lv_cam_sp_chg_lv_ena_cle_slv_ivvt_lv_err_cam_ivvt"
lv_cam_sp_chg                        EQU  0FD25H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_cam_ad_di_ext_ivvt_lv_ivvt_diag_ext_adj_lv_cam_sp_chg_lv_ena_cle_slv_ivvt_lv_err_cam_ivvt"
lv_err_cam_ivvt                      EQU  0FD25H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_req_ad_ext_edge_2_ivvt_lv_cam_ad_avl_nvmy_ivvt_lv_cam_ad_pwl_not_save_in_1_lv_ena_rev_clc_ivvt_lv_knk_ctl_ena_lv_knk_tra_"
lv_req_ad_ext_edge_2_ivvt            EQU  0FD26H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_req_ad_ext_edge_2_ivvt_lv_cam_ad_avl_nvmy_ivvt_lv_cam_ad_pwl_not_save_in_1_lv_ena_rev_clc_ivvt_lv_knk_ctl_ena_lv_knk_tra_"
lv_ena_rev_clc_ivvt                  EQU  0FD26H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_req_ad_ext_edge_2_ivvt_lv_cam_ad_avl_nvmy_ivvt_lv_cam_ad_pwl_not_save_in_1_lv_ena_rev_clc_ivvt_lv_knk_ctl_ena_lv_knk_tra_"
lv_knk_ctl_ena                       EQU  0FD26H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_req_ad_ext_edge_2_ivvt_lv_cam_ad_avl_nvmy_ivvt_lv_cam_ad_pwl_not_save_in_1_lv_ena_rev_clc_ivvt_lv_knk_ctl_ena_lv_knk_tra_"
lv_knk_tra_n                         EQU  0FD26H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_req_ad_ext_edge_2_ivvt_lv_cam_ad_avl_nvmy_ivvt_lv_cam_ad_pwl_not_save_in_1_lv_ena_rev_clc_ivvt_lv_knk_ctl_ena_lv_knk_tra_"
lv_cam_ad_pwl_not_save_in_1          EQU  0FD26H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_req_ad_ext_edge_2_ivvt_lv_cam_ad_avl_nvmy_ivvt_lv_cam_ad_pwl_not_save_in_1_lv_ena_rev_clc_ivvt_lv_knk_ctl_ena_lv_knk_tra_"
lv_knk_tra_maf                       EQU  0FD26H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_knk_ad1_ena_lv_knk_ad2_ena_lv_knk_ad_lv_knk_lv_knk_ctl_dis_lv_knk_ad_rd_ena_lv_knk_ad1_dis"
lv_knk_ad1_ena                       EQU  0FD27H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_knk_ad1_ena_lv_knk_ad2_ena_lv_knk_ad_lv_knk_lv_knk_ctl_dis_lv_knk_ad_rd_ena_lv_knk_ad1_dis"
lv_knk_ad2_ena                       EQU  0FD27H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_knk_ad1_ena_lv_knk_ad2_ena_lv_knk_ad_lv_knk_lv_knk_ctl_dis_lv_knk_ad_rd_ena_lv_knk_ad1_dis"
lv_knk_ctl_dis                       EQU  0FD27H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_knk_ad1_ena_lv_knk_ad2_ena_lv_knk_ad_lv_knk_lv_knk_ctl_dis_lv_knk_ad_rd_ena_lv_knk_ad1_dis"
lv_knk_ad                            EQU  0FD27H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_knk_ad1_ena_lv_knk_ad2_ena_lv_knk_ad_lv_knk_lv_knk_ctl_dis_lv_knk_ad_rd_ena_lv_knk_ad1_dis"
lv_knk_ad_rd_ena                     EQU  0FD27H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_knk_ad1_ena_lv_knk_ad2_ena_lv_knk_ad_lv_knk_lv_knk_ctl_dis_lv_knk_ad_rd_ena_lv_knk_ad1_dis"
lv_knk                               EQU  0FD27H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_knk_ad1_ena_lv_knk_ad2_ena_lv_knk_ad_lv_knk_lv_knk_ctl_dis_lv_knk_ad_rd_ena_lv_knk_ad1_dis"
lv_knk_ad1_dis                       EQU  0FD27H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_maf_puls_lv_vb_n_min_add"
lv_vb_n_min_add                      EQU  0FD28H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_teg_min_thd_lv_teg_cat_down_min_thd_lv_puc_inh_temp_cat"
lv_teg_min_thd                       EQU  0FD29H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_teg_min_thd_lv_teg_cat_down_min_thd_lv_puc_inh_temp_cat"
lv_puc_inh_temp_cat                  EQU  0FD29H
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x40 "member of c_lv_teg_min_thd_lv_teg_cat_down_min_thd_lv_puc_inh_temp_cat"
lv_teg_cat_down_min_thd              EQU  0FD29H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_wup_lv_ti_ast_lv_ast_lv_tq_min_clu"
lv_wup                               EQU  0FD2AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_wup_lv_ti_ast_lv_ast_lv_tq_min_clu"
lv_ti_ast                            EQU  0FD2AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_wup_lv_ti_ast_lv_ast_lv_tq_min_clu"
lv_tq_min_clu                        EQU  0FD2AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_gs_ena_lv_tqi_bol_set_lv_tq_inc_lv_tq_fast_ena_lv_tq_iga_ena_lv_asr_act"
lv_tq_inc                            EQU  0FD2EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_gs_ena_lv_tqi_bol_set_lv_tq_inc_lv_tq_fast_ena_lv_tq_iga_ena_lv_asr_act"
lv_gs_ena                            EQU  0FD2EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_gs_ena_lv_tqi_bol_set_lv_tq_inc_lv_tq_fast_ena_lv_tq_iga_ena_lv_asr_act"
lv_tq_fast_ena                       EQU  0FD2EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_gs_ena_lv_tqi_bol_set_lv_tq_inc_lv_tq_fast_ena_lv_tq_iga_ena_lv_asr_act"
lv_tqi_bol_set                       EQU  0FD2EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_gs_ena_lv_tqi_bol_set_lv_tq_inc_lv_tq_fast_ena_lv_tq_iga_ena_lv_asr_act"
lv_tq_iga_ena                        EQU  0FD2EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_msr_ena_lv_msr_act_lv_msr_inh_int_msr_lv_msr_inh_t_msr"
lv_msr_ena                           EQU  0FD2FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_msr_ena_lv_msr_act_lv_msr_inh_int_msr_lv_msr_inh_t_msr"
lv_msr_act                           EQU  0FD2FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_msr_ena_lv_msr_act_lv_msr_inh_int_msr_lv_msr_inh_t_msr"
lv_msr_inh_int_msr                   EQU  0FD2FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_msr_ena_lv_msr_act_lv_msr_inh_int_msr_lv_msr_inh_t_msr"
lv_msr_inh_t_msr                     EQU  0FD2FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_act_aj_lv_ini_aj_lv_aj_inh_obd_lv_req_aj_lv_pas_aj_lv_dly_n_sp_is"
lv_req_aj                            EQU  0FD30H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_act_aj_lv_ini_aj_lv_aj_inh_obd_lv_req_aj_lv_pas_aj_lv_dly_n_sp_is"
lv_pas_aj                            EQU  0FD30H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_act_aj_lv_ini_aj_lv_aj_inh_obd_lv_req_aj_lv_pas_aj_lv_dly_n_sp_is"
lv_ini_aj                            EQU  0FD30H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_act_aj_lv_ini_aj_lv_aj_inh_obd_lv_req_aj_lv_pas_aj_lv_dly_n_sp_is"
lv_dly_n_sp_is                       EQU  0FD30H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_act_aj_lv_ini_aj_lv_aj_inh_obd_lv_req_aj_lv_pas_aj_lv_dly_n_sp_is"
lv_aj_inh_obd                        EQU  0FD30H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_auth_tq_pat_lv_rly_accout_ctrl_lv_rly_accout_ctrl_st_lv_rly_accout_st"
lv_rly_accout_ctrl                   EQU  0FD31H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_auth_tq_pat_lv_rly_accout_ctrl_lv_rly_accout_ctrl_st_lv_rly_accout_st"
lv_auth_tq_pat                       EQU  0FD31H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_auth_tq_pat_lv_rly_accout_ctrl_lv_rly_accout_ctrl_st_lv_rly_accout_st"
lv_rly_accout_ctrl_st                EQU  0FD31H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_auth_tq_pat_lv_rly_accout_ctrl_lv_rly_accout_ctrl_st_lv_rly_accout_st"
lv_rly_accout_st                     EQU  0FD31H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_err_crk_lih_lv_eng_rev_lv_n_max_vs_0_lv_n_max_gr_lv_n_max_vs_err_lv_n_max_tps_maf_err"
lv_err_crk_lih                       EQU  0FD33H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_err_crk_lih_lv_eng_rev_lv_n_max_vs_0_lv_n_max_gr_lv_n_max_vs_err_lv_n_max_tps_maf_err"
lv_n_max_vs_0                        EQU  0FD33H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_err_crk_lih_lv_eng_rev_lv_n_max_vs_0_lv_n_max_gr_lv_n_max_vs_err_lv_n_max_tps_maf_err"
lv_eng_rev                           EQU  0FD33H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_err_crk_lih_lv_eng_rev_lv_n_max_vs_0_lv_n_max_gr_lv_n_max_vs_err_lv_n_max_tps_maf_err"
lv_n_max_gr                          EQU  0FD33H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_err_crk_lih_lv_eng_rev_lv_n_max_vs_0_lv_n_max_gr_lv_n_max_vs_err_lv_n_max_tps_maf_err"
lv_n_max_vs_err                      EQU  0FD33H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_err_crk_lih_lv_eng_rev_lv_n_max_vs_0_lv_n_max_gr_lv_n_max_vs_err_lv_n_max_tps_maf_err"
lv_n_max_tps_maf_err                 EQU  0FD33H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_n_max_isa_err_lv_vs_max_lv_state_rr_lv_tia_plaus"
lv_vs_max                            EQU  0FD34H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_n_max_isa_err_lv_vs_max_lv_state_rr_lv_tia_plaus"
lv_tia_plaus                         EQU  0FD34H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_n_max_isa_err_lv_vs_max_lv_state_rr_lv_tia_plaus"
lv_state_rr                          EQU  0FD34H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_tco_stuck_diag_end_lv_end_tia_plaus_lv_inh_diag_tco_stuck_rng_lv_end_diag_tco_stuck_rng_lv_tco_det_err_lv_tia_det_err"
lv_inh_diag_tco_stuck_rng            EQU  0FD35H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_tco_stuck_diag_end_lv_end_tia_plaus_lv_inh_diag_tco_stuck_rng_lv_end_diag_tco_stuck_rng_lv_tco_det_err_lv_tia_det_err"
lv_tco_stuck_diag_end                EQU  0FD35H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_tco_stuck_diag_end_lv_end_tia_plaus_lv_inh_diag_tco_stuck_rng_lv_end_diag_tco_stuck_rng_lv_tco_det_err_lv_tia_det_err"
lv_end_diag_tco_stuck_rng            EQU  0FD35H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_tco_stuck_diag_end_lv_end_tia_plaus_lv_inh_diag_tco_stuck_rng_lv_end_diag_tco_stuck_rng_lv_tco_det_err_lv_tia_det_err"
lv_tco_det_err                       EQU  0FD35H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_tco_stuck_diag_end_lv_end_tia_plaus_lv_inh_diag_tco_stuck_rng_lv_end_diag_tco_stuck_rng_lv_tco_det_err_lv_tia_det_err"
lv_end_tia_plaus                     EQU  0FD35H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_tco_stuck_diag_end_lv_end_tia_plaus_lv_inh_diag_tco_stuck_rng_lv_end_diag_tco_stuck_rng_lv_tco_det_err_lv_tia_det_err"
lv_tia_det_err                       EQU  0FD35H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_fl_lv_err_tps_det_lv_tps_lih_act_lv_tps_fl"
lv_tps_lih_act                       EQU  0FD36H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_fl_lv_err_tps_det_lv_tps_lih_act_lv_tps_fl"
lv_fl                                EQU  0FD36H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_fl_lv_err_tps_det_lv_tps_lih_act_lv_tps_fl"
lv_tps_fl                            EQU  0FD36H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_tps_noise_lih_act_lv_tps_noise_lv_tps_noise_diag_lv_tps_noise_diag_act_lv_vs_run"
lv_tps_noise                         EQU  0FD37H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_tps_noise_lih_act_lv_tps_noise_lv_tps_noise_diag_lv_tps_noise_diag_act_lv_vs_run"
lv_tps_noise_diag                    EQU  0FD37H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_tps_noise_lih_act_lv_tps_noise_lv_tps_noise_diag_lv_tps_noise_diag_act_lv_vs_run"
lv_tps_noise_lih_act                 EQU  0FD37H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_tps_noise_lih_act_lv_tps_noise_lv_tps_noise_diag_lv_tps_noise_diag_act_lv_vs_run"
lv_tps_noise_diag_act                EQU  0FD37H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_tps_noise_lih_act_lv_tps_noise_lv_tps_noise_diag_lv_tps_noise_diag_act_lv_vs_run"
lv_vs_run                            EQU  0FD37H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_vs_diag_act_once_lv_cdn_diag_vs_plaus"
lv_vs_diag_act_once                  EQU  0FD38H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_cp_ena_lv_cp_act"
lv_cp_ena                            EQU  0FD3AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_obd_inh_lam_1_lv_inh_int_puc_1_lv_inh_lam_dly_1_lv_obd_auth_cp_close_1_lv_obd_auth_cp_min_1_lv_inh_r_up_ls_1"
lv_obd_inh_lam_1                     EQU  0FD3CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_obd_inh_lam_1_lv_inh_int_puc_1_lv_inh_lam_dly_1_lv_obd_auth_cp_close_1_lv_obd_auth_cp_min_1_lv_inh_r_up_ls_1"
lv_obd_auth_cp_close_1               EQU  0FD3CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_obd_inh_lam_1_lv_inh_int_puc_1_lv_inh_lam_dly_1_lv_obd_auth_cp_close_1_lv_obd_auth_cp_min_1_lv_inh_r_up_ls_1"
lv_obd_auth_cp_min_1                 EQU  0FD3CH
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x10 "member of c_lv_obd_inh_lam_1_lv_inh_int_puc_1_lv_inh_lam_dly_1_lv_obd_auth_cp_close_1_lv_obd_auth_cp_min_1_lv_inh_r_up_ls_1"
lv_inh_lam_dly_1                     EQU  0FD3CH
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x80 "member of c_lv_obd_inh_lam_1_lv_inh_int_puc_1_lv_inh_lam_dly_1_lv_obd_auth_cp_close_1_lv_obd_auth_cp_min_1_lv_inh_r_up_ls_1"
lv_inh_r_up_ls_1                     EQU  0FD3CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_inh_r_down_ls_1_lv_inh_vls_up_diag_1_lv_inh_vls_up_scg_diag_1_lv_inh_vls_up_oc_diag_1_lv_inh_vls_up_puc_diag_1_lv_inh_vls"
lv_inh_vls_up_diag_1                 EQU  0FD3DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_inh_r_down_ls_1_lv_inh_vls_up_diag_1_lv_inh_vls_up_scg_diag_1_lv_inh_vls_up_oc_diag_1_lv_inh_vls_up_puc_diag_1_lv_inh_vls"
lv_inh_vls_up_scg_diag_1             EQU  0FD3DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_inh_r_down_ls_1_lv_inh_vls_up_diag_1_lv_inh_vls_up_scg_diag_1_lv_inh_vls_up_oc_diag_1_lv_inh_vls_up_puc_diag_1_lv_inh_vls"
lv_inh_vls_down_diag_1               EQU  0FD3DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_inh_r_down_ls_1_lv_inh_vls_up_diag_1_lv_inh_vls_up_scg_diag_1_lv_inh_vls_up_oc_diag_1_lv_inh_vls_up_puc_diag_1_lv_inh_vls"
lv_inh_vls_up_oc_diag_1              EQU  0FD3DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_inh_r_down_ls_1_lv_inh_vls_up_diag_1_lv_inh_vls_up_scg_diag_1_lv_inh_vls_up_oc_diag_1_lv_inh_vls_up_puc_diag_1_lv_inh_vls"
lv_inh_vls_down_scg_diag_1           EQU  0FD3DH
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x1 "member of c_lv_inh_r_down_ls_1_lv_inh_vls_up_diag_1_lv_inh_vls_up_scg_diag_1_lv_inh_vls_up_oc_diag_1_lv_inh_vls_up_puc_diag_1_lv_inh_vls"
lv_inh_r_down_ls_1                   EQU  0FD3DH
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x10 "member of c_lv_inh_r_down_ls_1_lv_inh_vls_up_diag_1_lv_inh_vls_up_scg_diag_1_lv_inh_vls_up_oc_diag_1_lv_inh_vls_up_puc_diag_1_lv_inh_vls"
lv_inh_vls_up_puc_diag_1             EQU  0FD3DH
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x20 "member of c_lv_inh_r_down_ls_1_lv_inh_vls_up_diag_1_lv_inh_vls_up_scg_diag_1_lv_inh_vls_up_oc_diag_1_lv_inh_vls_up_puc_diag_1_lv_inh_vls"
lv_inh_vls_up_stk_diag_1             EQU  0FD3DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_inh_vls_down_puc_diag_1_lv_inh_fsd_1_lv_cat_diag_inh_1_lv_cat_diag_rbm_inh_1_lv_ls_diag_1_lv_ls_up_rbm_inh_1_lv_ls_down_d"
lv_inh_vls_down_puc_diag_1           EQU  0FD3EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_inh_vls_down_puc_diag_1_lv_inh_fsd_1_lv_cat_diag_inh_1_lv_cat_diag_rbm_inh_1_lv_ls_diag_1_lv_ls_up_rbm_inh_1_lv_ls_down_d"
lv_ls_diag_1                         EQU  0FD3EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_inh_vls_down_puc_diag_1_lv_inh_fsd_1_lv_cat_diag_inh_1_lv_cat_diag_rbm_inh_1_lv_ls_diag_1_lv_ls_up_rbm_inh_1_lv_ls_down_d"
lv_inh_fsd_1                         EQU  0FD3EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_inh_vls_down_puc_diag_1_lv_inh_fsd_1_lv_cat_diag_inh_1_lv_cat_diag_rbm_inh_1_lv_ls_diag_1_lv_ls_up_rbm_inh_1_lv_ls_down_d"
lv_ls_up_rbm_inh_1                   EQU  0FD3EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_inh_vls_down_puc_diag_1_lv_inh_fsd_1_lv_cat_diag_inh_1_lv_cat_diag_rbm_inh_1_lv_ls_diag_1_lv_ls_up_rbm_inh_1_lv_ls_down_d"
lv_ls_down_diag_inh_1                EQU  0FD3EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_inh_vls_down_puc_diag_1_lv_inh_fsd_1_lv_cat_diag_inh_1_lv_cat_diag_rbm_inh_1_lv_ls_diag_1_lv_ls_up_rbm_inh_1_lv_ls_down_d"
lv_cat_diag_rbm_inh_1                EQU  0FD3EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_inh_vls_down_puc_diag_1_lv_inh_fsd_1_lv_cat_diag_inh_1_lv_cat_diag_rbm_inh_1_lv_ls_diag_1_lv_ls_up_rbm_inh_1_lv_ls_down_d"
lv_ls_down_rbm_inh_1                 EQU  0FD3EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_inh_lsh_up_obd2_diag_1_lv_inh_lsh_down_obd2_diag_1_lv_inh_dc_rbm_lv_isapwm_lih_act"
lv_inh_lsh_up_obd2_diag_1            EQU  0FD3FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_inh_lsh_up_obd2_diag_1_lv_inh_lsh_down_obd2_diag_1_lv_inh_dc_rbm_lv_isapwm_lih_act"
lv_inh_dc_rbm                        EQU  0FD3FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_inh_lsh_up_obd2_diag_1_lv_inh_lsh_down_obd2_diag_1_lv_inh_dc_rbm_lv_isapwm_lih_act"
lv_inh_lsh_down_obd2_diag_1          EQU  0FD3FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_inh_lsh_up_obd2_diag_1_lv_inh_lsh_down_obd2_diag_1_lv_inh_dc_rbm_lv_isapwm_lih_act"
lv_isapwm_lih_act                    EQU  0FD3FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_is_ad_inh_obd_lv_is_ad_inh_lv_lam_tco_lscl_lv_lam_tco_lscl_is_lv_lam_mv_ok_lv_cp_set_close"
lv_is_ad_inh_obd                     EQU  0FD40H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_is_ad_inh_obd_lv_is_ad_inh_lv_lam_tco_lscl_lv_lam_tco_lscl_is_lv_lam_mv_ok_lv_cp_set_close"
lv_lam_mv_ok                         EQU  0FD40H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_is_ad_inh_obd_lv_is_ad_inh_lv_lam_tco_lscl_lv_lam_tco_lscl_is_lv_lam_mv_ok_lv_cp_set_close"
lv_is_ad_inh                         EQU  0FD40H
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x4 "member of c_lv_is_ad_inh_obd_lv_is_ad_inh_lv_lam_tco_lscl_lv_lam_tco_lscl_is_lv_lam_mv_ok_lv_cp_set_close"
lv_lam_tco_lscl                      EQU  0FD40H
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x8 "member of c_lv_is_ad_inh_obd_lv_is_ad_inh_lv_lam_tco_lscl_lv_lam_tco_lscl_is_lv_lam_mv_ok_lv_cp_set_close"
lv_lam_tco_lscl_is                   EQU  0FD40H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_end_vls_down_1_puc_lv_lam_stop_intr_lv_dly_ls_ready_lv_t_min_ls_lv_maf_ctl_lv_ar_red_ctl_rst"
lv_end_vls_down_1_puc                EQU  0FD41H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_end_vls_down_1_puc_lv_lam_stop_intr_lv_dly_ls_ready_lv_t_min_ls_lv_maf_ctl_lv_ar_red_ctl_rst"
lv_lam_stop_intr                     EQU  0FD41H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_end_vls_down_1_puc_lv_lam_stop_intr_lv_dly_ls_ready_lv_t_min_ls_lv_maf_ctl_lv_ar_red_ctl_rst"
lv_maf_ctl                           EQU  0FD41H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_end_vls_down_1_puc_lv_lam_stop_intr_lv_dly_ls_ready_lv_t_min_ls_lv_maf_ctl_lv_ar_red_ctl_rst"
lv_ar_red_ctl_rst                    EQU  0FD41H
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x10 "member of c_lv_end_vls_down_1_puc_lv_lam_stop_intr_lv_dly_ls_ready_lv_t_min_ls_lv_maf_ctl_lv_ar_red_ctl_rst"
lv_t_min_ls                          EQU  0FD41H
;@a2l MEASUREMENT UBYTE conv=cv_none_91 mask=0x8 "member of c_lv_end_vls_down_1_puc_lv_lam_stop_intr_lv_dly_ls_ready_lv_t_min_ls_lv_maf_ctl_lv_ar_red_ctl_rst"
lv_dly_ls_ready                      EQU  0FD41H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_ar_red_ctl_stop_lv_ar_red_ad_rst_lv_ar_red_ad_stop_lv_amp_ctl_rst_lv_amp_ctl_stop_lv_amp_ad_rst_lv_amp_ad_stop"
lv_ar_red_ctl_stop                   EQU  0FD42H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_ar_red_ctl_stop_lv_ar_red_ad_rst_lv_ar_red_ad_stop_lv_amp_ctl_rst_lv_amp_ctl_stop_lv_amp_ad_rst_lv_amp_ad_stop"
lv_amp_ctl_stop                      EQU  0FD42H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_ar_red_ctl_stop_lv_ar_red_ad_rst_lv_ar_red_ad_stop_lv_amp_ctl_rst_lv_amp_ctl_stop_lv_amp_ad_rst_lv_amp_ad_stop"
lv_ar_red_ad_rst                     EQU  0FD42H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_ar_red_ctl_stop_lv_ar_red_ad_rst_lv_ar_red_ad_stop_lv_amp_ctl_rst_lv_amp_ctl_stop_lv_amp_ad_rst_lv_amp_ad_stop"
lv_ar_red_ad_stop                    EQU  0FD42H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_ar_red_ctl_stop_lv_ar_red_ad_rst_lv_ar_red_ad_stop_lv_amp_ctl_rst_lv_amp_ctl_stop_lv_amp_ad_rst_lv_amp_ad_stop"
lv_amp_ad_stop                       EQU  0FD42H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_ar_red_ctl_stop_lv_ar_red_ad_rst_lv_ar_red_ad_stop_lv_amp_ctl_rst_lv_amp_ctl_stop_lv_amp_ad_rst_lv_amp_ad_stop"
lv_amp_ctl_rst                       EQU  0FD42H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_err_maf_det_lv_err_maf_plaus_det_lv_err_tps_plaus_det_lv_ratio_chk_err_lv_err_maf_tps_ratio_1"
lv_err_maf_plaus_det                 EQU  0FD43H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_err_maf_det_lv_err_maf_plaus_det_lv_err_tps_plaus_det_lv_ratio_chk_err_lv_err_maf_tps_ratio_1"
lv_err_tps_plaus_det                 EQU  0FD43H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_err_maf_det_lv_err_maf_plaus_det_lv_err_tps_plaus_det_lv_ratio_chk_err_lv_err_maf_tps_ratio_1"
lv_ratio_chk_err                     EQU  0FD43H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_err_maf_det_lv_err_maf_plaus_det_lv_err_tps_plaus_det_lv_ratio_chk_err_lv_err_maf_tps_ratio_1"
lv_err_maf_det                       EQU  0FD43H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_err_maf_det_lv_err_maf_plaus_det_lv_err_tps_plaus_det_lv_ratio_chk_err_lv_err_maf_tps_ratio_1"
lv_err_maf_tps_ratio_1               EQU  0FD43H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_err_maf_tps_ratio_2_lv_sym_err_maf_tps_ratio_lv_maf_tps_ratio_chk_act_lv_tra_state_lv_sov"
lv_sym_err_maf_tps_ratio             EQU  0FD44H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_err_maf_tps_ratio_2_lv_sym_err_maf_tps_ratio_lv_maf_tps_ratio_chk_act_lv_tra_state_lv_sov"
lv_sov                               EQU  0FD44H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_err_maf_tps_ratio_2_lv_sym_err_maf_tps_ratio_lv_maf_tps_ratio_chk_act_lv_tra_state_lv_sov"
lv_maf_tps_ratio_chk_act             EQU  0FD44H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_err_maf_tps_ratio_2_lv_sym_err_maf_tps_ratio_lv_maf_tps_ratio_chk_act_lv_tra_state_lv_sov"
lv_tra_state                         EQU  0FD44H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_dtp_evac_inc_lv_t_dly_dtp_evac_inc_lv_inh_diagcp_err_lv_state_rbm_evap_bit_2_lv_lim_dyn_prs_diagcp"
lv_t_dly_dtp_evac_inc                EQU  0FD45H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_dtp_evac_inc_lv_t_dly_dtp_evac_inc_lv_inh_diagcp_err_lv_state_rbm_evap_bit_2_lv_lim_dyn_prs_diagcp"
lv_inh_diagcp_err                    EQU  0FD45H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_dtp_evac_inc_lv_t_dly_dtp_evac_inc_lv_inh_diagcp_err_lv_state_rbm_evap_bit_2_lv_lim_dyn_prs_diagcp"
lv_state_rbm_evap_bit_2              EQU  0FD45H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_dtp_evac_inc_lv_t_dly_dtp_evac_inc_lv_inh_diagcp_err_lv_state_rbm_evap_bit_2_lv_lim_dyn_prs_diagcp"
lv_dtp_evac_inc                      EQU  0FD45H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_dtp_evac_inc_lv_t_dly_dtp_evac_inc_lv_inh_diagcp_err_lv_state_rbm_evap_bit_2_lv_lim_dyn_prs_diagcp"
lv_lim_dyn_prs_diagcp                EQU  0FD45H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_end_vap_chk_lv_t_dly_3_lv_inc_ctr_evap"
lv_end_vap_chk                       EQU  0FD47H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_end_vap_chk_lv_t_dly_3_lv_inc_ctr_evap"
lv_inc_ctr_evap                      EQU  0FD47H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_end_vap_chk_lv_t_dly_3_lv_inc_ctr_evap"
lv_t_dly_3                           EQU  0FD47H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_act_diagcps_lv_ti_lam_cor_diagcp_lv_dtp_evac_slop_lv_dtp_slop_lv_dtp_dif"
lv_ti_lam_cor_diagcp                 EQU  0FD48H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_act_diagcps_lv_ti_lam_cor_diagcp_lv_dtp_evac_slop_lv_dtp_slop_lv_dtp_dif"
lv_dtp_evac_slop                     EQU  0FD48H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_act_diagcps_lv_ti_lam_cor_diagcp_lv_dtp_evac_slop_lv_dtp_slop_lv_dtp_dif"
lv_dtp_slop                          EQU  0FD48H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_act_diagcps_lv_ti_lam_cor_diagcp_lv_dtp_evac_slop_lv_dtp_slop_lv_dtp_dif"
lv_dtp_dif                           EQU  0FD48H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_mdl_diagcp_lv_t_ls_frq_diag_1_lv_seg_ad_lim_lv_seg_ad_act_state_lv_er_fdout"
lv_mdl_diagcp                        EQU  0FD49H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_mdl_diagcp_lv_t_ls_frq_diag_1_lv_seg_ad_lim_lv_seg_ad_act_state_lv_er_fdout"
lv_seg_ad_lim                        EQU  0FD49H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_mdl_diagcp_lv_t_ls_frq_diag_1_lv_seg_ad_lim_lv_seg_ad_act_state_lv_er_fdout"
lv_seg_ad_act_state                  EQU  0FD49H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_mdl_diagcp_lv_t_ls_frq_diag_1_lv_seg_ad_lim_lv_seg_ad_act_state_lv_er_fdout"
lv_t_ls_frq_diag_1                   EQU  0FD49H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_mdl_diagcp_lv_t_ls_frq_diag_1_lv_seg_ad_lim_lv_seg_ad_act_state_lv_er_fdout"
lv_er_fdout                          EQU  0FD49H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_seg_ad_state_lv_seg_ad_fdout_lv_iga_dif_max_er"
lv_seg_ad_state                      EQU  0FD4AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_seg_ad_state_lv_seg_ad_fdout_lv_iga_dif_max_er"
lv_seg_ad_fdout                      EQU  0FD4AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_cop_lv_opg_sp_isa_ext_adj"
lv_opg_sp_isa_ext_adj                EQU  0FD4BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_cop_lv_opg_sp_isa_ext_adj"
lv_cop                               EQU  0FD4BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_asr_req_lv_gs_act_msr_c_req_can_lv_msr_req"
lv_gs_act                            EQU  0FD4CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_asr_req_lv_gs_act_msr_c_req_can_lv_msr_req"
msr_c_req_can                        EQU  0FD4CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_asr_req_lv_gs_act_msr_c_req_can_lv_msr_req"
lv_msr_req                           EQU  0FD4CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_err_toil_gb_etcu_lv_err_n_tur_conv_etcu_lv_can_err_lv_can_diag_act"
lv_err_toil_gb_etcu                  EQU  0FD4DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_err_toil_gb_etcu_lv_err_n_tur_conv_etcu_lv_can_err_lv_can_diag_act"
lv_err_n_tur_conv_etcu               EQU  0FD4DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_err_toil_gb_etcu_lv_err_n_tur_conv_etcu_lv_can_err_lv_can_diag_act"
lv_can_err                           EQU  0FD4DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_err_toil_gb_etcu_lv_err_n_tur_conv_etcu_lv_can_err_lv_can_diag_act"
lv_can_diag_act                      EQU  0FD4DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_dri_lv_at_abs_def_f_obd_tcu_stat"
lv_at                                EQU  0FD4EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_dri_lv_at_abs_def_f_obd_tcu_stat"
lv_dri                               EQU  0FD4EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_dri_lv_at_abs_def_f_obd_tcu_stat"
f_obd                                EQU  0FD4EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_dri_lv_at_abs_def_f_obd_tcu_stat"
tcu_stat                             EQU  0FD4EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_im_stat_l_mil_lv_ack_tcs_swi_gs_can_tcs_def_tcs_req"
im_stat                              EQU  0FD4FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_im_stat_l_mil_lv_ack_tcs_swi_gs_can_tcs_def_tcs_req"
tcs_def                              EQU  0FD4FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_im_stat_l_mil_lv_ack_tcs_swi_gs_can_tcs_def_tcs_req"
l_mil                                EQU  0FD4FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_im_stat_l_mil_lv_ack_tcs_swi_gs_can_tcs_def_tcs_req"
tcs_req                              EQU  0FD4FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_im_stat_l_mil_lv_ack_tcs_swi_gs_can_tcs_def_tcs_req"
lv_ack_tcs                           EQU  0FD4FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_im_stat_l_mil_lv_ack_tcs_swi_gs_can_tcs_def_tcs_req"
swi_gs_can                           EQU  0FD4FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_inh_diag_maf_dif_ch_int_lv_cdn_diag_maf_dif_ch_int"
lv_inh_diag_maf_dif_ch_int           EQU  0FD50H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_end_diag_maf_dif_ch_int_lv_es_lv_inf_lv_is_lv_n_grd_inf"
lv_end_diag_maf_dif_ch_int           EQU  0FD51H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_end_diag_maf_dif_ch_int_lv_es_lv_inf_lv_is_lv_n_grd_inf"
lv_inf                               EQU  0FD51H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_end_diag_maf_dif_ch_int_lv_es_lv_inf_lv_is_lv_n_grd_inf"
lv_is                                EQU  0FD51H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_end_diag_maf_dif_ch_int_lv_es_lv_inf_lv_is_lv_n_grd_inf"
lv_es                                EQU  0FD51H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_end_diag_maf_dif_ch_int_lv_es_lv_inf_lv_is_lv_n_grd_inf"
lv_n_grd_inf                         EQU  0FD51H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_pl_lv_pu_lv_puc_lv_reac_lv_st_lv_puc_req_lv_pu_puc_tra_fast"
lv_st                                EQU  0FD52H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_pl_lv_pu_lv_puc_lv_reac_lv_st_lv_puc_req_lv_pu_puc_tra_fast"
lv_pu                                EQU  0FD52H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_pl_lv_pu_lv_puc_lv_reac_lv_st_lv_puc_req_lv_pu_puc_tra_fast"
lv_puc_req                           EQU  0FD52H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_pl_lv_pu_lv_puc_lv_reac_lv_st_lv_puc_req_lv_pu_puc_tra_fast"
lv_puc                               EQU  0FD52H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_pl_lv_pu_lv_puc_lv_reac_lv_st_lv_puc_req_lv_pu_puc_tra_fast"
lv_pu_puc_tra_fast                   EQU  0FD52H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_pl_lv_pu_lv_puc_lv_reac_lv_st_lv_puc_req_lv_pu_puc_tra_fast"
lv_reac                              EQU  0FD52H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_st_end_lv_cyc_wup_lv_vb_off_act_lv_vb_off_lv_conf_nvmy_rst_lv_conf_kobd"
lv_vb_off_act                        EQU  0FD53H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_st_end_lv_cyc_wup_lv_vb_off_act_lv_vb_off_lv_conf_nvmy_rst_lv_conf_kobd"
lv_st_end                            EQU  0FD53H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_st_end_lv_cyc_wup_lv_vb_off_act_lv_vb_off_lv_conf_nvmy_rst_lv_conf_kobd"
lv_vb_off                            EQU  0FD53H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_st_end_lv_cyc_wup_lv_vb_off_act_lv_vb_off_lv_conf_nvmy_rst_lv_conf_kobd"
lv_conf_nvmy_rst                     EQU  0FD53H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_st_end_lv_cyc_wup_lv_vb_off_act_lv_vb_off_lv_conf_nvmy_rst_lv_conf_kobd"
lv_cyc_wup                           EQU  0FD53H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_st_end_lv_cyc_wup_lv_vb_off_act_lv_vb_off_lv_conf_nvmy_rst_lv_conf_kobd"
lv_conf_kobd                         EQU  0FD53H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_ti_min_lv_ti_lim_min_lv_rest_lv_st_es_lv_maf_trim"
lv_ti_lim_min                        EQU  0FD54H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_ti_min_lv_ti_lim_min_lv_rest_lv_st_es_lv_maf_trim"
lv_rest                              EQU  0FD54H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_ti_min_lv_ti_lim_min_lv_rest_lv_st_es_lv_maf_trim"
lv_st_es                             EQU  0FD54H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_ti_min_lv_ti_lim_min_lv_rest_lv_st_es_lv_maf_trim"
lv_ti_min                            EQU  0FD54H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_igk_lv_vb_jump_lv_cdn_vb_obd1_lv_cdn_vb_obd2"
lv_cdn_vb_obd2                       EQU  0FD59H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_igk_lv_vb_jump_lv_cdn_vb_obd1_lv_cdn_vb_obd2"
lv_igk                               EQU  0FD59H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_igk_lv_vb_jump_lv_cdn_vb_obd1_lv_cdn_vb_obd2"
lv_vb_jump                           EQU  0FD59H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_igk_lv_vb_jump_lv_cdn_vb_obd1_lv_cdn_vb_obd2"
lv_cdn_vb_obd1                       EQU  0FD59H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_err_com_p1max_imob_lv_err_com_p2max_imob_lv_err_com_p4max_imob"
lv_err_com_p1max_imob                EQU  0FD5DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_err_com_p1max_imob_lv_err_com_p2max_imob_lv_err_com_p4max_imob"
lv_err_com_p2max_imob                EQU  0FD5DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_err_com_p1max_imob_lv_err_com_p2max_imob_lv_err_com_p4max_imob"
lv_err_com_p4max_imob                EQU  0FD5DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_cdn_vb_min_diag"
lv_cdn_vb_min_diag                   EQU  0FD63H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x1 "member of imob_bw"
lv_err_vs_imob                       EQU  0FD6EH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x10 "member of imob_bw"
lv_key_fast_imob                     EQU  0FD6EH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x100 "member of imob_bw"
lv_lock_imob                         EQU  0FD6EH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x2 "member of imob_bw"
lv_ans_pos_imob                      EQU  0FD6EH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x200 "member of imob_bw"
lv_secu_b_imob                       EQU  0FD6EH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x4 "member of imob_bw"
lv_secu_2_imob                       EQU  0FD6EH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x8 "member of imob_bw"
lv_pwl_imob                          EQU  0FD6EH
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x800 "member of imob_bw"
lv_err_cod_imob                      EQU  0FD6EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_knks_1_err_dyw_lv_knks_1_err_rng_lv_knks_1_err_slave"
lv_knks_1_err_rng                    EQU  0FD74H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_knks_1_err_dyw_lv_knks_1_err_rng_lv_knks_1_err_slave"
lv_knks_1_err_slave                  EQU  0FD74H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_knks_diag_ena"
lv_knks_diag_ena                     EQU  0FD75H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_tps_err_lv_tps_plaus_err_lv_maf_err_lv_maf_plaus_err_lv_maf_dif_diag_ch_int_err_lv_crk_err_lv_cam_err_lv_vs_err"
lv_tps_err                           EQU  0FD7AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_tps_err_lv_tps_plaus_err_lv_maf_err_lv_maf_plaus_err_lv_maf_dif_diag_ch_int_err_lv_crk_err_lv_cam_err_lv_vs_err"
lv_maf_dif_diag_ch_int_err           EQU  0FD7AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_tps_err_lv_tps_plaus_err_lv_maf_err_lv_maf_plaus_err_lv_maf_dif_diag_ch_int_err_lv_crk_err_lv_cam_err_lv_vs_err"
lv_tps_plaus_err                     EQU  0FD7AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_tps_err_lv_tps_plaus_err_lv_maf_err_lv_maf_plaus_err_lv_maf_dif_diag_ch_int_err_lv_crk_err_lv_cam_err_lv_vs_err"
lv_crk_err                           EQU  0FD7AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_tps_err_lv_tps_plaus_err_lv_maf_err_lv_maf_plaus_err_lv_maf_dif_diag_ch_int_err_lv_crk_err_lv_cam_err_lv_vs_err"
lv_maf_err                           EQU  0FD7AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_tps_err_lv_tps_plaus_err_lv_maf_err_lv_maf_plaus_err_lv_maf_dif_diag_ch_int_err_lv_crk_err_lv_cam_err_lv_vs_err"
lv_maf_plaus_err                     EQU  0FD7AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_tps_err_lv_tps_plaus_err_lv_maf_err_lv_maf_plaus_err_lv_maf_dif_diag_ch_int_err_lv_crk_err_lv_cam_err_lv_vs_err"
lv_vs_err                            EQU  0FD7AH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_mwss_err_lv_tia_err_lv_tia_plaus_err_lv_tco_err_lv_tco_stuck_err_lv_tco_stuck_rng_err"
lv_mwss_err                          EQU  0FD7BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_mwss_err_lv_tia_err_lv_tia_plaus_err_lv_tco_err_lv_tco_stuck_err_lv_tco_stuck_rng_err"
lv_tco_err                           EQU  0FD7BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_mwss_err_lv_tia_err_lv_tia_plaus_err_lv_tco_err_lv_tco_stuck_err_lv_tco_stuck_rng_err"
lv_tco_stuck_err                     EQU  0FD7BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_mwss_err_lv_tia_err_lv_tia_plaus_err_lv_tco_err_lv_tco_stuck_err_lv_tco_stuck_rng_err"
lv_tia_err                           EQU  0FD7BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_mwss_err_lv_tia_err_lv_tia_plaus_err_lv_tco_err_lv_tco_stuck_err_lv_tco_stuck_rng_err"
lv_tco_stuck_rng_err                 EQU  0FD7BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_mwss_err_lv_tia_err_lv_tia_plaus_err_lv_tco_err_lv_tco_stuck_err_lv_tco_stuck_rng_err"
lv_tia_plaus_err                     EQU  0FD7BH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_tco_grd_err_lv_tco_plaus_err_lv_th_err_lv_vls_up_1_err_lv_vls_up_1_plaus_err_lv_vls_up_1_puc_err_lv_vls_up_1_stk_err_lv_l"
lv_tco_grd_err                       EQU  0FD7CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_tco_grd_err_lv_tco_plaus_err_lv_th_err_lv_vls_up_1_err_lv_vls_up_1_plaus_err_lv_vls_up_1_puc_err_lv_vls_up_1_stk_err_lv_l"
lv_vls_up_1_plaus_err                EQU  0FD7CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_tco_grd_err_lv_tco_plaus_err_lv_th_err_lv_vls_up_1_err_lv_vls_up_1_plaus_err_lv_vls_up_1_puc_err_lv_vls_up_1_stk_err_lv_l"
lv_tco_plaus_err                     EQU  0FD7CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_tco_grd_err_lv_tco_plaus_err_lv_th_err_lv_vls_up_1_err_lv_vls_up_1_plaus_err_lv_vls_up_1_puc_err_lv_vls_up_1_stk_err_lv_l"
lv_vls_up_1_puc_err                  EQU  0FD7CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_tco_grd_err_lv_tco_plaus_err_lv_th_err_lv_vls_up_1_err_lv_vls_up_1_plaus_err_lv_vls_up_1_puc_err_lv_vls_up_1_stk_err_lv_l"
lv_th_err                            EQU  0FD7CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_tco_grd_err_lv_tco_plaus_err_lv_th_err_lv_vls_up_1_err_lv_vls_up_1_plaus_err_lv_vls_up_1_puc_err_lv_vls_up_1_stk_err_lv_l"
lv_vls_up_1_stk_err                  EQU  0FD7CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_tco_grd_err_lv_tco_plaus_err_lv_th_err_lv_vls_up_1_err_lv_vls_up_1_plaus_err_lv_vls_up_1_puc_err_lv_vls_up_1_stk_err_lv_l"
lv_vls_up_1_err                      EQU  0FD7CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_vls_down_1_err_lv_vls_down_1_puc_err_lv_vls_down_plaus_1_err_lv_lsh_up_1_err_lv_lsh_down_1_err_lv_lsh_up_obd2_1_err_lv_ls"
lv_vls_down_1_err                    EQU  0FD7DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_vls_down_1_err_lv_vls_down_1_puc_err_lv_vls_down_plaus_1_err_lv_lsh_up_1_err_lv_lsh_down_1_err_lv_lsh_up_obd2_1_err_lv_ls"
lv_lsh_down_1_err                    EQU  0FD7DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_vls_down_1_err_lv_vls_down_1_puc_err_lv_vls_down_plaus_1_err_lv_lsh_up_1_err_lv_lsh_down_1_err_lv_lsh_up_obd2_1_err_lv_ls"
lv_vls_down_1_puc_err                EQU  0FD7DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_vls_down_1_err_lv_vls_down_1_puc_err_lv_vls_down_plaus_1_err_lv_lsh_up_1_err_lv_lsh_down_1_err_lv_lsh_up_obd2_1_err_lv_ls"
lv_lsh_up_obd2_1_err                 EQU  0FD7DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_vls_down_1_err_lv_vls_down_1_puc_err_lv_vls_down_plaus_1_err_lv_lsh_up_1_err_lv_lsh_down_1_err_lv_lsh_up_obd2_1_err_lv_ls"
lv_vls_down_plaus_1_err              EQU  0FD7DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_vls_down_1_err_lv_vls_down_1_puc_err_lv_vls_down_plaus_1_err_lv_lsh_up_1_err_lv_lsh_down_1_err_lv_lsh_up_obd2_1_err_lv_ls"
lv_lsh_down_obd2_1_err               EQU  0FD7DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_vls_down_1_err_lv_vls_down_1_puc_err_lv_vls_down_plaus_1_err_lv_lsh_up_1_err_lv_lsh_down_1_err_lv_lsh_up_obd2_1_err_lv_ls"
lv_lsh_up_1_err                      EQU  0FD7DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_vls_down_1_err_lv_vls_down_1_puc_err_lv_vls_down_plaus_1_err_lv_lsh_up_1_err_lv_lsh_down_1_err_lv_lsh_up_obd2_1_err_lv_ls"
lv_cat_diag_1_err                    EQU  0FD7DH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_vls_swt_1_err_lv_vls_frq_1_err_lv_ls_down_swt_1_err_lv_vls_down_plaus_pue_1_err_lv_fsd_1_err_lv_cps_err_lv_cps_mecha_err_"
lv_vls_swt_1_err                     EQU  0FD7EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_vls_swt_1_err_lv_vls_frq_1_err_lv_ls_down_swt_1_err_lv_vls_down_plaus_pue_1_err_lv_fsd_1_err_lv_cps_err_lv_cps_mecha_err_"
lv_fsd_1_err                         EQU  0FD7EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_vls_swt_1_err_lv_vls_frq_1_err_lv_ls_down_swt_1_err_lv_vls_down_plaus_pue_1_err_lv_fsd_1_err_lv_cps_err_lv_cps_mecha_err_"
lv_vls_frq_1_err                     EQU  0FD7EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_vls_swt_1_err_lv_vls_frq_1_err_lv_ls_down_swt_1_err_lv_vls_down_plaus_pue_1_err_lv_fsd_1_err_lv_cps_err_lv_cps_mecha_err_"
lv_ls_down_swt_1_err                 EQU  0FD7EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_vls_swt_1_err_lv_vls_frq_1_err_lv_ls_down_swt_1_err_lv_vls_down_plaus_pue_1_err_lv_fsd_1_err_lv_cps_err_lv_cps_mecha_err_"
lv_cps_mecha_err                     EQU  0FD7EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_vls_swt_1_err_lv_vls_frq_1_err_lv_ls_down_swt_1_err_lv_vls_down_plaus_pue_1_err_lv_fsd_1_err_lv_cps_err_lv_cps_mecha_err_"
lv_vls_down_plaus_pue_1_err          EQU  0FD7EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_vls_swt_1_err_lv_vls_frq_1_err_lv_ls_down_swt_1_err_lv_vls_down_plaus_pue_1_err_lv_fsd_1_err_lv_cps_err_lv_cps_mecha_err_"
lv_dtp_sens_err                      EQU  0FD7EH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_dtp_con_err_lv_dtp_noise_err_lv_leak_small_05mm_err_lv_leak_small_1mm_err_lv_leak_large_err_lv_tc_err_lv_sov_err_lv_sov_m"
lv_dtp_con_err                       EQU  0FD7FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_dtp_con_err_lv_dtp_noise_err_lv_leak_small_05mm_err_lv_leak_small_1mm_err_lv_leak_large_err_lv_tc_err_lv_sov_err_lv_sov_m"
lv_leak_large_err                    EQU  0FD7FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_dtp_con_err_lv_dtp_noise_err_lv_leak_small_05mm_err_lv_leak_small_1mm_err_lv_leak_large_err_lv_tc_err_lv_sov_err_lv_sov_m"
lv_dtp_noise_err                     EQU  0FD7FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_dtp_con_err_lv_dtp_noise_err_lv_leak_small_05mm_err_lv_leak_small_1mm_err_lv_leak_large_err_lv_tc_err_lv_sov_err_lv_sov_m"
lv_tc_err                            EQU  0FD7FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_dtp_con_err_lv_dtp_noise_err_lv_leak_small_05mm_err_lv_leak_small_1mm_err_lv_leak_large_err_lv_tc_err_lv_sov_err_lv_sov_m"
lv_leak_small_05mm_err               EQU  0FD7FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_dtp_con_err_lv_dtp_noise_err_lv_leak_small_05mm_err_lv_leak_small_1mm_err_lv_leak_large_err_lv_tc_err_lv_sov_err_lv_sov_m"
lv_sov_err                           EQU  0FD7FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_dtp_con_err_lv_dtp_noise_err_lv_leak_small_05mm_err_lv_leak_small_1mm_err_lv_leak_large_err_lv_tc_err_lv_sov_err_lv_sov_m"
lv_leak_small_1mm_err                EQU  0FD7FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_dtp_con_err_lv_dtp_noise_err_lv_leak_small_05mm_err_lv_leak_small_1mm_err_lv_leak_large_err_lv_tc_err_lv_sov_err_lv_sov_m"
lv_sov_mecha_err                     EQU  0FD7FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_iv_0_err_lv_iv_1_err_lv_iv_2_err_lv_iv_3_err_lv_dur_igc_0_err_lv_dur_igc_1_err_lv_dur_igc_2_err_lv_dur_igc_3_err"
lv_iv_0_err                          EQU  0FD80H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_iv_0_err_lv_iv_1_err_lv_iv_2_err_lv_iv_3_err_lv_dur_igc_0_err_lv_dur_igc_1_err_lv_dur_igc_2_err_lv_dur_igc_3_err"
lv_iv_1_err                          EQU  0FD80H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_iv_0_err_lv_iv_1_err_lv_iv_2_err_lv_iv_3_err_lv_dur_igc_0_err_lv_dur_igc_1_err_lv_dur_igc_2_err_lv_dur_igc_3_err"
lv_dur_igc_1_err                     EQU  0FD80H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_iv_0_err_lv_iv_1_err_lv_iv_2_err_lv_iv_3_err_lv_dur_igc_0_err_lv_dur_igc_1_err_lv_dur_igc_2_err_lv_dur_igc_3_err"
lv_iv_2_err                          EQU  0FD80H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_iv_0_err_lv_iv_1_err_lv_iv_2_err_lv_iv_3_err_lv_dur_igc_0_err_lv_dur_igc_1_err_lv_dur_igc_2_err_lv_dur_igc_3_err"
lv_dur_igc_2_err                     EQU  0FD80H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_iv_0_err_lv_iv_1_err_lv_iv_2_err_lv_iv_3_err_lv_dur_igc_0_err_lv_dur_igc_1_err_lv_dur_igc_2_err_lv_dur_igc_3_err"
lv_iv_3_err                          EQU  0FD80H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_iv_0_err_lv_iv_1_err_lv_iv_2_err_lv_iv_3_err_lv_dur_igc_0_err_lv_dur_igc_1_err_lv_dur_igc_2_err_lv_dur_igc_3_err"
lv_dur_igc_3_err                     EQU  0FD80H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_knk_1_err_lv_isa_1_err_lv_isa_2_err_lv_isapwm_l_err"
lv_knk_1_err                         EQU  0FD81H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_knk_1_err_lv_isa_1_err_lv_isa_2_err_lv_isapwm_l_err"
lv_isa_1_err                         EQU  0FD81H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_knk_1_err_lv_isa_1_err_lv_isa_2_err_lv_isapwm_l_err"
lv_isa_2_err                         EQU  0FD81H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_knk_1_err_lv_isa_1_err_lv_isa_2_err_lv_isapwm_l_err"
lv_isapwm_l_err                      EQU  0FD81H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_isapwm_h_err_lv_rly_accout_err_lv_rly_efp_err_lv_ecu_err_lv_vin_diag_err_lv_seg_t_ad_err_lv_mis_mpl_err_lv_mis_0_err"
lv_isapwm_h_err                      EQU  0FD82H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_isapwm_h_err_lv_rly_accout_err_lv_rly_efp_err_lv_ecu_err_lv_vin_diag_err_lv_seg_t_ad_err_lv_mis_mpl_err_lv_mis_0_err"
lv_vin_diag_err                      EQU  0FD82H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_isapwm_h_err_lv_rly_accout_err_lv_rly_efp_err_lv_ecu_err_lv_vin_diag_err_lv_seg_t_ad_err_lv_mis_mpl_err_lv_mis_0_err"
lv_rly_accout_err                    EQU  0FD82H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_isapwm_h_err_lv_rly_accout_err_lv_rly_efp_err_lv_ecu_err_lv_vin_diag_err_lv_seg_t_ad_err_lv_mis_mpl_err_lv_mis_0_err"
lv_seg_t_ad_err                      EQU  0FD82H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_isapwm_h_err_lv_rly_accout_err_lv_rly_efp_err_lv_ecu_err_lv_vin_diag_err_lv_seg_t_ad_err_lv_mis_mpl_err_lv_mis_0_err"
lv_rly_efp_err                       EQU  0FD82H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_isapwm_h_err_lv_rly_accout_err_lv_rly_efp_err_lv_ecu_err_lv_vin_diag_err_lv_seg_t_ad_err_lv_mis_mpl_err_lv_mis_0_err"
lv_mis_mpl_err                       EQU  0FD82H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_isapwm_h_err_lv_rly_accout_err_lv_rly_efp_err_lv_ecu_err_lv_vin_diag_err_lv_seg_t_ad_err_lv_mis_mpl_err_lv_mis_0_err"
lv_mis_0_err                         EQU  0FD82H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_mis_1_err_lv_mis_2_err_lv_mis_3_err_lv_mil_err_lv_tp_imob_err_lv_antenna_imob_err_lv_req_imob_err_lv_com_imob_err"
lv_mis_1_err                         EQU  0FD83H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_mis_1_err_lv_mis_2_err_lv_mis_3_err_lv_mil_err_lv_tp_imob_err_lv_antenna_imob_err_lv_req_imob_err_lv_com_imob_err"
lv_tp_imob_err                       EQU  0FD83H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_mis_1_err_lv_mis_2_err_lv_mis_3_err_lv_mil_err_lv_tp_imob_err_lv_antenna_imob_err_lv_req_imob_err_lv_com_imob_err"
lv_mis_2_err                         EQU  0FD83H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_mis_1_err_lv_mis_2_err_lv_mis_3_err_lv_mil_err_lv_tp_imob_err_lv_antenna_imob_err_lv_req_imob_err_lv_com_imob_err"
lv_antenna_imob_err                  EQU  0FD83H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_mis_1_err_lv_mis_2_err_lv_mis_3_err_lv_mil_err_lv_tp_imob_err_lv_antenna_imob_err_lv_req_imob_err_lv_com_imob_err"
lv_mis_3_err                         EQU  0FD83H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_mis_1_err_lv_mis_2_err_lv_mis_3_err_lv_mil_err_lv_tp_imob_err_lv_antenna_imob_err_lv_req_imob_err_lv_com_imob_err"
lv_req_imob_err                      EQU  0FD83H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_mis_1_err_lv_mis_2_err_lv_mis_3_err_lv_mil_err_lv_tp_imob_err_lv_antenna_imob_err_lv_req_imob_err_lv_com_imob_err"
lv_mil_err                           EQU  0FD83H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_mis_1_err_lv_mis_2_err_lv_mis_3_err_lv_mil_err_lv_tp_imob_err_lv_antenna_imob_err_lv_req_imob_err_lv_com_imob_err"
lv_com_imob_err                      EQU  0FD83H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_data_imob_err_lv_mil_imob_err_lv_rly_fan_l_err_lv_rly_fan_h_err_lv_rly_main_err_lv_can_bus_off_err_lv_timeout_tcu1_err"
lv_data_imob_err                     EQU  0FD84H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_data_imob_err_lv_mil_imob_err_lv_rly_fan_l_err_lv_rly_fan_h_err_lv_rly_main_err_lv_can_bus_off_err_lv_timeout_tcu1_err"
lv_rly_main_err                      EQU  0FD84H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_data_imob_err_lv_mil_imob_err_lv_rly_fan_l_err_lv_rly_fan_h_err_lv_rly_main_err_lv_can_bus_off_err_lv_timeout_tcu1_err"
lv_mil_imob_err                      EQU  0FD84H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_data_imob_err_lv_mil_imob_err_lv_rly_fan_l_err_lv_rly_fan_h_err_lv_rly_main_err_lv_can_bus_off_err_lv_timeout_tcu1_err"
lv_rly_fan_l_err                     EQU  0FD84H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_data_imob_err_lv_mil_imob_err_lv_rly_fan_l_err_lv_rly_fan_h_err_lv_rly_main_err_lv_can_bus_off_err_lv_timeout_tcu1_err"
lv_timeout_tcu1_err                  EQU  0FD84H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_data_imob_err_lv_mil_imob_err_lv_rly_fan_l_err_lv_rly_fan_h_err_lv_rly_main_err_lv_can_bus_off_err_lv_timeout_tcu1_err"
lv_rly_fan_h_err                     EQU  0FD84H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_can_frf_err_lv_toil_err_lv_toil_stuck_err_lv_toil_plaus_h_err_lv_toil_plaus_l_err"
lv_can_frf_err                       EQU  0FD85H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_can_frf_err_lv_toil_err_lv_toil_stuck_err_lv_toil_plaus_h_err_lv_toil_plaus_l_err"
lv_toil_plaus_l_err                  EQU  0FD85H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_can_frf_err_lv_toil_err_lv_toil_stuck_err_lv_toil_plaus_h_err_lv_toil_plaus_l_err"
lv_toil_err                          EQU  0FD85H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_can_frf_err_lv_toil_err_lv_toil_stuck_err_lv_toil_plaus_h_err_lv_toil_plaus_l_err"
lv_toil_stuck_err                    EQU  0FD85H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_can_frf_err_lv_toil_err_lv_toil_stuck_err_lv_toil_plaus_h_err_lv_toil_plaus_l_err"
lv_toil_plaus_h_err                  EQU  0FD85H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x10 "member of c_lv_vb_l_err_lv_vb_h_err_lv_acp_err"
lv_vb_h_err                          EQU  0FD86H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x8 "member of c_lv_vb_l_err_lv_vb_h_err_lv_acp_err"
lv_vb_l_err                          EQU  0FD86H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x2000 "member of obd_sf"
lv_dc                                EQU  0FD88H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x4000 "member of obd_sf"
lv_mil_on                            EQU  0FD88H
;@a2l MEASUREMENT UWORD conv=cv_none_68 mask=0x8000 "member of obd_sf"
lv_mil_flash                         EQU  0FD88H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_conf_imob_lv_conf_tcu_can_lv_conf_acc"
lv_conf_imob                         EQU  0FD8FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x20 "member of c_lv_conf_imob_lv_conf_tcu_can_lv_conf_acc"
lv_conf_acc                          EQU  0FD8FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_conf_imob_lv_conf_tcu_can_lv_conf_acc"
lv_conf_tcu_can                      EQU  0FD8FH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x1 "member of c_lv_im_rly_fan_m_lv_im_rly_fan_h_lv_im_rly_fan_l_lv_im_rly_accout"
lv_im_rly_fan_m                      EQU  0FD97H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x2 "member of c_lv_im_rly_fan_m_lv_im_rly_fan_h_lv_im_rly_fan_l_lv_im_rly_accout"
lv_im_rly_fan_h                      EQU  0FD97H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x4 "member of c_lv_im_rly_fan_m_lv_im_rly_fan_h_lv_im_rly_fan_l_lv_im_rly_accout"
lv_im_rly_fan_l                      EQU  0FD97H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_im_rly_fan_m_lv_im_rly_fan_h_lv_im_rly_fan_l_lv_im_rly_accout"
lv_im_rly_accout                     EQU  0FD97H
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x40 "member of c_lv_im_acin_lv_im_prs_acc"
lv_im_prs_acc                        EQU  0FD9CH
;@a2l MEASUREMENT UBYTE conv=cv_none_68 mask=0x80 "member of c_lv_im_accin"
lv_im_accin                          EQU  0FDA1H
