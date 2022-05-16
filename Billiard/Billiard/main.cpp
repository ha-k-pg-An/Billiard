#include "DxLib.h"
#include "SceneManager.h"
#include "Common.h"
#include "ObjectBase.h"
#include "Table.h"
#include "WhiteBall.h"
#include "vector"
#include "OtherBalls.h"


int g_Handles;

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

	std::vector<int> BilliardTable{
	TABLE_LEGS,
	M_PLANE,
	DIAMONDS,
	INNER_EDGES,
	OUTER_EDGES,
	POCKETS,
	};

	std::vector<int> Cue{
		CUE,
	};

	std::vector<int> W_Ball{
		W_BALL,
	};

	std::vector<int> OtherBall01{
		BALL1,
	};

	std::vector<int> OtherBall02{
		BALL2,
	};

	std::vector<int> OtherBall03{
		BALL3,
	};

	std::vector<int> OtherBall04{
		BALL4,
	};

	std::vector<int> OtherBall05{
		BALL5,
	};

	std::vector<int> OtherBall06{
		BALL6,
	};

	std::vector<int> OtherBall07{
		BALL7,
	};

	std::vector<int> OtherBall08{
		BALL8,
	};

	std::vector<int> OtherBall09{
		BALL9,
	};

	std::vector<int> OtherBall10{
		BALL10,
	};

	std::vector<int> OtherBall11{
		BALL11,
	};

	std::vector<int> OtherBall12{
		BALL12,
	};

	std::vector<int> OtherBall13{
		BALL13,
	};

	std::vector<int> OtherBall14{
		BALL14,
	};

	std::vector<int> OtherBall15{
		BALL15,
	};

	g_Handles = MV1LoadModel("Res/Billiard_set.mv1");
	if (g_Handles == -1)
	{
		DxLib_End();
		return 0;
	}

	std::vector<ObjectBase*> objects;
	objects.push_back(new Table (g_Handles, BilliardTable, VGet(0, 0, 0)));
	objects.push_back(new WhiteBall(g_Handles, W_Ball, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall01, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall02, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall03, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall04, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall05, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall06, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall07, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall08, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall09, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall10, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall11, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall12, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall13, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall14, VGet(0, 0, 0)));
	objects.push_back(new OtherBalls(g_Handles, OtherBall15, VGet(0, 0, 0)));

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

		for (ObjectBase* object : objects)
		{
			object->Draw();
		}

		ScreenFlip();
	}

	for (auto itr = objects.begin(); itr != objects.end(); itr++)
	{
		delete(*itr);
	}

	objects.clear();

	DxLib_End();				// ＤＸライブラリ使用の終了処理

	return 0;				// ソフトの終了 
}