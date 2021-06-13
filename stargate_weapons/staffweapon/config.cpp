class CfgPatches
{
	class Staffweapon
	{
		units[] = {""};
		weapons[] = {"Staffweapon"};
		ammo[] = {""};
		magazines[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};


class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle_Base;
	class Staffweapon: Rifle_Base
	{
		scope = 2;
		displayName="Stafffweapon";
		descriptionShort="Stafffweapon";
		itemSize[]={8,3};
		attachments[]={"weaponWrap","weaponFlashlight","weaponOptics","sniperOptics","weaponOpticsHunting"};
		model="\stargate_weapons\staffweapon\staffweapon.p3d";
		weight = 3400;
		absorbency = 0.1;
		discreteDistance[] = {25};
		WeaponLength = 1.3;
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		forceOptics = 0;
		distanceZoomMin = 25;
		distanceZoomMax = 25;
		PPDOFProperties[] = {};
		optics = 1;
	    simpleHiddenSelections[] = {};
		ironsightsExcludingOptics[] = {};
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_StaffWeapon"};
		magazines[] = {"Mag_StaffWeapon"};
		magazineSwitchTime = 0.1;
		barrelArmor = 10000;
		ejectType = 1;
		recoilModifier[] = {0,0,0};
		swayModifier[] = {2,2,1};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		hiddenSelections[] = {""};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"Staffweapon_Shot_SoundSet"};
			reloadTime = 20;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=10;
				shotsToStartOverheating=4;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_Rifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_Rifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_Rifle_Walk
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_Rifle_Run
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_Rifle_Sprint
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_L_SoundSet";
					id = 103;
				};
				class Weapon_Movement_Rifle_Land
				{
					soundSet = "Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
/* to si fixneš zmrde
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]={	{1.0,{"Nest_Weapons\beowulf\data\beowulf1.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf2.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf3.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf4.rvmat"}
											  },
										{0.7,{"Nest_Weapons\beowulf\data\beowulf1.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf2.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf3.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf4.rvmat"}
											  },
										{0.5,{"Nest_Weapons\beowulf\data\beowulf1_damage.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf2_damage.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf3_damage.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf4_damage.rvmat"}
											  },
										{0.3,{"Nest_Weapons\beowulf\data\beowulf1_damage.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf2_damage.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf3_damage.rvmat",
											  "Nest_Weapons\beowulf\data\beowulf4_damage.rvmat"}
											  },
										{0.0,{"Nest_Weapons\beowulf\data\beowulf1_destruct",
											  "Nest_Weapons\beowulf\data\beowulf2_destruct",
											  "Nest_Weapons\beowulf\data\beowulf3_destruct",
											  "Nest_Weapons\beowulf\data\beowulf4_destruct"}
											  }
									};
				};
			};
		};
*/
	};	
};

class cfgMagazines
{
	class Magazine_Base;
  	class Mag_StaffWeapon: Magazine_Base
 	{
		scope=2;
		displayName="KEK MAG";
		descriptionShort="";
		model="\stargate_weapons\staffweapon\mag_naquadah.p3d";
		weight=360;
		itemSize[]={1,3};
		count=1000;
		ammo="Bullet_127x42";
		ammoItems[]={"Ammo_StaffWeapon"};
		tracersEvery=1;
/* a tohle taky
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]={	{1.0,{"Nest_Weapons\beowulf\data\beowulf4.rvmat"}},
										{0.7,{"Nest_Weapons\beowulf\data\beowulf4.rvmat"}},
										{0.5,{"Nest_Weapons\beowulf\data\beowulf4_damage.rvmat"}},
										{0.3,{"Nest_Weapons\beowulf\data\beowulf4_damage.rvmat"}},
										{0,{"Nest_Weapons\beowulf\data\beowulf4_destruct"}}
									};
				};
			};
		};
*/
		
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	
	class Ammunition_Base;
	class Ammo_StaffWeapon: Ammunition_Base
	{
		//BRUH 12.7x42 
		scope = 2;
		displayName = "STAFF AMMO";
		descriptionShort = "KEK #2";
		model = "Stargate_weapons\Ammunition\127x42\ammo.p3d";
		itemSize[]={1,2};
		weight = 30;
		count = 20;
		ammo = "Bullet_StaffEnergy";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {	{1.0,{"Stargate_weapons\Ammunition\127x42\data\127x42.rvmat"}},
										{0.7,{"Stargate_weapons\Ammunition\127x42\data\127x42.rvmat"}},
										{0.5,{"Stargate_weapons\Ammunition\127x42\data\127x42_damage.rvmat"}},
										{0.3,{"Stargate_weapons\Ammunition\127x42\data\127x42_damage.rvmat"}},
										{0.0,{"Stargate_weapons\Ammunition\127x42\data\127x42_destruct.rvmat"}}
									};
				};
			};
		};
	};
};
class cfgSoundsets
{
	class Rifle_Shot_Base_SoundSet;
	class Staffweapon_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"Staffweapon_closeShot_SoundShader","Staffweapon_midShot_SoundShader","Staffweapon_distShot_SoundShader"};
	};
};
class CfgSoundShaders
{
	class Staffweapon_closeShot_SoundShader
	{
		samples[] = {{"Stargate_weapons\staffweapon\sounds\StaffFire",1}};		
		volume = 1.7782794;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Staffweapon_midShot_SoundShader
	{
		samples[] = {{"Stargate_weapons\staffweapon\sounds\StaffFire",1}};		
		volume = 0.56234133;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class Staffweapon_distShot_SoundShader
	{
		samples[] = {{"Stargate_weapons\staffweapon\sounds\StaffFire",1}};		
		volume = 1;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
};

class cfgAmmoTypes
{
	class AType_Bullet_StaffEnergy
	{
		name = "Bullet_StaffEnergy";
	};
};

class cfgAmmo
{
	class Bullet_Base;
	class Bullet_StaffEnergy: Bullet_Base
	{
		scope = 2;
		lootCategory = "Crafted";
		casing = "FxCartridge_762";
		round = "FxRound_308Win";
		cartridge = "FxCartridge_308";
		spawnPileType = "Ammo_StaffWeapon";
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 5;
		airLock = 1;
		initSpeed = 650;
		typicalSpeed = 650;
		airFriction = -0.00085;
		caliber = 4.0;
		damageBarrel = 6;
		damageBarrelDestroyed = 60;
		weight = 0.035;
		impactBehaviour = 1;
			class DamageApplied
			{
				type="Projectile";
				dispersion=0;
				bleedThreshold=1;
					class Health
					{
						damage=200;
						armorDamage = 5;
					};
					class Blood
					{
						damage=200;
					};
					class Shock
					{
						damage=200;
					};
			};
		class NoiseHit
		{
			strength = 18;
			type = "shot";
		};
		soundDefault1[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundDefault2[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundDefault3[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundDefault4[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundDefault5[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundDefault6[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundDefault7[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundDefault8[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundSoft1[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundSoft2[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundSoft3[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundSoft4[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundSoft5[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundSoft6[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundSoft7[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundSoft8[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundHard1[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundHard2[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundHard3[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundHard4[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundHard5[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundHard6[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundHard7[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundGroundHard8[] = {"Stargate_weapons\staffweapon\sounds\StaffHit",3,6,100};
		soundMetal1[] = {"dz\sounds\weapons\hits\bullet\metal_1",0.5,1,40};
		soundMetal2[] = {"dz\sounds\weapons\hits\bullet\metal_2",0.5,1,40};
		soundMetal3[] = {"dz\sounds\weapons\hits\bullet\metal_3",0.5,1,40};
		soundMetal4[] = {"dz\sounds\weapons\hits\bullet\metal_4",0.5,1,40};
		soundMetal5[] = {"dz\sounds\weapons\hits\bullet\metal_5",0.5,1,40};
		soundMetal6[] = {"dz\sounds\weapons\hits\bullet\metal_6",0.5,1,40};
		soundMetal7[] = {"dz\sounds\weapons\hits\bullet\metal_7",0.5,1,40};
		soundMetal8[] = {"dz\sounds\weapons\hits\bullet\metal_8",0.5,1,40};
		soundGlass1[] = {"dz\sounds\weapons\hits\bullet\glass_1",0.5,1,40};
		soundGlass2[] = {"dz\sounds\weapons\hits\bullet\glass_2",0.5,1,40};
		soundGlass3[] = {"dz\sounds\weapons\hits\bullet\glass_3",0.5,1,40};
		soundGlass4[] = {"dz\sounds\weapons\hits\bullet\glass_4",0.5,1,40};
		soundGlass5[] = {"dz\sounds\weapons\hits\bullet\glass_5",0.5,1,40};
		soundGlass6[] = {"dz\sounds\weapons\hits\bullet\glass_6",0.5,1,40};
		soundGlass7[] = {"dz\sounds\weapons\hits\bullet\glass_7",0.5,1,40};
		soundGlass8[] = {"dz\sounds\weapons\hits\bullet\glass_8",0.5,1,40};
		soundGlassArmored1[] = {"dz\sounds\weapons\hits\bullet\glass_arm_1",0.5,1,40};
		soundGlassArmored2[] = {"dz\sounds\weapons\hits\bullet\glass_arm_2",0.5,1,40};
		soundGlassArmored3[] = {"dz\sounds\weapons\hits\bullet\glass_arm_3",0.5,1,40};
		soundGlassArmored4[] = {"dz\sounds\weapons\hits\bullet\glass_arm_4",0.5,1,40};
		soundGlassArmored5[] = {"dz\sounds\weapons\hits\bullet\glass_arm_5",0.5,1,40};
		soundGlassArmored6[] = {"dz\sounds\weapons\hits\bullet\glass_arm_6",0.5,1,40};
		soundGlassArmored7[] = {"dz\sounds\weapons\hits\bullet\glass_arm_7",0.5,1,40};
		soundGlassArmored8[] = {"dz\sounds\weapons\hits\bullet\glass_arm_8",0.5,1,40};
		soundVehiclePlate1[] = {"dz\sounds\weapons\hits\bullet\metal_plate_1",0.5,1,40};
		soundVehiclePlate2[] = {"dz\sounds\weapons\hits\bullet\metal_plate_2",0.5,1,40};
		soundVehiclePlate3[] = {"dz\sounds\weapons\hits\bullet\metal_plate_3",0.5,1,40};
		soundVehiclePlate4[] = {"dz\sounds\weapons\hits\bullet\metal_plate_4",0.5,1,40};
		soundVehiclePlate5[] = {"dz\sounds\weapons\hits\bullet\metal_plate_5",0.5,1,40};
		soundVehiclePlate6[] = {"dz\sounds\weapons\hits\bullet\metal_plate_6",0.5,1,40};
		soundVehiclePlate7[] = {"dz\sounds\weapons\hits\bullet\metal_plate_7",0.5,1,40};
		soundVehiclePlate8[] = {"dz\sounds\weapons\hits\bullet\metal_plate_8",0.5,1,40};
		soundWood1[] = {"dz\sounds\weapons\hits\bullet\wood_1",0.5,1,40};
		soundWood2[] = {"dz\sounds\weapons\hits\bullet\wood_2",0.5,1,40};
		soundWood3[] = {"dz\sounds\weapons\hits\bullet\wood_3",0.5,1,40};
		soundWood4[] = {"dz\sounds\weapons\hits\bullet\wood_4",0.5,1,40};
		soundWood5[] = {"dz\sounds\weapons\hits\bullet\wood_5",0.5,1,40};
		soundWood6[] = {"dz\sounds\weapons\hits\bullet\wood_6",0.5,1,40};
		soundWood7[] = {"dz\sounds\weapons\hits\bullet\wood_7",0.5,1,40};
		soundWood8[] = {"dz\sounds\weapons\hits\bullet\wood_8",0.5,1,40};
		soundHitBody1[] = {"dz\sounds\weapons\hits\bullet\body_1",1,1,20};
		soundHitBody2[] = {"dz\sounds\weapons\hits\bullet\body_2",1,1,20};
		soundHitBody3[] = {"dz\sounds\weapons\hits\bullet\body_3",1,1,20};
		soundHitBody4[] = {"dz\sounds\weapons\hits\bullet\body_4",1,1,20};
		soundHitBody5[] = {"dz\sounds\weapons\hits\bullet\body_5",1,1,20};
		soundHitBody6[] = {"dz\sounds\weapons\hits\bullet\body_6",1,1,20};
		soundHitBody7[] = {"dz\sounds\weapons\hits\bullet\body_7",1,1,20};
		soundHitBody8[] = {"dz\sounds\weapons\hits\bullet\body_8",1,1,20};
		soundHitBuilding1[] = {"dz\sounds\weapons\hits\bullet\building_1",0.5,1,40};
		soundHitBuilding2[] = {"dz\sounds\weapons\hits\bullet\building_2",0.5,1,40};
		soundHitBuilding3[] = {"dz\sounds\weapons\hits\bullet\building_3",0.5,1,40};
		soundHitBuilding4[] = {"dz\sounds\weapons\hits\bullet\building_4",0.5,1,40};
		soundHitBuilding5[] = {"dz\sounds\weapons\hits\bullet\building_5",0.5,1,40};
		soundHitBuilding6[] = {"dz\sounds\weapons\hits\bullet\building_6",0.5,1,40};
		soundHitBuilding7[] = {"dz\sounds\weapons\hits\bullet\building_7",0.5,1,40};
		soundHitBuilding8[] = {"dz\sounds\weapons\hits\bullet\building_8",0.5,1,40};
		soundHitFoliage1[] = {"dz\sounds\weapons\hits\bullet\foliage_1",1,1,20};
		soundHitFoliage2[] = {"dz\sounds\weapons\hits\bullet\foliage_2",1,1,20};
		soundHitFoliage3[] = {"dz\sounds\weapons\hits\bullet\foliage_3",1,1,20};
		soundHitFoliage4[] = {"dz\sounds\weapons\hits\bullet\foliage_4",1,1,20};
		soundHitFoliage5[] = {"dz\sounds\weapons\hits\bullet\foliage_5",1,1,20};
		soundHitFoliage6[] = {"dz\sounds\weapons\hits\bullet\foliage_6",1,1,20};
		soundHitFoliage7[] = {"dz\sounds\weapons\hits\bullet\foliage_7",1,1,20};
		soundHitFoliage8[] = {"dz\sounds\weapons\hits\bullet\foliage_8",1,1,20};
		soundPlastic1[] = {"dz\sounds\weapons\hits\bullet\plastic_1",0.5,1,40};
		soundPlastic2[] = {"dz\sounds\weapons\hits\bullet\plastic_2",0.5,1,40};
		soundPlastic3[] = {"dz\sounds\weapons\hits\bullet\plastic_3",0.5,1,40};
		soundPlastic4[] = {"dz\sounds\weapons\hits\bullet\plastic_4",0.5,1,40};
		soundPlastic5[] = {"dz\sounds\weapons\hits\bullet\plastic_5",0.5,1,40};
		soundPlastic6[] = {"dz\sounds\weapons\hits\bullet\plastic_6",0.5,1,40};
		soundPlastic7[] = {"dz\sounds\weapons\hits\bullet\plastic_7",0.5,1,40};
		soundPlastic8[] = {"dz\sounds\weapons\hits\bullet\plastic_8",0.5,1,40};
		soundConcrete1[] = {"dz\sounds\weapons\hits\bullet\concrete_1",0.5,1,40};
		soundConcrete2[] = {"dz\sounds\weapons\hits\bullet\concrete_2",0.5,1,40};
		soundConcrete3[] = {"dz\sounds\weapons\hits\bullet\concrete_3",0.5,1,40};
		soundConcrete4[] = {"dz\sounds\weapons\hits\bullet\concrete_4",0.5,1,40};
		soundConcrete5[] = {"dz\sounds\weapons\hits\bullet\concrete_5",0.5,1,40};
		soundConcrete6[] = {"dz\sounds\weapons\hits\bullet\concrete_6",0.5,1,40};
		soundConcrete7[] = {"dz\sounds\weapons\hits\bullet\concrete_7",0.5,1,40};
		soundConcrete8[] = {"dz\sounds\weapons\hits\bullet\concrete_8",0.5,1,40};
		soundRubber1[] = {"dz\sounds\weapons\hits\bullet\tyre_1",0.5,1,40};
		soundRubber2[] = {"dz\sounds\weapons\hits\bullet\tyre_2",0.5,1,40};
		soundRubber3[] = {"dz\sounds\weapons\hits\bullet\tyre_3",0.5,1,40};
		soundRubber4[] = {"dz\sounds\weapons\hits\bullet\tyre_4",0.5,1,40};
		soundWater1[] = {"dz\sounds\weapons\hits\bullet\water_1",0.5,1,40};
		soundWater2[] = {"dz\sounds\weapons\hits\bullet\water_2",0.5,1,40};
		soundWater3[] = {"dz\sounds\weapons\hits\bullet\water_3",0.5,1,40};
		soundWater4[] = {"dz\sounds\weapons\hits\bullet\water_4",0.5,1,40};
		soundWater5[] = {"dz\sounds\weapons\hits\bullet\water_5",0.5,1,40};
		soundWater6[] = {"dz\sounds\weapons\hits\bullet\water_6",0.5,1,40};
		soundWater7[] = {"dz\sounds\weapons\hits\bullet\water_7",0.5,1,40};
		soundWater8[] = {"dz\sounds\weapons\hits\bullet\water_8",0.5,1,40};
	};
};

//TOHLE NENI TŘEBA!
class CfgVehicles
{
	class Box_Base;
	class AmmoBox_StaffEnergyBox: Box_Base
	{
		scope = 2;
		displayName = "Box of Staff ammo KEK";
		descriptionShort = "Why i am doing this xD";
		model = "\dz\weapons\ammunition\556_20RoundBox.p3d";
		itemSize[]={1,1};
		rotationFlags = 17;
		lootCategory = "Ammo";
		weight = 385;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"DZ\weapons\ammunition\data\556_20RoundBox.rvmat"}},{0.7,{"DZ\weapons\ammunition\data\556_20RoundBox.rvmat"}},{0.5,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},{0.3,{"DZ\weapons\ammunition\data\556_20RoundBox_damage.rvmat"}},{0.0,{"DZ\weapons\ammunition\data\556_20RoundBox_destruct.rvmat"}}};
				};
			};
		};
		class Resources
		{
			class Ammo_StaffWeapon
			{
				value = 10;
				variable = "quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset = "ammoboxUnpack_SoundSet";
					id = 70;
				};
			};
		};
	};
};