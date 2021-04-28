// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RngWidget.generated.h"

/**
 *
 */
UCLASS()
class SHOOTERGAME_API URngWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomLable;

	UPROPERTY(meta = (BindWidget))
		class UScaleBox* scaleBox;

	UPROPERTY(meta = (BindWidget))
		class UButton* button;

	UFUNCTION()
		void ButtonClicked();

};
