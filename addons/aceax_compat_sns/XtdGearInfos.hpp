#include "macros.hpp"

class XtdGearInfos
{
    class CfgWeapons
    {
        // ===================================================================================================================================
        // UNIFORMS
        // ===================================================================================================================================

        // --- US Army OG-107 Fatigues ---
        DEFINE_U_OG107(U_Simc_OG107_mk1,"Mk1","Full","Untucked","None","No");
        DEFINE_U_OG107(U_Simc_OG107_mk1_trop,"Mk1","Rolled","Untucked","None","No");
        DEFINE_U_OG107(U_Simc_OG107_mk1_tuck,"Mk1","Full","Tucked","None","No");
        DEFINE_U_OG107(U_Simc_OG107_mk1_tuck_trop,"Mk1","Rolled","Tucked","None","No");
        DEFINE_U_OG107(U_Simc_OG107_mk1_gas,"Mk1","Full","Tucked","None","Yes");
        DEFINE_U_OG107(U_Simc_OG107_mk1_gas_trop,"Mk1","Rolled","Tucked","None","Yes");
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex,"Mk1","Full","Untucked","Nomex","No");
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_trop,"Mk1","Rolled","Untucked","Nomex","No");
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_tuck,"Mk1","Full","Tucked","Nomex","No");
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_tuck_trop,"Mk1","Rolled","Tucked","Nomex","No");
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_gas,"Mk1","Full","Tucked","Nomex","Yes");
        DEFINE_U_OG107(U_Simc_OG107_mk1_nomex_gas_trop,"Mk1","Rolled","Tucked","Nomex","Yes");

        DEFINE_U_OG107(U_Simc_OG107_mk3,"Mk3","Full","Untucked","None","No");
        DEFINE_U_OG107(U_Simc_OG107_mk3_trop,"Mk3","Rolled","Untucked","None","No");
        DEFINE_U_OG107(U_Simc_OG107_mk3_tuck,"Mk3","Full","Tucked","None","No");
        DEFINE_U_OG107(U_Simc_OG107_mk3_tuck_trop,"Mk3","Rolled","Tucked","None","No");
        DEFINE_U_OG107(U_Simc_OG107_mk3_gas,"Mk3","Full","Tucked","None","Yes");
        DEFINE_U_OG107(U_Simc_OG107_mk3_gas_trop,"Mk3","Rolled","Tucked","None","Yes");
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex,"Mk3","Full","Untucked","Nomex","No");
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_trop,"Mk3","Rolled","Untucked","Nomex","No");
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_tuck,"Mk3","Full","Tucked","Nomex","No");
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_tuck_trop,"Mk3","Rolled","Tucked","Nomex","No");
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_gas,"Mk3","Full","Tucked","Nomex","Yes");
        DEFINE_U_OG107(U_Simc_OG107_mk3_nomex_gas_trop,"Mk3","Rolled","Tucked","Nomex","Yes");

        // --- US Army TCU Fatigues ---
        DEFINE_U_TCU(U_Simc_TCU_mk1,"Mk1","Full","Standard","None");
        DEFINE_U_TCU(U_Simc_TCU_mk1_trop,"Mk1","Rolled","Standard","None");
        DEFINE_U_TCU(U_Simc_TCU_mk1_roll,"Mk1","Rolled","Standard","None"); // Duplicate of trop
        DEFINE_U_TCU(U_Simc_TCU_mk1_og,"Mk1","Full","OG-107","None");
        DEFINE_U_TCU(U_Simc_TCU_mk1_og_trop,"Mk1","Rolled","OG-107","None");
        DEFINE_U_TCU(U_Simc_TCU_mk1_nomex,"Mk1","Full","Standard","Nomex");
        
        DEFINE_U_TCU(U_Simc_TCU_mk2,"Mk2","Full","Standard","None");
        DEFINE_U_TCU(U_Simc_TCU_mk2_trop,"Mk2","Rolled","Standard","None");
        DEFINE_U_TCU(U_Simc_TCU_mk2_roll,"Mk2","Rolled","Standard","None"); // Duplicate of trop
        DEFINE_U_TCU(U_Simc_TCU_mk2_nomex,"Mk2","Full","Standard","Nomex");

        DEFINE_U_TCU(U_Simc_TCU_mk3,"Mk3","Full","Standard","None");
        DEFINE_U_TCU(U_Simc_TCU_mk3_trop,"Mk3","Rolled","Standard","None");
        DEFINE_U_TCU(U_Simc_TCU_mk3_poplijn,"Mk3","Full","Poplin","None");
        DEFINE_U_TCU(U_Simc_TCU_mk3_poplijn_trop,"Mk3","Rolled","Poplin","None");
        DEFINE_U_TCU(U_Simc_TCU_mk3_cute,"Mk3","Cut","Standard","None");
        DEFINE_U_TCU(U_Simc_TCU_mk3_nomex,"Mk3","Full","Standard","Nomex");
        
        // --- US Army ERDL ---
        DEFINE_U_ERDL(U_Simc_tcu_erdl_low,"Lowland","OG-107","ERDL","None");
        DEFINE_U_ERDL(U_simc_tcu_erdl_H_low,"Highland","OG-107","ERDL","None");
        DEFINE_U_ERDL(U_simc_tcu_erdl_TS_sog,"Lowland","SOG","Tiger Stripe","None");
        
        // --- US Marine Corps ---
        DEFINE_U_MC_TCU(U_Simc_TCU_mk1_mc,"Mk1","Full","Standard","None");
        DEFINE_U_MC_TCU(U_Simc_TCU_mk1_trop_mc,"Mk1","Rolled","Standard","None");
        DEFINE_U_MC_TCU(U_Simc_tcu_mk2_mc,"Mk2","Full","Standard","None");
        DEFINE_U_MC_TCU(U_Simc_tcu_mk2_trop_mc,"Mk2","Rolled","Standard","None");
        DEFINE_U_MC_TCU(U_Simc_tcu_mk3_mc,"Mk3","Full","Standard","None");
        DEFINE_U_MC_TCU(U_Simc_tcu_mk3_trop_mc,"Mk3","Rolled","Standard","None");
        DEFINE_U_MC_TCU(U_Simc_tcu_mk3_poplijn_mc,"Mk3","Full","Poplin","None");
        DEFINE_U_MC_TCU(U_Simc_tcu_mk3_poplijn_trop_mc,"Mk3","Rolled","Poplin","None");

        // --- ARVN ---
        DEFINE_U_ARVN(U_Simc_arvn_og107,"OG-107","Full","Untucked");
        DEFINE_U_ARVN(U_Simc_arvn_og107_trop,"OG-107","Rolled","Untucked");
        DEFINE_U_ARVN(U_Simc_arvn_og107_tuck,"OG-107","Full","Tucked");
        DEFINE_U_ARVN(U_Simc_arvn_og107_tuck_trop,"OG-107","Rolled","Tucked");
        DEFINE_U_ARVN(U_Simc_arvn_OD7,"OD7","Full","Untucked");
        DEFINE_U_ARVN(U_Simc_arvn_OD7_trop,"OD7","Rolled","Untucked");
        DEFINE_U_ARVN(U_Simc_arvn_BDQ,"BDQ","Full","Untucked");
        DEFINE_U_ARVN(U_Simc_arvn_BDQ_trop,"BDQ","Rolled","Untucked");
        DEFINE_U_ARVN(U_Simc_arvn_ERDL_low,"ERDL Lowland","Full","Untucked");
        DEFINE_U_ARVN(U_Simc_arvn_ERDL_invis,"ERDL Invisible","Full","Untucked");
        DEFINE_U_ARVN(U_Simc_arvn_DerFrosch,"Beo Gam","Full","Untucked");
        DEFINE_U_ARVN(U_Simc_arvn_TS,"Tiger Stripe","Full","Untucked");

        // --- NVA / VC ---
        DEFINE_U_NVA(U_Simc_nva_1,"Standard","Full");
        DEFINE_U_NVA(U_Simc_nva_1_trop,"Standard","Rolled");
        DEFINE_U_NVA(U_Simc_nva_2,"Pockets","Full");
        DEFINE_U_NVA(U_Simc_nva_2_trop,"Pockets","Rolled");
        DEFINE_U_VC(U_Simc_vc_black_1,"Black","Standard","Full");
        DEFINE_U_VC(U_Simc_vc_black_1_trop,"Black","Rolled","Standard");
        DEFINE_U_VC(U_Simc_vc_blau_1,"Blue","Standard","Full");
        DEFINE_U_VC(U_Simc_vc_grun_1,"Green","Standard","Full");
        
        // --- French ---
        DEFINE_U_FRENCH_F1(sns_f1_uniform,"Full");
        DEFINE_U_FRENCH_F1(sns_f1_uniform_roll,"Rolled");
        DEFINE_U_FRENCH_F1(sns_f1_uniform_trop,"Tropical");

        // ===================================================================================================================================
        // VESTS
        // ===================================================================================================================================
        
        // M1961
        DEFINE_V_M1961(V_Simc_61,"Rifleman","Yes");
        DEFINE_V_M1961(V_Simc_61_ligt,"Rifleman","No");
        DEFINE_V_M1961(V_Simc_61_bandoleer,"Bandoleer","Yes");
        DEFINE_V_M1961(V_Simc_61_morser,"Mortar","Yes");
        DEFINE_V_M1961(V_Simc_61_56,"M56 Pouches","Yes");
        DEFINE_V_M1961(V_Simc_61_79,"Grenadier","Yes");
        DEFINE_V_M1961(V_Simc_61_45,"Sidearm","Yes");
        DEFINE_V_M1961(V_Simc_61_60,"MG","Yes");

        // Flak Vests
        DEFINE_V_FLAK(V_Simc_flak_55,"M1955","None","None");
        DEFINE_V_FLAK(V_Simc_flak_55_open,"M1955","None","None"); // Visual only
        DEFINE_V_FLAK(V_Simc_flak_55_bandoleer,"M1955","Bandoleer","Rifleman");
        DEFINE_V_FLAK(V_Simc_flak_55_M61,"M1955","M1961","Rifleman");
        DEFINE_V_FLAK(V_Simc_flak_55_M61_bandoleer,"M1955","M1961","Bandoleer");
        DEFINE_V_FLAK(V_Simc_flak_55_M61_open,"M1955","M1961","Rifleman");
        DEFINE_V_FLAK(V_Simc_flak_M69,"M1969","None","None");
        DEFINE_V_FLAK(V_Simc_flak_M69_belt,"M1969","M1967","Rifleman");
        DEFINE_V_FLAK(V_Simc_flak_M69_45,"M1969","M1967","Sidearm");

        // PASGT & RBA
        DEFINE_V_PASGT(V_pasgt_lbv_1,"M81","LBV","Rifleman");
        DEFINE_V_PASGT(V_pasgt_desu_lbv_belt_1,"DCU-6","LBV","Rifleman");
        DEFINE_V_RBA(V_rba_mk1,"None","Rifleman");
        DEFINE_V_RBA(V_rba_mk1_LBV,"LBV","Rifleman");

        // SF & Faction Vests
        DEFINE_V_AWS(V_fauf_rig_1,"Rifleman","FAUF");
        DEFINE_V_AWS(V_fauf_rig_2,"Light","FAUF");
        DEFINE_V_CHICOM(V_Simc_mk56,"AK","Standard");
        DEFINE_V_CHICOM(V_Simc_mk56_sks,"SKS","Standard");
        
        // ===================================================================================================================================
        // HEADGEAR
        // ===================================================================================================================================

        // M1 Helmets
        DEFINE_H_M1(H_Simc_MC_M1_bitch_ns,"Standard","Mitchell Leaf","None","None","None");
        DEFINE_H_M1(H_Simc_M1_bitch_b1,"Standard","Mitchell Leaf","Elastic","None","Bandages");
        DEFINE_H_M1(H_Simc_M1_bitch_b,"Standard","Mitchell Leaf","Elastic","None","None");
        DEFINE_H_M1(H_Simc_M1_g_casper,"Standard","Mitchell Leaf","None","None","Graffiti");
        DEFINE_H_M1(H_Simc_SVN_M1_net_ns,"Standard","None","None","Standard","None");
        DEFINE_H_M1(H_Simc_SVN_M1C_ben_ns,"M1C","None","Elastic","None","None");
        DEFINE_H_M1(H_Simc_M1_erdl_op,"Standard","ERDL","None","None","None");

        // Boonie Hats
        DEFINE_H_BOONIE(H_Simc_Boon_green_1,"OD","Standard");
        DEFINE_H_BOONIE(H_Simc_Boon_green_3,"OD","Folded Sides");
        DEFINE_H_BOONIE(H_Simc_Boon_tigre_1,"Tiger Stripe","Standard");
        DEFINE_H_BOONIE(H_Simc_Boon_erdl_low_1,"ERDL Lowland","Standard");

        // Patrol Caps
        DEFINE_H_PATROL_CAP(H_Simc_MC_hat_1,"P58","OD","Standard");
        DEFINE_H_PATROL_CAP(H_Simc_Hat_Patrol_od7,"M1951","OD","Standard");

        // Pith Helmets
        DEFINE_H_PITH(H_Simc_jaza_pith,"OD","None","Down");
        DEFINE_H_PITH(H_Simc_jaza_pith_cover,"OD","Standard","Down");
        DEFINE_H_PITH(H_Simc_jaza_pith_up,"OD","None","Up");
    };
    class CfgVehicles
    {
        // ===================================================================================================================================
        // BACKPACKS
        // ===================================================================================================================================
        
        DEFINE_B_M1941(B_simc_USMC65_M41,"Standard","None","No");
        DEFINE_B_M1941(B_simc_USMC65_M41_Roll,"Standard","Shelter Half","No");
        DEFINE_B_M1941(B_simc_USMC65_M41_M43,"M43 Shovel","None","No");
        DEFINE_B_M1941(B_simc_USMC65_M41_M43_roll,"M43 Shovel","Shelter Half","No");
        DEFINE_B_M1941(B_simc_USMC65_M41_mortar,"Mortar","None","No");
        DEFINE_B_M1941(B_simc_USMCFLAK_M41,"Standard","None","Yes");
        DEFINE_B_M1941(B_simc_USMCFLAK_M41_erdl,"Standard","Poncho Liner","Yes");

        DEFINE_B_M1968(B_simc_USMC65_M68,"Standard","None","No");
        DEFINE_B_M1968(B_simc_USMC65_M68_Roll,"Standard","Shelter Half","No");
        DEFINE_B_M1968(B_simc_USMC65_M68_erdl,"Standard","Poncho Liner","No");
        DEFINE_B_M1968(B_simc_USMCFLAK_M68,"Standard","None","Yes");

        DEFINE_B_ARVN(B_simc_ARVN_ruck_1,"Standard","No");
        DEFINE_B_ARVN(B_simc_ARVN_ruck_rajio,"Radio","No");
        DEFINE_B_ARVN(B_simc_ARVN_ruck_empty,"Empty","No");
        DEFINE_B_ARVN(B_simc_ARVN_flak_ruck_1,"Standard","Yes");

        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_1,"Standard","No");
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_empty,"Empty","No");
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_med3,"Medic","No");
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_7,"Ammo","No");
        DEFINE_B_LIGHTWEIGHT(B_simc_pack_frem_flak_1,"Standard","Yes");

        DEFINE_B_TROPICAL(B_simc_pack_trop_1,"Standard","No","No");
        DEFINE_B_TROPICAL(B_simc_pack_trop_4,"Bandoleer","No","No");
        DEFINE_B_TROPICAL(B_simc_pack_trop_5,"Standard","Yes","No");
        DEFINE_B_TROPICAL(B_simc_pack_trop_flak_1,"Standard","No","Yes");
        
        DEFINE_B_PACKBOARD(B_simc_packboard_MG_1,"Ammo","No");
        DEFINE_B_PACKBOARD(B_simc_packboard_roket_1,"Rockets","No");
        DEFINE_B_PACKBOARD(B_simc_packboard_mortar_1,"Mortar","No");
        DEFINE_B_PACKBOARD(B_simc_packboard_rajio_1,"Radio","No");
        DEFINE_B_PACKBOARD(B_simc_packboard_flak_MG_1,"Ammo","Yes");
    };
    class CfgGlasses
    {
        // ===================================================================================================================================
        // FACEWEAR
        // ===================================================================================================================================
        
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_556,"Standard","Rifle","No");
        DEFINE_F_BANDOLEER(G_simc_US_flak_Bandoleer_556,"Standard","Rifle","Yes");
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_4cm,"Standard","40mm","No");
        DEFINE_F_BANDOLEER(G_simc_US_Bandoleer_60,"Standard","M60","No");
        DEFINE_F_BANDOLEER(B_claymore_sack,"M7 Claymore","Rifle","No");
        DEFINE_F_BANDOLEER(B_claymore_sack_flak,"M7 Claymore","Rifle","Yes");

        DEFINE_F_TOWEL(G_Anduk_1,"Style 1");
        DEFINE_F_TOWEL(G_Anduk_2,"Style 2");
    };
};
