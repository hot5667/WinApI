#include <iostream>

using namespace std;

void AddHp(int hp, int value)
{

}


int main()
{
	int hp = 100;

	// [타입]*  [이름]
	// - * = 포인터
	// * 주소값을 담는 바구니
	// & 주소값을 알려줘
	void* ptr = &hp;

	AddHp(hp, 10);
}