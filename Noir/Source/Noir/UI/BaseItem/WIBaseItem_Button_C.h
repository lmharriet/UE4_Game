// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Noir/UI/WIBaseItem.h"
#include "WIBaseItem_Button_C.generated.h"

/**
 *
 */
class UButton;

UCLASS()
class NOIR_API UWIBaseItem_Button_C : public UWIBaseItem
{
	GENERATED_BODY()

public:

	DECLARE_DELEGATE(FOnClickEvent);

public:

	void InitWidget();
	void EventConnect();
	void ReleaseWidget();

	void SetOnCommonBtEvent(FOnClickEvent InEvent) { m_CommonBtClick = InEvent; }
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widget")
		UButton* Bt_Common = nullptr;

	
private:
	UFUNCTION()
		void OnClick_CommonButton();
private:
	FOnClickEvent m_CommonBtClick;

};
