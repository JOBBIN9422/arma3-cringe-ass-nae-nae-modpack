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
	displayName = "Guerilla (ERDL)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\guerilla_fatiges_erdl.paa"};
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