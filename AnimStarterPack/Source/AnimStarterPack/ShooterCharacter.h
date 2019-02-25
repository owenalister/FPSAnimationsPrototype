// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/InputComponent.h"
#include "ShooterCharacter.generated.h"

UENUM(BlueprintType)
enum class EWeaponClass : uint8
{
	AR 			UMETA(DisplayName = "Assault Rifle"),
	PISTOL 		UMETA(DisplayName = "Pistol"),
	LAUNCHER	UMETA(DisplayName = "Rocket Launcher")
};

UCLASS()
class ANIMSTARTERPACK_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();


protected:
	// Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool JogPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool CrouchPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
	EWeaponClass WeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ADSPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	bool IsADS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float JogSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CrouchSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SprintSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	float aimPitch;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool testBool;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

	// Sets jump flag when key is pressed.
	UFUNCTION()
	void StartJump();

	// Clears jump flag when key is released.
	UFUNCTION()
	void StopJump();

	// Activate jog flag
	UFUNCTION()
	void StartJog();

	// Deactivate jog flag
	UFUNCTION()
	void StopJog();

	// Activate crouch flag
	UFUNCTION()
	void StartCrouch();

	// Deactivate crouch flag
	UFUNCTION()
	void StopCrouch();

	// Activate crouch flag
	UFUNCTION()
	void StartADS();

	// Deactivate crouch flag
	UFUNCTION()
	void StopADS();

	//set max walk speed
	UFUNCTION(reliable, server, WithValidation)
	void ServerSetMaxWalkSpeed(float speed);

	UFUNCTION()
	void SetMaxWalkSpeed(float speed);

	
	void SetSomeBool(bool bNewSomeBool);

	UFUNCTION(reliable, server, WithValidation)
	void ServerSetSomeBool(bool bNewSomeBool);

	//replicate variables
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
};

