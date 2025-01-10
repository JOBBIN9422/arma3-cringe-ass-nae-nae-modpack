class UniformItem;
class Uniform_Base;

//T-SHIRT/FATIGUES BASE CLASS 
class TShirt_Base: Uniform_Base
{
	author = "JOBBIN";
	scope = 0;
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
};

//BLUFOR FATIGUES BASE CLASS 
class Blufor_Fatigues_Base: Uniform_Base
{
	author = "JOBBIN";
	scope = 0;
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_tshirt_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
};


//GUERRILLA FATIGUES BASE CLASS
class Fatigues_Base: Uniform_Base
{
	author = "JOBBIN";
	scope = 0;
	picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
};

//AAF OFFICER FATIGUES BASE CLASS
class AAF_Officer_Fatigues_Base: Uniform_Base
{
	author = "JOBBIN";
	scope = 0;
	picture = "\A3\characters_f\data\ui\icon_U_IR_Officer_spc_ca.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
	hiddenSelections[] = {"Camo", "insignia"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_indep_co.paa"};
};

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

//GAMER SHIRT UNIFORM
class AT_uniform_gamer: TShirt_Base
{
	scope = 2;
	displayName = "Gamer Shirt";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_gamer;
		containerClass = Supply40;
		mass = 40;
	};
};

//BOOMER SHIRT UNIFORM
class AT_uniform_boomer: TShirt_Base
{
	scope = 2;
	displayName = "Boomer Shirt";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_boomer;
		containerClass = Supply40;
		mass = 40;
	};
};

//"STOMP MY FLAG" SHIRT UNIFORM
class AT_uniform_patriot: TShirt_Base
{
	scope = 2;
	displayName = "Patriot Shirt";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_patriot;
		containerClass = Supply40;
		mass = 40;
	};
};

//APPTAC SHIRT UNIFORM
class AT_uniform_apptac_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Apptac Shirt";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_apptac_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (ERDL) UNIFORM
class AT_uniform_guerilla_fatigues_erdl: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (M81)"
		
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
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_morningwood;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (LDF WOODLAND) UNIFORM
class AT_uniform_guerilla_fatigues_ldf: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (LDF Woodland)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_ldf;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (BUTAN 1) UNIFORM
class AT_uniform_guerilla_fatigues_butan_1: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Butan 1)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_butan_1;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (BUTAN 2) UNIFORM
class AT_uniform_guerilla_fatigues_butan_2: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Butan 2)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_butan_2;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (MONEY) UNIFORM
class AT_uniform_guerilla_fatigues_money: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Money)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_money;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (MULTICAM) UNIFORM
class AT_uniform_guerilla_fatigues_multicam: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Multicam)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_multicam;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (DRIP) UNIFORM
class AT_uniform_guerilla_fatigues_drip: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Drip Monochrome)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_drip;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (DRIP 2) UNIFORM
class AT_uniform_guerilla_fatigues_drip_2: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Drip)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_drip_2;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (MGS3 LEOPARD) UNIFORM
class AT_uniform_guerilla_fatigues_leopard: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (MGS3 Leopard)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_leopard;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (REALTREE) UNIFORM
class AT_uniform_guerilla_fatigues_realtree: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Realtree)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_realtree;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (REALTREE/FISHING SHIRT) UNIFORM
class AT_uniform_guerilla_fatigues_realtree_fishing_top: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Realtree/Fishing Shirt)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_realtree_fishing_top;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (FLACHENTARN 1) UNIFORM
class AT_uniform_guerilla_fatigues_flachentarn_1: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Flachentarn 1)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_flachentarn_1;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (ALPENFLAGE) UNIFORM
class AT_uniform_guerilla_fatigues_alpenflage: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Alpenflage)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_alpenflage;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (MW19 ZEBRA) UNIFORM
class AT_uniform_guerilla_fatigues_mw19zebra: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (MW19 Zebra Blue/Pink)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_mw19zebra;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (MW19 PINK TOPO) UNIFORM
class AT_uniform_guerilla_fatigues_mw19pinktopo: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (MW19 Pink Topographic)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_mw19pinktopo;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (MW19 ZEBRA CLASSIC) UNIFORM
class AT_uniform_guerilla_fatigues_mw19zebraclassic: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (MW19 Zebra Classic)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_mw19zebraclassic;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (BENIS) UNIFORM
class AT_uniform_guerilla_fatigues_benis: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Dick Camo)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_benis;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (CHOCOLATE CHIP) UNIFORM
class AT_uniform_guerilla_fatigues_chocolate_chip: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Chocolate Chip)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_chocolate_chip;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (DNC) UNIFORM
class AT_uniform_guerilla_fatigues_dnc: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Desert Night Camo)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_dnc;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (UCP) UNIFORM
class AT_uniform_guerilla_fatigues_ucp: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (UCP)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_ucp;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (UCP-D) UNIFORM
class AT_uniform_guerilla_fatigues_ucpd: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (UCP-D)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_ucpd;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (3 COLOR DESERT) UNIFORM
class AT_uniform_guerilla_fatigues_3_color_desert: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (3 Color Desert)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_3_color_desert;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (SOLO CUP) UNIFORM
class AT_uniform_guerilla_fatigues_solo_cup: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Solo Cup)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_solo_cup;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (FLANNEL) UNIFORM
class AT_uniform_guerilla_fatigues_flannel: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Flannel/Denim)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_flannel;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (ZOIDBERG) UNIFORM
class AT_uniform_guerilla_fatigues_zoidberg: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Zoidberg)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_zoidberg;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (DIAMOND DOGS) UNIFORM
class AT_uniform_guerilla_fatigues_diamond_dogs: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Diamond Dogs)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_diamond_dogs;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (TIGER STRIPE) UNIFORM
class AT_uniform_guerilla_fatigues_tiger_stripe: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Tiger Stripe)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_tiger_stripe;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (A-TACS) UNIFORM
class AT_uniform_guerilla_fatigues_atacs: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (A-TACS)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_atacs;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (FLECKTARN) UNIFORM
class AT_uniform_guerilla_fatigues_flecktarn: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Flecktarn)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_flecktarn;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (JONAH) UNIFORM
class AT_uniform_guerilla_fatigues_jonah: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Jonah)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_jonah;
		containerClass = Supply40;
		mass = 40;
	};
};

//GUERILLA FATIGUES (GREEN PLAID) UNIFORM
class AT_uniform_guerilla_fatigues_green_plaid: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (Green Plaid)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_green_plaid;
		containerClass = Supply40;
		mass = 40;
	};
};

/*
//GUERILLA FATIGUES (MGS3 ERDL) UNIFORM
class AT_uniform_guerilla_fatigues_mgs3_erdl: Fatigues_Base
{
	scope = 2;
	displayName = "Guerrilla Fatigues (MGS3 ERDL)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_guerilla_fatigues_mgs3_erdl;
		containerClass = Supply40;
		mass = 40;
	};
};
*/

//AAF OFFICER FATIGUES (MGS3 LEOPARD) UNIFORM
class AT_uniform_aaf_officer_fatigues_leopard: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (MGS3 Leopard)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_leopard;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (M81 JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_m81_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (M81/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_m81_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (M81 FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_m81_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (M81)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_m81_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (MULTICAM JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_multicam_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Multicam/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_multicam_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (MULTICAM FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_multicam_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Multicam)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_multicam_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (REALTREE JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_realtree_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (RealTree/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_realtree_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (REALTREE FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_realtree_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (RealTree)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_realtree_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (FLACHENTARN 1 JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_flachentarn_1_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Flachentarn 1/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_flachentarn_1_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (FLACHENTARN 1 FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_flachentarn_1_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Flachentarn 1)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_flachentarn_1_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (ALPENFLAGE JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_alpenflage_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Alpenflage/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_alpenflage_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (ALPENFLAGE FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_alpenflage_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Alpenflage)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_alpenflage_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (MW19 ZEBRA BLUE/PINK JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_mw19zebrabluepink_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (MW19 Zebra Blue/Pink/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_mw19zebrabluepink_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (MW19 ZEBRA BLUE/PINK FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_mw19zebrabluepink_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (MW19 Zebra Blue/Pink)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_mw19zebrabluepink_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (MW19 ZEBRA CLASSIC JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_mw19zebraclassic_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (MW19 Zebra Classic/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_mw19zebraclassic_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (MW19 ZEBRA CLASSIC FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_mw19zebraclassic_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (MW19 Zebra Classic)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_mw19zebraclassic_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (MW19 PINK TOPO JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_mw19pinktopo_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (MW19 Pink Topographic/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_mw19pinktopo_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (MW19 PINK TOPO FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_mw19pinktopo_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (MW19 Pink Topographic)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_mw19pinktopo_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (CHOCOLATE CHIP JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_chocolate_chip_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Chocolate Chip/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_chocolate_chip_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (CHOCOLATE CHIP FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_chocolate_chip_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Chocolate Chip)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_chocolate_chip_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (DNC JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_dnc_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Desert Night Camo/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_dnc_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (DNC FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_dnc_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Desert Night Camo)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_dnc_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (UCP JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_ucp_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (UCP/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_ucp_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (UCP FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_ucp_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (UCP)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_ucp_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (UCP-D JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_ucpd_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (UCP-D/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_ucpd_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (UCP-D FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_ucpd_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (UCP-D)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_ucpd_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (3 COLOR DESERT JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_3_color_desert_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (3 Color Desert/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_3_color_desert_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (3 COLOR DESERT FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_3_color_desert_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (3 Color Desert)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_3_color_desert_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (SOLO CUP JACKET) UNIFORM
class AT_uniform_aaf_officer_fatigues_solo_cup_jacket: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Solo Cup/Khaki)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_solo_cup_jacket;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (SOLO CUP FULL) UNIFORM
class AT_uniform_aaf_officer_fatigues_solo_cup_full: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (Solo Cup)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_solo_cup_full;
		containerClass = Supply40;
		mass = 40;
	};
};

//AAF OFFICER FATIGUES (MONOFOX) UNIFORM
class AT_uniform_aaf_officer_fatigues_monofox: AAF_Officer_Fatigues_Base
{
	scope = 2;
	displayName = "Fatigues Cuffed (MonoFox)"
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_aaf_officer_fatigues_monofox;
		containerClass = Supply40;
		mass = 40;
	};
};


//BLUFOR FATIGUES M81
class AT_uniform_clothing1_m81: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (M81)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_m81;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES M81 CUFFED SLEEVES
class AT_uniform_clothing1_m81_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (M81/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_m81_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES M81 T-SHIRT
class AT_uniform_clothing1_m81_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (M81 Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_m81_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES MULTICAM
class AT_uniform_clothing1_multicam: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Multicam)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_multicam;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES MULTICAM CUFFED
class AT_uniform_clothing1_multicam_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Multicam/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_multicam_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES MULTICAM T-SHIRT
class AT_uniform_clothing1_multicam_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Multicam Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_multicam_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES FLECKTARN
class AT_uniform_clothing1_flecktarn: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Flecktarn)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_flecktarn;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES FLECKTARN CUFFED
class AT_uniform_clothing1_flecktarn_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Flecktarn/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_flecktarn_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES FLECKTARN T-SHIRT
class AT_uniform_clothing1_flecktarn_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Flecktarn Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_flecktarn_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES REALTREE
class AT_uniform_clothing1_realtree: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (RealTree)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_realtree;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES REALTREE CUFFED
class AT_uniform_clothing1_realtree_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (RealTree/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_realtree_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES REALTREE T-SHIRT
class AT_uniform_clothing1_realtree_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (RealTree Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_realtree_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES REALTREE T-SHIRT (AUBIN THE ELDER)
class AT_uniform_clothing1_realtree_shirt_aubin: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Aubin the Elder)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_realtree_shirt_aubin;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES DIAMOND DOGS
class AT_uniform_clothing1_diamond_dogs: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Diamond Dogs)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_diamond_dogs;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES DIAMOND DOGS CUFFED
class AT_uniform_clothing1_diamond_dogs_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Diamond Dogs/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_diamond_dogs_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES DIAMOND DOGS T-SHIRT
class AT_uniform_clothing1_diamond_dogs_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Diamond Dogs Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_diamond_dogs_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES FLANNEL/TAN
class AT_uniform_clothing1_flannel: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Flannel/Tan Pants)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_flannel;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES FLANNEL/TAN CUFFED
class AT_uniform_clothing1_flannel_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Flannel/Cuffed Sleeves/Tan Pants)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_flannel_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES FLANNEL T-SHIRT
class AT_uniform_clothing1_flannel_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Flannel Undershirt/Tan Pants)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_flannel_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES 3 COLOR DESERT
class AT_uniform_clothing1_3_color_desert: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (3 Color Desert)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_3_color_desert;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES 3 COLOR DESERT CUFFED
class AT_uniform_clothing1_3_color_desert_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (3 Color Desert/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_3_color_desert_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES 3 COLOR DESERT T-SHIRT
class AT_uniform_clothing1_3_color_desert_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (3 Color Desert Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_3_color_desert_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES CHOCOLATE CHIP
class AT_uniform_clothing1_chocolate_chip: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Chocolate Chip)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_chocolate_chip;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES CHOCOLATE CHIP CUFFED
class AT_uniform_clothing1_chocolate_chip_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Chocolate Chip/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_chocolate_chip_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES CHOCOLATE CHIP T-SHIRT
class AT_uniform_clothing1_chocolate_chip_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Chocolate Chip Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_chocolate_chip_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES UCP
class AT_uniform_clothing1_ucp: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (UCP)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_ucp;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES UCP CUFFED
class AT_uniform_clothing1_ucp_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (UCP/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_ucp_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES UCP T-SHIRT
class AT_uniform_clothing1_ucp_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (UCP Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_ucp_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES UCP-D
class AT_uniform_clothing1_ucpd: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (UCP-D)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_ucpd;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES UCP-D CUFFED
class AT_uniform_clothing1_ucpd_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (UCP-D/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_ucpd_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES UCP-D T-SHIRT
class AT_uniform_clothing1_ucpd_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (UCP-D Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_ucpd_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES GREEN PLAID
class AT_uniform_clothing1_green_plaid: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Green Plaid)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_green_plaid;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES GREEN PLAID CUFFED
class AT_uniform_clothing1_green_plaid_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Green Plaid/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_green_plaid_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES GREEN PLAID T-SHIRT
class AT_uniform_clothing1_green_plaid_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Green Plaid Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_green_plaid_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES AOR2
class AT_uniform_clothing1_aor2: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (AOR2)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_aor2;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES AOR2 CUFFED
class AT_uniform_clothing1_aor2_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (AOR2/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_aor2_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES AOR2 T-SHIRT
class AT_uniform_clothing1_aor2_shirt: TShirt_Base
{
	scope = 2;
	displayName = "Combat Fatigues (AOR2 Undershirt)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_aor2_shirt;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES STEVEN
class AT_uniform_clothing1_steven: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (StevenAlex)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_steven;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES STEVEN CUFFED
class AT_uniform_clothing1_steven_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (StevenAlex/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_steven_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES CBP AMO
class AT_uniform_clothing1_cbp_amo: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (CBP AMO)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_cbp_amo;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES CBP AMO CUFFED SLEEVES
class AT_uniform_clothing1_cbp_amo_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (CBP AMO/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_cbp_amo_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES CBP
class AT_uniform_clothing1_cbp: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (CBP)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_cbp;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES CBP CUFFED SLEEVES
class AT_uniform_clothing1_cbp_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (CBP/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_cbp_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES OD GREEN
class AT_uniform_clothing1_od_green: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (OD Green)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_od_green;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES OD GREEN CUFFED SLEEVES
class AT_uniform_clothing1_od_green_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (OD Green/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_od_green_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES TIGER STRIPES
class AT_uniform_clothing1_tiger_stripes: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Tiger Stripes)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_tiger_stripes;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES TIGER STRIPES CUFFED SLEEVES
class AT_uniform_clothing1_tiger_stripes_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (Tiger Stripes/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_tiger_stripes_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES FBI
class AT_uniform_clothing1_fbi: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (FBI SWAT)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_fbi;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES FBI CUFFED SLEEVES
class AT_uniform_clothing1_fbi_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (FBI SWAT/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_fbi_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES ATF
class AT_uniform_clothing1_atf: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (ATF SWAT)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_atf;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES FBI CUFFED SLEEVES
class AT_uniform_clothing1_atf_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (ATF SWAT/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_atf_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES SWAT
class AT_uniform_clothing1_swat: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (SWAT)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_swat;
		containerClass = Supply40;
		mass = 40;
	};
};

//BLUFOR FATIGUES SWAT CUFFED SLEEVES
class AT_uniform_clothing1_swat_cuffed_sleeves: Blufor_Fatigues_Base
{
	scope = 2;
	displayName = "Combat Fatigues (SWAT/Cuffed Sleeves)";
		
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = AT_soldier_clothing1_swat_cuffed_sleeves;
		containerClass = Supply40;
		mass = 40;
	};
};