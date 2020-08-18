#include<iostream>
using namespace std;

//交换函数

//1.值传递；
void myswap2301(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2.地址传递；
void myswap2302(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.引用传递；
void myswap2303(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 1314;
	int b = 520;
	cout << a << endl;
	cout << b << endl;
	myswap2301(a, b);
	cout << "值传递：" << endl;
	cout << a << endl;
	cout << b << endl;
	myswap2302(&a, &b);
	cout << "地址传递：" << endl;
	cout << a << endl;
	cout << b << endl;
	myswap2303(a, b);
	cout << "引用传递：" << endl;
	cout << a << endl;
	cout << b << endl;


	system("pause");
	return 0;
}