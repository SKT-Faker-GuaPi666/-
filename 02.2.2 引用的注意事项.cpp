#include<iostream>
using namespace std;
int main2()
{
	//1.引用必须初始化
	int a = 10;
	//int& b;//错误，引用必须初始化；
	int& b = a;

	//2.引用在初始化后，不可以改变
	int c = 20;

	b = c;//属于赋值操作，不是更改
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;


	system("pause");
	return 0;
}