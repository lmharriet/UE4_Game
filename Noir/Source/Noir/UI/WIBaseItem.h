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
	virtual void NativeConstruct() override;
	virtual void OnOnceInit();
	virtual void OnOnceEventConnect();
	virtual void ReleaseWidget(); 

};
