// Fill out your copyright notice in the Description page of Project Settings.


#include "shooterGame/Widgets/PopupTester.h"
#include "Components/Button.h"



void UPopupTester::InitWidget()
{
	m_YesBtn = Cast<UButton>(GetWidgetFromName(FName("m_YesBtn")));
}

void UPopupTester::ReleaseWidget()
{
	ButtonCliked->Unbind();
}

void UPopupTester::SetVisibility(ESlateVisibility InVisibility)
{
	Visibility = InVisibility;
}

void UPopupTester::SetBtn()
{
	if (nullptr != m_YesBtn && m_YesBtn->IsValidLowLevel())
	{
		this->SetVisibility(ESlateVisibility::Collapsed);

	}

	if (nullptr != m_NoBtn)
	{
		this->SetVisibility(ESlateVisibility::Collapsed);
	}
}
