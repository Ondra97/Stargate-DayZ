class CfgPatches
{
	class SGC_Ramp
	{
		units[] = {"SGC_Ramp"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	
	class SGC_Ramp: HouseNoDestruct
	{
		scope = 1;
		displayName = "Ramp";
		descriptionShort = "";
		model = "\Stargate\SGC_Ramp\Sgc_ramp.p3d";
	};
};