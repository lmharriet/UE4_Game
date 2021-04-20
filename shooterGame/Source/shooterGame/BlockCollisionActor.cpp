// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockCollisionActor.h"

// Sets default values
ABlockCollisionActor::ABlockCollisionActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoxMesh"));
	RootComponent = BoxMesh;

}

// Called when the game starts or when spawned
void ABlockCollisionActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABlockCollisionActor::NotifyHit(UPrimitiveComponent* myComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Log, TEXT("NotifyHit"));
}

// Called every frame
void ABlockCollisionActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

