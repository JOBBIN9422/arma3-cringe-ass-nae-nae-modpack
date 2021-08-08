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
	class B_Soldier_base_F;		

	//FISHING SHIRT UNIT
	class AT_soldier_fisherman: B_Soldier_base_F
	{
		author = "JOBBIN";			// The name of the author of the asset, which is displayed in the editor.
		scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		scopeCurator = 0;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 0;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName = "Fisherman";
		model = "\A3\Characters_F\Civil\c_poloshirt.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\cum_fast.paa"};
		uniformClass = "AT_uniform_fisherman"; // This links this soldier to a particular uniform.
	};
	
	//FISHING SHIRT GROUND HOLDER
	class Item_Base_F;
	class Item_U_AT_soldier_fisherman_new: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Fishing Shirt";
		author = "JOBBIN";
		vehicleClass = ItemsUniforms;
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class AT_soldier_fisherman
			{
				name = AT_soldier_fisherman;
				count = 1;
			};
		};
	};
	
	//GAMER SHIRT UNIT
	class AT_soldier_gamer: B_Soldier_base_F
	{
		author = "JOBBIN";
		scope = 1;							
		scopeCurator = 0;					
		scopeArsenal = 0;					
		displayName = "Gamer";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[] = {"Camo", "Camo2", "insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing1_co.paa", "\apptac_uniforms\textures\gamer_shirt.paa"};
		uniformClass = "AT_uniform_gamer"; // This links this soldier to a particular uniform.
	};
	
	//GAMER SHIRT GROUND HOLDER
	class Item_U_AT_soldier_gamer_new: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Gamer Shirt";
		author = "JOBBIN";
		vehicleClass = ItemsUniforms;
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class AT_soldier_gamer
			{
				name = AT_soldier_gamer;
				count = 1;
			};
		};
	};
	
    //GUERRILLA FATIGUES BASE UNIT
	class AT_soldier_guerrilla_base: B_Soldier_base_F
	{
		author = "JOBBIN";
		scope = 1;							
		scopeCurator = 0;					
		scopeArsenal = 0;
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
	};
	
    //GUERILLA FATIGUES (ERDL) UNIT
	class AT_soldier_guerilla_fatigues_erdl: AT_soldier_guerrilla_base
	{				
		displayName = "Guerilla (ERDL)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_erdl.paa"};
		uniformClass = "AT_uniform_guerilla_fatigues_erdl"; // This links this soldier to a particular uniform.
	};
	
	//GUERILLA FATIGUES (ERDL) GROUND HOLDER
	class Item_U_AT_soldier_guerilla_erdl_new: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerrilla Fatigues (ERDL)";
		author = "JOBBIN";
		vehicleClass = ItemsUniforms;
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class AT_soldier_guerilla_fatigues_erdl
			{
				name = AT_soldier_guerilla_fatigues_erdl;
				count = 1;
			};
		};
	};
	
	//GUERILLA FATIGUES (FORKLIFT DRIVER) UNIT
	class AT_soldier_guerilla_fatigues_forklift: AT_soldier_guerrilla_base
	{				
		displayName = "Guerrilla (Forklift Driver)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatigues_forklift.paa"};
		uniformClass = "AT_uniform_guerilla_fatigues_forklift"; // This links this soldier to a particular uniform.
	};
	
	//GUERILLA FATIGUES (FORKLIFT DRIVER) GROUND HOLDER
	class Item_U_AT_soldier_guerilla_forklift_new: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerrilla Fatigues (Forklift Driver)";
		author = "JOBBIN";
		vehicleClass = ItemsUniforms;
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class AT_soldier_guerilla_fatigues_forklift
			{
				name = AT_soldier_guerilla_fatigues_forklift;
				count = 1;
			};
		};
	};
	
	//GUERILLA FATIGUES (MORNING WOOD) UNIT
	class AT_soldier_guerilla_fatigues_morningwood: AT_soldier_guerrilla_base
	{				
		displayName = "Guerrilla (Morning Wood)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatigues_morningwood.paa"};
		uniformClass = "AT_uniform_guerilla_fatigues_morningwood"; // This links this soldier to a particular uniform.
	};
	
	//GUERILLA FATIGUES (MORNING WOOD) GROUND HOLDER
	class Item_U_AT_soldier_guerilla_morningwood_new: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Guerrilla Fatigues (Morning Wood)";
		author = "JOBBIN";
		vehicleClass = ItemsUniforms;
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class AT_soldier_guerilla_fatigues_morningwood
			{
				name = AT_soldier_guerilla_fatigues_morningwood;
				count = 1;
			};
		};
	};
};

// UNIFORM CONFIG
class cfgWeapons
{
	class UniformItem;
    class Uniform_Base;
	
	//FISHING SHIRT UNIFORM
	class AT_uniform_fisherman: Uniform_Base
	{
		author = "JOBBIN";
		scope = 2;
		displayName = "Fishing Shirt";
		picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_redwhite_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = AT_soldier_fisherman;
			containerClass = Supply40;
			mass = 40;
		};
	};
	
	//T-SHIRT/FATIGUES BASE CLASS 
	class TShirt_Base: Uniform_Base
	{
		author = "JOBBIN";
		scope = 0;
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
	};
	
	//GUERRILLA FATIGUES BASE CLASS
	class Fatigues_Base: Uniform_Base
	{
		author = "JOBBIN";
		scope = 0;
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
		hiddenSelections[] = {"Camo", "insignia"};
	};
	
	//GAMER SHIRT UNIFORM
	class AT_uniform_gamer: TShirt_Base
	{
	    scope = 2;
		displayName = "Gamer Shirt";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = AT_soldier_gamer;
			containerClass = Supply40;
			mass = 40;
		};
	};

	//GUERILLA FATIGUES (ERDL) UNIFORM
	class AT_uniform_guerilla_fatigues_erdl: Fatigues_Base
	{
		scope = 2;
		displayName = "Guerrilla Fatigues (ERDL)"
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = AT_soldier_guerilla_fatigues_erdl;
			containerClass = Supply40;
			mass = 40;
		};
	};
	
	//GUERILLA FATIGUES (FORKLIFT DRIVER) UNIFORM
	class AT_uniform_guerilla_fatigues_forklift: Fatigues_Base
	{
		scope = 2;
		displayName = "Guerrilla Fatigues (Forklift Driver)"
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = AT_soldier_guerilla_fatigues_forklift;
			containerClass = Supply40;
			mass = 40;
		};
	};
	
	//GUERILLA FATIGUES (MORNING WOOD) UNIFORM
	class AT_uniform_guerilla_fatigues_morningwood: Fatigues_Base
	{
		scope = 2;
		displayName = "Guerrilla Fatigues (Morning Wood)"
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = AT_soldier_guerilla_fatigues_morningwood;
			containerClass = Supply40;
			mass = 40;
		};
	};
	
	class ItemCore;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	
	//VEST TEMPLATE/BASE CLASS
	class V_press_vest_base : Vest_Camo_Base
	{
		author = "JOBBIN";
		scope = 0;
		displayName = "Vest Template";
		picture = "\apptac_uniforms\UI\icon_vest_blank.paa";
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01.p3d";			
			containerClass = Supply140;		
			mass = 80;
			
			class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Neck
				{
					hitpointName	= "HitNeck";
					armor			= 8;
					passThrough		= 0.5;
				};
				class Chest
				{
					hitPointName = "HitChest";
					armor = 20;
					passThrough = 0.2;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 20;
					passThrough		= 0.2;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 20;
					passThrough		= 0.2;
				};
				class Pelvis
				{
					hitpointName	= "HitPelvis";
					armor			= 16;
					passThrough		= 0.3;
				};
				
			};
		};
	};
	
	class V_vest_cuck: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (C U C K)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_cuck.paa"};
	};
	
	//VIPER VEST
	class V_vest_viper: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (Viper)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_viper.paa"};
	};
	
	//WOODLAND VEST
	class V_vest_erdl: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (ERDL)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_erdl.paa"};
	};
	
	//APPTAC VEST
	class V_vest_apptac: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (AppTac)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_apptac_erdl.paa"};
	};
	
	//APPTAC VEST (urban)
	class V_vest_apptac_urban: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (AppTac - Urban)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_apptac_urban.paa"};
	};
	
	//GIANT COCKMAN VEST (for u steven)
	class V_vest_apptac_m81_giantcockman: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (AppTac - Giant Cockman)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_apptac_erdl_giantcockman.paa"};
	};
	
	//GAMER VEST
	class V_vest_gamer: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (Gamer)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_gamer.paa"};
	};

	//FORKLIFT VEST
	class V_vest_forklift: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (Certified Forklift Operator)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_forklift.paa"};
	};
	
	//FISHERMAN VEST
	class V_vest_fisherman: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (Fisherman)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_fisherman.paa"};
	};
	
	//AHEGAO VEST (olive)
	class V_vest_ahegao_olive: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (Ahegao - Olive)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_ahegao_olive.paa"};
	};
	
	//AHEGAO VEST (urban)
	class V_vest_ahegao_urban: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (Ahegao - Urban)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_ahegao_mono.paa"};
	};
	
	//FLORAL VEST
	class V_vest_grandma_couch: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (Grandma's Couch)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_floral2.paa"};
	};

	//MORNING WOOD VEST
	class V_vest_morningwood: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (Morning Wood)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_morningwood.paa"};
	};
	
	//SOLO CUP VEST
	class V_vest_solo: V_press_vest_base
	{
		scope = 2;
		displayName = "Vest (Solo Cup)";
		hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_solo.paa"};
	};
};