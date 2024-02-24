	class Container_Base;
    
    class Barrel_ColorBase: Container_Base
	{
		displayName="$STR_CfgVehicles_Barrel_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Barrel_ColorBase1";
		model="\dz\gear\containers\55galDrum.p3d";
		overrideDrawArea="8.0";
		forceFarBubble="true";
		slopeTolerance=0.2;
		yawPitchRollLimit[]={45,45,45};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		carveNavmesh=1;
		canBeDigged=0;
		heavyItem=1;
		inventorySlot[]=
		{
			"Truck_01_Barrel1",
			"Truck_01_Barrel2",
			"Truck_01_Barrel3",
			"Truck_01_Barrel4"
		};
		weight=10000;
		itemSize[]={10,15};
		repairableWithKits[]={10};
		repairCosts[]={30};
		itemBehaviour=0;
		stackedUnit="ml";
		randomQuantity=2;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=200000;
		absorbency=0.1;
		allowOwnedCargoManipulation=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1300;
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage=8;
					};
					class Blood
					{
						damage=8;
					};
					class Shock
					{
						damage=8;
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={15,25};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimationSources
		{
			class Lid
			{
				source="user";
				initPhase=0;
				animPeriod=0.0099999998;
			};
			class Lid2
			{
				source="user";
				initPhase=1;
				animPeriod=0.0099999998;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="barrel_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpBarrelLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBarrel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="barrel_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Barrel_Green: Barrel_ColorBase
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\containers\data\barrel_green_co.paa"
		};
		hologramMaterial="barrel";
		hologramMaterialPath="dz\gear\containers\data";
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health: Health
				{
					RefTexsMats[]=
					{
						"dz\gear\containers\data\barrel_green.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\gear\containers\data\barrel_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\gear\containers\data\barrel_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\gear\containers\data\barrel_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\gear\containers\data\barrel_green_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\gear\containers\data\barrel_green_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};