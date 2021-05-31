// Fill out your copyright notice in the Description page of Project Settings.


#include "StudyUE4/Widgets/WArenMain.h"
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
		frmP_RewardPop->SetRewardEvent(UWRewardPopup::FOnClickRewardEvent::
			CreateUObject(this, &UWArenMain::RewardByResult));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("null값입니다."));
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
	
	if (frmP_RewardPop->GetActiveTimer() && m_Timer>0)
	{
		m_Timer--;
		
		if (m_Timer <= 0)
		{
			frmP_RewardPop->SetActiveTimer(false);
			m_Timer = 20;
			
			frmP_RewardPop->ResetText();
		}
	}
}

void UWArenMain::ShowPopup()
{
	frmP_RewardPop->SetVisibility(ESlateVisibility::Visible);
}

void UWArenMain::HidePopUp()
{
	frmP_RewardPop->SetVisibility(ESlateVisibility::Collapsed);
}

void UWArenMain::RewardByResult()
{

}
