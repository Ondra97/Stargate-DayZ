class CfgPatches
{
	class DHD
	{
		units[] = {"DHD"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
								"DZ_Data"
							};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;	
	class DHD: HouseNoDestruct
	{
		scope = 1;
		displayName = "DHD";
		descriptionShort = "Dial Home Device";
		model = "\Stargate\DHD\DHD.p3d";
	};
};