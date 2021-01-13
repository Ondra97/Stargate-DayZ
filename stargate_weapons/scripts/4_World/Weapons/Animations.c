modded class JMAnimRegister
{
	override void OnRegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.OnRegisterFireArms( pType, pBehavior );
		pType.AddItemInHandsProfileIK("Staffweapon", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm", "dz/anims/anm/player/reloads/M4A1/w_M4A1_states.anm");
	}
	
/*	
	override void OnRegisterPistol( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.OnRegisterPistol( pType, pBehavior );
	}
*/	
	override void OnRegisterOneHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.OnRegisterOneHanded( pType, pBehavior );
		pType.AddItemInHandsProfileIK("AmmoBox_StaffEnergyBox", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/308Win_20RoundBox.anm");
		pType.AddItemInHandsProfileIK("Ammo_StaffWeapon", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/ammunition/9x39_LooseRounds.anm");
		pType.AddItemInHandsProfileIK("Mag_StaffWeapon", "dz/anims/workspaces/player/player_main/props/player_main_fnp45_mag.asi", pBehavior, "dz/anims/anm/player/ik/attachments/magazines/magazine_CZ75.anm");
	}
	
/*
override void OnRegisterTwoHanded( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
	{
		super.OnRegisterTwoHanded( pType, pBehavior );

    }
*/
};