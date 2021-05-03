// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PopupTester.generated.h"

/**
 * 
 */

class UButton;


UCLASS()
class SHOOTERGAME_API UPopupTester : public UUserWidget
{
	GENERATED_BODY()
	
		
public :

	UButton* m_YesBtn;
	UButton* m_NoBtn;




};
