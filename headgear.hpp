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

class H_combat_helmet_n81: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (M81)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_m81.paa"};
};
