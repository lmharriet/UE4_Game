// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Noir/UI/WIBaseItem.h"
#include "WIBaseItem_PengCard.generated.h"

/**
 * 
 */
UCLASS()
class NOIR_API UWIBaseItem_PengCard : public UWIBaseItem
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	void OnOnceInit();
	void OnOnceEventConnect();
	void ReleaseWidget();
	
};
