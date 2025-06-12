class XtdGearModels {
    class CfgWeapons {
        // ===================================================================================================================================
        // UNIFORMS
        // ===================================================================================================================================
        class sns_nw_u_bdu {
            label = "BDU";
            options[] = {"faction", "camo", "style", "sleeves", "gloves", "kneepads", "gasmask"};
            class faction {
                values[] = {"US Army", "USMC"};
            };
            class camo {
                values[] = {"M81", "DCU-3", "DCU-6", "ERDL-L", "ERDL-H", "OD", "T/MOUT"};
                class M81 { label = "M81"; };
                class DCU_3 { label = "DCU (3-Color)"; };
                class DCU_6 { label = "DCU (6-Color)"; };
                class ERDL_L { label = "ERDL (Lowland)"; };
                class ERDL_H { label = "ERDL (Highland)"; };
                class OD { label = "OD"; };
                class T_MOUT { label = "T/MOUT"; };
            };
            class style {
                values[] = {"Standard", "RAID", "Tee"};
            };
            class sleeves {
                values[] = {"Full", "Rolled"};
            };
            class gloves {
                values[] = {"No", "Yes"};
                class Yes { label = "Nomex"; };
            };
            class kneepads {
                values[] = {"No", "Yes"};
            };
            class gasmask {
                label = "Gas Mask";
                values[] = {"No", "Yes"};
            };
        };

        class sns_nw_u_jacket {
            label = "M-1965 Jacket";
            options[] = {"jacket_camo", "uniform_camo", "gasmask"};
            class jacket_camo {
                label = "Jacket";
                values[] = {"M81", "OD"};
            };
            class uniform_camo {
                label = "BDU";
                values[] = {"M81"};
            };
            class gasmask {
                label = "Gas Mask";
                values[] = {"No", "Yes"};
            };
        };

        class sns_nw_u_dnce {
            label = "DNCE Parka";
            options[] = {"pants_camo"};
            class pants_camo {
                label = "Pants";
                values[] = {"M81", "DCU-3", "DCU-6"};
                class DCU_3 { label = "DCU (3-Color)"; };
                class DCU_6 { label = "DCU (6-Color)"; };
            };
        };

        class sns_nw_u_civ {
            label = "Civilian (Flannel)";
            options[] = {"shirt", "pants", "sleeves", "tucked"};
            class shirt { values[] = {"White", "Red", "Red-Light", "Blue", "Blue-Dark", "Khaki", "Green", "Surf"}; };
            class pants { values[] = {"BDU", "DCU", "Desert", "DT"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
            class tucked { values[] = {"Untucked", "Tucked"}; };
        };

        class sns_nw_u_cdo {
            label = "Civilian (Commando)";
            options[] = {"pants", "sleeves", "tucked"};
            class pants { values[] = {"BDU", "Desert", "DCU", "T/MOUT"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
            class tucked { values[] = {"Untucked", "Tucked"}; };
        };


        // ===================================================================================================================================
        // VESTS
        // ===================================================================================================================================
        class sns_nw_v_pasgt {
            label = "PASGT Vest";
            options[] = {"camo", "webbing", "loadout"};
            class camo {
                values[] = {"M81", "DCU-3", "DCU-6", "Green", "ERDL", "T/MOUT"};
                class DCU_3 { label = "DCU (3-Color)"; };
                class DCU_6 { label = "DCU (6-Color)"; };
            };
            class webbing {
                values[] = {"None", "ALICE", "LBV"};
            };
            class loadout {
                values[] = {"Rifleman", "Rifleman (Alt)", "Grenadier", "SAW", "Sidearm", "Sidearm (Alt)", "Light"};
            };
        };

        class sns_nw_v_alice {
            label = "ALICE Webbing";
            options[] = {"type", "loadout", "attachments"};
            class type { values[] = {"LC-1", "LC-2"}; };
            class loadout { values[] = {"Rifleman", "Rifleman (Alt)", "Light", "Grenadier", "Sidearm", "MG", "Rifleman (M56)"}; };
            class attachments { values[] = {"None", "E-Tool"}; };
        };

        class sns_nw_v_flak_webbing {
            label = "Flak Vest w/ Webbing";
            options[] = {"flak_model", "webbing", "loadout", "attachments"};
            class flak_model {
                label = "Flak Model";
                values[] = {"M1955", "M69"};
            };
            class webbing { values[] = {"LC-1"}; };
            class loadout { values[] = {"Rifleman", "Rifleman (Alt)", "Grenadier", "Sidearm", "MG"}; };
            class attachments { values[] = {"None", "E-Tool", "Rifleman (M56)"}; };
        };

        class sns_nw_v_lbv88 {
            label = "LBV-88";
            options[] = {"belt", "loadout"};
            class belt { values[] = {"None", "ALICE"}; };
            class loadout { values[] = {"Rifleman", "Rifleman (Alt)", "Sidearm", "Sidearm (Alt)"}; };
        };

        class sns_nw_v_rba {
            label = "Ranger Body Armor";
            options[] = {"webbing", "loadout"};
            class webbing { values[] = {"None", "ALICE", "LBV"}; };
            class loadout { values[] = {"Rifleman", "Rifleman (Alt)", "Grenadier", "SAW", "Sidearm", "Sidearm (Alt)"}; };
        };

        class sns_nw_v_aws {
            label = "AWS Rig";
            options[] = {"base_vest", "loadout"};
            class base_vest { values[] = {"None", "FAUF"}; };
            class loadout { values[] = {"Rifleman", "Rifleman (Alt)", "Light", "Light (Alt)"}; };
        };

        class sns_nw_v_fauf {
            label = "FAUF Vest";
            options[] = {"belt", "loadout"};
            class belt { values[] = {"None", "ALICE", "LBV"}; };
            class loadout { values[] = {"Rifleman", "Rifleman (Alt)", "Sidearm", "SAW", "Light"}; };
        };

        // ===================================================================================================================================
        // HEADGEAR
        // ===================================================================================================================================
        class sns_nw_h_m1 {
            label = "M1 Helmet";
            options[] = {"cover", "band", "accessories", "rank"};
            class cover {
                values[] = {"M81", "M81 Alt", "ERDL", "Desert"};
            };
            class band {
                values[] = {"None", "Elastic"};
            };
            class accessories {
                values[] = {"None", "SWDG"};
            };
            class rank {
                values[] = {"None", "PFC", "CPL", "SPC", "SGT", "SSG", "SFC", "1SG", "2LT", "1LT", "CPT", "MAJ", "LTC", "COL"};
            };
        };

        class sns_nw_h_pasgt {
            label = "PASGT Helmet";
            options[] = {"cover", "scrim", "goggles", "nvg", "band"};
            class cover {
                values[] = {"M81", "DCU-3", "DCU-6", "Desert", "Green", "T/MOUT"};
                class DCU_3 { label = "DCU (3-Color)"; };
                class DCU_6 { label = "DCU (6-Color)"; };
            };
            class scrim {
                values[] = {"None", "Standard", "Panama"};
            };
            class goggles {
                label = "Goggles/SWDG";
                values[] = {"None", "Up", "Down"};
            };
            class nvg {
                label = "NVG Mount";
                values[] = {"No", "Yes", "Strap"};
            };
            class band {
                label = "Helmet Band";
                values[] = {"None", "Standard"};
            };
        };
        
        class sns_nw_h_boonie {
            label = "Boonie Hat";
            options[] = {"camo", "style"};
            class camo {
                values[] = {"M81", "DCU-3", "DCU-6", "Desert"};
                class DCU_3 { label = "DCU (3-Color)"; };
                class DCU_6 { label = "DCU (6-Color)"; };
            };
            class style {
                values[] = {"Standard", "Folded Sides", "Folded Back", "Short Brim"};
            };
        };

        class sns_nw_h_patrolcap {
            label = "Patrol/Utility Cap";
            options[] = {"camo"};
            class camo {
                values[] = {"M81", "DCU-3", "DCU-6", "Desert"};
                class DCU_3 { label = "DCU (3-Color)"; };
                class DCU_6 { label = "DCU (6-Color)"; };
            };
        };
        
        class sns_nw_h_protec {
            label = "Pro-Tec Helmet";
            options[] = {"type", "headset", "nvg_mount", "strobe", "goggles"};
            class type { values[] = {"Full", "Half-Cut"}; };
            class headset { values[] = {"No", "Yes"}; class No { label = "None"; }; class Yes { label = "Standard"; }; };
            class nvg_mount { label = "NVG"; values[] = {"No", "Yes"}; };
            class strobe { values[] = {"No", "Yes"}; };
            class goggles { values[] = {"None", "Up", "Down"}; };
        };

        class sns_nw_h_cvc {
            label = "CVC Helmet";
            options[] = {"goggles"};
            class goggles {
                label = "Goggles/SWDG";
                values[] = {"None", "Up", "Down"};
            };
        };
    };

    class CfgVehicles {
        // ===================================================================================================================================
        // BACKPACKS
        // ===================================================================================================================================
        class sns_nw_b_alice {
            label = "ALICE Pack";
            options[] = {"camo", "frame", "loadout", "flak"};
            class camo {
                values[] = {"OD", "M81 Cover", "DCU Cover", "Desert Cover"};
            };
            class frame {
                values[] = {"No", "Yes"};
            };
            class loadout {
                values[] = {"Standard", "Radio"};
            };
            class flak {
                label = "For Flak Vest";
                values[] = {"No", "Yes"};
            };
        };
    };
};