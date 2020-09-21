////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Wed Jul 03 15:32:20 2019 : Created on Wed Jul 03 15:32:20 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class C:/Program Files (x86)/Steam/SteamApps/common/Arma 3/Addons/missions_f_warlords/config.bin{
class CfgPatches
{
	class A3_Missions_F_Warlords
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Warlords - Playable Content";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Warlords"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMissions
{
	class MPMissions
	{
		class MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_2";
			overviewText = "$STR_A3_WL_modRules";
			overview = "A3\Data_F_Warlords\Data\wl_logo_ca.paa";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01.Altis";
		};
		class MP_Warlords_official_01_large: MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_3";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01_large.Altis";
		};
		class MP_Warlords_official_01_large2: MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_3_ver2";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01_large_ver2.Altis";
		};
		class MP_Warlords_official_01a: MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_4";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01a.Altis";
		};
		class MP_Warlords_official_01b: MP_Warlords_official_01a
		{
			briefingName = "$STR_A3_WL_scenario_name_5";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_01b.Altis";
		};
		class MP_Warlords_official_02: MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_1";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_02.Stratis";
		};
		class MP_Warlords_official_02_large: MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_8";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_02_large.Stratis";
		};
		class MP_Warlords_official_03: MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_6";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_03.Tanoa";
		};
		class MP_Warlords_official_03a: MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_7";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_03a.Tanoa";
		};
		class MP_Warlords_official_04: MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_1";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_04.Malden";
		};
		class MP_Warlords_official_04_large: MP_Warlords_official_01
		{
			briefingName = "$STR_A3_WL_scenario_name_8";
			directory = "A3\Missions_F_Warlords\MPScenarios\MP_Warlords_04_large.Malden";
		};
	};
};
class CfgDebriefing
{
	class BIS_WLVictoryWEST
	{
		title = "$STR_A3_endgame_debriefing_victory";
		subtitle = "$STR_A3_WL_game_over_victory";
		picture = "b_installation";
		pictureBackground = "\A3\Map_Altis\data\ui_Altis_ca.paa";
		pictureColor[] = {0.0,0.3,0.6,1};
	};
	class BIS_WLVictoryEAST: BIS_WLVictoryWEST
	{
		picture = "o_installation";
		pictureColor[] = {0.5,0.0,0.0,1};
	};
	class BIS_WLDefeatWEST
	{
		title = "$STR_A3_endgame_debriefing_defeat";
		subtitle = "$STR_A3_WL_game_over_loss";
		picture = "b_installation";
		pictureBackground = "\A3\Map_Altis\data\ui_Altis_ca.paa";
		pictureColor[] = {0.0,0.3,0.6,1};
	};
	class BIS_WLDefeatEAST: BIS_WLDefeatWEST
	{
		picture = "o_installation";
		pictureColor[] = {0.5,0.0,0.0,1};
	};
};
class CfgWLRequisitionPresets
{
	class A3DefaultAll
	{
		class WEST
		{
			class Infantry
			{
				class B_Soldier_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_crew_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_Helipilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_Pilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_Soldier_GL_F
				{
					cost = 125;
					requirements[] = {};
				};
				class B_medic_F
				{
					cost = 125;
					requirements[] = {};
				};
				class B_soldier_AR_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_Soldier_A_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_soldier_M_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_soldier_repair_F
				{
					cost = 200;
					requirements[] = {};
				};
				class B_HeavyGunner_F
				{
					cost = 200;
					requirements[] = {};
				};
				class B_soldier_LAT_F
				{
					cost = 250;
					requirements[] = {};
				};
				class B_soldier_LAT2_F
				{
					cost = 300;
					requirements[] = {};
				};
				class B_soldier_AT_F
				{
					cost = 300;
					requirements[] = {};
				};
				class B_soldier_AA_F
				{
					cost = 300;
					requirements[] = {};
				};
				class B_Sharpshooter_F
				{
					cost = 300;
					requirements[] = {};
				};
				class B_sniper_F
				{
					cost = 300;
					requirements[] = {};
				};
			};
			class Vehicles
			{
				class B_Quadbike_01_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_LSV_01_unarmed_F
				{
					cost = 350;
					requirements[] = {};
				};
				class B_MRAP_01_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_Truck_01_transport_F
				{
					cost = 650;
					requirements[] = {};
				};
				class B_Truck_01_fuel_F
				{
					cost = 750;
					requirements[] = {};
				};
				class B_Truck_01_medical_F
				{
					cost = 750;
					requirements[] = {};
				};
				class B_LSV_01_armed_F
				{
					cost = 1000;
					requirements[] = {};
				};
				class B_LSV_01_AT_F
				{
					cost = 1250;
					requirements[] = {};
				};
				class B_MRAP_01_hmg_F
				{
					cost = 1400;
					requirements[] = {};
				};
				class B_Truck_01_Repair_F
				{
					cost = 1500;
					requirements[] = {};
				};
				class B_MRAP_01_gmg_F
				{
					cost = 1600;
					requirements[] = {};
				};
				class B_Truck_01_ammo_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class B_APC_Wheeled_01_cannon_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class B_APC_Tracked_01_rcws_F
				{
					cost = 3500;
					requirements[] = {};
				};
				class B_APC_Tracked_01_AA_F
				{
					cost = 4000;
					requirements[] = {};
				};
				class B_MBT_01_cannon_F
				{
					cost = 5000;
					requirements[] = {};
				};
				class B_MBT_01_TUSK_F
				{
					cost = 5500;
					requirements[] = {};
				};
				class B_AFV_Wheeled_01_cannon_F
				{
					cost = 7000;
					requirements[] = {};
				};
				class B_AFV_Wheeled_01_up_cannon_F
				{
					cost = 7500;
					requirements[] = {};
				};
			};
			class Aircraft
			{
				class B_Heli_Light_01_F
				{
					cost = 1000;
					requirements[] = {"H"};
				};
				class B_Heli_Light_01_dynamicLoadout_F
				{
					cost = 2500;
					requirements[] = {"H"};
				};
				class B_Heli_Transport_01_F
				{
					cost = 3000;
					requirements[] = {"H"};
				};
				class B_Heli_Transport_03_F
				{
					cost = 4500;
					requirements[] = {"H"};
				};
				class B_Heli_Attack_01_dynamicLoadout_F
				{
					cost = 6000;
					requirements[] = {"H"};
				};
				class B_T_VTOL_01_armed_F
				{
					cost = 9000;
					requirements[] = {"H"};
				};
				class B_Plane_CAS_01_dynamicLoadout_F
				{
					cost = 10500;
					requirements[] = {"A"};
				};
				class B_Plane_Fighter_01_F
				{
					cost = 13500;
					requirements[] = {"A"};
				};
			};
			class Naval
			{
				class B_Boat_Transport_01_F
				{
					cost = 100;
					requirements[] = {"W"};
				};
				class B_Boat_Armed_01_minigun_F
				{
					cost = 750;
					requirements[] = {"W"};
				};
				class B_SDV_01_F
				{
					cost = 900;
					requirements[] = {"W"};
				};
			};
			class Gear
			{
				class Box_NATO_Ammo_F
				{
					cost = 200;
					requirements[] = {};
				};
				class Box_NATO_Grenades_F
				{
					cost = 200;
					requirements[] = {};
				};
				class Box_NATO_Wps_F
				{
					cost = 250;
					requirements[] = {};
				};
				class Box_NATO_AmmoOrd_F
				{
					cost = 250;
					requirements[] = {};
				};
				class Box_NATO_WpsLaunch_F
				{
					cost = 300;
					requirements[] = {};
				};
				class Box_NATO_WpsSpecial_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_supplyCrate_F
				{
					cost = 500;
					requirements[] = {};
				};
				class Box_NATO_AmmoVeh_F
				{
					cost = 500;
					requirements[] = {};
				};
			};
			class Defences
			{
				class B_HMG_01_F
				{
					cost = 250;
					requirements[] = {};
				};
				class B_HMG_01_high_F
				{
					cost = 250;
					requirements[] = {};
				};
				class B_GMG_01_F
				{
					cost = 250;
					requirements[] = {};
				};
				class B_GMG_01_high_F
				{
					cost = 250;
					requirements[] = {};
				};
				class B_HMG_01_A_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_GMG_01_A_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_static_AA_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_static_AT_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_SAM_System_03_F
				{
					cost = 27500;
					requirements[] = {};
					offset[] = {0,5.3,0};
				};
				class B_Radar_System_01_F
				{
					cost = 8500;
					requirements[] = {};
					offset[] = {0,5.3,0};
				};
			};
		};
		class EAST
		{
			class Infantry
			{
				class O_Soldier_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_crew_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_Helipilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_Pilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_Soldier_GL_F
				{
					cost = 125;
					requirements[] = {};
				};
				class O_medic_F
				{
					cost = 125;
					requirements[] = {};
				};
				class O_soldier_AR_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_Soldier_A_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_soldier_M_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_soldier_repair_F
				{
					cost = 200;
					requirements[] = {};
				};
				class O_HeavyGunner_F
				{
					cost = 200;
					requirements[] = {};
				};
				class O_soldier_LAT_F
				{
					cost = 250;
					requirements[] = {};
				};
				class O_soldier_AT_F
				{
					cost = 300;
					requirements[] = {};
				};
				class O_Soldier_AA_F
				{
					cost = 300;
					requirements[] = {};
				};
				class O_Sharpshooter_F
				{
					cost = 300;
					requirements[] = {};
				};
				class O_sniper_F
				{
					cost = 300;
					requirements[] = {};
				};
				class O_soldier_HAT_F
				{
					cost = 350;
					requirements[] = {};
				};
			};
			class Vehicles
			{
				class O_Quadbike_01_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_LSV_02_unarmed_F
				{
					cost = 350;
					requirements[] = {};
				};
				class O_MRAP_02_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_Truck_03_transport_F
				{
					cost = 650;
					requirements[] = {};
				};
				class O_Truck_03_Fuel_F
				{
					cost = 750;
					requirements[] = {};
				};
				class O_Truck_03_medical_F
				{
					cost = 750;
					requirements[] = {};
				};
				class O_LSV_02_armed_F
				{
					cost = 1000;
					requirements[] = {};
				};
				class O_LSV_02_AT_F
				{
					cost = 1250;
					requirements[] = {};
				};
				class O_MRAP_02_hmg_F
				{
					cost = 1400;
					requirements[] = {};
				};
				class O_Truck_03_Repair_F
				{
					cost = 1500;
					requirements[] = {};
				};
				class O_MRAP_02_gmg_F
				{
					cost = 1600;
					requirements[] = {};
				};
				class O_Truck_03_ammo_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class O_APC_Wheeled_02_rcws_v2_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class O_APC_Tracked_02_cannon_F
				{
					cost = 3500;
					requirements[] = {};
				};
				class O_APC_Tracked_02_AA_F
				{
					cost = 4000;
					requirements[] = {};
				};
				class O_MBT_02_cannon_F
				{
					cost = 5500;
					requirements[] = {};
				};
				class O_MBT_04_cannon_F
				{
					cost = 6500;
					requirements[] = {};
				};
				class O_MBT_04_command_F
				{
					cost = 7500;
					requirements[] = {};
				};
			};
			class Aircraft
			{
				class O_Heli_Light_02_unarmed_F
				{
					cost = 1500;
					requirements[] = {"H"};
				};
				class O_Heli_Light_02_dynamicLoadout_F
				{
					cost = 2500;
					requirements[] = {"H"};
				};
				class O_Heli_Transport_04_F
				{
					cost = 2750;
					requirements[] = {"H"};
				};
				class O_Heli_Transport_04_covered_F
				{
					cost = 3000;
					requirements[] = {"H"};
				};
				class O_Heli_Attack_02_dynamicLoadout_F
				{
					cost = 6000;
					requirements[] = {"H"};
				};
				class O_T_VTOL_02_infantry_dynamicLoadout_F
				{
					cost = 7000;
					requirements[] = {"H"};
				};
				class O_Plane_CAS_02_dynamicLoadout_F
				{
					cost = 10500;
					requirements[] = {"A"};
				};
				class O_Plane_Fighter_02_F
				{
					cost = 13500;
					requirements[] = {"A"};
				};
			};
			class Naval
			{
				class O_Boat_Transport_01_F
				{
					cost = 100;
					requirements[] = {"W"};
				};
				class O_Boat_Armed_01_hmg_F
				{
					cost = 750;
					requirements[] = {"W"};
				};
				class O_SDV_01_F
				{
					cost = 900;
					requirements[] = {"W"};
				};
			};
			class Gear
			{
				class Box_East_Ammo_F
				{
					cost = 200;
					requirements[] = {};
				};
				class Box_East_Grenades_F
				{
					cost = 200;
					requirements[] = {};
				};
				class Box_East_Wps_F
				{
					cost = 250;
					requirements[] = {};
				};
				class Box_East_AmmoOrd_F
				{
					cost = 250;
					requirements[] = {};
				};
				class Box_East_WpsLaunch_F
				{
					cost = 300;
					requirements[] = {};
				};
				class Box_East_WpsSpecial_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_supplyCrate_F
				{
					cost = 500;
					requirements[] = {};
				};
				class Box_East_AmmoVeh_F
				{
					cost = 500;
					requirements[] = {};
				};
			};
			class Defences
			{
				class O_HMG_01_F
				{
					cost = 250;
					requirements[] = {};
				};
				class O_HMG_01_high_F
				{
					cost = 250;
					requirements[] = {};
				};
				class O_GMG_01_F
				{
					cost = 250;
					requirements[] = {};
				};
				class O_GMG_01_high_F
				{
					cost = 250;
					requirements[] = {};
				};
				class O_HMG_01_A_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_GMG_01_A_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_static_AA_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_static_AT_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_SAM_System_04_F
				{
					cost = 27500;
					requirements[] = {};
					offset[] = {0,5.3,0};
				};
				class O_Radar_System_02_F
				{
					cost = 8500;
					requirements[] = {};
					offset[] = {0,5.3,0};
				};
			};
		};
	};
	class A3DefaultInfantry: A3DefaultAll
	{
		class WEST: WEST
		{
			class Infantry: Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry: Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3DefaultVehicles: A3DefaultAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles: Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles: Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3DefaultAircraft: A3DefaultAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft: Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft: Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3DefaultNaval: A3DefaultAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval: Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval: Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3DefaultGear: A3DefaultAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear: Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear: Gear{};
			class Defences{};
		};
	};
	class A3DefaultDefences: A3DefaultAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences: Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences: Defences{};
		};
	};
	class A3PacificAll: A3DefaultAll
	{
		class WEST: WEST
		{
			class Infantry
			{
				class B_T_Soldier_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_T_crew_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_T_Helipilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_T_Pilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_T_Soldier_GL_F
				{
					cost = 125;
					requirements[] = {};
				};
				class B_T_medic_F
				{
					cost = 125;
					requirements[] = {};
				};
				class B_T_soldier_AR_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_T_Soldier_A_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_T_soldier_M_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_T_soldier_repair_F
				{
					cost = 200;
					requirements[] = {};
				};
				class B_T_soldier_LAT_F
				{
					cost = 200;
					requirements[] = {};
				};
				class B_T_soldier_AA_F
				{
					cost = 300;
					requirements[] = {};
				};
				class B_sniper_F
				{
					cost = 300;
					requirements[] = {};
				};
			};
			class Vehicles
			{
				class B_T_Quadbike_01_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_T_LSV_01_unarmed_F
				{
					cost = 350;
					requirements[] = {};
				};
				class B_T_MRAP_01_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_T_Truck_01_transport_F
				{
					cost = 650;
					requirements[] = {};
				};
				class B_T_Truck_01_fuel_F
				{
					cost = 750;
					requirements[] = {};
				};
				class B_T_Truck_01_medical_F
				{
					cost = 750;
					requirements[] = {};
				};
				class B_T_LSV_01_armed_F
				{
					cost = 1000;
					requirements[] = {};
				};
				class B_T_LSV_01_AT_F
				{
					cost = 1250;
					requirements[] = {};
				};
				class B_T_MRAP_01_hmg_F
				{
					cost = 1400;
					requirements[] = {};
				};
				class B_T_Truck_01_Repair_F
				{
					cost = 1500;
					requirements[] = {};
				};
				class B_T_MRAP_01_gmg_F
				{
					cost = 1600;
					requirements[] = {};
				};
				class B_T_Truck_01_ammo_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class B_T_APC_Wheeled_01_cannon_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class B_T_APC_Tracked_01_rcws_F
				{
					cost = 3500;
					requirements[] = {};
				};
				class B_T_APC_Tracked_01_AA_F
				{
					cost = 4000;
					requirements[] = {};
				};
				class B_T_AFV_Wheeled_01_cannon_F
				{
					cost = 4000;
					requirements[] = {};
				};
				class B_T_MBT_01_cannon_F
				{
					cost = 5000;
					requirements[] = {};
				};
			};
			class Aircraft: Aircraft{};
			class Naval: Naval{};
			class Gear: Gear{};
			class Defences: Defences{};
		};
		class EAST: EAST
		{
			class Infantry
			{
				class O_T_Soldier_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_T_crew_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_T_Helipilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_T_Pilot_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_T_Soldier_GL_F
				{
					cost = 125;
					requirements[] = {};
				};
				class O_T_medic_F
				{
					cost = 125;
					requirements[] = {};
				};
				class O_T_soldier_AR_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_T_Soldier_A_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_T_soldier_M_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_T_soldier_repair_F
				{
					cost = 200;
					requirements[] = {};
				};
				class O_T_soldier_LAT_F
				{
					cost = 200;
					requirements[] = {};
				};
				class O_T_Soldier_AA_F
				{
					cost = 300;
					requirements[] = {};
				};
				class O_sniper_F
				{
					cost = 300;
					requirements[] = {};
				};
			};
			class Vehicles
			{
				class O_T_Quadbike_01_ghex_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_T_LSV_02_unarmed_F
				{
					cost = 350;
					requirements[] = {};
				};
				class O_T_MRAP_02_ghex_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_T_Truck_03_transport_ghex_F
				{
					cost = 650;
					requirements[] = {};
				};
				class O_T_Truck_03_Fuel_ghex_F
				{
					cost = 750;
					requirements[] = {};
				};
				class O_T_Truck_03_medical_ghex_F
				{
					cost = 750;
					requirements[] = {};
				};
				class O_T_LSV_02_armed_F
				{
					cost = 1000;
					requirements[] = {};
				};
				class O_T_LSV_02_AT_F
				{
					cost = 1250;
					requirements[] = {};
				};
				class O_T_MRAP_02_hmg_ghex_F
				{
					cost = 1400;
					requirements[] = {};
				};
				class O_T_Truck_03_Repair_ghex_F
				{
					cost = 1500;
					requirements[] = {};
				};
				class O_T_MRAP_02_gmg_ghex_F
				{
					cost = 1600;
					requirements[] = {};
				};
				class O_T_Truck_03_ammo_ghex_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class O_T_APC_Wheeled_02_rcws_v2_ghex_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class O_T_APC_Tracked_02_cannon_ghex_F
				{
					cost = 3500;
					requirements[] = {};
				};
				class O_T_APC_Tracked_02_AA_ghex_F
				{
					cost = 4000;
					requirements[] = {};
				};
				class O_T_MBT_02_cannon_ghex_F
				{
					cost = 5000;
					requirements[] = {};
				};
				class O_T_MBT_04_cannon_F
				{
					cost = 6000;
					requirements[] = {};
				};
			};
			class Aircraft: Aircraft{};
			class Naval: Naval{};
			class Gear: Gear{};
			class Defences: Defences{};
		};
	};
	class A3PacificInfantry: A3PacificAll
	{
		class WEST: WEST
		{
			class Infantry: Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry: Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3PacificVehicles: A3PacificAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles: Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles: Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3PacificAircraft: A3PacificAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft: Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft: Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3PacificNaval: A3PacificAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval: Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval: Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3PacificGear: A3PacificAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear: Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear: Gear{};
			class Defences{};
		};
	};
	class A3PacificDefences: A3PacificAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences: Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences: Defences{};
		};
	};
	class A3WoodlandAll: A3DefaultAll
	{
		class WEST: WEST
		{
			class Infantry
			{
				class B_W_Soldier_GL_F
				{
					cost = 125;
					requirements[] = {};
				};
				class B_W_medic_F
				{
					cost = 125;
					requirements[] = {};
				};
				class B_W_soldier_AR_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_W_soldier_M_F
				{
					cost = 150;
					requirements[] = {};
				};
				class B_W_soldier_LAT_F
				{
					cost = 200;
					requirements[] = {};
				};
			};
			class Vehicles
			{
				class B_T_Quadbike_01_F
				{
					cost = 100;
					requirements[] = {};
				};
				class B_T_LSV_01_unarmed_F
				{
					cost = 350;
					requirements[] = {};
				};
				class B_T_MRAP_01_F
				{
					cost = 500;
					requirements[] = {};
				};
				class B_T_Truck_01_transport_F
				{
					cost = 650;
					requirements[] = {};
				};
				class B_T_Truck_01_fuel_F
				{
					cost = 750;
					requirements[] = {};
				};
				class B_T_Truck_01_medical_F
				{
					cost = 750;
					requirements[] = {};
				};
				class B_T_LSV_01_armed_F
				{
					cost = 1000;
					requirements[] = {};
				};
				class B_T_LSV_01_AT_F
				{
					cost = 1250;
					requirements[] = {};
				};
				class B_T_MRAP_01_hmg_F
				{
					cost = 1400;
					requirements[] = {};
				};
				class B_T_Truck_01_Repair_F
				{
					cost = 1500;
					requirements[] = {};
				};
				class B_T_MRAP_01_gmg_F
				{
					cost = 1600;
					requirements[] = {};
				};
				class B_T_Truck_01_ammo_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class B_T_APC_Wheeled_01_cannon_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class B_T_APC_Tracked_01_rcws_F
				{
					cost = 3500;
					requirements[] = {};
				};
				class B_T_APC_Tracked_01_AA_F
				{
					cost = 4000;
					requirements[] = {};
				};
				class B_T_AFV_Wheeled_01_cannon_F
				{
					cost = 4000;
					requirements[] = {};
				};
				class B_T_MBT_01_cannon_F
				{
					cost = 5000;
					requirements[] = {};
				};
			};
			class Aircraft: Aircraft{};
			class Naval: Naval{};
			class Gear: Gear{};
			class Defences: Defences{};
		};
		class EAST: EAST
		{
			class Infantry
			{
				class O_R_Soldier_GL_F
				{
					cost = 125;
					requirements[] = {};
				};
				class O_R_medic_F
				{
					cost = 125;
					requirements[] = {};
				};
				class O_R_soldier_AR_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_R_soldier_M_F
				{
					cost = 150;
					requirements[] = {};
				};
				class O_R_soldier_LAT_F
				{
					cost = 200;
					requirements[] = {};
				};
			};
			class Vehicles
			{
				class O_T_Quadbike_01_ghex_F
				{
					cost = 100;
					requirements[] = {};
				};
				class O_T_LSV_02_unarmed_F
				{
					cost = 350;
					requirements[] = {};
				};
				class O_T_MRAP_02_ghex_F
				{
					cost = 500;
					requirements[] = {};
				};
				class O_T_Truck_03_transport_ghex_F
				{
					cost = 650;
					requirements[] = {};
				};
				class O_T_Truck_03_Fuel_ghex_F
				{
					cost = 750;
					requirements[] = {};
				};
				class O_T_Truck_03_medical_ghex_F
				{
					cost = 750;
					requirements[] = {};
				};
				class O_T_LSV_02_armed_F
				{
					cost = 1000;
					requirements[] = {};
				};
				class O_T_LSV_02_AT_F
				{
					cost = 1250;
					requirements[] = {};
				};
				class O_T_MRAP_02_hmg_ghex_F
				{
					cost = 1400;
					requirements[] = {};
				};
				class O_T_Truck_03_Repair_ghex_F
				{
					cost = 1500;
					requirements[] = {};
				};
				class O_T_MRAP_02_gmg_ghex_F
				{
					cost = 1600;
					requirements[] = {};
				};
				class O_T_Truck_03_ammo_ghex_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class O_T_APC_Wheeled_02_rcws_v2_ghex_F
				{
					cost = 3000;
					requirements[] = {};
				};
				class O_T_APC_Tracked_02_cannon_ghex_F
				{
					cost = 3500;
					requirements[] = {};
				};
				class O_T_APC_Tracked_02_AA_ghex_F
				{
					cost = 4000;
					requirements[] = {};
				};
				class O_T_MBT_02_cannon_ghex_F
				{
					cost = 5000;
					requirements[] = {};
				};
				class O_T_MBT_04_cannon_F
				{
					cost = 6000;
					requirements[] = {};
				};
			};
			class Aircraft: Aircraft{};
			class Naval: Naval{};
			class Gear: Gear{};
			class Defences: Defences{};
		};
	};
	class A3WoodlandInfantry: A3WoodlandAll
	{
		class WEST: WEST
		{
			class Infantry: Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry: Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3WoodlandVehicles: A3WoodlandAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles: Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles: Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3WoodlandAircraft: A3WoodlandAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft: Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft: Aircraft{};
			class Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3WoodlandNaval: A3WoodlandAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval: Naval{};
			class Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval: Naval{};
			class Gear{};
			class Defences{};
		};
	};
	class A3WoodlandGear: A3WoodlandAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear: Gear{};
			class Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear: Gear{};
			class Defences{};
		};
	};
	class A3WoodlandDefences: A3WoodlandAll
	{
		class WEST: WEST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences: Defences{};
		};
		class EAST: EAST
		{
			class Infantry{};
			class Vehicles{};
			class Aircraft{};
			class Naval{};
			class Gear{};
			class Defences: Defences{};
		};
	};
};
class CfgMPGameTypes
{
	class Warlords
	{
		featured = 1;
		id = 23;
		name = "$STR_A3_WL_modName";
		shortcut = "$STR_A3_WL_modName";
		description = "";
		picture = "\a3\Data_F_Warlords\Data\wl_logo_ca.paa";
	};
};
//};
