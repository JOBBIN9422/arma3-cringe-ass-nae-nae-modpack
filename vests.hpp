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

//CARRIER RIG BASE CLASS 
class V_carrier_rig_base : Vest_Camo_Base
{
	author = "JOBBIN";
	scope = 0;
	displayName = "Carrier Rig Template";
	picture = "\A3\Characters_F\data\ui\icon_v_plate_carrier_2_ca.paa";
	model = "\A3\Characters_F\blufor\equip_b_vest02.p3d";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3\Characters_F\blufor\equip_b_vest02.p3d";		
		containerClass = Supply140;		
		mass = 80;
		
		class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		{
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
		};
	};
};

//ERDL carrier rig
class V_carrier_rig_erdl: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (ERDL)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_erdl.paa"};
};

//Ahegao carrier rig
class V_carrier_rig_ahegao: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Ahegao)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_ahegao.paa"};
};

//Solo cup carrier rig
class V_carrier_rig_solo: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Solo Cup)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_solo.paa"};
};

//Butan 1 carrier rig
class V_carrier_butan_1: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Butan 1)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_butan_1.paa"};
};

//Butan 2 carrier rig
class V_carrier_butan_2: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Butan 2)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_butan_2.paa"};
};

//Latvian TTsKO carrier rig
class V_carrier_ttsko_latvia: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Latvian TTsKO)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_ttsko_latvia.paa"};
};

//Rust carrier rig
class V_carrier_rust: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Digital Rust)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_rust.paa"};
};

//Money carrier rig
class V_carrier_money: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Money)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_money.paa"};
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
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_viper_2.paa"};
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

//APPTAC VEST (urban 2)
class V_vest_apptac_urban2: V_press_vest_base
{
	scope = 2;
	displayName = "Vest (AppTac - Urban ERDL)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_apptac_urban2.paa"};
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
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_ahegao_olive2.paa"};
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

//BUTAN 1 VEST
class V_vest_butan_1: V_press_vest_base
{
	scope = 2;
	displayName = "Vest (Butan 1)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_butan_1.paa"};
};

//BUTAN 2 VEST
class V_vest_butan_2: V_press_vest_base
{
	scope = 2;
	displayName = "Vest (Butan 2)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_butan_2.paa"};
};

//LATVIAN TTSKO VEST
class V_vest_ttsko_latvia: V_press_vest_base
{
	scope = 2;
	displayName = "Vest (Latvian TTsKO)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_ttsko_latvia.paa"};
};

//MONEY VEST
class V_vest_money: V_press_vest_base
{
	scope = 2;
	displayName = "Vest (Money)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_money.paa"};
};

//DOGE VEST
class V_vest_doge: V_press_vest_base
{
	scope = 2;
	displayName = "Vest (DogeCam)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\vest_doge.paa"};
};