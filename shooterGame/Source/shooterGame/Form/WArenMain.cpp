// Fill out your copyright notice in the Description page of Project Settings.


#include "shooterGame/Form/WArenMain.h"
#include "Components/Button.h"

void UWArenMain::NativeConstruct()
{
	Super::NativeConstruct();

	InitWidget();
	//ShowPopup();
}

void UWArenMain::InitWidget()
{
	WIDGETBIND(UWRewardPopup, frmP_RewardPop);
	if (nullptr != frmP_RewardPop)
	{
		frmP_RewardPop->InitWidget();
		frmP_RewardPop->SetVisibility(ESlateVisibility::Collapsed);
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("null���Դϴ�."));
	}

	WIDGETBIND(UButton, Bt_Season);
	if (nullptr != Bt_Season && frmP_RewardPop!=nullptr)
	{
		Bt_Season->OnClicked.AddDynamic(this, &UWArenMain::ShowPopup);
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
	Super::NativeTick(MyGeometry, InDeltaTime);
	
}

void UWArenMain::ShowPopup()
{
	frmP_RewardPop->SetVisibility(ESlateVisibility::Visible);
}

void UWArenMain::HidePopUp()
{
}
