#include"DataStructure.h"


/*
���ú���
R[]:��Ҫ���õ�����
l:��ʼλ��
r:��ֹλ��
*/
void Reverse(int R[], int l, int r);

/*
ѭ�����ƺ���
R[]:��������
n:���鳤��
p:����λ��
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