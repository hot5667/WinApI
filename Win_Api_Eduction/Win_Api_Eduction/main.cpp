#include <iostream>
#include <windows.h>
using namespace std;
#include "Helper.h"
#include "Map.h"
#include "Player.h"



int main()
{
	SetCursorOnOff(false);

	//MovePlayer(3, 2);

	while (true)
	{
		// �Է�
		HandleKeyInput();
		// ����
		HandleMove();

		// ��� 
		PrintMap2D();
	}
}
