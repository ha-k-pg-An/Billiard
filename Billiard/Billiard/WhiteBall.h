#ifndef WHITE_BALL_H_
#define WHITE_BALL_H_

#include "DxLib.h"
#include "ObjectBase.h"

/*
	îíÇ¢É{Å[ÉãìÆÇ´
*/

class WhiteBall : public ObjectBase
{
public:
	WhiteBall(int handle, std::vector<int> init_model_frame, VECTOR init_pos):
		ObjectBase(handle,init_model_frame,init_pos)
	{

	}

	virtual ~WhiteBall()
	{

	}

public:

	void Update();
	virtual void Draw();

	VECTOR GetMouseVector();
	void UpdateCueParam();

	const VECTOR* GetPos(){
		return &pos;
	}

private:

};

#endif // !WHITE_BALL_H_

