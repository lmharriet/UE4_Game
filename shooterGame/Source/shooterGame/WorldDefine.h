#pragma once

#define WIDGETBIND(WidgetType, WidgetVariable)																																\
	WidgetVariable = Cast<WidgetType>(GetWidgetFromName(TEXT(#WidgetVariable)));																							\
	if (WidgetVariable == nullptr)																																			\
	{	FString _TempWidgetTypeName = #WidgetType, _TempWidgetVariableName = #WidgetVariable, _TempFunctionName = __FUNCTION__;												\
	ensureMsgf(false, TEXT("\n%s : <%s> %s binding failed. It might occur client-crash\n"), *_TempFunctionName, *_TempWidgetTypeName, *_TempWidgetVariableName);	}



