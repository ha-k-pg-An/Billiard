#ifndef OTHER_BALLS_H_
#define OTHER_BALLS_H_

#include "ObjectBase.h"
#include "DxLib.h"

class OtherBalls : public ObjectBase
{
public:
	OtherBalls(int init_handle, std::vector<int> init_model_frame, VECTOR init_pos):
		ObjectBase(init_handle, init_model_frame,init_pos){

	}

	~OtherBalls() override {

	}

public:
	void Update();
	void Draw() override;

protected:
};

#endif // !OTHER_BALLS_H_

