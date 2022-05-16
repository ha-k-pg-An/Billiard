#ifndef TITLE_SCENE_H_
#define TITLE_SCENE_H_

#include "SceneBase.h"

class TitleScene : public SceneBase
{
public:
	TitleScene()
	{

	}

	virtual ~TitleScene()
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

#endif // !TITLE_SCENE_H_

