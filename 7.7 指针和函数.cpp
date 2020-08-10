#include<iostream>
using namespace std;

void swap7(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


int main7()
{
	//指针和函数；
	//地址传递；
	int a = 520;
	int b = 1314;
	swap7(&a, &b);
	cout << a << endl;
	cout << b << endl;


	system("pause");
	return 0;
}