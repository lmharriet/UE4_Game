// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
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
	
	DECLARE_DELEGATE_OneParam(FOnButtonClicked, uint8);


public:

	void InitWidget();
	void ReleaseWidget();
	virtual void SetVisibility(ESlateVisibility InVisibility) override;

	
	FOnButtonClicked* GetButtonEvent() { return ButtonCliked; }
	void SetButtonEvent(FOnButtonClicked* Event) { ButtonCliked = Event; }


	void SetBtn();
private:

	UPROPERTY(meta =(BindWidget))
	UButton* m_YesBtn;

	UPROPERTY(meta = (BindWidget))
	UButton* m_NoBtn;

	FOnButtonClicked* ButtonCliked; 
	
};
