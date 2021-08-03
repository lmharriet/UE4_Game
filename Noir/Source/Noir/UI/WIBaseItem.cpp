// Fill out your copyright notice in the Description page of Project Settings.


#include "Noir/UI/WIBaseItem.h"

void UWIBaseItem::NativeConstruct()
{
	Super::NativeConstruct();
}
void UWIBaseItem::OnOnceInit()
{

}
void UWIBaseItem::OnOnceEventConnect()
{
}

void UWIBaseItem::ReleaseWidget()
{
	m_ClickEvent = nullptr;
	m_ClickActiveEvent = nullptr;
}


void UWIBaseItem::ClickEvent()
{
	m_ClickEvent.ExecuteIfBound();
}

void UWIBaseItem::ClickActiveEvent(const bool& InActiveType)
{
	m_ClickActiveEvent.ExecuteIfBound(InActiveType);
}





// Fill out your copyright notice in the Description page of Project Settings.


//#include "UI/Form/AncientSlate/WLAncientSlate_Form.h"
//#include "FrameWork/WLGameInstance.h"
//#include "FunctionLibrary/WLFunctionLibrary_System.h"
//#include "UI/System/WLGameUISystem.h"
//
//#include "Components/Image.h"
//#include "Components/TextBlock.h"
//#include "Components/Button.h"
//
//#include "Table/WLTable.h"
//#include "User/WLUser.h"
//#include "User/Item/WLItem.h"
//#include "User/Item/WLItemInventory.h"
//#include "Network/WLNetwork.h"	  
//
//#include "UI/CustomWidget/UserWidget/Slot/WLGlobalNavigationBar_Slot.h"
//#include "UI/Form/AncientSlate/WLAncientSlate_ViewAll_Slot.h"
//#include "UI/Form/AncientSlate/WLSlateClass_ListItem.h"
//
//#include "UI/CustomWidget/UserWidget/ListItem/WLCommonButton_ListItem.h"
//
//#define MAX_LEVEL 100
//
//
//void UWLAncientSlate_Form::NativeConstruct()
//{
//	Super::NativeConstruct();
//}
//
//void UWLAncientSlate_Form::OnOnceInit()
//{
//	m_Table = UWLFunctionLibrary_System::GetTable(this);
//	m_User = UWLFunctionLibrary_System::GetUser(this);
//	m_GameUISystem = UWLFunctionLibrary_System::GetGameUISystem(this);
//	m_Table = UWLFunctionLibrary_System::GetTable(this);
//
//	FWLAncientSlateMain* SlateMainTable = nullptr;
//	for (int32 i = 0; i < 6; i++)
//	{
//		m_SelectedSlateType = static_cast<EClassType>(i + 1);
//		SlateMainTable = m_Table->GetAncientSlateMainPtrDataAt(i + 1);
//
//		FString SlateWidget = TEXT("ListItem_SlateClassList_") + FString::FromInt(i);
//		UWLSlateClass_ListItem* SlateClass = Cast<UWLSlateClass_ListItem>(GetWidgetFromName(FName(SlateWidget)));
//		if (SlateClass != nullptr)
//		{
//			SlateClass->InitWidget();
//			SlateClass->SetSlateClassData(m_SelectedSlateType, FText::FromName(SlateMainTable->name));
//			SlateClass->SetOnClickSlateEvent(UWLSlateClass_ListItem::FOnclickSlateEvent::CreateUObject(this, &UWLAncientSlate_Form::CallBackClickSlate));
//
//			if (m_SelectedSlateType == EClassType::warrior)
//			{
//				SlateClass->SetSelectEffect(true);
//				/*SetSlateStatDetailInfo(m_SelectedSlateType, FText::FromName(SlateMainTable->name),
//					FText::FromName(SlateMainTable->description), m_SlateLevel);*/
//
//			}
//		}
//
//		m_SlateClassList.Emplace(m_SelectedSlateType, SlateClass);
//	}
//
//	if (ListItem_ButtonNormal != nullptr && ListItem_ButtonNormal->IsValidLowLevel() == true)
//	{
//		ListItem_ButtonNormal->InitWidget();
//	}
//
//	if (frmP_AncientSlate_ViewAll != nullptr && frmP_AncientSlate_ViewAll->IsValidLowLevel() == true)
//	{
//		frmP_AncientSlate_ViewAll->InitWidget();
//	}
//
//	if (frm_Gnb != nullptr && frm_Gnb->IsValidLowLevel() == true)
//	{
//		frm_Gnb->InitWidget();
//		frm_Gnb->RefreshGNB(TEXT("frm_AncientSlate"));
//
//		//FString ContentText;
//		//m_Table->GetUiMsgStringDataAt(, ContentText);
//		//frm_Gnb->SettingGlobalNavigationBar(ContentText);
//		frm_Gnb->SettingGlobalNavigationBar(FString(TEXT("고대 석판"))); //temp 
//
//	}
//	if (Owner != nullptr && Owner->IsValidLowLevel() == true)
//		Owner->HideBattleview();
//
//	//SetLevelUpButtonActivity();
//
//	m_ItemIdx = 10005; //temp;
//
//	//OnOnceEventConnect();
//}
//
//void UWLAncientSlate_Form::OnOnceEventConnect()
//{
//	if (ListItem_ButtonNormal != nullptr && ListItem_ButtonNormal->IsValidLowLevel() == true)
//	{
//		ListItem_ButtonNormal->BindClickFunction(this, "CallBackSetSlateLvUp");
//	}
//	if (Bt_Disable != nullptr && Bt_Disable->IsValidLowLevel() == true)
//	{
//		Bt_Disable->OnClicked.AddDynamic(this, &UWLAncientSlate_Form::CallBackDisableButton);
//	}
//	if (Bt_ShowEffect != nullptr && Bt_ShowEffect->IsValidLowLevel() == true)
//	{
//		Bt_ShowEffect->OnClicked.AddDynamic(this, &UWLAncientSlate_Form::On_Click_ViewAll_Effect);
//
//	}
//
//	if (frm_Gnb != nullptr && frm_Gnb->IsValidLowLevel() == true)
//	{
//		frm_Gnb->SetEventBackBtn(UWLGlobalNavigationBar_Slot::FOnClickEvent::CreateUObject(this, &UWLAncientSlate_Form::CallBackPrev));
//		frm_Gnb->SetEventOutBtn(UWLGlobalNavigationBar_Slot::FOnClickEvent::CreateUObject(this, &UWLAncientSlate_Form::CallBackExit));
//	}
//
//
//}
//
//void UWLAncientSlate_Form::ReleaseWidget()
//{
//	for (int32 i = 0; i < 6; i++)
//	{
//		FString SlateWidget = TEXT("ListItem_SlateClassList_") + FString::FromInt(i);
//		UWLSlateClass_ListItem* SlateClass = Cast<UWLSlateClass_ListItem>(GetWidgetFromName(FName(SlateWidget)));
//		if (SlateClass != nullptr)
//		{
//			SlateClass->ReleaseWidget();
//			SlateClass = nullptr;
//		}
//	}
//	m_SlateClassList.Empty();
//
//	if (frm_Gnb != nullptr && frm_Gnb->IsValidLowLevel() == true)
//	{
//		frm_Gnb->ReleaseWidget();
//	}
//	frm_Gnb = nullptr;
//	m_Table = nullptr;
//	m_Network = nullptr;
//}
//
//void UWLAncientSlate_Form::SetArgs(FWLWidgetArgs* InArgs)
//{
//	// 프로토콜 작업 없음 임시코드
//	const FWLAncientSlateMain* SlateMainTable = m_Table->GetAncientSlateMainPtrDataAt(1);
//
//	m_SelectedSlateType = EClassType::warrior; //default active slate class
//
//	for (int32 i = 0; i < 6; i++)
//	{
//		FString Level = FString(TEXT("Text_SlateLevel_")) + FString::FromInt(i);
//		UTextBlock* LevelText = Cast<UTextBlock>(GetWidgetFromName(FName(Level)));
//		LevelText->SetText(FText::FromString(FString::Printf(TEXT("Lv ")) + FString::FromInt(i + 1/*m_SlateLevel*/)));
//		//SetSlateLevel(   ) ..temp
//
//		m_UserSlateLevelList.Emplace(static_cast<EClassType>(i + 1), i + 1 /*m_SlateLevel*/);
//	}
//
//
//	if (m_UserSlateLevelList.Contains(m_SelectedSlateType) == true)
//	{
//		m_SlateLevel = m_UserSlateLevelList[m_SelectedSlateType];
//
//		SetSlateStatDetailInfo(m_SelectedSlateType, FText::FromName(SlateMainTable->name),
//			FText::FromName(SlateMainTable->description), m_SlateLevel);
//
//
//		// 석판 레벨업 버튼 활성 세팅
//		m_LvUpCost = m_Table->GetAncientSlateLvUpCostData(m_SelectedSlateType, m_SlateLevel);
//
//		if (m_SlateLevel != MAX_LEVEL || false == CheckEnoughRate(m_SelectedSlateType, m_SlateLevel))
//		{
//			SetLevelUpButtonActivity(false, m_LvUpCost);
//		}
//		else if (true == CheckEnoughRate(m_SelectedSlateType, m_SlateLevel))
//		{
//			SetLevelUpButtonActivity(true, m_LvUpCost);
//		}
//	}
//
//}
//
//void UWLAncientSlate_Form::CallBackPrev()
//{
//	if (m_GameUISystem == nullptr || m_GameUISystem->IsValidLowLevel() == false)
//	{
//		//log
//		return;
//	}
//
//	m_GameUISystem->Hide(TEXT("frm_AncientSlate"));
//	m_GameUISystem->ShowBattleview();
//
//}
//
//void UWLAncientSlate_Form::CallBackExit()
//{
//	if (m_GameUISystem == nullptr || m_GameUISystem->IsValidLowLevel() == false)
//	{
//		//log
//		return;
//	}
//	m_GameUISystem->Hide(TEXT("frm_AncientSlate"));
//	m_GameUISystem->ShowBattleview();
//
//}
//
//void UWLAncientSlate_Form::CallBackClickSlate(EClassType InSlateClass)
//{
//	const FWLAncientSlateMain* SlateMainData = m_Table->GetAncientSlateMainPtrDataAt(static_cast<int32>(InSlateClass));
//
//	if (SlateMainData == nullptr)
//	{
//		return;
//	}
//
//	m_SelectedSlateType = InSlateClass;
//
//	// Slate Display Image( middle of the form )
//	const FWLDisplayImage& ImageTable = m_Table->GetDisplayImageDataAt(SlateMainData->display_image_idx);
//
//	if (Icon_Slate_Img != nullptr && Icon_Slate_Img->IsValidLowLevel() == true)
//		Icon_Slate_Img->SetBrushResourceObject(ImageTable.image_path.LoadSynchronous());
//
//	FText SelectedClassName;
//	// Set Selected Slate Class UI
//	for (TPair<EClassType, UWLSlateClass_ListItem*> SlateClass : m_SlateClassList)
//	{
//		if (SlateClass.Key == InSlateClass)
//		{
//			SelectedClassName = SlateClass.Value->GetSlateName();
//			SlateClass.Value->SetSelectEffect(true);
//		}
//		else
//		{
//			SlateClass.Value->SetSelectEffect(false);
//		}
//	}
//	SetIconAlphaValue(static_cast<int>(InSlateClass));
//
//	m_LvUpCost = m_Table->GetAncientSlateLvUpCostData(InSlateClass, m_UserSlateLevelList[InSlateClass]);
//	m_SlateLevel = m_UserSlateLevelList[InSlateClass];
//
//	if (m_SlateLevel != MAX_LEVEL || false == CheckEnoughRate(InSlateClass, m_SlateLevel))
//	{
//		SetLevelUpButtonActivity(false, m_LvUpCost);
//	}
//	else if (true == CheckEnoughRate(InSlateClass, m_SlateLevel))
//	{
//		SetLevelUpButtonActivity(true, m_LvUpCost);
//	}
//
//	//Set Selected Slate Class Effect Info (right side slot)
//	SetSlateStatDetailInfo(InSlateClass, SelectedClassName, FText::FromName(SlateMainData->description), m_SlateLevel);
//
//}
//
//void UWLAncientSlate_Form::On_Click_ViewAll_Effect()
//{
//	if (frmP_AncientSlate_ViewAll == nullptr || frmP_AncientSlate_ViewAll->IsValidLowLevel() == false)
//	{
//		//Log
//		return;
//	}
//
//	if (m_Table == nullptr || m_Table->IsValidLowLevel() == false)
//	{
//		//Log
//		return;
//	}
//
//	frmP_AncientSlate_ViewAll->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
//	FWLAncientSlateMain* SlateMainTable = nullptr;
//	TArray<int32> BuffList;
//	EClassType SlateClassType = EClassType::none;
//
//	for (int32 i = 0; i < 6; i++)
//	{
//		SlateClassType = static_cast<EClassType>(i + 1);
//		if (m_UserSlateLevelList.Contains(SlateClassType) == true)
//		{
//			m_SlateLevel = m_UserSlateLevelList[SlateClassType];
//
//			SlateMainTable = m_Table->GetAncientSlateMainPtrDataAt(i + 1);
//			BuffList = m_Table->GetAncientSlateEffectBuffList(SlateClassType, m_SlateLevel);
//
//			frmP_AncientSlate_ViewAll->CreateSlateClassTotalEffectData(SlateClassType, m_SlateLevel,
//				FText::FromName(SlateMainTable->name), BuffList);
//		}
//
//	}
//
//}
//
//
//void UWLAncientSlate_Form::CallBackDisableButton()
//{
//	//이미 레벨업 불가능 상태일 때 들어오는 함수
//
//	if (m_Table == nullptr || m_Table->IsValidLowLevel() == false)
//	{
//		//log
//		return;
//	}
//
//	FString ContentTextMsg;
//	if (m_UserSlateLevelList.Contains(m_SelectedSlateType) == true)
//	{
//		m_SlateLevel = m_UserSlateLevelList[m_SelectedSlateType];
//
//		if (m_SlateLevel >= MAX_LEVEL)
//		{
//			m_Table->GetUiMsgStringDataAt(60326, ContentTextMsg);
//			if (m_GameUISystem != nullptr && m_GameUISystem->IsValidLowLevel() == true)
//			{
//				m_GameUISystem->ShowNoticePopup(FName(ContentTextMsg));
//			}
//			return;
//		}
//
//	}
//
//
//	m_Table->GetUiMsgStringDataAt(50002, ContentTextMsg);
//
//	if (m_GameUISystem != nullptr && m_GameUISystem->IsValidLowLevel() == true)
//	{
//		m_GameUISystem->ShowNoticePopup(FName(ContentTextMsg));
//	}
//
//}
//
//void UWLAncientSlate_Form::CallBackSetSlateLvUp()
//{
//	if (m_UserSlateLevelList.Contains(m_SelectedSlateType) == false)
//	{
//		//log 
//		return;
//	}
//
//	m_SlateLevel = m_UserSlateLevelList[m_SelectedSlateType];
//
//	//check if user has enough coin to get next level
//	const int32& currentLvUpCost = m_Table->GetAncientSlateLvUpCostData(m_SelectedSlateType, m_SlateLevel);//GNB에서 차감 되어야할 재화
//	
//	//Lv Up
//	m_SlateLevel = ++m_UserSlateLevelList[m_SelectedSlateType];
//	//New Cost by Level Up
//	m_LvUpCost = m_Table->GetAncientSlateLvUpCostData(m_SelectedSlateType, m_SlateLevel);
//
//	SetSlateLevel(m_SelectedSlateType, m_SlateLevel);
//	
//	if (false == CheckEnoughRate(m_SelectedSlateType, m_SlateLevel) || m_SlateLevel == MAX_LEVEL)
//	{
//		SetLevelUpButtonActivity(false, m_LvUpCost);
//	}
//	else
//	{
//		SetLevelUpButtonActivity(true, m_LvUpCost);
//	}
//
//	FWLAncientSlateMain* SlateMainTable = m_Table->GetAncientSlateMainPtrDataAt(static_cast<int32>(m_SelectedSlateType));
//	//set slate effect info right side slot by new Level
//	SetSlateStatDetailInfo(m_SelectedSlateType, FText::FromName(SlateMainTable->name), FText::FromName(SlateMainTable->description), m_SlateLevel);
//
//}
//
//void UWLAncientSlate_Form::SetLevelUpButtonActivity(const bool& InIsActive, const int32& InLvUpCost)
//{
//	if (InIsActive == true)
//	{
//		ListItem_ButtonDisable->SetVisibility(ESlateVisibility::Collapsed);
//		Text_LvUP_Off->SetVisibility(ESlateVisibility::Collapsed);
//		Text_LvUP->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
//		Text_LevelUpCost->SetColorAndOpacity(GetDescribeColor(EClassType::none));
//	}
//	else
//	{
//		ListItem_ButtonDisable->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
//		Text_LvUP_Off->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
//		Text_LvUP->SetVisibility(ESlateVisibility::Collapsed);
//		Text_LevelUpCost->SetColorAndOpacity(FLinearColor(1.0, 1.0, 1.0, 0.5));
//	}
//
//	//활성 비활성 상관없이 필요 재화 세팅 필요
//	Text_LevelUpCost->SetText(FText::AsNumber(InLvUpCost));
//
//}


//void UWLAncientSlate_Form::SetSlateStatDetailInfo(
//	const EClassType& InSlateType,
//	const FText& InSlateName,
//	const FText& InDescribtion,
//	const int32& InLevel)
//{
//	if (m_Table == nullptr || m_Table->IsValidLowLevel() == false)
//	{
//		//Log
//		return;
//	}
//
//	TArray<int32> SlateBuffList;
//	TArray<int32> SlateNextBuffList;
//
//	// class type Icon
//	FWLClassType ClassTypeTable = m_Table->GetClassTypeDataAt(static_cast<int32>(InSlateType));
//	FWLIconCode ClassIcon = m_Table->GetIconCodeDataAt(ClassTypeTable.icon_code_idx);
//	//To do: icon_path 일부 확인 불가 
//	//if (ClassIcon.icon_path != nullptr)
//	Icon_SlateClass->SetBrushResourceObject(ClassIcon.icon_path.LoadSynchronous());
//
//	//attribute , buff
//	SlateBuffList = m_Table->GetAncientSlateEffectBuffList(InSlateType, InLevel);
//	SlateNextBuffList = m_Table->GetAncientSlateEffectBuffList(InSlateType, InLevel + 1);
//
//	FWLSkillBuff BuffTable;
//	FWLAttributeType AttributeTable;
//	for (int i = 0; i < SlateBuffList.Num(); i++)
//	{
//		BuffTable = m_Table->GetBuffDataAt(SlateBuffList[i]);
//		AttributeTable = m_Table->GetAttributeTypeDataAt(static_cast<int32>(BuffTable.type));
//
//		//attibute
//		FString TextWidgetName = TEXT("Text_SpecType_") + FString::FromInt(i);
//		UTextBlock* EffectText = Cast<UTextBlock>(GetWidgetFromName(FName(TextWidgetName)));
//		EffectText->SetText(FText::FromName(AttributeTable.name));
//
//		//current level effect value
//		TextWidgetName = TEXT("Text_CurrentSlateEffect_") + FString::FromInt(i);
//		EffectText = Cast<UTextBlock>(GetWidgetFromName(FName(TextWidgetName)));
//		EffectText->SetText(FText::AsNumber(BuffTable.value_fixed));
//
//		//next level effect value
//		BuffTable = m_Table->GetBuffDataAt(SlateNextBuffList[i]);
//		TextWidgetName = TEXT("Text_NextSlateEffect_") + FString::FromInt(i);
//		EffectText = Cast<UTextBlock>(GetWidgetFromName(FName(TextWidgetName)));
//
//		EffectText->SetText(FText::AsNumber(BuffTable.value_fixed));
//	}
//
//
//	Text_Detail_SlateName->SetText(InSlateName);
//	Text_SlateDescribe->SetText(InDescribtion);
//	Text_SlateDescribe->SetColorAndOpacity(GetDescribeColor(InSlateType));
//	Text_PrevLevel->SetText(FText::AsNumber(InLevel));
//	Text_NextLevel->SetText(FText::AsNumber(InLevel + 1));
//
//}
//
//void UWLAncientSlate_Form::SetSlateLevel(const EClassType& InSlateType, const int32& InNewLevel)
//{
//	FString LvUp = FString(TEXT("Text_SlateLevel_")) + FString::FromInt(static_cast<int32>(InSlateType));
//	UTextBlock* LvUpText = Cast<UTextBlock>(GetWidgetFromName(FName(LvUp)));
//	LvUpText->SetText(FText::FromString(TEXT("Lv") + FString::FromInt(InNewLevel)));
//
//	Text_PrevLevel->SetText(FText::FromString(TEXT("Lv") + FString::FromInt(InNewLevel)));
//	Text_NextLevel->SetText(FText::FromString(TEXT("Lv") + FString::FromInt(InNewLevel + 1)));
//}
//
//void UWLAncientSlate_Form::SetIconAlphaValue(const int32& InSlateTypeIndex)
//{
//	FString IconName;
//	UImage* IconClass;
//	for (int32 i = 0; i < 6; i++)
//	{
//		IconName = FString(TEXT("Icon_Class_")) + FString::FromInt(i);
//		IconClass = Cast<UImage>(GetWidgetFromName(FName(IconName)));
//		if (i + 1 == InSlateTypeIndex)
//		{
//			IconClass->SetColorAndOpacity(GetDescribeColor(EClassType::none));
//		}
//		else
//		{
//			IconClass->SetColorAndOpacity(FLinearColor(1.0, 1.0, 1.0, 0.5));
//		}
//	}
//}
//
//bool UWLAncientSlate_Form::CheckEnoughRate(const EClassType& InSlateType, const int32& InNewLevel)
//{
//	if (m_Table == nullptr || m_Table->IsValidLowLevel() == false)
//	{
//		//log
//		return false;
//	}
//
//	FWLItemMain* ItemTable = m_Table->GetItemMainByID(m_ItemIdx);
//	int32 OwnCoin = 0;
//	if (ItemTable != nullptr)
//	{
//		UWLItem* SlateCoin = m_User->GetItemByUID(ItemTable->item_idx);
//		if (SlateCoin != nullptr)
//		{
//			OwnCoin = SlateCoin->GetItemCount();
//		}
//	}
//
//	m_LvUpCost = m_Table->GetAncientSlateLvUpCostData(InSlateType, InNewLevel);
//	if (OwnCoin > m_LvUpCost)
//	{
//		return true;
//	}
//	return false;
//}
//
//FLinearColor UWLAncientSlate_Form::GetDescribeColor(const EClassType& InSlateType)
//{
//	float R = 0.0f,
//		G = 0.0f,
//		B = 0.0f,
//		A = 1.0f;
//
//	switch (InSlateType)
//	{
//	case EClassType::none:
//	{
//		R = 1.0f;
//		G = 1.0f;
//		B = 1.0f;
//		A = 1.0f;
//	}
//	break;
//	case EClassType::warrior:
//	{
//		R = 0.55f;
//		G = 0.13f;
//		B = 0.13f;
//	}
//	break;
//	case EClassType::gunner:
//	{
//		R = 0.1f;
//		G = 2.0f;
//		B = 1.5f;
//	}
//	break;
//	case EClassType::magician:
//	{
//		R = 0.2f;
//		G = 0.1f;
//		B = 0.4f;
//	}
//	break;
//	case EClassType::tanker:
//	{
//		R = 0.1f;
//		G = 0.25f;
//		B = 0.38f;
//	}
//	break;
//	case EClassType::supporter:
//	{
//		R = 0.2f;
//		G = 0.4f;
//		B = 0.0f;
//	}
//	break;
//	case EClassType::assassin:
//	{
//		R = 0.6f;
//		G = 0.5f;
//		B = 0.1f;
//	}
//	break;
//	default:
//	{
//		R = 1.0f;
//		G = 1.0f;
//		B = 1.0f;
//		A = 1.0f;
//	}
//	break;
//	}
//
//	return FLinearColor(R, G, B, A);
//}



