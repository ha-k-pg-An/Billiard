#include "Table.h"

void Table::Draw()
{
	for (auto itr : model_frame)
	{
		if (MV1DrawFrame(model_handle, itr) == -1)
		{
			return;
		}

	}
}