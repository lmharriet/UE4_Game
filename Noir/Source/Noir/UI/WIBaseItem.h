// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WIBaseItem.generated.h"

/**
 *
 */

UCLASS()
class NOIR_API UWIBaseItem : public UUserWidget
{
	GENERATED_BODY()
public:
	DECLARE_DELEGATE(FOnClick);
	DECLARE_DELEGATE_OneParam(FOnClickActive, const bool&);


public:
	virtual void NativeConstruct() override;
	virtual void OnOnceInit();
	virtual void OnOnceEventConnect();
	virtual void ReleaseWidget();

public:
	void SetClickButtonEventSimple(FOnClick InNewEvent) { m_ClickEvent = InNewEvent; };
	void SetClickActiveButtonEvent(FOnClickActive InNewEvent) { m_ClickActiveEvent = InNewEvent; }

public:
	const int32 GetTabIdx() { return m_TabIndex; }
	
private:

	UFUNCTION()
		void ClickEvent();
	UFUNCTION()
		void ClickActiveEvent(const bool& InActiveType);

private:

	FOnClick m_ClickEvent;
	FOnClickActive m_ClickActiveEvent;

	int32 m_TabIndex = -1;
};
