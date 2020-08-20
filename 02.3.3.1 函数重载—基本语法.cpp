#include<iostream>
using namespace std;

//函数重载；
//可以让函数名相同，提高复用性；

//函数重载的满足条件
//1.同一作用域；
//2.函数名相同；
//3.函数参数类型不同，或个数不同，或顺序不同；


void func331(int a)
{
	cout << "func331(int a)的调用" << endl;
}
void func331(double a)
{
	cout << "func331(double a)的调用" << endl;
}
void func331(int a, double b)
{
	cout << "func331(int a, double b)的调用" << endl;
}
void func331(double b, int a)
{
	cout << "func331(double b, int a)的调用" << endl;
}
int func331(double b, int a, int c)//函数无法重载仅按返回值区分的函数；
{
	cout << "int func331(double b, int a，int c)的调用" << endl;
	return 0;
}


int main31()
{
	func331(10);
	func331(10.0);
	func331(10, 10.0);
	func331(10.0, 10);
	func331(10.0, 10, 10);

	system("pause");
	return 0;
}