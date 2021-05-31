// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StudyUE4/Widgets/WFormBase.h"
#include "StudyUE4/WorldDefine.h"

#include "WRewardPopup.generated.h"

/**
 *
 */

class UButton;
class UTextBlock;

UCLASS()
class STUDYUE4_API UWRewardPopup : public UWFormBase
{
	GENERATED_BODY()

public:
	DECLARE_DELEGATE(FOnClickRewardEvent);

public:

	void InitWidget();
	void ReleaseWidget();

	bool GetActiveTimer() { return bActiveTimer; }
	void SetActiveTimer(bool bTimerState) { bActiveTimer = bTimerState; }
	void ResetText();
	void SetRewardEvent(FOnClickRewardEvent InRewardEvent) { m_ClickReward = InRewardEvent; }
public:
	UFUNCTION()
		void CloseTap();
	UFUNCTION()
		void GetReward();

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* Bt_CancleBt = nullptr; //to close
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UButton* Bt_Reward = nullptr; //to get reward
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		UTextBlock* Text_Reward_Line = nullptr;

private:

	bool bActiveTimer = false;

	FOnClickRewardEvent m_ClickReward;

};
