#include "WhiteBall.h"

void WhiteBall::Update()
{

}

void WhiteBall::Draw()
{
	for (auto itr : model_frame)
	{
		if (MV1DrawFrame(model_handle, itr) == -1)
		{
			return;
		}
	}
}

VECTOR WhiteBall::GetMouseVector() {
	int mouse_pos_x = 0;
	int mouse_pos_y = 0;
	GetMousePoint(&mouse_pos_x, &mouse_pos_y);
	VECTOR mouse_pos = VGet(0, 0, 0);
	mouse_pos.x = mouse_pos_x;
	mouse_pos.y = mouse_pos_y;
	return mouse_pos;
}

void WhiteBall::UpdateCueParam() {

}