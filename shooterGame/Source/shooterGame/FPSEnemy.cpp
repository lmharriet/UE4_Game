// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSEnemy.h"

// Sets default values
AFPSEnemy::AFPSEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EbenyMesh"));
	EnemyMesh->SetupAttachment(RootComponent);
	
	EnemyMesh->OnComponentBeginOverlap.AddDynamic(this, &AFPSEnemy::OnOverlapBegin);
	

	Hp = 20;
}

// Called when the game starts or when spawned
void AFPSEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void AFPSEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSEnemy::OnOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OthrBodyIndex, bool bFromSweep, const FHitResult& SweppResult)
{
	if (OtherActor->ActorHasTag("Bullet"))
	{
		UE_LOG(LogTemp, Log, TEXT("Bullet is here"));

		OtherActor->Destroy();

		if (Hp > 0)
		{
			Hp--;
		}
		else if (Hp <= 0)
		{
			UE_LOG(LogTemp, Log, TEXT("Enemy is Dead"));
			this->Destroy();
		}
	}
}

