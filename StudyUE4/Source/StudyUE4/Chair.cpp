// Fill out your copyright notice in the Description page of Project Settings.


#include "Chair.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AChair::AChair()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	RootComponent = CreateDefaultSubobject<USceneComponent>("ChairRootComponent");
	ChairMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Chair Mesh"));

	ChairMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AChair::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChair::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

