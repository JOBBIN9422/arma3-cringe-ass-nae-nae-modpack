class HeadgearItem;
class H_HelmetB;

class H_combat_helmet_base: H_HelmetB
{
	author = "JOBBIN";
	displayName = "Combat Helmet Template";
	scope = 0;
	weaponPoolAvailable = 1;
	picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
	model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = { "\A3\Characters_F\BLUFOR\Data\equip1_co.paa" };
		
	class ItemInfo : HeadgearItem
	{
		mass = 50;
		uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		modelSides[] = { TCivilian, TWest };
		hiddenSelections[] = { "camo" };
		
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitPointName = "HitHead";
				armor = 10;
				passThrough = 0.5;
			};
		};
	};
};

//M81 helmet
class H_combat_helmet_n81: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (M81)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_m81.paa"};
};

//multicam helmet
class H_combat_helmet_multicam: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Multicam)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_multicam.paa"};
};

//3 color desert helmet
class H_combat_helmet_3_color_desert: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (3 Color Desert)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_3_color_desert.paa"};
};

//caution stripes helmet
class H_combat_helmet_caution_stripes: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Caution Stripes)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_forklift.paa"};
};

//UCP-D helmet
class H_combat_helmet_caution_ucpd: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (UCP-D)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_ucpd.paa"};
};

//UCP helmet
class H_combat_helmet_caution_ucp: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (UCP)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_ucp.paa"};
};

//LV helmet
class H_combat_helmet_caution_drip: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Drip)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_drip.paa"};
};

//drip mono helmet
class H_combat_helmet_caution_drip_mono: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Drip Monochrome)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_drip_mono.paa"};
};

//DNC helmet
class H_combat_helmet_caution_dnc: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Desert Night Camo)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_dnc.paa"};
};

//Chocolate chip helmet
class H_combat_helmet_caution_chocolate_chip: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Chocolate Chip)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_chocolate_chip.paa"};
};
