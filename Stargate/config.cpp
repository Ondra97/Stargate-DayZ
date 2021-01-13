class CfgPatches
{
	class Stargate_scripts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Tools"};
	};   
};

class CfgMods
{
	class Stargate
	{
		dir = "Stargate";
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
		dependencies[] = {"World","Game","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Stargate/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Stargate/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Stargate/scripts/5_Mission"};
			};
		};
	};
};