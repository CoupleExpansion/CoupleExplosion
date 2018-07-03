#include "OGSystem\OGTask.h"
#include "Task\Title.h"
void OGTK::_myGameInitialize()
{
	//¶¬‚·‚éWindowî•ñ
	OGge->SetWindow(960, 540, "WindowName", false);	
}

void OGTK::StartTaskObject()
{
	//ƒ^ƒXƒN‚Ì‰Šú‰»
	auto TopTask = Title::Create();
}