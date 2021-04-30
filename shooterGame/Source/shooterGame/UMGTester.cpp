// Fill out your copyright notice in the Description page of Project Settings.


#include "UMGTester.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/Image.h"
#include "Components/CanvasPanel.h"
#include "Components/Button.h"



void UUMGTester::NativeConstruct()
{
	Super::NativeConstruct();

	//파라미터 받는 법? utextbox에 받는 법??
	m_ChangeNameButton->OnClicked.AddDynamic(this, &UUMGTester::SetNewName);
}

void UUMGTester::SetNewName()
{
	
}