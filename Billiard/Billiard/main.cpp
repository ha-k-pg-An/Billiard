#include "DxLib.h"
#include "SceneManager.h"
#include "ObjectManager.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(true);

	SetGraphMode(800, 600, 32);

	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}

	SceneManager::Instance()->Change(SceneKind::Title);

//	SetCameraNearFar(0, 1000);

	SetCameraPositionAndTarget_UpVecY(
		VGet(-173, 340, 0),			// カメラ座標
		VGet(-173, 77, -1)	// 注視点
		);

	//メインループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		//SceneManager::Instance()->Update();
		//SceneManager::Instance()->Draw();

		ClearDrawScreen();

		ObjectManager::Instance()->Draw();

		ScreenFlip();
	}
		
	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}