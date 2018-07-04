#pragma once

#include "OGSystem\OGsystem.h"
#include "Object\Object.h"
class Player : public GameObject, public TaskObject
{
	//class,enum�錾
	enum Mode
	{
		Non,
		Cursor,
		Aiming,
	};
	//�t�B�[���h�錾
	Texture* image;					//�`��p�摜
	Box2D* draw;					//�`��ʒu
	Box2D* src;						//���摜�`��ʒu
	Mode* mode;						//�X�V���[�h����p�ϐ�
	//���\�b�h�錾
	void CursorUpDate();			//�J�[�\�����X�V����
	void AimingUpDate();			//�Ə����X�V����
	void InputMove();				//���͂̈ړ����s��
	void SetMode(const Mode&);	//���[�h�ύX���s��
public:
	//���J�t�B�[���h�錾
	Player(const Vec2& pos);		//�R���X�g���N�^�A������
	virtual ~Player();				//�f�X�g���N�^�A���
	typedef std::shared_ptr<Player> SP;
	static SP Create(const Vec2& pos);	//����
	void UpDate();					//�X�V
	void Render2D();				//�`��
	void SetTexture(Texture*);		//�g�p�摜��o�^����
	
};