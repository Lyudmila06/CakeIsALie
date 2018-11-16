#include "pch.h"
#include <iostream>
#include "Darts.h"

int Darts_Score(float x, float y)
{
	float r;
	int point;
	r = sqrt(pow(x, 2) + pow(y, 2));
	if (r <= 1)
	{
		point = 5;
	}
	else
		if (r <= 2)
		{
			point = 4;
		}
		else
			if (r <= 3)
			{
				point = 3;
			}
			else
				if (r <= 4)
				{
					point = 2;
				}
				else
					if (r <= 5)
					{
						point = 1;
					}
					else
						point = 0;

	printf("Score: %d", point);
	return 0;
}
