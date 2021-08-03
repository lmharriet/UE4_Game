// Fill out your copyright notice in the Description page of Project Settings.


#include "Noir/Player/CMonster.h"

// Sets default values
ACMonster::ACMonster()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACMonster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACMonster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACMonster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

