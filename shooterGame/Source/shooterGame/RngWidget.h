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
	
	void GenerateRandom();
	UPROPERTY(meta = (BindWidget))
		class UTextBlock* RandomNumberLable;

	UPROPERTY(meta = (BindWidget))
		class UButton* GenerateButton;
	UFUNCTION()
		void OnGenerateButtonClicked();


	 void NativeConstruct() override;

};
