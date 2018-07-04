#pragma once

#include "OGSystem\OGsystem.h"
#include "Object\Object.h"
class Player : public GameObject, public TaskObject
{
	//class,enum宣言
	enum Mode
	{
		Non,
		Cursor,
		Aiming,
	};
	//フィールド宣言
	Texture* image;					//描画用画像
	Box2D* draw;					//描画位置
	Box2D* src;						//元画像描画位置
	Mode* mode;						//更新モード分岐用変数
	//メソッド宣言
	void CursorUpDate();			//カーソル時更新処理
	void AimingUpDate();			//照準時更新処理
	void InputMove();				//入力の移動を行う
	void SetMode(const Mode&);	//モード変更を行う
public:
	//公開フィールド宣言
	Player(const Vec2& pos);		//コンストラクタ、初期化
	virtual ~Player();				//デストラクタ、解放
	typedef std::shared_ptr<Player> SP;
	static SP Create(const Vec2& pos);	//生成
	void UpDate();					//更新
	void Render2D();				//描画
	void SetTexture(Texture*);		//使用画像を登録する
	
};