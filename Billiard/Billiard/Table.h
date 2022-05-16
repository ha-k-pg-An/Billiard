#ifndef TABLE_H_
#define TABLE_H_

#include "Common.h"
#include "ObjectBase.h"

//ƒrƒŠƒ„[ƒh‚Ì‘ä

class Table : public ObjectBase
{
public:
	Table(int handle, std::vector<int> init_model_frame, VECTOR init_pos) :
		ObjectBase(handle, init_model_frame, init_pos)
	{

	}

	virtual ~Table()
	{

	}

	virtual void Draw();
};

#endif // !TABLE_H_

