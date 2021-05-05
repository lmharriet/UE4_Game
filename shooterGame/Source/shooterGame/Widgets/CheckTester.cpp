// Fill out your copyright notice in the Description page of Project Settings.


#include "shooterGame/Widgets/CheckTester.h"
#include "Components/TextBlock.h"
#include "Components/CanvasPanel.h"
#include "Components/Button.h"


void UCheckTester::NativeConstruct()
{
	Super::NativeConstruct();

	//m_MainBtn->OnClicked;
	m_PopUpform = Cast<UPopupTester>(GetWidgetFromName(FName("frmP_shopPopUp")));
	if (nullptr != m_PopUpform)
		m_PopUpform->InitWidget();


	m_MainBtn = Cast<UButton>(GetWidgetFromName(FName("m_MainBtn")));
	if (nullptr != m_MainBtn)
		m_MainBtn->OnClicked.AddDynamic(this, &UCheckTester::ShowFrmP);
}

void UCheckTester::ShowFrmP()
{
	m_PopUpform->SetVisibility(ESlateVisibility::Visible);
}