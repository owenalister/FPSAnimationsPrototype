// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterCharacter.h"
#include "UnrealNetwork.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// attatch camera to character
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->bUsePawnControlRotation = true;

	WeaponType = EWeaponClass::AR;
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	Camera->AttachTo(RootComponent);
	CrouchSpeed = 160;
	JogSpeed = 350;
	SprintSpeed = 500;
	GetCharacterMovement()->MaxWalkSpeed = JogSpeed;
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsLocallyControlled()) 
	{
		aimPitch = Camera->GetComponentRotation().Pitch;
	}
	
}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &AShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AShooterCharacter::MoveRight);

	// Set up "look" bindings.
	PlayerInputComponent->BindAxis("Turn", this, &AShooterCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AShooterCharacter::AddControllerPitchInput);

	// Set up "action" bindings.
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AShooterCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AShooterCharacter::StopJump);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AShooterCharacter::StartJog);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AShooterCharacter::StopJog);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AShooterCharacter::StartCrouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AShooterCharacter::StopCrouch);
	PlayerInputComponent->BindAction("ADS", IE_Pressed, this, &AShooterCharacter::StartADS);
	PlayerInputComponent->BindAction("ADS", IE_Released, this, &AShooterCharacter::StopADS);
}

void AShooterCharacter::MoveForward(float Value)
{

	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(GetActorForwardVector(), Value);
}

void AShooterCharacter::MoveRight(float Value)
{
	FVector Direction = GetActorRightVector();
	AddMovementInput(Direction, Value);
}

void AShooterCharacter::StartJump()
{
	bPressedJump = true;
}

void AShooterCharacter::StopJump()
{
	bPressedJump = false;
}

void AShooterCharacter::StartJog()
{
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	JogPressed = true;
}

void AShooterCharacter::StopJog()
{
	JogPressed = false;
	if (CrouchPressed)
	{
		GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed;
	}
	else {
		GetCharacterMovement()->MaxWalkSpeed = JogSpeed;
	}
	if (ADSPressed)
		IsADS = true;
}

void AShooterCharacter::StartCrouch()
{
	CrouchPressed = true;
	GetCharacterMovement()->MaxWalkSpeed = CrouchSpeed;
}

void AShooterCharacter::StopCrouch()
{
	CrouchPressed = false;
	if(JogPressed)
	{
		GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = JogSpeed;
	}
}

void AShooterCharacter::StartADS()
{
	ADSPressed = true;
	if (!JogPressed)
	{
		IsADS = true;
	}
}

void AShooterCharacter::StopADS()
{
	ADSPressed = false;
	IsADS = false;
}

void AShooterCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	DOREPLIFETIME(AShooterCharacter, IsADS);
	DOREPLIFETIME(AShooterCharacter, CrouchPressed);
	DOREPLIFETIME(AShooterCharacter, JogPressed);
	DOREPLIFETIME(AShooterCharacter, aimPitch);
}