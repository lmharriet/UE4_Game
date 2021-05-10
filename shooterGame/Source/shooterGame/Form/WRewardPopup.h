// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "shooterGame/Form/WFormBase.h"
#include "shooterGame/WorldDefine.h"

#include "WRewardPopup.generated.h"

/**
 *
 */
class UButton;
class UTextBlock;

UCLASS()
class SHOOTERGAME_API UWRewardPopup : public UWFormBase
{
	GENERATED_BODY()


public:

	void InitWidget();
	void ReleaseWidget();

	bool GetActiveTimer() { return bActiveTimer; }
	void SetActiveTimer(bool bTimerState) { bActiveTimer = bTimerState; }
	void ResetText();
public:
	UFUNCTION()
		void CloseTap();

	UFUNCTION()
		void GetReward();
	

private:
	UButton* Bt_CancleBt= nullptr; //to close
	UButton* Bt_Reward = nullptr; //to get reward
	UTextBlock* Text_Reward_Line= nullptr;

	bool bActiveTimer = false;
};
