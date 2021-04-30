// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGTester.generated.h"

/**
 *
 */

class UTextBlock;
class UTextBox;
class UVerticalBox;
class UCanvasPanel;
class UButton;


UCLASS()
class SHOOTERGAME_API UUMGTester : public UUserWidget
{
	GENERATED_BODY()

public:

	DECLARE_DELEGATE(FOnClicked);

public:
	void SetNewName();

protected:
	virtual void NativeConstruct();
private:
	UTextBlock* m_Title;
	UTextBox* m_InputName;

	UButton* m_ChangeNameButton;
	UVerticalBox* m_Vertical;
	FString* m_CurrentName;


};
