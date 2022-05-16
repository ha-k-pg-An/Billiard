#ifndef SCENE_BASE_H_
#define SCENE_BASE_H_

enum StepKind
{
	Init,	//‰Šú‰»
	Run,	//ƒƒCƒ“ˆ—
	Finish,	//Œãn––
};

class SceneBase
{
public:
	SceneBase() :
		current_step(StepKind::Init)
	{

	}

	virtual ~SceneBase()
	{

	}

	virtual void Main() = 0;
	virtual void Draw() = 0;

private:
	virtual void Init() = 0;
	virtual void Run() = 0;
	virtual void Finish() = 0;

protected:
	StepKind current_step;
};

#endif // !SCENE_BASE_H_

