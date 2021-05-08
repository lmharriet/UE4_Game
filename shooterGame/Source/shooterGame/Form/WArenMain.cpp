// Fill out your copyright notice in the Description page of Project Settings.


#include "shooterGame/Form/WArenMain.h"
#include "Components/Button.h"

void UWArenMain::NativeConstruct()
{
	Super::NativeConstruct();
	ShowPopup();
}

void UWArenMain::InitWidget()
{
	WIDGETBIND(UWRewardPopup, frmP_RewardPop);
	if (nullptr != frmP_RewardPop)
		frmP_RewardPop->InitWidget();

	WIDGETBIND(UButton, Bt_Season);
	if (nullptr != Bt_Season)
	{
		//delegate 
	}
	
}

void UWArenMain::ReleaseWidget()
{
	frmP_RewardPop->ReleaseWidget();
	frmP_RewardPop = nullptr;
	Bt_Season = nullptr;
}

void UWArenMain::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{

}

void UWArenMain::ShowPopup()
{
	frmP_RewardPop->SetVisibility(ESlateVisibility::Collapsed);
}

void UWArenMain::HidePopUp()
{
}
