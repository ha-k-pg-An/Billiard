#ifndef OBJECT_BASE_H_
#define OBJECT_BASE_H_

#include "Common.h"
#include "vector"

/*
	3Dモデルを描画と目的にしたクラス
*/

class ObjectBase
{
public:
	ObjectBase(int handle, std::vector<int> init_model_frame, VECTOR init_pos) :
		model_handle(handle),
		model_frame(init_model_frame),
		pos(init_pos)
		
	{

	}

	virtual ~ObjectBase()
	{

	}

public:	
	virtual void Draw() = 0;


protected:
	int model_handle;
	std::vector<int> model_frame;
	VECTOR pos;
};

#endif // !OBJECT_BASE_H_

