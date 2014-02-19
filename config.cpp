class CfgPatches {
	class tb_launcher_rpg {
		requiredaddons[] = {"A3_Weapons_F","A3_Weapons_F_Items","inko_disposable_a3"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"tb_launcher_rpg18","tb_launcher_rpg7"};
		magazines[] = {};
	};
};

class CfgWeapons {
	//RPG18
	class Launcher;
	class Launcher_Base_F : Launcher {
		class WeaponSlotsInfo;
	};
	class launch_RPG32_F : Launcher_Base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {};
	};
	//Ignore above me.
	class tb_launcher_rpg18 : launch_RPG32_F {
		inko_disposable = 1;
		inko_disposable_used = "tb_launcher_rpg18_used";
		inko_disposable_tube = "tb_launcher_rpg18_used_tube";	
		descriptionshort = "Disposable Anti-Tank Weapon";
		displayname = "RPG-18";
		handanim[] = {};
		magazines[] = {"tb_RPG18"};
		maxrange = 200;
		midrange = 100;
		minrange = 10;	
		memorypointcamera = "eye";
		picture = "\tb_launcher_rpg\data\rpg18\w_rpg18_ca";
		visionMode[] = {};
		model = 	"\tb_launcher_rpg\rpg18";
		reloadtime = 0.5;
		scope = 2;	
		weight = 26;	
		class OpticsModes {
			class RPG18sight {//yoink
				//discretedistance[] = {100,150,200,250,300,350,400,450,500};
				//discretedistanceinitindex = 0;
				distancezoommax = 300;
				distancezoommin = 300;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0.67;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {""};
				opticszoominit = 0.75;
				opticszoommax = 1.1;
				opticszoommin = 0.375;
				usemodeloptics = 0;
				visionmode[] = {};
			};
		};
		class Library {
			libtextdesc = "The RPG-18 Mukah (in English: Fly) is a short-range, disposable, light weight anti-tank rocket launcher made in Russia.<br/>The RPG-18 fires a 64 mm warhead mounted on small rocket with an effective range of 200 m. This weapon is able to penetrate up to 375mm of conventional armor and is not reloadable.";
		};	
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 260;
			allowedslots[] = {901};
		};
	};
	class tb_launcher_rpg18_used : tb_launcher_rpg18 {
		displayName = "RPG-18 (Used)";
		inko_disposable = 0;
		magazines[] = {"tb_RPG18_used"};
		model = "\tb_launcher_rpg\rpg18_used";
		scope =1;	
		weight = 14;
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 140;
			allowedslots[] = {901};
		};
	};
};

class CfgMagazines {
	class RPG32_F;
	class tb_RPG18 : RPG32_F {
		inko_disposable = 1;
		ammo = "tb_R_RPG18_AT";
		descriptionshort = "Range: 0 - 200 m <br/>Type: HEAT <br/>Used in: RPG18";
		initspeed = 133;
		model = "";
		modelspecial = "\tb_launcher_rpg\rpg18_ready";
		scope = 1;
		mass = 0;
		allowedSlots[] = {801,701,901};
	};
	class tb_RPG18_used : tb_RPG18 {
		inko_disposable = 1;
		scope = 1;
		count = 0;
		allowedSlots[] = {801,701,901};
		modelspecial = 	"\tb_launcher_rpg\rpg18_used";
	};
};

class CfgAmmo {
	class R_PG32V_F;
	class tb_R_RPG18_AT : R_PG32V_F {
		model = "tb_launcher_rpg\data\rpg7\PG7_Rocket";
		fusedistance = 10;
		hit = 375;
		indirecthit = 20;
		indirecthitrange = 2.7;
		inittime = 0;
		thrust = 1;
		thrusttime = 0.01;
		visiblefire = 24;
		whistledist = 2;
		whistleonfire = 0;
	};
};

class CfgVehicles {
	class INKO_NLAW_USED_TUBE;
	class tb_launcher_rpg18_used_tube : INKO_NLAW_USED_TUBE {
		model = "\tb_launcher_rpg\rpg18_used";		
	};
};
