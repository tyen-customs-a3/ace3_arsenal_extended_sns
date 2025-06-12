// ace3_arsenal_extended_sns/addons/aceax_compat_sns/XtdGearInfos.hpp
#include "macros.hpp"

class XtdGearInfos
{
    class CfgWeapons
    {
        // ===================================================================================================================================
        // UNIFORMS
        // ===================================================================================================================================

        // --- US Army OG-107 Fatigues ---
        DEFINE_U_OG107(U_Simc_OG107_mk1,"Mk1","Full","Untucked","None","No")
        DEFINE_U_OG107(U_Simc_OG107_mk1_trop,"Mk1","Rolled","Untucked","None","No")
        DEFINE_U_OG107(U_Simc_OG107_mk1_tuck,"Mk1","Full","Tucked","None","No")
        DEFINE_U_OG107(U_Simc_OG107_mk1_tuck_trop,"Mk1","Rolled","Tucked","None","No")
        DEFINE_U_OG107(U_Simc_OG107_mk1_gas,"Mk1","Full","Tucked","None","Yes")
        DEFINE_U_OG107(U_Simc_OG107_mk1_gas_trop,"Mk1","Rolled","Tucked","None","Yes")
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex,"Mk1","Full","Untucked","Nomex","No")
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_trop,"Mk1","Rolled","Untucked","Nomex","No")
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_tuck,"Mk1","Full","Tucked","Nomex","No")
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_tuck_trop,"Mk1","Rolled","Tucked","Nomex","No")
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_gas,"Mk1","Full","Tucked","Nomex","Yes")
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_gas_trop,"Mk1","Rolled","Tucked","Nomex","Yes")

        DEFINE_U_OG107(U_Simc_OG107_mk3,"Mk3","Full","Untucked","None","No")
        DEFINE_U_OG107(U_Simc_OG107_mk3_trop,"Mk3","Rolled","Untucked","None","No")
        DEFINE_U_OG107(U_Simc_OG107_mk3_tuck,"Mk3","Full","Tucked","None","No")
        DEFINE_U_OG107(U_Simc_OG107_mk3_tuck_trop,"Mk3","Rolled","Tucked","None","No")
        DEFINE_U_OG107(U_Simc_OG107_mk3_gas,"Mk3","Full","Tucked","None","Yes")
        DEFINE_U_OG107(U_Simc_OG107_mk3_gas_trop,"Mk3","Rolled","Tucked","None","Yes")
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex,"Mk3","Full","Untucked","Nomex","No")
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_trop,"Mk3","Rolled","Untucked","Nomex","No")
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_tuck,"Mk3","Full","Tucked","Nomex","No")
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_tuck_trop,"Mk3","Rolled","Tucked","Nomex","No")
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_gas,"Mk3","Full","Tucked","Nomex","Yes")
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_gas_trop,"Mk3","Rolled","Tucked","Nomex","Yes")

        // --- US Army TCU Fatigues ---
        DEFINE_U_TCU(U_Simc_TCU_mk1,"Mk1","Full","Standard","None")
        DEFINE_U_TCU(U_Simc_TCU_mk1_trop,"Mk1","Rolled","Standard","None")
        DEFINE_U_TCU(U_Simc_TCU_mk1_roll,"Mk1","Rolled","Standard","None")
        DEFINE_U_TCU(U_Simc_TCU_mk1_og,"Mk1","Full","OG-107","None")
        DEFINE_U_TCU(U_Simc_TCU_mk1_og_trop,"Mk1","Rolled","OG-107","None")
        DEFINE_U_TCU(U_Simc_TCU_mk1_nomex,"Mk1","Full","Standard","Nomex")
        DEFINE_U_TCU(U_Simc_TCU_mk1_leg,"Mk1","Full","Leggings","None")
        DEFINE_U_TCU(U_Simc_TCU_mk1_leg_roll,"Mk1","Rolled","Leggings","None")

        DEFINE_U_TCU(U_Simc_TCU_mk2,"Mk2","Full","Standard","None")
        DEFINE_U_TCU(U_Simc_TCU_mk2_trop,"Mk2","Rolled","Standard","None")
        DEFINE_U_TCU(U_Simc_TCU_mk2_roll,"Mk2","Rolled","Standard","None")
        DEFINE_U_TCU(U_Simc_TCU_mk2_nomex,"Mk2","Full","Standard","Nomex")

        DEFINE_U_TCU(U_Simc_TCU_mk3,"Mk3","Full","Standard","None")
        DEFINE_U_TCU(U_Simc_TCU_mk3_trop,"Mk3","Rolled","Standard","None")
        DEFINE_U_TCU(U_Simc_TCU_mk3_poplijn,"Mk3","Full","Poplin","None")
        DEFINE_U_TCU(U_Simc_TCU_mk3_poplijn_trop,"Mk3","Rolled","Poplin","None")
        DEFINE_U_TCU(U_Simc_TCU_mk3_cute,"Mk3","Cut","Standard","None")
        DEFINE_U_TCU(U_Simc_TCU_mk3_nomex,"Mk3","Full","Standard","Nomex")
        DEFINE_U_TCU(U_Simc_TCU_mk3_leg,"Mk3","Full","Leggings","None")
        DEFINE_U_TCU(U_Simc_TCU_mk3_leg_roll,"Mk3","Rolled","Leggings","None")

        // --- US Army ERDL ---
        DEFINE_U_ERDL(U_Simc_tcu_erdl_low,"Lowland","Standard","ERDL","None")
        DEFINE_U_ERDL(U_simc_tcu_erdl_H_low,"Highland","Standard","ERDL","None")
        DEFINE_U_ERDL(U_simc_tcu_erdl_TS_sog,"Lowland","SOG","Tiger Stripe","None")
        DEFINE_U_ERDL(U_simc_tcu_mk3_erdl_top,"Lowland","Standard","OG-107","None")
        DEFINE_U_ERDL(U_simc_tcu_mk3_erdl_H_top,"Highland","Standard","OG-107","None")
        DEFINE_U_ERDL(U_simc_tcu_mk3_sog_erdl_top,"Lowland","SOG","OG-107","None")
        DEFINE_U_ERDL(U_simc_tcu_mk3_sog_erdl_H_top,"Highland","SOG","OG-107","None")
        DEFINE_U_ERDL(U_simc_tcu_mk3_jean,"Lowland","Standard","Denim","None")
        DEFINE_U_ERDL(U_simc_tcu_mk3_jean_trop,"Lowland","Rolled","Denim","None")

        // --- US Army Tiger Stripe ---
        DEFINE_U_TIGER_STRIPE(U_Simc_SF_TS,"Standard","Full","Untucked")
        DEFINE_U_TIGER_STRIPE(U_Simc_SF_TS_trop,"Standard","Rolled","Untucked")
        DEFINE_U_TIGER_STRIPE(U_Simc_SF_TS_tuck,"Standard","Full","Tucked")
        DEFINE_U_TIGER_STRIPE(U_Simc_SF_TS_tuck_trop,"Standard","Rolled","Tucked")
        DEFINE_U_TIGER_STRIPE(U_Simc_ADV_TS,"Advisor","Full","Untucked")
        DEFINE_U_TIGER_STRIPE(U_Simc_ADV_TS_trop,"Advisor","Rolled","Untucked")
        DEFINE_U_TIGER_STRIPE(U_Simc_ADV_TS_tuck,"Advisor","Full","Tucked")
        DEFINE_U_TIGER_STRIPE(U_Simc_ADV_TS_tuck_trop,"Advisor","Rolled","Tucked")
        
        // --- US Army M-65 & Rain Parkas ---
        DEFINE_U_M65_JACKET(U_Simc_og107_veldjas, "OG-107", "OG-107", "None")
        DEFINE_U_M65_JACKET(U_Simc_og107_veldjas_trop, "OG-107", "OG-107", "Nomex")
        DEFINE_U_M65_JACKET(U_simc_tcu_veldjas, "TCU", "TCU", "None")
        DEFINE_U_M65_JACKET(U_simc_tcu_veldjas_trop, "TCU", "TCU", "Nomex")
        DEFINE_U_M65_JACKET(U_simc_tcu_erdl_low_veldjas, "ERDL Lowland", "ERDL", "None")
        DEFINE_U_M65_JACKET(U_simc_tcu_erdl_low_veldjas_trop, "ERDL Lowland", "ERDL", "Nomex")
        DEFINE_U_M65_JACKET(U_simc_tcu_erdl_high_veldjas, "ERDL Highland", "ERDL", "None")
        DEFINE_U_M65_JACKET(U_simc_tcu_erdl_high_veldjas_trop, "ERDL Highland", "ERDL", "Nomex")
        
        DEFINE_U_RAIN_PARKA(U_Simc_regenkot, "TCU", "No")
        DEFINE_U_RAIN_PARKA(U_Simc_regenkot_gas, "TCU", "Yes")
        DEFINE_U_RAIN_PARKA(U_Simc_regenkot_og107, "OG-107", "No")
        DEFINE_U_RAIN_PARKA(U_Simc_regenkot_og107_gas, "OG-107", "Yes")
        DEFINE_U_RAIN_PARKA(U_Simc_regenkot_erdl_low, "ERDL Lowland", "No")
        DEFINE_U_RAIN_PARKA(U_Simc_regenkot_erdl_low_gas, "ERDL Lowland", "Yes")
        DEFINE_U_RAIN_PARKA(U_Simc_regenkot_erdl_high, "ERDL Highland", "No")
        DEFINE_U_RAIN_PARKA(U_Simc_regenkot_erdl_high_gas, "ERDL Highland", "Yes")

        // --- US Marine Corps ---
        DEFINE_U_MC_TCU(U_Simc_TCU_mk1_mc,"Mk1","Full","Standard","None")
        DEFINE_U_MC_TCU(U_Simc_TCU_mk1_trop_mc,"Mk1","Rolled","Standard","None")
        DEFINE_U_MC_TCU(U_Simc_tcu_mk2_mc,"Mk2","Full","Standard","None")
        DEFINE_U_MC_TCU(U_Simc_tcu_mk2_trop_mc,"Mk2","Rolled","Standard","None")
        DEFINE_U_MC_TCU(U_Simc_tcu_mk3_mc,"Mk3","Full","Standard","None")
        DEFINE_U_MC_TCU(U_Simc_tcu_mk3_trop_mc,"Mk3","Rolled","Standard","None")
        DEFINE_U_MC_TCU(U_Simc_tcu_mk3_poplijn_mc,"Mk3","Full","Poplin","None")
        DEFINE_U_MC_TCU(U_Simc_tcu_mk3_poplijn_trop_mc,"Mk3","Rolled","Poplin","None")

        // --- ARVN ---
        DEFINE_U_ARVN(U_Simc_arvn_og107,"OG-107","Full","Untucked")
        DEFINE_U_ARVN(U_Simc_arvn_og107_trop,"OG-107","Rolled","Untucked")
        DEFINE_U_ARVN(U_Simc_arvn_og107_tuck,"OG-107","Full","Tucked")
        DEFINE_U_ARVN(U_Simc_arvn_og107_tuck_trop,"OG-107","Rolled","Tucked")
        DEFINE_U_ARVN(U_Simc_arvn_OD7,"OD7","Full","Untucked")
        DEFINE_U_ARVN(U_Simc_arvn_OD7_trop,"OD7","Rolled","Untucked")
        DEFINE_U_ARVN(U_Simc_arvn_BDQ,"BDQ","Full","Untucked")
        DEFINE_U_ARVN(U_Simc_arvn_BDQ_trop,"BDQ","Rolled","Untucked")
        DEFINE_U_ARVN(U_Simc_arvn_ERDL_low,"ERDL Lowland","Full","Untucked")
        DEFINE_U_ARVN(U_Simc_arvn_ERDL_invis,"ERDL Invisible","Full","Untucked")
        DEFINE_U_ARVN(U_Simc_arvn_DerFrosch,"Beo Gam","Full","Untucked")
        DEFINE_U_ARVN(U_Simc_arvn_TS,"Tiger Stripe","Full","Untucked")
        
        // --- NVA / VC ---
        DEFINE_U_NVA(U_Simc_nva_1,"Standard","Full")
        DEFINE_U_NVA(U_Simc_nva_1_trop,"Standard","Rolled")
        DEFINE_U_NVA(U_Simc_nva_2,"Pockets","Full")
        DEFINE_U_NVA(U_Simc_nva_2_trop,"Pockets","Rolled")
        DEFINE_U_VC(U_Simc_vc_black_1,"Black","Standard","Full")
        DEFINE_U_VC(U_Simc_vc_black_1_trop,"Black","Rolled","Standard")
        DEFINE_U_VC(U_Simc_vc_blau_1,"Blue","Standard","Full")
        DEFINE_U_VC(U_Simc_vc_grun_1,"Green","Standard","Full")

        // --- Dutch ---
        DEFINE_U_DUTCH(sns_m58_uniform, "M58/M78")
        DEFINE_U_DUTCH(sns_m58_vis_uniform, "M58/HBT")
        DEFINE_U_DUTCH(sns_m58_hbt_uniform, "M58 HBT")
        DEFINE_U_DUTCH(sns_m78_uniform, "M78")
        
        // --- French ---
        DEFINE_U_FRENCH_F1(sns_f1_uniform,"Full")
        DEFINE_U_FRENCH_F1(sns_f1_uniform_roll,"Rolled")
        DEFINE_U_FRENCH_F1(sns_f1_uniform_trop,"Tropical")
        
        // --- Civilian Flannel Shirts ---
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_weiss, "White", "Light", "Full", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_weiss_trop, "White", "Light", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_weiss_tuck, "White", "Light", "Full", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_weiss_tuck_trop, "White", "Light", "Rolled", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_weiss_dunkel, "White", "Dark", "Full", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_weiss_dunkel_trop, "White", "Dark", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_weiss_dunkel_tuck, "White", "Dark", "Full", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_weiss_dunkel_tuck_trop, "White", "Dark", "Rolled", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_rot, "Red", "Dark", "Full", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_rot_trop, "Red", "Dark", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_rot_tuck, "Red", "Dark", "Full", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_rot_tuck_trop, "Red", "Dark", "Rolled", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_rot_ligt, "Red-Light", "Light", "Full", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_rot_ligt_trop, "Red-Light", "Light", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_rot_ligt_tuck, "Red-Light", "Light", "Full", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_rot_ligt_tuck_trop, "Red-Light", "Light", "Rolled", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_blau, "Blue", "Light", "Full", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_blau_trop, "Blue", "Light", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_blau_tuck, "Blue", "Light", "Full", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_blau_tuck_trop, "Blue", "Light", "Rolled", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_blau_dunkel, "Blue-Dark", "Light", "Full", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_blau_dunkel_trop, "Blue-Dark", "Light", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_blau_dunkel_tuck, "Blue-Dark", "Dark", "Full", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_blau_dunkel_tuck_trop, "Blue-Dark", "Dark", "Rolled", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_khk, "Khaki", "Dark", "Full", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_khk_trop, "Khaki", "Dark", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_khk_tuck, "Khaki", "Dark", "Full", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_khk_tuck_trop, "Khaki", "Dark", "Rolled", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_grun, "Green", "Light", "Full", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_grun_trop, "Green", "Light", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_grun_tuck, "Green", "Light", "Full", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_grun_tuck_trop, "Green", "Light", "Rolled", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_VTN_trop, "VTN Khaki", "Light", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_VTN_tuck_trop, "VTN Khaki", "Light", "Rolled", "Tucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_VTN_sub_trop, "VTN Jean", "Dark", "Rolled", "Untucked")
        DEFINE_U_CIV_FLANNEL(U_simc_civ_jean_VTN_sub_tuck_trop, "VTN Jean", "Dark", "Rolled", "Tucked")

        // --- Civilian Sweaters ---
        DEFINE_U_CIV_SWEATER(U_simc_swetr1, "089", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_trop, "089", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_amogus, "Amogus", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_amogus_trop, "Amogus", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_felix, "Felix", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_felix_trop, "Felix", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_floyd, "Pink Floyd", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_floyd_trop, "Pink Floyd", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_geef, "Geef Op", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_geef_trop, "Geef Op", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_ghoat, "Ghostbuster", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_ghoat_trop, "Ghostbuster", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_grune, "Green", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_grune_trop, "Green", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_leven, "Leven", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_leven_trop, "Leven", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_mcod, "McDonalds Orange", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_mcod_trop, "McDonalds Orange", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_mcrd, "McDonalds Red", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_mcrd_trop, "McDonalds Red", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_ninamori, "Ninamori", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_ninamori_trop, "Ninamori", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_simc, "Simcardo", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_simc_trop, "Simcardo", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_suka, "Suka", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_suka_trop, "Suka", "Rolled")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_ua, "UA", "Full")
        DEFINE_U_CIV_SWEATER(U_simc_swetr1_ua_trop, "UA", "Rolled")

        // ===================================================================================================================================
        // VESTS
        // ===================================================================================================================================
        
        // --- M1961 ---
        DEFINE_V_M1961(V_Simc_61,"Rifleman","Yes")
        DEFINE_V_M1961(V_Simc_61_ligt,"Rifleman","No")
        DEFINE_V_M1961(V_Simc_61_bandoleer,"Bandoleer","Yes")
        DEFINE_V_M1961(V_Simc_61_morser,"Mortar","Yes")
        DEFINE_V_M1961(V_Simc_61_56,"M56 Pouches","Yes")
        DEFINE_V_M1961(V_Simc_61_79,"Grenadier","Yes")
        DEFINE_V_M1961(V_Simc_61_45,"Sidearm","Yes")
        DEFINE_V_M1961(V_Simc_61_60,"MG","Yes")
        DEFINE_V_M1961(V_Simc_61_rear, "Rifleman", "Rear")

        // --- Flak Vests ---
        DEFINE_V_FLAK(V_Simc_flak_55,"M1955","None","None")
        DEFINE_V_FLAK(V_Simc_flak_55_open,"M1955","None","None")
        DEFINE_V_FLAK(V_Simc_flak_55_bandoleer,"M1955","Bandoleer","Rifleman")
        DEFINE_V_FLAK(V_Simc_flak_55_M61,"M1955","M1961","Rifleman")
        DEFINE_V_FLAK(V_Simc_flak_55_M61_bandoleer,"M1955","M1961","Bandoleer")
        DEFINE_V_FLAK(V_Simc_flak_55_M61_open,"M1955","M1961","Rifleman")
        DEFINE_V_FLAK(V_Simc_flak_M69,"M1969","None","None")
        DEFINE_V_FLAK(V_Simc_flak_M69_belt,"M1969","M1967","Rifleman")
        DEFINE_V_FLAK(V_Simc_flak_M69_45,"M1969","M1967","Sidearm")

        // --- PASGT & RBA ---
        DEFINE_V_PASGT(V_pasgt_lbv_1,"M81","LBV","Rifleman")
        DEFINE_V_PASGT(V_pasgt_desu_lbv_belt_1,"DCU-6","LBV","Rifleman")
        DEFINE_V_RBA(V_rba_mk1,"None","Rifleman")
        DEFINE_V_RBA(V_rba_mk1_LBV,"LBV","Rifleman")

        // --- Chicom Rigs ---
        DEFINE_V_CHICOM(V_Simc_mk56,"AK","Standard")
        DEFINE_V_CHICOM(V_Simc_mk56_alt,"AK","High")
        DEFINE_V_CHICOM(V_Simc_mk56_sks,"SKS","Standard")
        DEFINE_V_CHICOM(V_Simc_mk56_sks_alt,"SKS","High")
        
        // --- French Webbing ---
        DEFINE_V_FRENCH_WEBBING(sns_mas49_erla, "MAS49")

        // --- Dutch M52 Webbing ---
        DEFINE_V_DUTCH_M52(V_sns_m58, "Standard", "None")
        DEFINE_V_DUTCH_M52(V_sns_m58_m43, "Standard", "M43")
        DEFINE_V_DUTCH_M52(V_sns_m58_laat, "Standard", "ALICE")
        DEFINE_V_DUTCH_M52(V_sns_m58_p37, "P37 Hybrid", "None")
        DEFINE_V_DUTCH_M52(V_sns_m58_p37_m43, "P37 Hybrid", "M43")
        DEFINE_V_DUTCH_M52(V_sns_m58_pistal, "Pistol", "None")
        DEFINE_V_DUTCH_M52(V_sns_m58_pistal_m43, "Pistol", "M43")
        DEFINE_V_DUTCH_M52(V_sns_m58_pistal_laat, "Pistol", "ALICE")

        // --- SF & Faction Vests ---
        DEFINE_V_AWS(V_fauf_rig_1,"Rifleman","FAUF")
        DEFINE_V_AWS(V_fauf_rig_2,"Light","FAUF")
        
        // ===================================================================================================================================
        // HEADGEAR
        // ===================================================================================================================================

        // --- M1 Helmets ---
        DEFINE_H_M1(H_Simc_M1_bitch_ns,"Standard","Mitchell Leaf","None","None","None")
        DEFINE_H_M1(H_Simc_MC_M1_bitch_ns,"Standard","Mitchell Leaf","None","None","None")
        DEFINE_H_M1(H_Simc_M1_bitch_op,"Standard","Mitchell Leaf","None","None","None")
        DEFINE_H_M1(H_Simc_M1_bitch_b,"Standard","Mitchell Leaf","Elastic","None","None")
        DEFINE_H_M1(H_Simc_M1_bitch_b1,"Standard","Mitchell Leaf","Elastic","None","Bandages")
        DEFINE_H_M1(H_Simc_M1_bitch_b4,"Standard","Mitchell Leaf","Elastic","None","Magazine")
        DEFINE_H_M1(H_Simc_M1_g_casper,"Standard","Mitchell Leaf","None","None","Graffiti")
        DEFINE_H_M1(H_Simc_M1_g_shibbin,"Standard","Mitchell Leaf","None","None","Graffiti")
        DEFINE_H_M1(H_Simc_M1_g_motta,"Standard","Mitchell Leaf","None","None","Graffiti")
        DEFINE_H_M1(H_Simc_M1_g_justin,"Standard","Mitchell Leaf","Elastic","None","Graffiti")
        DEFINE_H_M1(H_Simc_M1_bitch_swdg,"Standard","Mitchell Leaf","None","None","SWDG")
        DEFINE_H_M1(H_Simc_M1_erdl_op,"Standard","ERDL","None","None","None")
        DEFINE_H_M1(H_Simc_SVN_M1_ns,"Standard","None","None","None","None")
        DEFINE_H_M1(H_Simc_SVN_M1_net_ns,"Standard","None","None","Standard","None")
        DEFINE_H_M1(H_Simc_SVN_M1_net_ben,"Standard","None","Elastic","Standard","None")
        DEFINE_H_M1(H_Simc_SVN_M1C_ben_ns,"M1C","None","Elastic","None","None")
        DEFINE_H_M1(H_Simc_M1_bitch_b3, "Standard", "Mitchell Leaf", "Elastic", "None", "Magazines")
        DEFINE_H_M1(H_Simc_M1_bitch_b7, "Standard", "Mitchell Leaf", "Elastic", "None", "Bandages")
        DEFINE_H_M1(H_Simc_M1C_bitch_b1, "M1C", "Mitchell Leaf", "Elastic", "None", "Bandages")
        DEFINE_H_M1(H_Simc_M1_g_farch, "Standard", "Mitchell Leaf", "Elastic", "None", "Graffiti")

        // --- Boonie Hats ---
        DEFINE_H_BOONIE(H_Simc_Boon_green_1,"OD","Standard")
        DEFINE_H_BOONIE(H_Simc_Boon_green_3,"OD","Folded Sides")
        DEFINE_H_BOONIE(H_Simc_Boon_green_8,"OD","Folded Back")
        DEFINE_H_BOONIE(H_Simc_Boon_green_7,"OD","Short Brim")
        DEFINE_H_BOONIE(H_Simc_Boon_tigre_1,"Tiger Stripe","Standard")
        DEFINE_H_BOONIE(H_Simc_Boon_tigre_3,"Tiger Stripe","Folded Sides")
        DEFINE_H_BOONIE(H_Simc_Boon_tigre_8,"Tiger Stripe","Folded Back")
        DEFINE_H_BOONIE(H_Simc_Boon_tigre_7,"Tiger Stripe","Short Brim")
        DEFINE_H_BOONIE(H_Simc_Boon_erdl_low_1,"ERDL Lowland","Standard")
        DEFINE_H_BOONIE(H_Simc_Boon_erdl_low_3,"ERDL Lowland","Folded Sides")
        DEFINE_H_BOONIE(H_Simc_Boon_erdl_high_1,"ERDL Highland","Standard")
        DEFINE_H_BOONIE(H_Simc_Boon_zwart_1,"Black","Standard")
        DEFINE_H_BOONIE(H_Simc_Boon_DerFrosch_1,"Beo Gam","Standard")

        // --- Patrol Caps ---
        DEFINE_H_PATROL_CAP(H_Simc_MC_hat_1,"P58","OD","Standard")
        DEFINE_H_PATROL_CAP(H_Simc_Hat_Patrol_od7,"M1951","OD","Standard")
        DEFINE_H_PATROL_CAP(H_Simc_hat_trop_1,"M1951","OD","Standard")
        DEFINE_H_PATROL_CAP(H_Simc_hat_trop_2,"M1951","OD","Folded")
        DEFINE_H_PATROL_CAP(H_Simc_MC_hat_erdl_1,"P58","ERDL","Standard")
        DEFINE_H_PATROL_CAP(H_Simc_MC_hat_erdl_2,"P58","ERDL","Folded")

        // --- Pith Helmets ---
        DEFINE_H_PITH(H_Simc_jaza_pith,"OD","None","Down")
        DEFINE_H_PITH(H_Simc_jaza_pith_cover,"OD","Parachute","Down")
        DEFINE_H_PITH(H_Simc_jaza_pith_up,"OD","None","Up")
        DEFINE_H_PITH(H_Simc_jaza_pith_khk, "Khaki", "None", "Down")
        DEFINE_H_PITH(H_Simc_jaza_pith_netz, "OD", "Net", "Down")
        
        // --- French M51 Helmets ---
        DEFINE_H_FRENCH_M51(SNS_M51, "OD", "Standard")
        DEFINE_H_FRENCH_M51(SNS_M51_Camo, "Lizard 1", "Standard")
        DEFINE_H_FRENCH_M51(SNS_M51_Camo_2, "Lizard 2", "Standard")
        DEFINE_H_FRENCH_M51(SNS_M51_Camo_3, "Lizard 3", "Standard")
        DEFINE_H_FRENCH_M51(SNS_M51_Camo_Alt, "Lizard 1", "Rubber Band")
        DEFINE_H_FRENCH_M51(SNS_M51_Camo_2_Alt, "Lizard 2", "Rubber Band")
        DEFINE_H_FRENCH_M51(SNS_M51_Camo_3_Alt, "Lizard 3", "Rubber Band")

        // --- Dutch M53 Helmets ---
        DEFINE_H_DUTCH_M53(sns_m53, "Burlap", "Standard")
        DEFINE_H_DUTCH_M53(sns_m53_2, "Burlap", "Scrim")
        DEFINE_H_DUTCH_M53(sns_m53_3, "Burlap", "Elastic")
        DEFINE_H_DUTCH_M53(sns_m53_4, "Burlap", "Scrim Camo")
        DEFINE_H_DUTCH_M53(sns_m53_6, "DPM", "Standard")
        DEFINE_H_DUTCH_M53(sns_m53_7, "DPM", "Elastic")
        DEFINE_H_DUTCH_M53(sns_m53_8, "Mitchell", "Elastic")
        DEFINE_H_DUTCH_M53(sns_m53_scrim, "Burlap", "Standard") // Visual variation of standard net
        DEFINE_H_DUTCH_M53(sns_m53_scrim_2, "Burlap", "Scrim Camo") // Visual variation of Scrim Camo net

        // --- Dutch Berets ---
        DEFINE_H_BERET(sns_beret, "Van Heutsz")
        DEFINE_H_BERET(sns_beret_2, "Medical")
    };
    class CfgVehicles
    {
        // ===================================================================================================================================
        // BACKPACKS
        // ===================================================================================================================================
        
        // --- M1941/44 Pack ---
        DEFINE_B_M1941(B_simc_USMC65_M41,"Standard","None","No")
        DEFINE_B_M1941(B_simc_USMC65_M41_Roll,"Standard","Shelter Half","No")
        DEFINE_B_M1941(B_simc_USMC65_M41_M43,"M43 Shovel","None","No")
        DEFINE_B_M1941(B_simc_USMC65_M41_M43_roll,"M43 Shovel","Shelter Half","No")
        DEFINE_B_M1941(B_simc_USMC65_M41_mortar,"Mortar","None","No")
        DEFINE_B_M1941(B_simc_USMC65_M41_erdl, "Standard", "Poncho Liner", "No")
        DEFINE_B_M1941(B_simc_USMC65_M41_erdl_M43, "M43 Shovel", "Poncho Liner", "No")
        DEFINE_B_M1941(B_simc_USMCFLAK_M41,"Standard","None","Yes")
        DEFINE_B_M1941(B_simc_USMCFLAK_M41_Roll,"Standard","Shelter Half","Yes")
        DEFINE_B_M1941(B_simc_USMCFLAK_M41_M43,"M43 Shovel","None","Yes")
        DEFINE_B_M1941(B_simc_USMCFLAK_M41_M43_roll,"M43 Shovel","Shelter Half","Yes")
        DEFINE_B_M1941(B_simc_USMCFLAK_M41_mortar,"Mortar","None","Yes")
        DEFINE_B_M1941(B_simc_USMCFLAK_M41_erdl,"Standard","Poncho Liner","Yes")

        // --- M1968 Pack ---
        DEFINE_B_M1968(B_simc_USMC65_M68,"Standard","None","No")
        DEFINE_B_M1968(B_simc_USMC65_M68_Roll,"Standard","Shelter Half","No")
        DEFINE_B_M1968(B_simc_USMC65_M68_erdl,"Standard","Poncho Liner","No")
        DEFINE_B_M1968(B_simc_USMCFLAK_M68,"Standard","None","Yes")
        DEFINE_B_M1968(B_simc_USMCFLAK_M68_M43,"M43 Shovel","None","Yes")
        DEFINE_B_M1968(B_simc_USMCFLAK_M68_M43_roll,"M43 Shovel","Shelter Half","Yes")
        DEFINE_B_M1968(B_simc_USMCFLAK_M68_erdl, "Standard", "Poncho Liner", "Yes")

        // --- ARVN Rucksack ---
        DEFINE_B_ARVN(B_simc_ARVN_ruck_1,"Standard","No")
        DEFINE_B_ARVN(B_simc_ARVN_ruck_rajio,"Radio","No")
        DEFINE_B_ARVN(B_simc_ARVN_ruck_empty,"Empty","No")
        DEFINE_B_ARVN(B_simc_ARVN_ruck_M43_1, "M43 Shovel", "No")
        DEFINE_B_ARVN(B_simc_ARVN_ruck_gump, "Gump", "No")
        DEFINE_B_ARVN(B_simc_ARVN_ruck_sheen, "Sheen", "No")
        DEFINE_B_ARVN(B_simc_ARVN_ruck_M43_casque, "Helmet", "No")
        DEFINE_B_ARVN(B_simc_ARVN_flak_ruck_1,"Standard","Yes")
        DEFINE_B_ARVN(B_simc_ARVN_flak_ruck_rajio,"Radio","Yes")
        DEFINE_B_ARVN(B_simc_ARVN_flak_ruck_empty,"Empty","Yes")
        DEFINE_B_ARVN(B_simc_ARVN_flak_ruck_M43_1, "M43 Shovel", "Yes")
        DEFINE_B_ARVN(B_simc_ARVN_flak_ruck_gump, "Gump", "Yes")
        DEFINE_B_ARVN(B_simc_ARVN_flak_ruck_sheen, "Sheen", "Yes")
        DEFINE_B_ARVN(B_simc_ARVN_flak_ruck_M43_casque, "Helmet", "Yes")

        // --- Lightweight Rucksack ---
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_1,"Standard","No")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_empty,"Empty","No")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_med3,"Medic","No")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_7,"Ammo","No")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_rajio_Frem,"Radio","No")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_gasbag,"Gasmask Bag","No")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_qt,"2QT","No")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_flak_1,"Standard","Yes")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_flak_empty,"Empty","Yes")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_flak_med3,"Medic","Yes")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_flak_7,"Ammo","Yes")
        DEFINE_B_LIGHTWEIGHT(B_simc_rajio_flak_Frem,"Radio","Yes")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_flak_gasbag,"Gasmask Bag","Yes")
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_flak_qt,"2QT","Yes")

        // --- Tropical Rucksack ---
        DEFINE_B_TROPICAL(B_simc_pack_trop_1,"Standard","No","No")
        DEFINE_B_TROPICAL(B_simc_pack_trop_4,"Bandoleer","No","No")
        DEFINE_B_TROPICAL(B_simc_pack_trop_5,"Standard","Yes","No")
        DEFINE_B_TROPICAL(B_simc_pack_trop_rajio,"Radio","No","No")
        DEFINE_B_TROPICAL(B_simc_pack_trop_rajio_frem,"Radio","Yes","No")
        DEFINE_B_TROPICAL(B_simc_pack_trop_flak_1,"Standard","No","Yes")
        DEFINE_B_TROPICAL(B_simc_pack_trop_flak_4,"Bandoleer","No","Yes")
        DEFINE_B_TROPICAL(B_simc_pack_trop_flak_5,"Standard","Yes","Yes")
        DEFINE_B_TROPICAL(B_simc_pack_trop_flak_rajio,"Radio","No","Yes")
        DEFINE_B_TROPICAL(B_simc_pack_trop_flak_rajio_frem,"Radio","Yes","Yes")
        
        // --- Packboard ---
        DEFINE_B_PACKBOARD(B_simc_packboard_MG_1,"Ammo","No")
        DEFINE_B_PACKBOARD(B_simc_packboard_roket_1,"Rockets","No")
        DEFINE_B_PACKBOARD(B_simc_packboard_mortar_1,"Mortar","No")
        DEFINE_B_PACKBOARD(B_simc_packboard_rajio_1,"Radio","No")
        DEFINE_B_PACKBOARD(B_simc_packboard_flak_MG_1,"Ammo","Yes")
        DEFINE_B_PACKBOARD(B_simc_packboard_flak_roket_1,"Rockets","Yes")
        DEFINE_B_PACKBOARD(B_simc_packboard_flak_mortar_1,"Mortar","Yes")
        DEFINE_B_PACKBOARD(B_simc_packboard_flak_rajio_1,"Radio","Yes")
    };
    class CfgGlasses
    {
        // ===================================================================================================================================
        // FACEWEAR
        // ===================================================================================================================================
        
        // --- Bandoleers ---
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_556,"Standard","Rifle","No")
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_556_low,"Standard","Rifle","No")
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_556_left,"Standard","Rifle","No")
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_556_right,"Standard","Rifle","No")
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_556_fore,"Standard","Rifle","No")
        DEFINE_F_BANDOLEER(G_simc_US_flak_Bandoleer_556,"Standard","Rifle","Yes")
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_flak_556_left,"Standard","Rifle","Yes")
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_flak_556_right,"Standard","Rifle","Yes")
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_4cm,"Standard","40mm","No")
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_60,"Standard","M60","No")
        DEFINE_F_BANDOLEER(B_claymore_sack,"M7 Claymore","Rifle","No")
        DEFINE_F_BANDOLEER(B_claymore_sack_flak,"M7 Claymore","Rifle","Yes")

        // --- Towels ---
        DEFINE_F_TOWEL(G_Anduk_1,"Style 1")
        DEFINE_F_TOWEL(G_Anduk_2,"Style 2")

        // --- Nomex Gloves ---
        DEFINE_F_NOMEX(G_Nomex_1, "OD", "Standard", "No")
        DEFINE_F_NOMEX(G_Nomex_1_lang, "OD", "Long", "No")
        DEFINE_F_NOMEX(G_Nomex_1_fold, "OD", "Folded", "No")
        DEFINE_F_NOMEX(G_Nomex_1_cut, "OD", "Standard", "Yes")
        DEFINE_F_NOMEX(G_Nomex_1_lang_cut, "OD", "Long", "Yes")
        DEFINE_F_NOMEX(G_Nomex_1_fold_cut, "OD", "Folded", "Yes")
        DEFINE_F_NOMEX(G_Nomex_2, "Calf", "Standard", "No")
        DEFINE_F_NOMEX(G_Nomex_2_lang, "Calf", "Long", "No")
        DEFINE_F_NOMEX(G_Nomex_2_fold, "Calf", "Folded", "No")
        DEFINE_F_NOMEX(G_Nomex_2_cut, "Calf", "Standard", "Yes")
        DEFINE_F_NOMEX(G_Nomex_2_lang_cut, "Calf", "Long", "Yes")
        DEFINE_F_NOMEX(G_Nomex_2_fold_cut, "Calf", "Folded", "Yes")
        DEFINE_F_NOMEX(G_Nomex_desu, "Tan", "Standard", "No")
        DEFINE_F_NOMEX(G_Nomex_desu_lang, "Tan", "Long", "No")
        DEFINE_F_NOMEX(G_Nomex_desu_fold, "Tan", "Folded", "No")
        DEFINE_F_NOMEX(G_Nomex_desu_cut, "Tan", "Standard", "Yes")
        DEFINE_F_NOMEX(G_Nomex_desu_lang_cut, "Tan", "Long", "Yes")
        DEFINE_F_NOMEX(G_Nomex_desu_fold_cut, "Tan", "Folded", "Yes")
        DEFINE_F_NOMEX(G_Nomex_desu_2, "Tan/Calf", "Standard", "No")
        DEFINE_F_NOMEX(G_Nomex_desu_2_lang, "Tan/Calf", "Long", "No")
        DEFINE_F_NOMEX(G_Nomex_desu_2_fold, "Tan/Calf", "Folded", "No")
        DEFINE_F_NOMEX(G_Nomex_desu_2_cut, "Tan/Calf", "Standard", "Yes")
        DEFINE_F_NOMEX(G_Nomex_desu_2_lang_cut, "Tan/Calf", "Long", "Yes")
        DEFINE_F_NOMEX(G_Nomex_desu_2_fold_cut, "Tan/Calf", "Folded", "Yes")

        // --- SWDG Goggles ---
        DEFINE_F_SWDG(G_SWDG, "Eyes")
        DEFINE_F_SWDG(G_SWDG_low, "Forehead")

        // --- Other Facewear ---
        DEFINE_F_ILLEGAL_CANTEEN(G_illegal_canteen, "Standard")
        DEFINE_F_GASBAG(G_M17_Gasbag, "Standard")
    };
};