#ifndef SCENE_MANAGER_H_
#define SCENE_MANAGER_H_

#include "SceneBase.h"

enum SceneKind
{
	Title,
	Game,
	Result,
};

class SceneManager
{
public:
	static SceneManager* Instance()
	{
		static SceneManager instance;
		return &instance;
	}

	void Change(SceneKind next_scene);
	void Update();
	void Draw();

private:
	SceneBase* pSceneBase;

private:
	SceneManager()
	{

	}

	~SceneManager()
	{
		delete pSceneBase;
	}

	SceneManager(SceneManager& instance) = delete;
};

#endif // !SCENE_MANAGER_H_
