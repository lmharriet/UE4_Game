// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "FPSEnemy.generated.h"


UCLASS()
class SHOOTERGAME_API AFPSEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* EnemyMesh;

	UPROPERTY(EditAnywhere)
		int32 Hp;


	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OthrBodyIndex, bool bFromSweep, const FHitResult& SweppResult);
};
