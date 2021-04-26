// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TUTORIAL_API.generated.h"

class UProgressBar;
/**
 *
 */
UCLASS(HideDropdown)
class SHOOTERGAME_API UTUTORIAL_API : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
		float time;
	UPROPERTY(meta = (BindWidget))
		UProgressBar* healthBar;

public :
	UFUNCTION()
		void setProgressBar();

};
