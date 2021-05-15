// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StudyUE4/WorldDefine.h"
#include "StudyUE4/Widgets/WFormBase.h"

#include "StudyUE4/Widgets/WRewardPopup.h"
#include "WArenMain.generated.h" // 리플렉션


/**
 *
 */

class UButton;


UCLASS()
class STUDYUE4_API UWArenMain : public UWFormBase
{
	GENERATED_BODY()

public:

	enum class EPopUpList : uint8
	{
		E_NONE=0,
		E_MAIN =1,
		E_REWARD,
	};


	virtual void NativeConstruct() override;
	void InitWidget();
	void ReleaseWidget();

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void ShowPopup();
	UFUNCTION(BlueprintCallable)
	void HidePopUp();

private:
	
	UButton* Bt_Season = nullptr;

	UWRewardPopup* frmP_RewardPop = nullptr;

	int32 m_Timer = 20;
};
