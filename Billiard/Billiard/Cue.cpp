#include "Cue.h"
#include "WhiteBall.h"

VECTOR Cue::GetMousePos() {
	int mouse_pos_x = 0;
	int mouse_pos_y = 0;
	GetMousePoint(&mouse_pos_x, &mouse_pos_y);
	VECTOR mouse_pos = VGet(0, 0, 0);
	mouse_pos.x = mouse_pos_x;
	mouse_pos.y = mouse_pos_y;
	return mouse_pos;
}

