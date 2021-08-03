// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WBContentsBarBase.generated.h"


class UImage;
class UTextBlock;
/**
 *
 */
UCLASS()
class NOIR_API UWBContentsBarBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void OnOnceInItWidget();
	virtual void OnOnceEventConnect();

protected:
	void SetContentsTitle(FText InTitleText, FSlateColor InTitleColor);
	void SetContentsTitle(FString InTitleFromString, FSlateColor InTitleColor);

protected:

	UPROPERTY(EditAnywhere, meta = (BindWidget))
		UTextBlock* Text_Title = nullptr; //common bar title which is able to set the text;
private:
	//TArray<>
	FSlateColor m_DefaultTitleColor;
};
