// Fill out your copyright notice in the Description page of Project Settings.


#include "Noir/Player/CPlayer.h"

// Sets default values
ACPlayer::ACPlayer()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	GetCapsuleComponent()->InitCapsuleSize(42.0f, 96.0f);

	//set off player rotation by camera rotate
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//set on Movement 
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 640.0f, 0.0f);

	// If use Navimesh 
	//GetCharacterMovement()->bConstrainToPlane = true;
	//GetCharacterMovement()->bSnapToPlaneAtStart = true;

	//set camera spring arm
	m_CameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("PlayerCameraSpringArm"));
	m_CameraSpringArm->SetupAttachment(RootComponent);
	m_CameraSpringArm->SetUsingAbsoluteRotation(true);
	m_CameraSpringArm->TargetArmLength = 800.0f;
	m_CameraSpringArm->SetRelativeRotation(FRotator(-60.0f, 45.0f, 0.0f));
	m_CameraSpringArm->bDoCollisionTest = false;

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerDefaultCamera"));
	m_Camera->SetupAttachment(m_CameraSpringArm, USpringArmComponent::SocketName);
	m_Camera->bUsePawnControlRotation = false;

	
	
}

// Called when the game starts or when spawned
void ACPlayer::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ACPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

