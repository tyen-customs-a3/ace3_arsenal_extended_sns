/**
 * ===================================================================================================================================
 * ACE ARSENAL EXTENDED MACROS FOR S&S
 * ===================================================================================================================================
 */

// ===================================================================================================================================
// UNIFORM MACROS
// ===================================================================================================================================

#define DEFINE_U_OG107(classname, gen, slv, tuck, glv, gas) \
    class classname { \
        model = "sns_u_og107"; \
        generation = gen; \
        sleeves = slv; \
        tucked = tuck; \
        gloves = glv; \
        gasmask = gas; \
    };

#define DEFINE_U_TCU(classname, gen, slv, pants, glv) \
    class classname { \
        model = "sns_u_tcu"; \
        generation = gen; \
        sleeves = slv; \
        pants = pants; \
        gloves = glv; \
    };

#define DEFINE_U_MC_TCU(classname, gen, slv, pants, glv) \
    class classname { \
        model = "sns_u_mc_tcu"; \
        generation = gen; \
        sleeves = slv; \
        pants = pants; \
        gloves = glv; \
    };

#define DEFINE_U_ERDL(classname, pat, shirt, pants, glv) \
    class classname { \
        model = "sns_u_erdl"; \
        pattern = pat; \
        shirt = shirt; \
        pants = pants; \
        gloves = glv; \
    };

#define DEFINE_U_TIGER_STRIPE(classname, type, slv, tuck) \
    class classname { \
        model = "sns_u_tiger_stripe"; \
        type = type; \
        sleeves = slv; \
        tucked = tuck; \
    };

#define DEFINE_U_RAIN_PARKA(classname, camo_val, gas_val) \
    class classname { \
        model = "sns_u_rain_parka"; \
        camo = camo_val; \
        gasmask = gas_val; \
    };

#define DEFINE_U_M65_JACKET(classname, camo_val, pants_val, glv) \
    class classname { \
        model = "sns_u_m65_jacket"; \
        camo = camo_val; \
        pants = pants_val; \
        gloves = glv; \
    };

#define DEFINE_U_BDU(classname, camo_val, style_val, slv) \
    class classname { \
        model = "sns_u_bdu"; \
        camo = camo_val; \
        style = style_val; \
        sleeves = slv; \
    };

#define DEFINE_U_NVA(classname, style_val, slv) \
    class classname { \
        model = "sns_u_nva"; \
        style = style_val; \
        sleeves = slv; \
    };

#define DEFINE_U_VC(classname, color_val, style_val, slv) \
    class classname { \
        model = "sns_u_vc"; \
        color = color_val; \
        style = style_val; \
        sleeves = slv; \
    };

#define DEFINE_U_ARVN(classname, camo_val, slv, tuck) \
    class classname { \
        model = "sns_u_arvn"; \
        camo = camo_val; \
        sleeves = slv; \
        tucked = tuck; \
    };

#define DEFINE_U_DUTCH(classname, type_val) \
    class classname { \
        model = "sns_u_dutch"; \
        type = type_val; \
    };

#define DEFINE_U_FRENCH_F1(classname, slv) \
    class classname { \
        model = "sns_u_french_f1"; \
        sleeves = slv; \
    };

#define DEFINE_U_CIV_FLANNEL(classname, color_val, pants_val, slv, tuck) \
    class classname { \
        model = "sns_u_civ_casual"; \
        color = color_val; \
        pants = pants_val; \
        sleeves = slv; \
        tucked = tuck; \
    };

#define DEFINE_U_CIV_SWEATER(classname, design_val, slv) \
    class classname { \
        model = "sns_u_civ_sweater"; \
        design = design_val; \
        sleeves = slv; \
    };


// ===================================================================================================================================
// VEST MACROS
// ===================================================================================================================================

#define DEFINE_V_M1956(classname, loadout_val, buttpack_val, frags_val) \
    class classname { \
        model = "sns_v_m1956"; \
        loadout = loadout_val; \
        buttpack = buttpack_val; \
        frags = frags_val; \
    };

#define DEFINE_V_M1961(classname, loadout_val, buttpack_val) \
    class classname { \
        model = "sns_v_m1961"; \
        loadout = loadout_val; \
        buttpack = buttpack_val; \
    };

#define DEFINE_V_FLAK(classname, model_val, webbing_val, loadout_val) \
    class classname { \
        model = "sns_v_flak"; \
        model = model_val; \
        webbing = webbing_val; \
        loadout = loadout_val; \
    };

#define DEFINE_V_PASGT(classname, camo_val, webbing_val, loadout_val) \
    class classname { \
        model = "sns_v_pasgt"; \
        camo = camo_val; \
        webbing = webbing_val; \
        loadout = loadout_val; \
    };

#define DEFINE_V_LBV88(classname, webbing_val, loadout_val) \
    class classname { \
        model = "sns_v_lbv88"; \
        webbing = webbing_val; \
        loadout = loadout_val; \
    };

#define DEFINE_V_RBA(classname, webbing_val, loadout_val) \
    class classname { \
        model = "sns_v_rba"; \
        webbing = webbing_val; \
        loadout = loadout_val; \
    };

#define DEFINE_V_AWS(classname, loadout_val, vest_val) \
    class classname { \
        model = "sns_v_aws"; \
        loadout = loadout_val; \
        vest = vest_val; \
    };

#define DEFINE_V_FAUF(classname, loadout_val, belt_val) \
    class classname { \
        model = "sns_v_fauf"; \
        loadout = loadout_val; \
        belt = belt_val; \
    };

#define DEFINE_V_CHICOM(classname, type_val, style_val) \
    class classname { \
        model = "sns_v_chicom"; \
        type = type_val; \
        style = style_val; \
    };


// ===================================================================================================================================
// HEADGEAR MACROS
// ===================================================================================================================================

#define DEFINE_H_M1(classname, type_val, cover_val, band_val, net_val, acc_val) \
    class classname { \
        model = "sns_h_m1"; \
        type = type_val; \
        cover = cover_val; \
        band = band_val; \
        net = net_val; \
        accessories = acc_val; \
    };

#define DEFINE_H_BOONIE(classname, camo_val, style_val) \
    class classname { \
        model = "sns_h_boonie"; \
        camo = camo_val; \
        style = style_val; \
    };

#define DEFINE_H_PATROL_CAP(classname, type_val, camo_val, style_val) \
    class classname { \
        model = "sns_h_patrol"; \
        type = type_val; \
        camo = camo_val; \
        style = style_val; \
    };

#define DEFINE_H_PITH(classname, camo_val, cover_val, brim_val) \
    class classname { \
        model = "sns_h_pith"; \
        camo = camo_val; \
        cover = cover_val; \
        brim = brim_val; \
    };


// ===================================================================================================================================
// BACKPACK MACROS
// ===================================================================================================================================

#define DEFINE_B_M1941(classname, variant_val, bedroll_val, flak_val) \
    class classname { \
        model = "sns_b_m1941"; \
        variant = variant_val; \
        bedroll = bedroll_val; \
        flak = flak_val; \
    };

#define DEFINE_B_M1968(classname, variant_val, bedroll_val, flak_val) \
    class classname { \
        model = "sns_b_m1968"; \
        variant = variant_val; \
        bedroll = bedroll_val; \
        flak = flak_val; \
    };

#define DEFINE_B_ARVN(classname, contents_val, flak_val) \
    class classname { \
        model = "sns_b_arvn"; \
        contents = contents_val; \
        flak = flak_val; \
    };

#define DEFINE_B_LIGHTWEIGHT(classname, contents_val, flak_val) \
    class classname { \
        model = "sns_b_lightweight"; \
        contents = contents_val; \
        flak = flak_val; \
    };

#define DEFINE_B_TROPICAL(classname, contents_val, frame_val, flak_val) \
    class classname { \
        model = "sns_b_tropical"; \
        contents = contents_val; \
        frame = frame_val; \
        flak = flak_val; \
    };

#define DEFINE_B_PACKBOARD(classname, loadout_val, flak_val) \
    class classname { \
        model = "sns_b_packboard"; \
        loadout = loadout_val; \
        flak = flak_val; \
    };


// ===================================================================================================================================
// FACEWEAR MACROS (CfgGlasses)
// ===================================================================================================================================

#define DEFINE_F_BANDOLEER(classname, type_val, loadout_val, flak_val) \
    class classname { \
        model = "sns_f_bandoleer"; \
        type = type_val; \
        loadout = loadout_val; \
        flak = flak_val; \
    };

#define DEFINE_F_TOWEL(classname, style_val) \
    class classname { \
        model = "sns_f_towel"; \
        style = style_val; \
    };