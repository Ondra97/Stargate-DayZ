class CfgPatches
{
	class Stargate_weapons_scripts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};   
};

class CfgMods
{
	class Stargate_weapons
	{
		dir = "Stargate_weapons";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Stargate";
		author = "Ondra, Nazzgy";
		credits = "Ondra, Nazzgy,";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		picture = "";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Stargate_weapons/scripts/4_World"};
			};
		};
	};
};