//TEXTURE REFERENCES
//Guerilla Apparel - "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa" (pants are shared with guerilla officer outfit)

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

//MULTICAM PANTS/T-SHIRT BASE CLASS
class AT_soldier_mcam_tshirt_base: B_Soldier_base_F
{
	author = "JOBBIN";
	scope = 1;							
	scopeCurator = 0;					
	scopeArsenal = 0;					
	model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
	hiddenSelections[] = {"Camo", "Camo2", "insignia"};
};

//BLUFOR FATIGUES BASE CLASS
class AT_soldier_blufor_fatigues_base: B_Soldier_base_F
{
	author = "JOBBIN";
	scope = 1;							
	scopeCurator = 0;					
	scopeArsenal = 0;					
	model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
	hiddenSelections[] = {"Camo", "insignia"};
};

//BLUFOR FATIGUES CUFFED BASE CLASS
class AT_soldier_blufor_fatigues_cuffed_sleeves_base: B_Soldier_base_F
{
	author = "JOBBIN";
	scope = 1;							
	scopeCurator = 0;					
	scopeArsenal = 0;					
	model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
	hiddenSelections[] = {"Camo", "insignia"};
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

//AAF OFFICER FATIGUES BASE CLASS
class AT_soldier_aaf_officer_fatigues: B_Soldier_base_F
{
	author = "JOBBIN";
	scope = 1;							
	scopeCurator = 0;					
	scopeArsenal = 0;					
	model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
	hiddenSelections[] = {"Camo1", "Camo2"};
};

//GAMER SHIRT UNIT
class AT_soldier_gamer: AT_soldier_mcam_tshirt_base
{					
	displayName = "Gamer";
	hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing1_co.paa", "\apptac_uniforms\textures\gamer_shirt.paa"};
	uniformClass = "AT_uniform_gamer"; // This links this soldier to a particular uniform.
};

//APPTAC SHIRT UNIT
class AT_soldier_apptac_shirt: AT_soldier_mcam_tshirt_base
{
	displayName = "AppTac Member";
	hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing1_co.paa", "\apptac_uniforms\textures\apptac_shirt.paa"};
	uniformClass = "AT_uniform_apptac_shirt";
};

//GUERILLA FATIGUES (ERDL) UNIT
class AT_soldier_guerilla_fatigues_erdl: AT_soldier_guerrilla_base
{				
	displayName = "Guerilla (M81)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_m81.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_erdl"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (FORKLIFT DRIVER) UNIT
class AT_soldier_guerilla_fatigues_forklift: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Forklift Driver)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatigues_forklift.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_forklift"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (MORNING WOOD) UNIT
class AT_soldier_guerilla_fatigues_morningwood: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Morning Wood)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatigues_morningwood.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_morningwood"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (LDF WOODLAND) UNIT
class AT_soldier_guerilla_fatigues_ldf: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (LDF Woodland)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_ldf.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_ldf"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (BUTAN 1) UNIT
class AT_soldier_guerilla_fatigues_butan_1: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Butan 1)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_butan_1.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_butan_1"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (BUTAN 2) UNIT
class AT_soldier_guerilla_fatigues_butan_2: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Butan 2)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_butan_2.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_butan_2"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (MONEY) UNIT
class AT_soldier_guerilla_fatigues_money: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Money)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_money.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_money"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (MULTICAM) UNIT
class AT_soldier_guerilla_fatigues_multicam: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Multicam)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_multicam.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_multicam"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (DRIP) UNIT
class AT_soldier_guerilla_fatigues_drip: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Drip)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_drip.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_drip"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (DRIP 2) UNIT
class AT_soldier_guerilla_fatigues_drip_2: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Drip)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_drip_2.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_drip_2"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (MGS3 LEOPARD) UNIT
class AT_soldier_guerilla_fatigues_leopard: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (MGS3 Leopard)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_leopard.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_leopard"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (REALTREE) UNIT
class AT_soldier_guerilla_fatigues_realtree: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Realtree)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_realtree.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_realtree"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (REALTREE/FISHING SHIRT) UNIT
class AT_soldier_guerilla_fatigues_realtree_fishing_top: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Realtree/Fishing Shirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_realtree_fishing_top.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_realtree_fishing_top"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (FLACHENTARN 1) UNIT
class AT_soldier_guerilla_fatigues_flachentarn_1: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Flachentarn 1)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_flachentarn_1.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_flachentarn_1"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (ALPENFLAGE) UNIT
class AT_soldier_guerilla_fatigues_alpenflage: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Alpenflage)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_alpenflage.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_alpenflage"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (MW19 ZEBRA BLUE/PINK) UNIT
class AT_soldier_guerilla_fatigues_mw19zebra: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (MW19 Zebra Blue/Pink)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_mw19zebra_bluepink.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_mw19zebra"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (MW19 PINK TOPO) UNIT
class AT_soldier_guerilla_fatigues_mw19pinktopo: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (MW19 Pink Topographic)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_PinkTopo.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_mw19pinktopo"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (MW19 ZEBRA CLASSIC) UNIT
class AT_soldier_guerilla_fatigues_mw19zebraclassic: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (MW19 Zebra Classic)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_ZebraClassic.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_mw19zebraclassic"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (BENIS) UNIT
class AT_soldier_guerilla_fatigues_benis: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Dick Camo)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_benis.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_benis"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (CHOCOLATE_CHIP) UNIT
class AT_soldier_guerilla_fatigues_chocolate_chip: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Chocolate Chip)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_chocolate_chip.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_chocolate_chip"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (DNC) UNIT
class AT_soldier_guerilla_fatigues_dnc: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Desert Night Camo)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_dnc.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_dnc"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (UCP) UNIT
class AT_soldier_guerilla_fatigues_ucp: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (UCP)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_ucp.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_ucp"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (UCP-D) UNIT
class AT_soldier_guerilla_fatigues_ucpd: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (UCP-D)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_ucpd.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_ucpd"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (3 COLOR DESERT) UNIT
class AT_soldier_guerilla_fatigues_3_color_desert: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (3 Color Desert)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_3_color_desert.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_3_color_desert"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (SOLO CUP) UNIT
class AT_soldier_guerilla_fatigues_solo_cup: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Solo Cup)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_solo_cup.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_solo_cup"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (FLANNEL) UNIT
class AT_soldier_guerilla_fatigues_flannel: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Flannel/Denim)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_flannel.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_flannel"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (ZOIDBERG) UNIT
class AT_soldier_guerilla_fatigues_zoidberg: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Zoidberg)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_zoidberg.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_zoidberg"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (DIAMOND DOGS) UNIT
class AT_soldier_guerilla_fatigues_diamond_dogs: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Diamond Dogs)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_diamond_dogs.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_diamond_dogs"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (TIGER STRIPE) UNIT
class AT_soldier_guerilla_fatigues_tiger_stripe: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Tiger Stripe)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_tiger_stripe.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_tiger_stripe"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (A-TACS) UNIT
class AT_soldier_guerilla_fatigues_atacs: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (A-TACS)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_atacs.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_atacs"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (FLECKTARN) UNIT
class AT_soldier_guerilla_fatigues_flecktarn: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Flecktarn)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_flecktarn.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_flecktarn"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (JONAH) UNIT
class AT_soldier_guerilla_fatigues_jonah: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Jonah)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_jonah.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_jonah"; // This links this soldier to a particular uniform.
};

//GUERILLA FATIGUES (GREEN PLAID) UNIT
class AT_soldier_guerilla_fatigues_green_plaid: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (Green Plaid)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_green_plaid.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_green_plaid"; // This links this soldier to a particular uniform.
};

/*
//GUERILLA FATIGUES (MGS3 ERDL) UNIT
class AT_soldier_guerilla_fatigues_mgs3_erdl: AT_soldier_guerrilla_base
{				
	displayName = "Guerrilla (MGS3 ERDL)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_mgs3_erdl.paa"};
	uniformClass = "AT_uniform_guerilla_fatigues_mgs3_erdl"; // This links this soldier to a particular uniform.
};
*/

//BOOMER SHIRT UNIT
class AT_soldier_boomer: AT_soldier_mcam_tshirt_base
{					
	displayName = "Boomer";
	hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing1_co.paa", "\apptac_uniforms\textures\shirt_boomer.paa"};
	uniformClass = "AT_uniform_boomer"; // This links this soldier to a particular uniform.
};

//"STOMP MY FLAG" UNIT
class AT_soldier_patriot: AT_soldier_mcam_tshirt_base
{					
	displayName = "Patriot";
	hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\clothing1_co.paa", "\apptac_uniforms\textures\shirt_stomp_flag.paa"};
	uniformClass = "AT_uniform_patriot"; // This links this soldier to a particular uniform.
};


//AAF OFFICER (MGS3 LEOPARD) UNIT
class AT_soldier_aaf_officer_fatigues_leopard: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (MGS3 Leopard)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_leopard.paa", "\apptac_uniforms\textures\guerilla_fatiges_leopard.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_leopard"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (M81 JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_m81_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (M81/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_m81.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_m81_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (M81 FULL) UNIT
class AT_soldier_aaf_officer_fatigues_m81_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (M81)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_m81.paa", "\apptac_uniforms\textures\guerilla_fatiges_m81.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_m81_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (MULTICAM JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_multicam_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Multicam/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_multicam.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_multicam_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (MULTICAM FULL) UNIT
class AT_soldier_aaf_officer_fatigues_multicam_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Multicam)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_multicam.paa", "\apptac_uniforms\textures\guerilla_fatiges_multicam.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_multicam_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (REALTREE JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_realtree_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (RealTree/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_realtree.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_realtree_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (REALTREE FULL) UNIT
class AT_soldier_aaf_officer_fatigues_realtree_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (RealTree)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_realtree.paa", "\apptac_uniforms\textures\guerilla_fatiges_realtree.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_realtree_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (FLACHENTARN 1 JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_flachentarn_1_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Flachentarn 1/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_flachentarn_1.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_flachentarn_1_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (FLACHENTARN 1 FULL) UNIT
class AT_soldier_aaf_officer_fatigues_flachentarn_1_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Flachentarn 1)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_flachentarn_1.paa", "\apptac_uniforms\textures\guerilla_fatiges_flachentarn_1.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_flachentarn_1_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (ALPENFLAGE JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_alpenflage_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Alpenflage/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_alpenflage.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_alpenflage_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (ALPENFLAGE FULL) UNIT
class AT_soldier_aaf_officer_fatigues_alpenflage_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Alpenflage)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_alpenflage.paa", "\apptac_uniforms\textures\guerilla_fatiges_alpenflage.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_alpenflage_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (MW19 ZEBRA BLUE/PINK JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_mw19zebrabluepink_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (MW19 Zebra Blue/Pink/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\officer_spc_co_ZebraBluePink.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_mw19zebrabluepink_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (MW19 ZEBRA BLUE/PINK FULL) UNIT
class AT_soldier_aaf_officer_fatigues_mw19zebrabluepink_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (MW19 Zebra Blue/Pink)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\officer_spc_co_ZebraBluePink.paa", "\apptac_uniforms\textures\guerilla_fatiges_mw19zebra_bluepink.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_mw19zebrabluepink_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (MW19 ZEBRA CLASSIC JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_mw19zebraclassic_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (MW19 Zebra Classic/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\officer_spc_co_ZebraClassic.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_mw19zebraclassic_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (MW19 ZEBRA CLASSIC FULL) UNIT
class AT_soldier_aaf_officer_fatigues_mw19zebraclassic_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (MW19 Zebra Classic)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\officer_spc_co_ZebraClassic.paa", "\apptac_uniforms\textures\guerilla_fatiges_ZebraClassic.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_mw19zebraclassic_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (MW19 PINK TOPO JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_mw19pinktopo_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (MW19 Pink Topographic/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\officer_spec_co_PinkTopo.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_mw19pinktopo_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (MW19 PINK TOPO FULL) UNIT
class AT_soldier_aaf_officer_fatigues_mw19pinktopo_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (MW19 Pink Topographic)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\officer_spec_co_PinkTopo.paa", "\apptac_uniforms\textures\guerilla_fatiges_PinkTopo.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_mw19pinktopo_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (CHOCOLATE CHIP JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_chocolate_chip_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Chocolate Chip/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_chocolate_chip.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_chocolate_chip_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (CHOCOLATE CHIP FULL) UNIT
class AT_soldier_aaf_officer_fatigues_chocolate_chip_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Chocolate Chip)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_chocolate_chip.paa", "\apptac_uniforms\textures\guerilla_fatiges_chocolate_chip.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_chocolate_chip_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (DNC JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_dnc_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Desert Night Camo/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_dnc.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_dnc_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (DNC FULL) UNIT
class AT_soldier_aaf_officer_fatigues_dnc_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Desert Night Camo)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_dnc.paa", "\apptac_uniforms\textures\guerilla_fatiges_dnc.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_dnc_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (UCP JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_ucp_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (UCP/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_ucp.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_ucp_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (UCP FULL) UNIT
class AT_soldier_aaf_officer_fatigues_ucp_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (UCP)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_ucp.paa", "\apptac_uniforms\textures\guerilla_fatiges_ucp.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_ucp_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (UCP-D JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_ucpd_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (UCP-D/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_ucpd.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_ucpd_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (UCP-D FULL) UNIT
class AT_soldier_aaf_officer_fatigues_ucpd_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (UCP-D)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_ucpd.paa", "\apptac_uniforms\textures\guerilla_fatiges_ucpd.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_ucpd_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (3 COLOR DESERT JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_3_color_desert_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (3 Color Desert/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_3_color_desert.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_3_color_desert_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (3 COLOR DESERT FULL) UNIT
class AT_soldier_aaf_officer_fatigues_3_color_desert_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (3 Color Desert)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_3_color_desert.paa", "\apptac_uniforms\textures\guerilla_fatiges_3_color_desert.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_3_color_desert_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (SOLO CUP JACKET) UNIT
class AT_soldier_aaf_officer_fatigues_solo_cup_jacket: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Solo Cup/Khaki)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_solo_cup.paa", "\A3\Characters_F_Bootcamp\Guerrilla\Data\ig_guerrilla_6_1_co.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_solo_cup_jacket"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (3 COLOR DESERT FULL) UNIT
class AT_soldier_aaf_officer_fatigues_solo_cup_full: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (Solo Cup)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_solo_cup.paa", "\apptac_uniforms\textures\guerilla_fatiges_solo_cup.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_solo_cup_full"; // This links this soldier to a particular uniform.
};

//AAF OFFICER (MonoFox) UNIT
class AT_soldier_aaf_officer_fatigues_monofox: AT_soldier_aaf_officer_fatigues
{					
	displayName = "Fatigues Cuffed (MonoFox)";
	//AAF officer fatigues use two separate textures for jacket and pants (pants are referenced from guerilla fatigues texture)
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\aaf_officer_fatigues_monofox.paa", "\apptac_uniforms\textures\guerilla_fatiges_flecktarn.paa"};
	uniformClass = "AT_uniform_aaf_officer_fatigues_monofox"; // This links this soldier to a particular uniform.
};


//BLUFOR FATIGUES M81 UNIT
class AT_soldier_clothing1_m81: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (M81)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_m81.paa"};
	uniformClass = "AT_uniform_clothing1_m81"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES M81 CUFFED UNIT
class AT_soldier_clothing1_m81_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (M81/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_m81.paa"};
	uniformClass = "AT_uniform_clothing1_m81_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES M81 SHIRT UNIT
class AT_soldier_clothing1_m81_shirt: AT_soldier_mcam_tshirt_base
{
	displayName = "Combat Fatigues (M81 Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_m81.paa", "\apptac_uniforms\textures\basicbody_m81.paa"};
	uniformClass = "AT_uniform_clothing1_m81_shirt";
};

//BLUFOR FATIGUES MULTICAM UNIT
class AT_soldier_clothing1_multicam: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (Multicam)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_multicam.paa"};
	uniformClass = "AT_uniform_clothing1_multicam"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES MULTICAM CUFFED UNIT
class AT_soldier_clothing1_multicam_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (Multicam/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_multicam.paa"};
	uniformClass = "AT_uniform_clothing1_multicam_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES MULTICAM SHIRT UNIT
class AT_soldier_clothing1_multicam_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (Multicam Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_multicam.paa", "\apptac_uniforms\textures\basicbody_multicam.paa"};
	uniformClass = "AT_uniform_clothing1_multicam_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FLECKTARN UNIT
class AT_soldier_clothing1_flecktarn: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (Flecktarn)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_flecktarn.paa"};
	uniformClass = "AT_uniform_clothing1_flecktarn"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FLECKTARN CUFFED UNIT
class AT_soldier_clothing1_flecktarn_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (Flecktarn/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_flecktarn.paa"};
	uniformClass = "AT_uniform_clothing1_flecktarn_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FLECKTARN SHIRT UNIT
class AT_soldier_clothing1_flecktarn_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (Flecktarn Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_flecktarn.paa", "\apptac_uniforms\textures\basicbody_flecktarn.paa"};
	uniformClass = "AT_uniform_clothing1_flecktarn_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES REALTREE UNIT
class AT_soldier_clothing1_realtree: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (RealTree)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_realtree.paa"};
	uniformClass = "AT_uniform_clothing1_realtree"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES REALTREE CUFFED UNIT
class AT_soldier_clothing1_realtree_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (RealTree/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_realtree.paa"};
	uniformClass = "AT_uniform_clothing1_realtree_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES REALTREE SHIRT UNIT
class AT_soldier_clothing1_realtree_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (RealTree Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_realtree.paa", "\apptac_uniforms\textures\basicbody_realtree.paa"};
	uniformClass = "AT_uniform_clothing1_realtree_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES SHIRT (AUBIN THE ELDER) UNIT
class AT_soldier_clothing1_realtree_shirt_aubin: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (Aubin the Elder)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_realtree.paa", "\apptac_uniforms\textures\basicbody_aubin.paa"};
	uniformClass = "AT_uniform_clothing1_realtree_shirt_aubin"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES DIAMOND DOGS UNIT
class AT_soldier_clothing1_diamond_dogs: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (Diamond Dogs)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_diamond_dogs.paa"};
	uniformClass = "AT_uniform_clothing1_diamond_dogs"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES DIAMOND DOGS CUFFED UNIT
class AT_soldier_clothing1_diamond_dogs_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (Diamond Dogs/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_diamond_dogs.paa"};
	uniformClass = "AT_uniform_clothing1_diamond_dogs_cuffed_sleeves"; // This links this soldier to a particular uniform.
};


//BLUFOR FATIGUES DIAMOND DOGS SHIRT UNIT
class AT_soldier_clothing1_diamond_dogs_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (Diamond Dogs Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_diamond_dogs.paa", "\apptac_uniforms\textures\basicbody_diamond_dogs.paa"};
	uniformClass = "AT_uniform_clothing1_diamond_dogs_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FLANNEL UNIT
class AT_soldier_clothing1_flannel: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (Flannel/Tan Pants)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_flannel.paa"};
	uniformClass = "AT_uniform_clothing1_flannel"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FLANNEL CUFFED UNIT
class AT_soldier_clothing1_flannel_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (Flannel/Cuffed Sleeves/Tan Pants)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_flannel.paa"};
	uniformClass = "AT_uniform_clothing1_flannel_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FLANNEL SHIRT UNIT
class AT_soldier_clothing1_flannel_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (Flannel Undershirt/Tan Pants)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_flannel.paa", "\apptac_uniforms\textures\basicbody_flannel.paa"};
	uniformClass = "AT_uniform_clothing1_flannel_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES 3 COLOR DESERT UNIT
class AT_soldier_clothing1_3_color_desert: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (3 Color Desert)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_3_color_desert.paa"};
	uniformClass = "AT_uniform_clothing1_3_color_desert"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES 3 COLOR DESERT CUFFED UNIT
class AT_soldier_clothing1_3_color_desert_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (3 Color Desert/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_3_color_desert.paa"};
	uniformClass = "AT_uniform_clothing1_3_color_desert_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES 3 COLOR DESERT SHIRT UNIT
class AT_soldier_clothing1_3_color_desert_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (3 Color Desert Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_3_color_desert.paa", "\apptac_uniforms\textures\basicbody_3_color_desert.paa"};
	uniformClass = "AT_uniform_clothing1_3_color_desert_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES CHOCOLATE CHIP UNIT
class AT_soldier_clothing1_chocolate_chip: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (Chocolate Chip)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_chocolate_chip.paa"};
	uniformClass = "AT_uniform_clothing1_chocolate_chip"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES CHOCOLATE CHIP CUFFED UNIT
class AT_soldier_clothing1_chocolate_chip_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (Chocolate Chip/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_chocolate_chip.paa"};
	uniformClass = "AT_uniform_clothing1_chocolate_chip_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES CHOCOLATE CHIP SHIRT UNIT
class AT_soldier_clothing1_chocolate_chip_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (Chocolate Chip Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_chocolate_chip.paa", "\apptac_uniforms\textures\basicbody_chocolate_chip.paa"};
	uniformClass = "AT_uniform_clothing1_chocolate_chip_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES UCP UNIT
class AT_soldier_clothing1_ucp: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (UCP)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_ucp.paa"};
	uniformClass = "AT_uniform_clothing1_ucp"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES UCP CUFFED UNIT
class AT_soldier_clothing1_ucp_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (UCP/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_ucp.paa"};
	uniformClass = "AT_uniform_clothing1_ucp_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES UCP SHIRT UNIT
class AT_soldier_clothing1_ucp_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (UCP Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_ucp.paa", "\apptac_uniforms\textures\basicbody_ucp.paa"};
	uniformClass = "AT_uniform_clothing1_ucp_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES UCP-D UNIT
class AT_soldier_clothing1_ucpd: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (UCP-D)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_ucpd.paa"};
	uniformClass = "AT_uniform_clothing1_ucpd"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES UCP-D CUFFED UNIT
class AT_soldier_clothing1_ucpd_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (UCP-D/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_ucpd.paa"};
	uniformClass = "AT_uniform_clothing1_ucpd_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES UCP-D SHIRT UNIT
class AT_soldier_clothing1_ucpd_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (UCP-D Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_ucpd.paa", "\apptac_uniforms\textures\basicbody_ucpd.paa"};
	uniformClass = "AT_uniform_clothing1_ucpd_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES GREEN PLAID UNIT
class AT_soldier_clothing1_green_plaid: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (Green Plaid)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_green_plaid.paa"};
	uniformClass = "AT_uniform_clothing1_green_plaid"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES GREEN PLAID CUFFED UNIT
class AT_soldier_clothing1_green_plaid_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (Green Plaid/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_green_plaid.paa"};
	uniformClass = "AT_uniform_clothing1_green_plaid_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES GREEN PLAID SHIRT UNIT
class AT_soldier_clothing1_green_plaid_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (Green Plaid Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_green_plaid.paa", "\apptac_uniforms\textures\basicbody_green_plaid.paa"};
	uniformClass = "AT_uniform_clothing1_green_plaid_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES AOR2 UNIT
class AT_soldier_clothing1_aor2: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (AOR2)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_aor2.paa"};
	uniformClass = "AT_uniform_clothing1_aor2"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES AOR2 CUFFED UNIT
class AT_soldier_clothing1_aor2_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (AOR2/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_aor2.paa"};
	uniformClass = "AT_uniform_clothing1_aor2"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES AOR2 SHIRT UNIT
class AT_soldier_clothing1_aor2_shirt: AT_soldier_mcam_tshirt_base
{					
	displayName = "Combat Fatigues (AOR2 Undershirt)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_aor2.paa", "\apptac_uniforms\textures\basicbody_aor2.paa"};
	uniformClass = "AT_uniform_clothing1_aor2_shirt"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES STEVEN UNIT
class AT_soldier_clothing1_steven: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (StevenAlex)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_steven.paa"};
	uniformClass = "AT_uniform_clothing1_steven"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES STEVEN CUFFED UNIT
class AT_soldier_clothing1_steven_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (StevenAlex/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_steven.paa"};
	uniformClass = "AT_uniform_clothing1_steven"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES CBP AMO UNIT
class AT_soldier_clothing1_cbp_amo: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (CBP AMO)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_cbp_amo.paa"};
	uniformClass = "AT_uniform_clothing1_cbp_amo"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES CBP AMO CUFFED SLEEVES UNIT
class AT_soldier_clothing1_cbp_amo_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (CBP AMO/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_cbp_amo.paa"};
	uniformClass = "AT_uniform_clothing1_cbp_amo_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES CBP UNIT
class AT_soldier_clothing1_cbp: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (CBP)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_cbp.paa"};
	uniformClass = "AT_uniform_clothing1_cbp"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES CBP CUFFED SLEEVES UNIT
class AT_soldier_clothing1_cbp_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (CBP/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_cbp.paa"};
	uniformClass = "AT_uniform_clothing1_cbp_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES OD GREEN UNIT
class AT_soldier_clothing1_od_green: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (OD Green)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_od_green.paa"};
	uniformClass = "AT_uniform_clothing1_od_green"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES OD GREEN SLEEVES UNIT
class AT_soldier_clothing1_od_green_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (OD Green/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_od_green.paa"};
	uniformClass = "AT_uniform_clothing1_od_green_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES TIGER STRIPES UNIT
class AT_soldier_clothing1_tiger_stripes: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (Tiger Stripes)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_tiger_stripe.paa"};
	uniformClass = "AT_uniform_clothing1_tiger_stripes"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES TIGER STRIPES CUFFED SLEEVES UNIT
class AT_soldier_clothing1_tiger_stripes_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (Tiger Stripes/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_tiger_stripe.paa"};
	uniformClass = "AT_uniform_clothing1_od_green_tiger_stripes"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FBI UNIT
class AT_soldier_clothing1_fbi: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (FBI SWAT)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_fbi.paa"};
	uniformClass = "AT_uniform_clothing1_fbi"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FBI CUFFED SLEEVES UNIT
class AT_soldier_clothing1_fbi_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (FBI SWAT/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_fbi.paa"};
	uniformClass = "AT_uniform_clothing1_fbi_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES ATF UNIT
class AT_soldier_clothing1_atf: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (ATF SWAT)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_atf.paa"};
	uniformClass = "AT_uniform_clothing1_atf"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FBI CUFFED SLEEVES UNIT
class AT_soldier_clothing1_atf_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (ATF SWAT/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_atf.paa"};
	uniformClass = "AT_uniform_clothing1_atf_cuffed_sleeves"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES SWAT UNIT
class AT_soldier_clothing1_swat: AT_soldier_blufor_fatigues_base
{					
	displayName = "Combat Fatigues (SWAT)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_swat.paa"};
	uniformClass = "AT_uniform_clothing1_swat"; // This links this soldier to a particular uniform.
};

//BLUFOR FATIGUES FBI CUFFED SLEEVES UNIT
class AT_soldier_clothing1_swat_cuffed_sleeves: AT_soldier_blufor_fatigues_cuffed_sleeves_base
{					
	displayName = "Combat Fatigues (SWAT/Cuffed Sleeves)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\clothing1_co_swat.paa"};
	uniformClass = "AT_uniform_clothing1_swat_cuffed_sleeves"; // This links this soldier to a particular uniform.
};