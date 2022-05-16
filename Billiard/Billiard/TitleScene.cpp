#include "TitleScene.h"
#include "SceneManager.h"

void TitleScene::Main()
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

void TitleScene::Draw()
{
	if (current_step == StepKind::Run)
	{
		//•`‰æˆ—
	}
}

//========================================================================================//

void TitleScene::Init()
{


	current_step = StepKind::Run;
}

void TitleScene::Run()
{


	current_step = StepKind::Finish;
}

void TitleScene::Finish()
{


	current_step = StepKind::Init;
	SceneManager::Instance()->Change(SceneKind::Game);
}
