class HeadgearItem;
class H_HelmetB;
class H_Cap_red;

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

class H_cap_base: H_Cap_red
{
	author = "JOBBIN";
	displayName = "Cap Template";
	scope = 0;
	weaponPoolAvailable = 1;
	picture = "\A3\characters_f\Data\UI\icon_H_cap_red_CA.paa";
	model = "\A3\Characters_F\Common\capb.p3d";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\capb_red_co.paa"};
		
	/*class ItemInfo : HeadgearItem
	{
		mass = 5;
		uniformModel = "\A3\Characters_F\Common\capb.p3d";
		modelSides[] = { TCivilian, TWest };
		hiddenSelections[] = { "camo" };
	}; */
}

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
class H_combat_helmet_ucpd: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (UCP-D)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_ucpd.paa"};
};

//UCP helmet
class H_combat_helmet_ucp: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (UCP)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_ucp.paa"};
};

//LV helmet
class H_combat_helmet_drip: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Drip)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_drip.paa"};
};

//drip mono helmet
class H_combat_helmet_drip_mono: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Drip Monochrome)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_drip_mono.paa"};
};

//DNC helmet
class H_combat_helmet_dnc: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Desert Night Camo)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_dnc.paa"};
};

//Chocolate chip helmet
class H_combat_helmet_chocolate_chip: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Chocolate Chip)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_chocolate_chip.paa"};
};

//Butan 1 helmet
class H_combat_helmet_butan_1: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Butan 1)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_butan_1.paa"};
};

//Butan 2 helmet
class H_combat_helmet_butan_2: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Butan 2)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_butan_2.paa"};
};

//Realtree helmet
class H_combat_helmet_realtree: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (RealTree)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_realtree.paa"};
};

//Ahegao helmet
class H_combat_helmet_ahegao: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Ahegao)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_ahegao.paa"};
};

//Solo cup helmet
class H_combat_helmet_solo_cup: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Solo Cup)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_solo_cup.paa"};
};

//leopard helmet
class H_combat_helmet_leopard: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (MGS3 Leopard)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_leopard.paa"};
};

//flannel helmet
class H_combat_helmet_flannel: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Flannel)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_flannel.paa"};
};

//denim helmet
class H_combat_helmet_denim: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Denim)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_denim.paa"};
};

//tiger stripe helmet
class H_combat_helmet_tiger_stripe: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Tiger Stripe)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_tiger_stripe.paa"};
};

//A-TACS helmet
class H_combat_helmet_atacs: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (A-TACS)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_atacs.paa"};
};

//alpenflage helmet
class H_combat_helmet_alpenflage: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Alpenflage)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_alpenflage.paa"};
};

//ldf helmet
class H_combat_helmet_ldf: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (LDF Woodland)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_ldf.paa"};
};

//flecktarn helmet
class H_combat_helmet_flecktarn: H_combat_helmet_base
{
	scope = 2;
	displayName = "Combat Helmet (Flecktarn)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\equip1_co_flecktarn.paa"};
};

//A-TACS cap
class H_capb_atacs: H_cap_base
{
	scope = 2;
	displayName = "Cap (A-TACS)";
	hiddenSelectionsTextures[] = {"\apptac_uniforms\textures\capb_atacs.paa"};
};