#include <iostream>

using namespace std;

void AddHp(int hp, int value)
{

}


int main()
{
	int hp = 100;

	// [Ÿ��]*  [�̸�]
	// - * = ������
	// * �ּҰ��� ��� �ٱ���
	// & �ּҰ��� �˷���
	void* ptr = &hp;

	AddHp(hp, 10);
}