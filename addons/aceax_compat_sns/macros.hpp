/**
 * ===================================================================================================================================
 * ACE ARSENAL EXTENDED MACROS FOR S&S
 * ===================================================================================================================================
 */


// ===================================================================================================================================
// UNIFORM MACROS
// ===================================================================================================================================

#define DEFINE_U_OG107(classname_, gen_, slv_, tuck_, glv_, gas_) \
    class classname_ { \
        model = "sns_u_og107"; \
        generation = gen_; \
        sleeves = slv_; \
        tucked = tuck_; \
        gloves = glv_; \
        gasmask = gas_; \
    };

#define DEFINE_U_TCU(classname_, gen_, slv_, pants_, glv_) \
    class classname_ { \
        model = "sns_u_tcu"; \
        generation = gen_; \
        sleeves = slv_; \
        pants = pants_; \
        gloves = glv_; \
    };
    
#define DEFINE_U_MC_TCU(classname_, gen_, slv_, pants_, glv_) \
    class classname_ { \
        model = "sns_u_mc_tcu"; \
        generation = gen_; \
        sleeves = slv_; \
        pants = pants_; \
        gloves = glv_; \
    };

#define DEFINE_U_ERDL(classname_, pat_, shirt_, pants_, glv_) \
    class classname_ { \
        model = "sns_u_erdl"; \
        pattern = pat_; \
        shirt = shirt_; \
        pants = pants_; \
        gloves = glv_; \
    };
    
#define DEFINE_U_TIGER_STRIPE(classname_, type_, slv_, tuck_) \
    class classname_ { \
        model = "sns_u_tiger_stripe"; \
        type = type_; \
        sleeves = slv_; \
        tucked = tuck_; \
    };

#define DEFINE_U_RAIN_PARKA(classname_, camo_, gasmask_) \
    class classname_ { \
        model = "sns_u_rain_parka"; \
        camo = camo_; \
        gasmask = gasmask_; \
    };

#define DEFINE_U_M65_JACKET(classname_, camo_, pants_, glv_) \
    class classname_ { \
        model = "sns_u_m65_jacket"; \
        camo = camo_; \
        pants = pants_; \
        gloves = glv_; \
    };

#define DEFINE_U_BDU(classname_, camo_, style_, slv_) \
    class classname_ { \
        model = "sns_u_bdu"; \
        camo = camo_; \
        style = style_; \
        sleeves = slv_; \
    };

#define DEFINE_U_NVA(classname_, style_, slv_) \
    class classname_ { \
        model = "sns_u_nva"; \
        style = style_; \
        sleeves = slv_; \
    };

#define DEFINE_U_VC(classname_, color_, style_, slv_) \
    class classname_ { \
        model = "sns_u_vc"; \
        color = color_; \
        style = style_; \
        sleeves = slv_; \
    };

#define DEFINE_U_ARVN(classname_, camo_, slv_, tuck_) \
    class classname_ { \
        model = "sns_u_arvn"; \
        camo = camo_; \
        sleeves = slv_; \
        tucked = tuck_; \
    };

#define DEFINE_U_DUTCH(classname_, type_) \
    class classname_ { \
        model = "sns_u_dutch"; \
        type = type_; \
    };

#define DEFINE_U_FRENCH_F1(classname_, slv_) \
    class classname_ { \
        model = "sns_u_french_f1"; \
        sleeves = slv_; \
    };

#define DEFINE_U_CIV_FLANNEL(classname_, color_, pants_, slv_, tuck_) \
    class classname_ { \
        model = "sns_u_civ_casual"; \
        color = color_; \
        pants = pants_; \
        sleeves = slv_; \
        tucked = tuck_; \
    };

#define DEFINE_U_CIV_SWEATER(classname_, design_, slv_) \
    class classname_ { \
        model = "sns_u_civ_sweater"; \
        design = design_; \
        sleeves = slv_; \
    };


// ===================================================================================================================================
// VEST MACROS
// ===================================================================================================================================

#define DEFINE_V_M1956(classname_, loadout_, buttpack_, frags_) \
    class classname_ { \
        model = "sns_v_m1956"; \
        loadout = loadout_; \
        buttpack = buttpack_; \
        frags = frags_; \
    };

#define DEFINE_V_M1961(classname_, loadout_, buttpack_) \
    class classname_ { \
        model = "sns_v_m1961"; \
        loadout = loadout_; \
        buttpack = buttpack_; \
    };

#define DEFINE_V_FLAK(classname_, model_, webbing_, loadout_) \
    class classname_ { \
        model = model_; \
        webbing = webbing_; \
        loadout = loadout_; \
    };

#define DEFINE_V_PASGT(classname_, camo_, webbing_, loadout_) \
    class classname_ { \
        model = "sns_v_pasgt"; \
        camo = camo_; \
        webbing = webbing_; \
        loadout = loadout_; \
    };

#define DEFINE_V_LBV88(classname_, webbing_, loadout_) \
    class classname_ { \
        model = "sns_v_lbv88"; \
        webbing = webbing_; \
        loadout = loadout_; \
    };

#define DEFINE_V_RBA(classname_, webbing_, loadout_) \
    class classname_ { \
        model = "sns_v_rba"; \
        webbing = webbing_; \
        loadout = loadout_; \
    };

#define DEFINE_V_AWS(classname_, loadout_, vest_) \
    class classname_ { \
        model = "sns_v_aws"; \
        loadout = loadout_; \
        vest = vest_; \
    };

#define DEFINE_V_FAUF(classname_, loadout_, belt_) \
    class classname_ { \
        model = "sns_v_fauf"; \
        loadout = loadout_; \
        belt = belt_; \
    };

#define DEFINE_V_CHICOM(classname_, type_, style_) \
    class classname_ { \
        model = "sns_v_chicom"; \
        type = type_; \
        style = style_; \
    };

#define DEFINE_V_FRENCH_WEBBING(classname_, type_) \
    class classname_ { \
        model = "sns_v_french_webbing"; \
        type = type_; \
    };

#define DEFINE_V_DUTCH_M52(classname_, variant_, shovel_) \
    class classname_ { \
        model = "sns_v_dutch_m52"; \
        variant = variant_; \
        shovel = shovel_; \
    };


// ===================================================================================================================================
// HEADGEAR MACROS
// ===================================================================================================================================

#define DEFINE_H_M1(classname_, type_, cover_, band_, net_, accessories_) \
    class classname_ { \
        model = "sns_h_m1"; \
        type = type_; \
        cover = cover_; \
        band = band_; \
        net = net_; \
        accessories = accessories_; \
    };

#define DEFINE_H_BOONIE(classname_, camo_, style_) \
    class classname_ { \
        model = "sns_h_boonie"; \
        camo = camo_; \
        style = style_; \
    };

#define DEFINE_H_PATROL_CAP(classname_, type_, camo_, style_) \
    class classname_ { \
        model = "sns_h_patrol"; \
        type = type_; \
        camo = camo_; \
        style = style_; \
    };

#define DEFINE_H_PITH(classname_, camo_, cover_, brim_) \
    class classname_ { \
        model = "sns_h_pith"; \
        camo = camo_; \
        cover = cover_; \
        brim = brim_; \
    };

#define DEFINE_H_FRENCH_M51(classname_, camo_, style_) \
    class classname_ { \
        model = "sns_h_m51"; \
        camo = camo_; \
        style = style_; \
    };

#define DEFINE_H_DUTCH_M53(classname_, cover_, net_) \
    class classname_ { \
        model = "sns_h_m53"; \
        cover = cover_; \
        net = net_; \
    };
    
#define DEFINE_H_BERET(classname_, unit_) \
    class classname_ { \
        model = "sns_h_beret"; \
        unit = unit_; \
    };


// ===================================================================================================================================
// BACKPACK MACROS
// ===================================================================================================================================

#define DEFINE_B_M1941(classname_, variant_, bedroll_, flak_) \
    class classname_ { \
        model = "sns_b_m1941"; \
        variant = variant_; \
        bedroll = bedroll_; \
        flak = flak_; \
    };
    
#define DEFINE_B_M1968(classname_, variant_, bedroll_, flak_) \
    class classname_ { \
        model = "sns_b_m1968"; \
        variant = variant_; \
        bedroll = bedroll_; \
        flak = flak_; \
    };

#define DEFINE_B_ARVN(classname_, contents_, flak_) \
    class classname_ { \
        model = "sns_b_arvn"; \
        contents = contents_; \
        flak = flak_; \
    };

#define DEFINE_B_LIGHTWEIGHT(classname_, contents_, flak_) \
    class classname_ { \
        model = "sns_b_lightweight"; \
        contents = contents_; \
        flak = flak_; \
    };

#define DEFINE_B_TROPICAL(classname_, contents_, frame_, flak_) \
    class classname_ { \
        model = "sns_b_tropical"; \
        contents = contents_; \
        frame = frame_; \
        flak = flak_; \
    };

#define DEFINE_B_PACKBOARD(classname_, loadout_, flak_) \
    class classname_ { \
        model = "sns_b_packboard"; \
        loadout = loadout_; \
        flak = flak_; \
    };


// ===================================================================================================================================
// FACEWEAR MACROS (CfgGlasses)
// ===================================================================================================================================

#define DEFINE_F_BANDOLEER(classname_, type_, loadout_, flak_) \
    class classname_ { \
        model = "sns_f_bandoleer"; \
        type = type_; \
        loadout = loadout_; \
        flak = flak_; \
    };

#define DEFINE_F_TOWEL(classname_, style_) \
    class classname_ { \
        model = "sns_f_towel"; \
        style = style_; \
    };

#define DEFINE_F_NOMEX(classname_, color_, style_, cut_) \
    class classname_ { \
        model = "sns_f_nomex"; \
        color = color_; \
        style = style_; \
        cut = cut_; \
    };

#define DEFINE_F_SWDG(classname_, position_) \
    class classname_ { \
        model = "sns_f_swdg"; \
        position = position_; \
    };

#define DEFINE_F_ILLEGAL_CANTEEN(classname_, style_) \
    class classname_ { \
        model = "sns_f_illegal_canteen"; \
        style = style_; \
    };

#define DEFINE_F_GASBAG(classname_, style_) \
    class classname_ { \
        model = "sns_f_gasbag"; \
        style = style_; \
    };