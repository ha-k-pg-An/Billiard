#include "GameScene.h"
#include "SceneManager.h"

void GameScene::Main()
{
	switch (current_step)
	{
	case StepKind::Init:
		Init();
		break;
	case StepKind::Run:
		Run();
		break;
	case StepKind::Finish:
		Finish();
		break;
	}
}

void GameScene::Draw()
{
	if (current_step == StepKind::Run)
	{
		//•`‰æˆ—
	}
}

//==================================================================================//

void GameScene::Init()
{


	current_step = StepKind::Run;
}

void GameScene::Run()
{


	current_step = StepKind::Finish;
}

void GameScene::Finish()
{


	current_step = StepKind::Init;
	SceneManager::Instance()->Change(SceneKind::Result);
}
