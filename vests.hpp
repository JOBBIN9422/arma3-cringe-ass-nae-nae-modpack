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