#include "Helper.h"

#include <iostream>
using namespace std;

const int MAP_SIZE = 5;

int GMap1D[MAP_SIZE * MAP_SIZE] =
{
	1, 1, 0, 1, 1,
	1, 0, 0, 0, 1,
	1, 0, 2, 0, 1,
	1, 0, 0, 0, 1,
	1, 1, 1, 1, 1,
};

int GMap2D[MAP_SIZE][MAP_SIZE] =
{
	{ 1, 1, 0, 1, 1 },
	{ 1, 0, 0, 0, 1 },
	{ 1, 0, 2, 0, 1 },
	{ 1, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1 },
};

void PrintMap1D()
{
	SetCursorPosition(0, 0);

	for (int i = 0; i < MAP_SIZE * MAP_SIZE; ++i)
	{
		switch (GMap1D[i])
		{
		case 0:
			cout << "бр";
			break;
		case 1:
			cout << "бс";
			break;
		case 2:
			cout << "б┌";
			break;
		}

		if ((i + 1) % MAP_SIZE == 0)
			cout << endl;
	}
}

void PrintMap2D()
{
	SetCursorPosition(0, 0);

	for (int y = 0; y < MAP_SIZE; y++)
	{
		for (int x = 0; x < MAP_SIZE; x++)
		{
			switch (GMap2D[y][x])
			{
			case 0:
				cout << "бр";
				break;
			case 1:
				cout << "бс";
				break;
			case 2:
				cout << "б┌";
				break;
			}
		}
		cout << endl;
	}
}