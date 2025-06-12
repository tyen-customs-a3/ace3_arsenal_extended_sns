#define _ARMA_

class CfgPatches
{
    class aceax_compat_s_and_s
    {
        name = "ACE Arsenal Extended - S&S Gear Compatibility";
        units[] = {};
        weapons[] = {};
        requiredVersion = "1.0";
        requiredAddons[] = {
            "aceax_gearinfo",
            "simc_uaf_67_assets",
            "simc_mc_67_assets"
        };
        author = "Your Name";
    };
};

#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
