// Fill out your copyright notice in the Description page of Project Settings.


#include "Noir/UI/WBContentsBarBase.h"
#include "WBContentsBarBase.h"

#include "Components/TextBlock.h"


void UWBContentsBarBase::OnOnceInItWidget()
{
	if (Text_Title != nullptr && Text_Title->IsValidLowLevel() == true)
		Text_Title->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

}
void UWBContentsBarBase::OnOnceEventConnect()
{

}

void UWBContentsBarBase::SetContentsTitle(FText InTitleText, FSlateColor InTitleColor)
{
	m_DefaultTitleColor = InTitleColor;
	if (Text_Title != nullptr && Text_Title->IsValidLowLevel() == true)
	{
		Text_Title->SetText(MoveTemp(InTitleText));
		Text_Title->SetColorAndOpacity(m_DefaultTitleColor);
	}
}

void UWBContentsBarBase::SetContentsTitle(FString InTitleFromString, FSlateColor InTitleColor)
{
	const FText& Title = FText::FromString(InTitleFromString);

	m_DefaultTitleColor = InTitleColor;

	if (Text_Title != nullptr && Text_Title->IsValidLowLevel() == true)
	{
		Text_Title->SetText(Title);
		Text_Title->SetColorAndOpacity(m_DefaultTitleColor);
	}
}
