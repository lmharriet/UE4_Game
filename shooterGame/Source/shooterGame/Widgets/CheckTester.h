// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "shooterGame/Widgets/PopupTester.h"
#include "Components/SlateWrapperTypes.h"
#include "CheckTester.generated.h"
/**
 * 
 */
class UButton;
class UTextBlock;
class UCanvasPanel;
UCLASS()
class SHOOTERGAME_API UCheckTester : public UUserWidget
{
	GENERATED_BODY()
public:
		DECLARE_DELEGATE(FOnCheckTester);


public:
	UPROPERTY(EditAnywhere, meta =(BindWidget))
	UButton* m_MainBtn;
	
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* m_BtnName;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UCanvasPanel* m_Maincanvas;

	
	void ShowFrmP();

protected:
	
	virtual void NativeConstruct() override;


private:
	UPopupTester* m_PopUpform = nullptr;
	

};
