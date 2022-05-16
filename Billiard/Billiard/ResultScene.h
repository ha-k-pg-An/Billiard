#ifndef RESULT_SCENE_H_
#define RESULT_SCENE_H_

#include "SceneBase.h"

class ResultScene : public SceneBase
{
public:
	ResultScene()
	{

	}

	virtual ~ResultScene()
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

#endif // !RESULT_SCENE_H_

