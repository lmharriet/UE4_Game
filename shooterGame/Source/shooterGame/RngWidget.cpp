// Fill out your copyright notice in the Description page of Project Settings.


#include "RngWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
void URngWidget::NativeConstruct()
{
	Super::NativeConstruct();

	GenerateRandom();

	GenerateButton->OnClicked.AddUniqueDynamic(this, &URngWidget::OnGenerateButtonClicked);
}

void URngWidget::GenerateRandom()
{
	int32 RandomNumber = FMath::RandRange(0, 100);
	RandomNumberLable->SetText(FText::AsNumber(RandomNumber));

}

void URngWidget::OnGenerateButtonClicked()
{
	GenerateRandom();

}