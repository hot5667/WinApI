#include <iostream>

using namespace std;

#define ICE 1

//int Test(int a)
//{
//	int c = a;
//	int d; //������ ��
//
//	char buffer[200];
//
//}
//
//int main()
//{
//	Test(10);
//}

void AddHp(int hp, int value)
{
	hp += value;
}


int main()
{
	int hp = 100;

	AddHp(hp, 20);

	cout << hp << endl;
}


/*
	Stack ����
	���� �Ҿ��� �ϰ� ���� ������� �𸣴� ����
	Stack �����ּ� �� ���� ���� �ּҷ� �����Ѵ�.

	�Լ����� �ӽ������� ����ϴ� �޸��� or 
	�Լ����� ����ϴ� ���� �޸���
*/

/*
*	32��Ʈ �� 64��Ʈ ���� �������� ����	
*	
*	�ּ� ���� 
* 
* 
* 
*/