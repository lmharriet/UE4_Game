// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/Button.h"

#include "Noir/UI/BaseItem/WIBaseItem_Button_C.h"
#include "WIBaseItem_Button_C.h"

void UWIBaseItem_Button_C::InitWidget()
{

}

void UWIBaseItem_Button_C::EventConnect()
{
	if (Bt_Common != nullptr && Bt_Common->IsValidLowLevel() == true)
	{
		Bt_Common->OnClicked.AddDynamic(this, &UWIBaseItem_Button_C::OnClick_CommonButton);
	}
}

void UWIBaseItem_Button_C::ReleaseWidget()
{
	Bt_Common = nullptr;
}

void UWIBaseItem_Button_C::OnClick_CommonButton()
{
	m_CommonBtClick.ExecuteIfBound();
}
