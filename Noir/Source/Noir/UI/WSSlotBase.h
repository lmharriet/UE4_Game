// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WSSlotBase.generated.h"

/**
 * 
 */
UCLASS()
class NOIR_API UWSSlotBase : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void InitializeWidget() {};
	virtual void EventConnect() {};
	virtual void ReleaseWidget() {}

protected:

private:

public:

};
