#include"DataStructure.h"



int main() {
	int R[10] = { 0,1,2,3,4,5,6,7,8,9 };
	RCR(R, 10, 4);
	for (int i = 0; i < 10; i++)
		std::cout << R[i] << " ";
	std::cin >> R[2];
	return 0;
}