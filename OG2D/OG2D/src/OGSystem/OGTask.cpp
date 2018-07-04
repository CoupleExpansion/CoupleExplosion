#include "OGSystem\OGTask.h"
#include "Task\Title.h"
void OGTK::_myGameInitialize()
{
	//��������Window���
	OGge->SetWindow(960, 540, "WindowName", false);	
	
}

void OGTK::StartTaskObject()
{
	Texture* cursorImg = new Texture();
	cursorImg->Create("cursor.png");
	rm->SetTextureData("Cursor", cursorImg);
	Texture* aimingImg = new Texture();
	aimingImg->Create("aiming.png");
	rm->SetTextureData("Aiming", aimingImg);
	//�^�X�N�̏�����
	auto TopTask = Title::Create();
	
}

OGTK::~OGTK()
{
	if (rm->GetTextureData("Cursor"))
	{
		delete rm->GetTextureData("Cursor");
	}
	if (rm->GetTextureData("Aiming"))
	{
		delete rm->GetTextureData("Aiming");
	}
}