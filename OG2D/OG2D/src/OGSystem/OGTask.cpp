#include "OGSystem\OGTask.h"
#include "Task\Title.h"
void OGTK::_myGameInitialize()
{
	//生成するWindow情報
	OGge->SetWindow(960, 540, "WindowName", false);	
}

void OGTK::StartTaskObject()
{
	//タスクの初期化
	auto TopTask = Title::Create();
}