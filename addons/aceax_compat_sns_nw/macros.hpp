/**
 * ===================================================================================================================================
 * ACE ARSENAL EXTENDED MACROS FOR S&S: NEW WAVE
 * ===================================================================================================================================
 */

// UNIFORMS
#define DEFINE_U_BDU(classname, faction, camo, style, sleeves, gas, gloves, kneepads) \
    class classname { \
        model = "sns_nw_u_bdu"; \
        faction = faction; \
        camo = camo; \
        style = style; \
        sleeves = sleeves; \
        gasmask = gas; \
        gloves = gloves; \
        kneepads = kneepads; \
    };

#define DEFINE_U_JACKET(classname, j_camo, u_camo, gas) \
    class classname { \
        model = "sns_nw_u_jacket"; \
        jacket_camo = j_camo; \
        uniform_camo = u_camo; \
        gasmask = gas; \
    };

#define DEFINE_U_DNCE(classname, pants) \
    class classname { \
        model = "sns_nw_u_dnce"; \
        pants_camo = pants; \
    };

#define DEFINE_U_CIV(classname, shirt_color, pants_color, sleeves, tucked) \
    class classname { \
        model = "sns_nw_u_civ"; \
        shirt = shirt_color; \
        pants = pants_color; \
        sleeves = sleeves; \
        tucked = tucked; \
    };

#define DEFINE_U_CDO(classname, pants_camo, sleeves, tucked) \
    class classname { \
        model = "sns_nw_u_cdo"; \
        pants = pants_camo; \
        sleeves = sleeves; \
        tucked = tucked; \
    };

// VESTS
#define DEFINE_V_ALICE(classname, type, loadout, attachments) \
    class classname { \
        model = "sns_nw_v_alice"; \
        type = type; \
        loadout = loadout; \
        attachments = attachments; \
    };

#define DEFINE_V_PASGT(classname, camo, webbing, loadout) \
    class classname { \
        model = "sns_nw_v_pasgt"; \
        camo = camo; \
        webbing = webbing; \
        loadout = loadout; \
    };

#define DEFINE_V_LBV88(classname, belt, loadout) \
    class classname { \
        model = "sns_nw_v_lbv88"; \
        belt = belt; \
        loadout = loadout; \
    };

#define DEFINE_V_RBA(classname, webbing, loadout) \
    class classname { \
        model = "sns_nw_v_rba"; \
        webbing = webbing; \
        loadout = loadout; \
    };

#define DEFINE_V_FAUF(classname, belt, loadout) \
    class classname { \
        model = "sns_nw_v_fauf"; \
        belt = belt; \
        loadout = loadout; \
    };

#define DEFINE_V_AWS(classname, base, loadout) \
    class classname { \
        model = "sns_nw_v_aws"; \
        base_vest = base; \
        loadout = loadout; \
    };

// HEADGEAR
#define DEFINE_H_PASGT(classname, cover, band, scrim, goggles, nvg) \
    class classname { \
        model = "sns_nw_h_pasgt"; \
        cover = cover; \
        band = band; \
        scrim = scrim; \
        goggles = goggles; \
        nvg = nvg; \
    };

#define DEFINE_H_M1(classname, cover, band, accessories, rank) \
    class classname { \
        model = "sns_nw_h_m1"; \
        cover = cover; \
        band = band; \
        accessories = accessories; \
        rank = rank; \
    };

#define DEFINE_H_BOONIE(classname, camo, style) \
    class classname { \
        model = "sns_nw_h_boonie"; \
        camo = camo; \
        style = style; \
    };

#define DEFINE_H_PATROL(classname, camo) \
    class classname { \
        model = "sns_nw_h_patrolcap"; \
        camo = camo; \
    };

#define DEFINE_H_PROTEC(classname, type, nvg, headset, strobe, goggles) \
    class classname { \
        model = "sns_nw_h_protec"; \
        type = type; \
        nvg_mount = nvg; \
        headset = headset; \
        strobe = strobe; \
        goggles = goggles; \
    };