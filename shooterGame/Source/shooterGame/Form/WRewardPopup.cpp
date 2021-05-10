// Fill out your copyright notice in the Description page of Project Settings.


#include "shooterGame/Form/WRewardPopup.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"



void UWRewardPopup::InitWidget()
{
	WIDGETBIND(UButton, Bt_CancleBt);

	if (nullptr != Bt_CancleBt)
	{
		Bt_CancleBt->OnClicked.AddDynamic(this, &UWRewardPopup::CloseTap);
	}

	WIDGETBIND(UButton, Bt_Reward);
	if (nullptr != Bt_Reward)
	{
		Bt_Reward->OnClicked.AddDynamic(this, &UWRewardPopup::GetReward);
	}

	WIDGETBIND(UTextBlock, Text_Reward_Line)
		if (nullptr != Text_Reward_Line) 
			Text_Reward_Line->SetText(FText::FromString(" "));


}

void UWRewardPopup::ReleaseWidget()
{
	Bt_CancleBt = nullptr;
	Bt_Reward = nullptr;
	Text_Reward_Line = nullptr;
}

void UWRewardPopup::CloseTap()
{
	this->SetVisibility(ESlateVisibility::Collapsed);
}

void UWRewardPopup::GetReward()
{
	Text_Reward_Line->SetText(FText::FromString("Didn't get any reward")); 

	bActiveTimer = true;

}

void UWRewardPopup::ResetText()
{
	 Text_Reward_Line->SetText(FText::FromString(" "));
}