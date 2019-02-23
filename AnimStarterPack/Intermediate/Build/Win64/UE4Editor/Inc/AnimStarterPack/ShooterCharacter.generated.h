// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMSTARTERPACK_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define ANIMSTARTERPACK_ShooterCharacter_generated_h

#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopADS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopADS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartADS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartADS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCrouch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCrouch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCrouch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCrouch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopADS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopADS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartADS) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartADS(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCrouch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCrouch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCrouch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCrouch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJog) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJog(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimStarterPack"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend struct Z_Construct_UClass_AShooterCharacter_Statics; \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimStarterPack"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter)


#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public:


#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter)


#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AShooterCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__JogPressed() { return STRUCT_OFFSET(AShooterCharacter, JogPressed); } \
	FORCEINLINE static uint32 __PPO__CrouchPressed() { return STRUCT_OFFSET(AShooterCharacter, CrouchPressed); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(AShooterCharacter, WeaponType); } \
	FORCEINLINE static uint32 __PPO__ADSPressed() { return STRUCT_OFFSET(AShooterCharacter, ADSPressed); } \
	FORCEINLINE static uint32 __PPO__IsADS() { return STRUCT_OFFSET(AShooterCharacter, IsADS); } \
	FORCEINLINE static uint32 __PPO__JogSpeed() { return STRUCT_OFFSET(AShooterCharacter, JogSpeed); } \
	FORCEINLINE static uint32 __PPO__CrouchSpeed() { return STRUCT_OFFSET(AShooterCharacter, CrouchSpeed); } \
	FORCEINLINE static uint32 __PPO__SprintSpeed() { return STRUCT_OFFSET(AShooterCharacter, SprintSpeed); }


#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_21_PROLOG
#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_RPC_WRAPPERS \
	AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_INCLASS \
	AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_INCLASS_NO_PURE_DECLS \
	AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AnimStarterPack_Source_AnimStarterPack_ShooterCharacter_h


#define FOREACH_ENUM_EWEAPONCLASS(op) \
	op(EWeaponClass::AR) \
	op(EWeaponClass::PISTOL) \
	op(EWeaponClass::LAUNCHER) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
