#define _ARMA_

class CfgPatches
{
    class aceax_compat_s_and_s_new_wave
    {
        name = "ACE Arsenal Extended - S&S New Wave Compatibility";
        units[] = {};
        weapons[] = {};
        requiredVersion = "1.0";
        requiredAddons[] = {
            "aceax_gearinfo",
            "simc_uaf_67_assets",
            "simc_uaf_81_core",
            "simc_uaf_88_core",
            "simc_uaf_93_core",
            "simc_mc_81_core",
            "simc_mc_93_core",
            "aceax_compat_sns"
        };
        author = "Tyen";
    };
};

#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"