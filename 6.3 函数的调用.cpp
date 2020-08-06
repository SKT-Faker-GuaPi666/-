#include<iostream>
using namespace std;

//1.定义加法函数；
//函数定义的时候，num1和num2并没有真实数据，
//它所代表的只是一个形式上的参数，及形参；
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int 乘法(int num1, int num2)
{
	int sum = num1 * num2;
	return sum;
}

//2.main函数中调用add函数；
int main()
{
	int a = 10;
	int b = 23;
	//语法：函数名称 （参数）
	//a和b称为实际参数，简称实参；
	//当调用函数的时候，实参的值会传递给形参；
	int c = add(a, b);
	cout << "c=" << c << endl;
	int d = 乘法(a, b);
	cout << "d=" << d << endl;

	system("pause");
	return 0;
}