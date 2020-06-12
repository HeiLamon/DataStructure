#include"DataStructure.h"


/*
逆置函数
R[]:需要逆置的数组
l:起始位置
r:终止位置
*/
void Reverse(int R[], int l, int r);

/*
循环左移函数
R[]:输入数组
n:数组长度
p:左移位数
*/
void RCR(int R[], int n, int p);

void Reverse(int R[], int l, int r){
	int i, j;
	int temp;
	for (i = l, j = r; i < j; ++i, --j)
	{
		temp = R[i];
		R[i] = R[j];
		R[j] = temp;
	}
}

void RCR(int R[], int n, int p){
	if (p <= 0 || p >= n)
		std::cout << "ERROR!" << std::endl;
	else {
		Reverse(R, 0, p - 1);
		Reverse(R, p, n - 1);
		Reverse(R, 0, n - 1);
	}

}