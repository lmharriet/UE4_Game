// Fill out your copyright notice in the Description page of Project Settings.


#include "RngWidget.h"
#include "Components/TextBlock.h"
#include "Components/ScaleBox.h"
#include "Components/Button.h"
void URngWidget::NativeConstruct()
{
	Super::NativeConstruct();

	RandomLable = NewObject<UTextBlock>();
	scaleBox = NewObject<UScaleBox>();
	button = NewObject<UButton>();
}

void URngWidget::ButtonClicked()
{

}