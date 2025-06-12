/**
 * ===================================================================================================================================
 * ACE ARSENAL EXTENDED MACROS FOR S&S: NEW WAVE
 * ===================================================================================================================================
 */

// UNIFORMS
#define DEFINE_U_BDU(classname_, faction_, camo_, style_, sleeves_, gas_, gloves_, kneepads_) \
    class classname_ { \
        model = "sns_nw_u_bdu"; \
        faction = faction_; \
        camo = camo_; \
        style = style_; \
        sleeves = sleeves_; \
        gasmask = gas_; \
        gloves = gloves_; \
        kneepads = kneepads_; \
    };

#define DEFINE_U_JACKET(classname_, j_camo_, u_camo_, gas_) \
    class classname_ { \
        model = "sns_nw_u_jacket"; \
        jacket_camo = j_camo_; \
        uniform_camo = u_camo_; \
        gasmask = gas_; \
    };

#define DEFINE_U_DNCE(classname_, pants_) \
    class classname_ { \
        model = "sns_nw_u_dnce"; \
        pants_camo = pants_; \
    };

#define DEFINE_U_CIV(classname_, shirt_color_, pants_color_, sleeves_, tucked_) \
    class classname_ { \
        model = "sns_nw_u_civ"; \
        shirt = shirt_color_; \
        pants = pants_color_; \
        sleeves = sleeves_; \
        tucked = tucked_; \
    };

#define DEFINE_U_CDO(classname_, pants_camo_, sleeves_, tucked_) \
    class classname_ { \
        model = "sns_nw_u_cdo"; \
        pants = pants_camo_; \
        sleeves = sleeves_; \
        tucked = tucked_; \
    };

// VESTS
#define DEFINE_V_ALICE(classname_, type_, loadout_, attachments_) \
    class classname_ { \
        model = "sns_nw_v_alice"; \
        type = type_; \
        loadout = loadout_; \
        attachments = attachments_; \
    };

#define DEFINE_V_PASGT(classname_, camo_, webbing_, loadout_) \
    class classname_ { \
        model = "sns_nw_v_pasgt"; \
        camo = camo_; \
        webbing = webbing_; \
        loadout = loadout_; \
    };

#define DEFINE_V_LBV88(classname_, belt_, loadout_) \
    class classname_ { \
        model = "sns_nw_v_lbv88"; \
        belt = belt_; \
        loadout = loadout_; \
    };

#define DEFINE_V_RBA(classname_, webbing_, loadout_) \
    class classname_ { \
        model = "sns_nw_v_rba"; \
        webbing = webbing_; \
        loadout = loadout_; \
    };

#define DEFINE_V_FAUF(classname_, belt_, loadout_) \
    class classname_ { \
        model = "sns_nw_v_fauf"; \
        belt = belt_; \
        loadout = loadout_; \
    };

#define DEFINE_V_AWS(classname_, base_, loadout_) \
    class classname_ { \
        model = "sns_nw_v_aws"; \
        base_vest = base_; \
        loadout = loadout_; \
    };

// HEADGEAR
#define DEFINE_H_PASGT(classname_, cover_, band_, scrim_, goggles_, nvg_) \
    class classname_ { \
        model = "sns_nw_h_pasgt"; \
        cover = cover_; \
        band = band_; \
        scrim = scrim_; \
        goggles = goggles_; \
        nvg = nvg_; \
    };

#define DEFINE_H_M1(classname_, cover_, band_, accessories_, rank_) \
    class classname_ { \
        model = "sns_nw_h_m1"; \
        cover = cover_; \
        band = band_; \
        accessories = accessories_; \
        rank = rank_; \
    };

#define DEFINE_H_BOONIE(classname_, camo_, style_) \
    class classname_ { \
        model = "sns_nw_h_boonie"; \
        camo = camo_; \
        style = style_; \
    };

#define DEFINE_H_PATROL(classname_, camo_) \
    class classname_ { \
        model = "sns_nw_h_patrolcap"; \
        camo = camo_; \
    };

#define DEFINE_H_PROTEC(classname_, type_, nvg_, headset_, strobe_, goggles_) \
    class classname_ { \
        model = "sns_nw_h_protec"; \
        type = type_; \
        nvg_mount = nvg_; \
        headset = headset_; \
        strobe = strobe_; \
        goggles = goggles_; \
    };

#define DEFINE_B_ALICE(classname_, color_, frame_, type_) \
    class classname_ { \
        model = "sns_nw_b_alice"; \
        color = color_; \
        frame = frame_; \
        type = type_; \
    };