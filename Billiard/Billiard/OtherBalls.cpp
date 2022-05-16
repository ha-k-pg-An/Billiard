#include "OtherBalls.h"

void OtherBalls::Update() {

}

void OtherBalls::Draw() {
	for (auto itr : model_frame){
		if (MV1DrawFrame(model_handle, itr) == -1){
			return;
		}
	}
}