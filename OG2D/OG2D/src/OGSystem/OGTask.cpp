#include "OGSystem\OGTask.h"
#include "Task\Title.h"
void OGTK::_myGameInitialize()
{
	//��������Window���
	OGge->SetWindow(960, 540, "WindowName", false);	
}

void OGTK::StartTaskObject()
{
	//�^�X�N�̏�����
	auto TopTask = Title::Create();
}