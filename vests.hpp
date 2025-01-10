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
				armor = 16;
				passThrough = 0.3;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 16;
				passThrough		= 0.3;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 16;
				passThrough		= 0.3;
			};
		};
	};
};

//TACTICAL VEST BASE CLASS 
class V_tac_vest_base : Vest_Camo_Base
{
	author = "JOBBIN";
	scope = 0;
	displayName = "Tactical Vest Template";
	picture = "\A3\Characters_F\data\ui\icon_V_TacVest_oli_CA.paa";
	model = "\A3\Characters_F\common\equip_tacticalvest.p3d";
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3\Characters_F\common\equip_tacticalvest.p3d";	
		containerClass = Supply100;		
		mass = 50;
		
		class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
		{
			class Chest
			{
				hitPointName = "HitChest";
				armor = 12;
				passThrough = 0.4;
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor			= 12;
				passThrough		= 0.4;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen";
				armor			= 12;
				passThrough		= 0.4;
			};
		};
	};
};

//ERDL carrier rig
class V_carrier_rig_m81: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (M81)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_m81.paa"};
};

//UCP carrier rig
class V_carrier_rig_ucp: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (UCP)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_ucp.paa"};
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

//UCP-D apptac carrier rig
class V_carrier_ucpd_apptac_logo: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (UCP-D)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_ucpd_apptac_logo.paa"};
};

//MM14 carrier rig
class V_carrier_mm14: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (MM14)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_mm14.paa"};
};

//M81 lean carrier rig
class V_carrier_m81_lean: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (M81-L)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_m81_lean.paa"};
};

//Versace carrier rig
class V_carrier_versace: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Versace)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_versace.paa"};
};

//RealTree carrier rig
class V_carrier_realtree: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Realtree)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_realtree.paa"};
};

//Flachentarn 1 carrier rig
class V_carrier_flachentarn_1: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Flachentarn 1)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_flachentarn_1.paa"};
};

//Alpenflage carrier rig
class V_carrier_alpenflage: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Alpenflage)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_alpenflage.paa"};
};

//LDF Woodland carrier rig
class V_carrier_ldf: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (LDF Woodland)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_ldf.paa"};
};

//Multicam carrier rig
class V_carrier_multicam: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Multicam)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_multicam.paa"};
};

//Supreme carrier rig
class V_carrier_supreme: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Supreme)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_supreme.paa"};
};

//Chocolate chip carrier rig
class V_carrier_chocolate_chip: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Chocolate Chip)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_chocolate_chip.paa"};
};

//DNC carrier rig
class V_carrier_dnc: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Desert Night Camo)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_dnc.paa"};
};

//3 Color Desert carrier rig
class V_carrier_3_color_desert: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (3 Color Desert)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_3_color_desert.paa"};
};

//leopard carrier rig
class V_carrier_leopard: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (MGS3 Leopard)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_leopard.paa"};
};

//flannel carrier rig
class V_carrier_flannel: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Flannel)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_flannel.paa"};
};

//denim carrier rig
class V_carrier_denim: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Denim)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_denim.paa"};
};

//tiger stripe carrier rig
class V_carrier_tiger_stripe: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Tiger Stripe)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_tiger_stripe.paa"};
};

//a-tacs carrier rig
class V_carrier_atacs: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (A-TACS)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_atacs.paa"};
};

//flecktarn carrier rig
class V_carrier_flecktarn: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Flecktarn)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_flecktarn.paa"};
};

//diamond dogs carrier rig
class V_carrier_diamond_dogs: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (Diamond Dogs)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_diamond_dogs.paa"};
};

//CBP carrier rig
class V_carrier_cbp: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (CBP)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_cbp.paa"};
};

//AMO carrier rig
class V_carrier_AMO: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (AMO)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_amo.paa"};
};

//FBI carrier rig
class V_carrier_fbi: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (FBI)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_fbi.paa"};
};

//ATF carrier rig
class V_carrier_atf: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (ATF)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_atf.paa"};
};

//SWAT carrier rig
class V_carrier_swat: V_carrier_rig_base
{
	scope = 2;
	displayName = "Carrier Rig (SWAT)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\carrier_swat.paa"};
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

//REALTREE TAC VEST
class V_tac_vest_realtree: V_tac_vest_base
{
	scope = 2;
	displayName = "Tactical Vest (RealTree)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\tacticalvest_realtree.paa"};
};

//BOTTOMLAND TAC VEST
class V_tac_vest_bottomland: V_tac_vest_base
{
	scope = 2;
	displayName = "Tactical Vest (Bottomland)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\tacticalvest_bottomland.paa"};
};

//MM14 TAC VEST
class V_tac_vest_mm14: V_tac_vest_base
{
	scope = 2;
	displayName = "Tactical Vest (MM14)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\tacticalvest_mm14.paa"};
};

//LDF TAC VEST
class V_tac_vest_ldf: V_tac_vest_base
{
	scope = 2;
	displayName = "Tactical Vest (LDF Woodland)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\tacticalvest_ldf.paa"};
};

//ALPENFLAGE TAC VEST
class V_tac_vest_alpenflage: V_tac_vest_base
{
	scope = 2;
	displayName = "Tactical Vest (Alpenflage)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\tacticalvest_alpenflage.paa"};
};

//MULTICAM TAC VEST
class V_tac_vest_multicam: V_tac_vest_base
{
	scope = 2;
	displayName = "Tactical Vest (Multicam)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\tacticalvest_multicam.paa"};
};