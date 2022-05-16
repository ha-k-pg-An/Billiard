#include "ResultScene.h"
#include "SceneManager.h"

void ResultScene::Main()
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

void ResultScene::Draw()
{
	if (current_step == StepKind::Run)
	{
		//•`‰æˆ—


	}
}

//===============================================================================//

void ResultScene::Init()
{

	current_step = StepKind::Run;
}

void ResultScene::Run()
{


	current_step = StepKind::Finish;
}

void ResultScene::Finish()
{


	current_step = StepKind::Init;
	SceneManager::Instance()->Change(SceneKind::Title);
}