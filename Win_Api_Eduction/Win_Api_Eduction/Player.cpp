#include "Player.h"
#include "Map.h"
#include "Helper.h"

bool canMove = true;

int GPlayerX = 2;
int GPlayerY = 2;

void HandleMove()
{
	// Ű���带 ���� ������, ���� ���� ������ �� �ִ�.
	if (GMoveDir == MD_NONE)
	{
		canMove = true;
		return;
	}

	if (canMove == false)
		return;

	canMove = false;

	switch (GMoveDir)
	{
	case MD_LEFT:
		MovePlayer(GPlayerX - 1, GPlayerY);
		break;
	case MD_RIGHT:
		MovePlayer(GPlayerX + 1, GPlayerY);
		break;
	case MD_UP:
		MovePlayer(GPlayerX, GPlayerY - 1);
		break;
	case MD_DOWN:
		MovePlayer(GPlayerX, GPlayerY + 1);
		break;
	}
}


void MovePlayer(int x, int y)
{
	// ���� üũ
	if (x < 0 || x >= MAP_SIZE)
		return;
	if (y < 0 || y >= MAP_SIZE)
		return;
	// ��üũ
	int index = y * MAP_SIZE + x;
	if (GMap1D[index] == 1)
		return;

	if (GMap2D[y][x] == 1)
		return;

	// ���� ��ġ ����
	{
		int prevIndex = GPlayerY * MAP_SIZE + GPlayerX;
		GMap1D[prevIndex] = 0;

		GMap2D[GPlayerY][GPlayerX] = 0;
	}

	//�� ��ġ �̵�
	{
		GPlayerX = x;
		GPlayerY = y;
		int prevIndex = GPlayerY * MAP_SIZE + GPlayerX;
		GMap1D[prevIndex] = 2;

		GMap2D[GPlayerY][GPlayerX] = 2;
	}

}