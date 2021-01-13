class CfgPatches
{
	class Stargate
	{
		units[] = {"Stargate"};
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
//	class Inventory_Base;
//	class Dialing_Computer: Inventory_Base
	
	
	class Stargate: HouseNoDestruct
	{
		scope = 1;
		displayName = "Stargate";
		descriptionShort = "";
		model = "\stargate\Gate\stargate.p3d";
		hiddenSelections[] = {	"event_horizon",
								"chevron_light001",
								"chevron_light002",
								"chevron_light003",
								"chevron_light004",
								"chevron_light005",
								"chevron_light006",
								"chevron_light007",
								"chevron_light008",
								"chevron_light009"};
								
		hiddenSelectionsTextures[] = {	"",
										"\stargate\data\gate\chevron_illumination.paa",
										"\stargate\data\gate\chevron_illumination.paa",
										"\stargate\data\gate\chevron_illumination.paa",
										"\stargate\data\gate\chevron_illumination.paa",
										"\stargate\data\gate\chevron_illumination.paa",
										"\stargate\data\gate\chevron_illumination.paa",
										"\stargate\data\gate\chevron_illumination.paa",
										"\stargate\data\gate\chevron_illumination.paa",
										"\stargate\data\gate\chevron_illumination.paa"
									};
		
		class AnimationSources
        {
			class gate_ring
            {
            source = "user";
            initPhase = 0;
            animPeriod = 10.0;
            };
			class chevron_lock
            {
            source = "user";
            initPhase = 0;
            animPeriod = 1.2;
            };
        };
		
	
	};
};

class CfgSounds
{	
	class sgc_gate_alarm
		{
			sound[] = {"\stargate\data\Sounds\sgc_alarm",0.6};
		};
	class chevron_lock
		{
			sound[] = {"\stargate\data\Sounds\Gate\chevron_lock",0.6};
		};
	class ring_rotate
		{
			sound[] = {"\stargate\data\Sounds\Gate\gate_roll_long",0.6};
		};
		class ring_rotate_short
		{
			sound[] = {"\stargate\data\Sounds\Gate\gate_roll_short",0.6};
		};
	class event_horizon
		{
			sound[] = {"\stargate\data\Sounds\Gate\event_horizon",0.6};
		};
	class unstable_vortex
		{
			sound[] = {"\stargate\data\Sounds\Gate\gate_open",0.6};
		};
	class gate_close
		{
			sound[] = {"\stargate\data\Sounds\Gate\gate_close",0.6};
		};
	class dialing_stop
		{
			sound[] = {"\stargate\data\Sounds\Gate\dialing_stop",0.6};
		};
	class dialing_fail
		{
			sound[] = {"\stargate\data\Sounds\Gate\dialing_fail",0.6};
		};
	
};