// Fill out your copyright notice in the Description page of Project Settings.


#include "Noir/Item/PPickable.h"

// Sets default values
APPickable::APPickable()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APPickable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APPickable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APPickable::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

