// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimStarterPack/ShooterCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}
// Cross Module References
	ANIMSTARTERPACK_API UEnum* Z_Construct_UEnum_AnimStarterPack_EWeaponClass();
	UPackage* Z_Construct_UPackage__Script_AnimStarterPack();
	ANIMSTARTERPACK_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	ANIMSTARTERPACK_API UClass* Z_Construct_UClass_AShooterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_MoveForward();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_MoveRight();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_StartADS();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_StartCrouch();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_StartJog();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_StartJump();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_StopADS();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_StopCrouch();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_StopJog();
	ANIMSTARTERPACK_API UFunction* Z_Construct_UFunction_AShooterCharacter_StopJump();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static UEnum* EWeaponClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimStarterPack_EWeaponClass, Z_Construct_UPackage__Script_AnimStarterPack(), TEXT("EWeaponClass"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeaponClass(EWeaponClass_StaticEnum, TEXT("/Script/AnimStarterPack"), TEXT("EWeaponClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimStarterPack_EWeaponClass_CRC() { return 796456101U; }
	UEnum* Z_Construct_UEnum_AnimStarterPack_EWeaponClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimStarterPack();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeaponClass"), 0, Get_Z_Construct_UEnum_AnimStarterPack_EWeaponClass_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeaponClass::AR", (int64)EWeaponClass::AR },
				{ "EWeaponClass::PISTOL", (int64)EWeaponClass::PISTOL },
				{ "EWeaponClass::LAUNCHER", (int64)EWeaponClass::LAUNCHER },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AR.DisplayName", "Assault Rifle" },
				{ "BlueprintType", "true" },
				{ "LAUNCHER.DisplayName", "Rocket Launcher" },
				{ "ModuleRelativePath", "ShooterCharacter.h" },
				{ "PISTOL.DisplayName", "Pistol" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimStarterPack,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWeaponClass",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWeaponClass",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AShooterCharacter_ServerSetMaxWalkSpeed = FName(TEXT("ServerSetMaxWalkSpeed"));
	void AShooterCharacter::ServerSetMaxWalkSpeed(float speed)
	{
		ShooterCharacter_eventServerSetMaxWalkSpeed_Parms Parms;
		Parms.speed=speed;
		ProcessEvent(FindFunctionChecked(NAME_AShooterCharacter_ServerSetMaxWalkSpeed),&Parms);
	}
	static FName NAME_AShooterCharacter_ServerSetSomeBool = FName(TEXT("ServerSetSomeBool"));
	void AShooterCharacter::ServerSetSomeBool(bool bNewSomeBool)
	{
		ShooterCharacter_eventServerSetSomeBool_Parms Parms;
		Parms.bNewSomeBool=bNewSomeBool ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AShooterCharacter_ServerSetSomeBool),&Parms);
	}
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
		UClass* Class = AShooterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AShooterCharacter::execMoveForward },
			{ "MoveRight", &AShooterCharacter::execMoveRight },
			{ "ServerSetMaxWalkSpeed", &AShooterCharacter::execServerSetMaxWalkSpeed },
			{ "ServerSetSomeBool", &AShooterCharacter::execServerSetSomeBool },
			{ "SetMaxWalkSpeed", &AShooterCharacter::execSetMaxWalkSpeed },
			{ "StartADS", &AShooterCharacter::execStartADS },
			{ "StartCrouch", &AShooterCharacter::execStartCrouch },
			{ "StartJog", &AShooterCharacter::execStartJog },
			{ "StartJump", &AShooterCharacter::execStartJump },
			{ "StopADS", &AShooterCharacter::execStopADS },
			{ "StopCrouch", &AShooterCharacter::execStopCrouch },
			{ "StopJog", &AShooterCharacter::execStopJog },
			{ "StopJump", &AShooterCharacter::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics
	{
		struct ShooterCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ShooterCharacter_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "MoveForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(ShooterCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics
	{
		struct ShooterCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ShooterCharacter_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "MoveRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(ShooterCharacter_eventMoveRight_Parms), Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::NewProp_speed = { UE4CodeGen_Private::EPropertyClass::Float, "speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ShooterCharacter_eventServerSetMaxWalkSpeed_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "set max walk speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "ServerSetMaxWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(ShooterCharacter_eventServerSetMaxWalkSpeed_Parms), Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics
	{
		static void NewProp_bNewSomeBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewSomeBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::NewProp_bNewSomeBool_SetBit(void* Obj)
	{
		((ShooterCharacter_eventServerSetSomeBool_Parms*)Obj)->bNewSomeBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::NewProp_bNewSomeBool = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewSomeBool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ShooterCharacter_eventServerSetSomeBool_Parms), &Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::NewProp_bNewSomeBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::NewProp_bNewSomeBool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "ServerSetSomeBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x80220CC0, sizeof(ShooterCharacter_eventServerSetSomeBool_Parms), Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics
	{
		struct ShooterCharacter_eventSetMaxWalkSpeed_Parms
		{
			float speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::NewProp_speed = { UE4CodeGen_Private::EPropertyClass::Float, "speed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ShooterCharacter_eventSetMaxWalkSpeed_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "SetMaxWalkSpeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(ShooterCharacter_eventSetMaxWalkSpeed_Parms), Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StartADS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StartADS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Activate crouch flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StartADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "StartADS", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StartADS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StartADS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StartADS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StartADS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StartCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StartCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Activate crouch flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StartCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "StartCrouch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StartCrouch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StartCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StartCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StartCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StartJog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StartJog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Activate jog flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StartJog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "StartJog", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StartJog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StartJog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StartJog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StartJog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StartJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Sets jump flag when key is pressed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "StartJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StartJump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StopADS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StopADS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Deactivate crouch flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StopADS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "StopADS", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StopADS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StopADS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StopADS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StopADS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StopCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StopCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Deactivate crouch flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StopCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "StopCrouch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StopCrouch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StopCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StopCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StopCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StopJog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StopJog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Deactivate jog flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StopJog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "StopJog", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StopJog_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StopJog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StopJog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StopJog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_StopJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Clears jump flag when key is released." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, "StopJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_StopJump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AShooterCharacter_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_testBool_MetaData[];
#endif
		static void NewProp_testBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_testBool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aimPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_aimPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JogSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JogSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsADS_MetaData[];
#endif
		static void NewProp_IsADS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsADS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ADSPressed_MetaData[];
#endif
		static void NewProp_ADSPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ADSPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WeaponType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WeaponType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchPressed_MetaData[];
#endif
		static void NewProp_CrouchPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CrouchPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JogPressed_MetaData[];
#endif
		static void NewProp_JogPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JogPressed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimStarterPack,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_MoveForward, "MoveForward" }, // 3063487547
		{ &Z_Construct_UFunction_AShooterCharacter_MoveRight, "MoveRight" }, // 3797358591
		{ &Z_Construct_UFunction_AShooterCharacter_ServerSetMaxWalkSpeed, "ServerSetMaxWalkSpeed" }, // 369515209
		{ &Z_Construct_UFunction_AShooterCharacter_ServerSetSomeBool, "ServerSetSomeBool" }, // 2266409760
		{ &Z_Construct_UFunction_AShooterCharacter_SetMaxWalkSpeed, "SetMaxWalkSpeed" }, // 2932728018
		{ &Z_Construct_UFunction_AShooterCharacter_StartADS, "StartADS" }, // 3199592265
		{ &Z_Construct_UFunction_AShooterCharacter_StartCrouch, "StartCrouch" }, // 2892820643
		{ &Z_Construct_UFunction_AShooterCharacter_StartJog, "StartJog" }, // 81677094
		{ &Z_Construct_UFunction_AShooterCharacter_StartJump, "StartJump" }, // 4076067663
		{ &Z_Construct_UFunction_AShooterCharacter_StopADS, "StopADS" }, // 3581530190
		{ &Z_Construct_UFunction_AShooterCharacter_StopCrouch, "StopCrouch" }, // 1443822407
		{ &Z_Construct_UFunction_AShooterCharacter_StopJog, "StopJog" }, // 2121424910
		{ &Z_Construct_UFunction_AShooterCharacter_StopJump, "StopJump" }, // 1074370159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterCharacter.h" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_testBool_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_testBool_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->testBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_testBool = { UE4CodeGen_Private::EPropertyClass::Bool, "testBool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_testBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_testBool_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_testBool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aimPitch_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aimPitch = { UE4CodeGen_Private::EPropertyClass::Float, "aimPitch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000025, 1, nullptr, STRUCT_OFFSET(AShooterCharacter, aimPitch), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aimPitch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aimPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SprintSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "SprintSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AShooterCharacter, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SprintSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CrouchSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AShooterCharacter, CrouchSpeed), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogSpeed_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "JogSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AShooterCharacter, JogSpeed), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsADS_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsADS_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->IsADS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsADS = { UE4CodeGen_Private::EPropertyClass::Bool, "IsADS", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsADS_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsADS_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsADS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ADSPressed_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ADSPressed_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->ADSPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ADSPressed = { UE4CodeGen_Private::EPropertyClass::Bool, "ADSPressed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ADSPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ADSPressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ADSPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponType_MetaData[] = {
		{ "Category", "Enum" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponType = { UE4CodeGen_Private::EPropertyClass::Enum, "WeaponType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AShooterCharacter, WeaponType), Z_Construct_UEnum_AnimStarterPack_EWeaponClass, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchPressed_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchPressed_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->CrouchPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchPressed = { UE4CodeGen_Private::EPropertyClass::Bool, "CrouchPressed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchPressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogPressed_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogPressed_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->JogPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogPressed = { UE4CodeGen_Private::EPropertyClass::Bool, "JogPressed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogPressed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogPressed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogPressed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "ShooterCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(AShooterCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_testBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aimPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_SprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsADS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ADSPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CrouchPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_JogPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
		&AShooterCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AShooterCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterCharacter, 3861443695);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterCharacter(Z_Construct_UClass_AShooterCharacter, &AShooterCharacter::StaticClass, TEXT("/Script/AnimStarterPack"), TEXT("AShooterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
