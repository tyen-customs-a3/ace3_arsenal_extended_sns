class XtdGearModels
{
    class CfgWeapons
    {
        // ===================================================================================================================================
        // UNIFORMS
        // ===================================================================================================================================

        // --- US Army (Vietnam Era) ---
        class sns_u_og107
        {
            label = "OG-107 Uniform";
            options[] = {"generation", "sleeves", "tucked", "gloves", "gasmask"};
            class generation {
                label = "Generation";
                values[] = {"Mk1", "Mk3"};
            };
            class sleeves {
                label = "Sleeves";
                values[] = {"Full", "Rolled"};
            };
            class tucked {
                label = "Tucked";
                values[] = {"Untucked", "Tucked"};
            };
            class gloves {
                label = "Gloves";
                values[] = {"None", "Nomex"};
            };
            class gasmask {
                label = "Gas Mask";
                values[] = {"No", "Yes"};
            };
        };

        class sns_u_tcu
        {
            label = "TCU Fatigues";
            options[] = {"generation", "sleeves", "pants", "gloves"};
            class generation {
                label = "Generation";
                values[] = {"Mk1", "Mk2", "Mk3"};
            };
            class sleeves {
                label = "Sleeves";
                values[] = {"Full", "Rolled", "Cut"};
            };
            class pants {
                label = "Pants";
                values[] = {"Standard", "Poplin", "Leggings", "OG-107"};
                 class Leggings { label = "with Leggings"; };
            };
            class gloves {
                label = "Gloves";
                values[] = {"None", "Nomex"};
            };
        };

        class sns_u_erdl
        {
            label = "ERDL Uniform";
            options[] = {"pattern", "shirt", "pants", "gloves"};
            class pattern {
                label = "Pattern";
                values[] = {"Lowland", "Highland"};
            };
            class shirt {
                label = "Shirt Style";
                values[] = {"Standard", "SOG"};
            };
            class pants {
                label = "Pants Style";
                values[] = {"OG-107", "Tiger Stripe", "ERDL", "Denim"};
            };
            class gloves {
                label = "Gloves";
                values[] = {"None", "Nomex"};
            };
        };
        
        class sns_u_tiger_stripe
        {
            label = "Tiger Stripe Uniform";
            options[] = {"type", "sleeves", "tucked"};
            class type {
                label = "Type";
                values[] = {"Standard", "Advisor"};
            };
            class sleeves {
                values[] = {"Full", "Rolled"};
            };
            class tucked {
                values[] = {"Untucked", "Tucked"};
            };
        };

        class sns_u_rain_parka
        {
            label = "Rain Parka";
            options[] = {"camo", "gasmask"};
            class camo {
                values[] = {"OG-107", "ERDL Lowland", "ERDL Highland"};
            };
            class gasmask {
                values[] = {"No", "Yes"};
            };
        };
        
        class sns_u_m65_jacket
        {
            label = "M1965 Field Jacket";
            options[] = {"camo", "pants", "gloves"};
            class camo {
                values[] = {"OG-107", "TCU", "ERDL Lowland", "ERDL Highland"};
            };
            class pants {
                values[] = {"OG-107", "TCU"};
            };
            class gloves {
                values[] = {"None", "Nomex"};
            };
        };

        // --- USMC (Vietnam Era) ---
        class sns_u_mc_og107
        {
            label = "OG-107 Uniform (USMC)";
            options[] = {"generation", "sleeves", "tucked", "gloves", "gasmask"};
            class generation { values[] = {"Mk1", "Mk3"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
            class tucked { values[] = {"Untucked", "Tucked"}; };
            class gloves { values[] = {"None", "Nomex"}; };
            class gasmask { values[] = {"No", "Yes"}; };
        };

        class sns_u_mc_tcu
        {
            label = "TCU Fatigues (USMC)";
            options[] = {"generation", "sleeves", "pants", "gloves"};
            class generation { values[] = {"Mk1", "Mk2", "Mk3"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
            class pants { values[] = {"Standard", "Poplin"}; };
            class gloves { values[] = {"None", "Nomex"}; };
        };

        class sns_u_mc_erdl
        {
            label = "ERDL Uniform (USMC)";
            options[] = {"pattern", "shirt"};
            class pattern { values[] = {"Lowland", "Highland"}; };
            class shirt { values[] = {"OG-107", "TCU"}; };
        };
        
        // --- US (Cold War '80s/'90s) ---
        class sns_u_bdu
        {
            label = "BDU/DCU Uniform";
            options[] = {"camo", "style", "sleeves"};
            class camo { values[] = {"M81", "DCU-3", "DCU-6"}; };
            class style { values[] = {"Standard", "RAID"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
        };

        // --- NVA/VC ---
        class sns_u_nva
        {
            label = "NVA Uniform";
            options[] = {"style", "sleeves"};
            class style { values[] = {"Standard", "Pockets"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
        };
        class sns_u_vc
        {
            label = "VC Pajamas";
            options[] = {"color", "style", "sleeves"};
            class color { values[] = {"Black", "Blue", "Green"}; };
            class style { values[] = {"Standard", "Pockets"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
        };

        // --- ARVN ---
        class sns_u_arvn
        {
            label = "ARVN Uniform";
            options[] = {"camo", "sleeves", "tucked"};
            class camo { values[] = {"OG-107", "OD7", "BDQ", "ERDL Lowland", "ERDL Invisible", "Beo Gam", "Tiger Stripe"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
            class tucked { values[] = {"Untucked", "Tucked"}; };
        };

        // --- Dutch Army ---
        class sns_u_dutch
        {
            label = "Dutch Uniform";
            options[] = {"type"};
            class type { values[] = {"M58/M78", "M58/HBT", "M58 HBT", "M78"}; };
        };

        // --- French Army ---
        class sns_u_french_f1
        {
            label = "F1 Uniform";
            options[] = {"sleeves"};
            class sleeves { values[] = {"Full", "Rolled", "Tropical"}; };
        };

        // --- Civilian ---
        class sns_u_civ_casual
        {
            label = "Civilian Flannel";
            options[] = {"color", "pants", "sleeves", "tucked"};
            class color { values[] = {"White", "Red", "Red-Light", "Blue", "Blue-Dark", "Khaki", "Green", "VTN Khaki", "VTN Jean"}; };
            class pants { values[] = {"Light", "Dark"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
            class tucked { values[] = {"Untucked", "Tucked"}; };
        };
        class sns_u_civ_sweater
        {
            label = "Civilian Sweater";
            options[] = {"design", "sleeves"};
            class design { values[] = {"089", "Amogus", "Felix", "Pink Floyd", "Geef Op", "Ghostbuster", "Green", "Leven", "McDonalds Orange", "McDonalds Red", "Ninamori", "Simcardo", "Suka", "UA"}; };
            class sleeves { values[] = {"Full", "Rolled"}; };
        };


        // ===================================================================================================================================
        // VESTS
        // ===================================================================================================================================

        class sns_v_m1956
        {
            label = "M1956 LCE";
            options[] = {"loadout", "buttpack", "frags"};
            class loadout { values[] = {"Rifleman", "M14", "BAR", "Grenadier", "Medic", "Sidearm", "Claymore"}; };
            class buttpack { values[] = {"Yes", "No"}; };
            class frags { values[] = {"None", "Standard", "Smoke", "Mixed"}; };
        };

        class sns_v_m1961
        {
            label = "M1961 LCE (USMC)";
            options[] = {"loadout", "buttpack"};
            class loadout { values[] = {"Rifleman", "Bandoleer", "Mortar", "M56 Pouches", "Grenadier", "Sidearm", "MG"}; };
            class buttpack { values[] = {"Yes", "No", "Rear"}; };
        };

        class sns_v_flak
        {
            label = "Flak Vest";
            options[] = {"model", "webbing", "loadout"};
            class model { values[] = {"M1952A", "M1955", "M1969"}; };
            class webbing { values[] = {"None", "M1961", "M1967", "Bandoleer"}; };
            class loadout { values[] = {"None", "Bandoleer", "Grenadier", "Sidearm", "MG", "Medic"}; };
        };

        class sns_v_pasgt
        {
            label = "PASGT Vest";
            options[] = {"camo", "webbing", "loadout"};
            class camo { values[] = {"M81", "DCU-6"}; };
            class webbing { values[] = {"None", "ALICE", "LBV"}; };
            class loadout { values[] = {"None", "Rifleman", "Grenadier", "Sidearm", "SAW"}; };
        };

        class sns_v_lbv88
        {
            label = "LBV-88";
            options[] = {"webbing", "loadout"};
            class webbing { label = "Belt"; values[] = {"Yes", "No"}; };
            class loadout { values[] = {"Rifleman", "Grenadier", "Sidearm"}; };
        };

        class sns_v_rba
        {
            label = "Ranger Body Armor";
            options[] = {"webbing", "loadout"};
            class webbing { values[] = {"None", "LBV", "ALICE"}; };
            class loadout { values[] = {"Rifleman", "Grenadier", "Sidearm", "SAW"}; };
        };

        class sns_v_aws
        {
            label = "AWS Chest Rig";
            options[] = {"loadout", "vest"};
            class loadout { values[] = {"Rifleman", "Light", "Grenadier", "Team Leader"}; };
            class vest { label = "Base Vest"; values[] = {"None", "FAUF"}; };
        };

        class sns_v_fauf
        {
            label = "FAUF Vest";
            options[] = {"loadout", "belt"};
            class loadout { values[] = {"None", "LBV", "Rifleman"}; };
            class belt { values[] = {"No", "Yes", "Sidearm", "SAW"}; };
        };

        class sns_v_chicom
        {
            label = "Chicom Rig";
            options[] = {"type", "style"};
            class type { values[] = {"AK", "SKS"}; };
            class style { values[] = {"Standard", "High"}; };
        };

        class sns_v_french_webbing
        {
            label = "French Webbing";
            options[] = {"type"};
            class type { values[] = {"MAS49"}; };
        };

        class sns_v_dutch_m52
        {
            label = "Dutch M1952 Webbing";
            options[] = {"variant", "shovel"};
            class variant { values[] = {"Standard", "P37 Hybrid", "Pistol"}; };
            class shovel { values[] = {"None", "M43", "ALICE"}; };
        };


        // ===================================================================================================================================
        // HEADGEAR
        // ===================================================================================================================================

        class sns_h_m1
        {
            label = "M1 Helmet";
            options[] = {"type", "cover", "band", "net", "accessories"};
            class type { values[] = {"Standard", "M1C"}; };
            class cover { values[] = {"None", "Mitchell Leaf", "Mitchell Cloud", "ERDL"}; };
            class band { values[] = {"None", "Elastic", "Rubber"}; };
            class net { values[] = {"None", "Standard", "Scrim"}; };
            class accessories { values[] = {"None", "Bandages", "Magazine", "Magazines", "Cigarettes", "Graffiti", "SWDG"}; };
        };

        class sns_h_boonie
        {
            label = "Boonie Hat";
            options[] = {"camo", "style"};
            class camo { values[] = {"OD", "Tiger Stripe", "ERDL Lowland", "ERDL Highland", "Black", "Beo Gam"}; };
            class style { values[] = {"Standard", "Folded Sides", "Folded Back", "Short Brim"}; };
        };

        class sns_h_patrol
        {
            label = "Patrol/Utility Cap";
            options[] = {"type", "camo", "style", "adornment"};
            class type { values[] = {"M1951", "P58"}; };
            class camo { values[] = {"OD", "ERDL"}; };
            class style { values[] = {"Standard", "Folded"}; };
            class adornment { values[] = {"None", "CIB", "Airborne", "Medic"}; };
        };

        class sns_h_pith
        {
            label = "Pith Helmet";
            options[] = {"camo", "cover", "brim"};
            class camo { values[] = {"OD", "Khaki"}; };
            class cover { values[] = {"None", "Net", "Parachute"}; };
            class brim { values[] = {"Down", "Up"}; };
        };

        class sns_h_beret
        {
            label = "Beret";
            options[] = {"unit"};
            class unit { values[] = {"Van Heutsz", "Medical"}; };
        };

        class sns_h_m51
        {
            label = "French M51 Helmet";
            options[] = {"camo", "style"};
            class camo { values[] = {"OD", "Lizard 1", "Lizard 2", "Lizard 3"}; };
            class style { values[] = {"Standard", "Rubber Band"}; };
        };

        class sns_h_m53
        {
            label = "Dutch M53 Helmet";
            options[] = {"cover", "net"};
            class cover { values[] = {"Burlap", "DPM", "Mitchell"}; };
            class net { values[] = {"None", "Standard", "Elastic", "Scrim", "Scrim Camo"}; };
        };
    };

    class CfgVehicles
    {
        // ===================================================================================================================================
        // BACKPACKS
        // ===================================================================================================================================

        class sns_b_m1941
        {
            label = "M1941/44 Pack";
            options[] = {"variant", "bedroll", "flak"};
            class variant { values[] = {"Standard", "M43 Shovel", "Mortar"}; };
            class bedroll { values[] = {"None", "Shelter Half", "Poncho Liner", "Flat"}; };
            class flak { values[] = {"No", "Yes"}; };
        };

        class sns_b_m1968
        {
            label = "M1941/68 Pack";
            options[] = {"variant", "bedroll", "flak"};
            class variant { values[] = {"Standard", "M43 Shovel"}; };
            class bedroll { values[] = {"None", "Shelter Half", "Poncho Liner"}; };
            class flak { values[] = {"No", "Yes"}; };
        };

        class sns_b_arvn
        {
            label = "ARVN Rucksack";
            options[] = {"contents", "flak"};
            class contents { values[] = {"Standard", "M43 Shovel", "Empty", "Radio", "Gump", "Sheen", "Helmet"}; };
            class flak { values[] = {"No", "Yes"}; };
        };

        class sns_b_lightweight
        {
            label = "Lightweight Rucksack";
            options[] = {"contents", "flak"};
            class contents { values[] = {"Standard", "Empty", "Radio", "Medic", "Ammo", "Gasmask Bag", "2QT"}; };
            class flak { values[] = {"No", "Yes"}; };
        };

        class sns_b_tropical
        {
            label = "Tropical Rucksack";
            options[] = {"contents", "frame", "flak"};
            class contents { values[] = {"Standard", "Bandoleer", "Radio"}; };
            class frame { values[] = {"Yes", "No"}; };
            class flak { values[] = {"No", "Yes"}; };
        };

        class sns_b_packboard
        {
            label = "Packboard";
            options[] = {"loadout", "flak"};
            class loadout { values[] = {"Ammo", "Rockets", "Mortar", "Radio"}; };
            class flak { values[] = {"No", "Yes"}; };
        };
    };
    
    class CfgGlasses
    {
        // ===================================================================================================================================
        // FACEWEAR
        // ===================================================================================================================================

        class sns_f_bandoleer
        {
            label = "Bandoleer";
            options[] = {"type", "loadout", "flak"};
            class type { values[] = {"Standard", "M7 Claymore"}; };
            class loadout { values[] = {"Rifle", "40mm", "M60"}; };
            class flak { values[] = {"No", "Yes"}; };
        };
        
        class sns_f_towel
        {
            label = "Towel";
            options[] = {"style"};
            class style { values[] = {"Style 1", "Style 2"}; };
        };
        
        class sns_f_swdg
        {
            label = "SWDG Goggles";
            options[] = {"position"};
            class position { values[] = {"Eyes", "Forehead"}; };
        };
        
        class sns_f_gasbag
        {
            label = "M17 Gasmask Bag";
            options[] = {"style"};
            class style { values[] = {"Standard"}; };
        };

        class sns_f_nomex
        {
            label = "Nomex Gloves";
            options[] = {"color", "style", "cut"};
            class color { values[] = {"OD", "Calf", "Tan", "Tan/Calf"}; };
            class style { values[] = {"Standard", "Long", "Folded"}; };
            class cut { values[] = {"No", "Yes"}; };
        };
        
        class sns_f_illegal_canteen
        {
            label = "2QT Canteen";
            options[] = {"style"};
            class style { values[] = {"Standard"}; };
        };
    };
};