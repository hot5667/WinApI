#include <iostream>


int main()
{
	int Star = 5;

	for(int i = 0; i < Star; ++i)
	{
		for(int j = 0; j < Star - i; ++j)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
