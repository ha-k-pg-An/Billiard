#ifndef GAME_SCENE_H_
#define GAME_SCENE_H_

#include "SceneBase.h"

class GameScene : public SceneBase
{
public:
	GameScene()
	{

	}

	virtual ~GameScene()
	{

	}

public:
	void Main() override;
	void Draw() override;

private:
	void Init() override;
	void Run() override;
	void Finish() override;


};

#endif // !GAME_SCENE_H_
