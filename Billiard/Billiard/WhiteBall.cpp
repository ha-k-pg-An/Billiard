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