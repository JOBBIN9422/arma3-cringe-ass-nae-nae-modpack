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