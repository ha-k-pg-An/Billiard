#include "SceneManager.h"
#include "TitleScene.h"
#include "GameScene.h"
#include "ResultScene.h"
#include "DxLib.h"

void SceneManager::Change(SceneKind next_scene)
{
	delete(pSceneBase);
	pSceneBase = nullptr;

	switch (next_scene)
	{
	case SceneKind::Title:		
		pSceneBase = new TitleScene;
		break;

	case SceneKind::Game:
		pSceneBase = new GameScene;
		break;

	case SceneKind::Result:
		pSceneBase = new ResultScene;
		break;
	default:
		break;
	}
}

void SceneManager::Update()
{
	if (pSceneBase == nullptr)
	{
		return;
	}

	pSceneBase->Main();
}

void SceneManager::Draw()
{
	if (pSceneBase == nullptr)
	{
		return;
	}

	ClearDrawScreen();

	pSceneBase->Draw();

	ScreenFlip();
}