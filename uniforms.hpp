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
	displayName = "Guerrilla Fatigues (ERDL)"
		
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