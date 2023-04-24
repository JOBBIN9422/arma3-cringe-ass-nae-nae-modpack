 class CfgPatches
 {
 	class apptac_uniforms
 	{
		author = "JOBBIN";
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 0.1;
 		requiredAddons[] = {"A3_Characters_F", "A3_Characters_F_EPC", "A3_Characters_F_Bootcamp"};
 	};
 };
 
// UNIT CONFIG
class cfgVehicles
{
	#include "units.hpp"
};

// UNIFORM CONFIG
class cfgWeapons
{
	#include "uniforms.hpp"
	#include "vests.hpp"
	#include "headgear.hpp"
};