// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "shooterGame/Form/WFormBase.h"
#include "WRewardPopup.generated.h"

/**
 *
 */
UCLASS()
class SHOOTERGAME_API UWRewardPopup : public UWFormBase
{
	GENERATED_BODY()

public:

	void InitWidget();
	void ReleaseWidget();

};
