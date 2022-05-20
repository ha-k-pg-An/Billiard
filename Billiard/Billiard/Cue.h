#ifndef CUE_H_
#define CUE_H_

#include "Common.h"
#include "ObjectBase.h"
#include "WhiteBall.h"

/*
	ÉLÉÖÅ[ÇÃìÆÇ´
*/

class Cue : public ObjectBase
{
public:
	Cue(int handle, std::vector<int> init_model_frame, VECTOR init_pos):
		ObjectBase(handle, init_model_frame, init_pos)
	{		
	}

	virtual ~Cue()
	{
	}

	VECTOR GetMousePos();
	void GetCuePos();

	void Update();
	virtual void Draw();

private:
	bool isActive;
	int power;

};

#endif // !CUE_H_

