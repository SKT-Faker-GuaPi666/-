#include<iostream>
using namespace std;

//值传递；
//定义函数，实现两个数字进行交换函数；

//若函数不需要返回时，声明时可以写void

void swap4(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	//返回值不需要的时候，可以不写return；
}

int main4()
{
	int a = 10;
	int b = 20;
	swap4(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//值传递时，形参发生改变，不影响实参；

	system("pause");
	return 0;
}