#include<iostream>
using namespace std;
int main2()
{
	//指针变量的定义与应用；
	
	//1.指针的定义；
	//定义整型变量；
	int a = 10;
	//定义指针；
	int * p;

	//指针赋值；
	p = &a;//指针指向变量a的地址；

	cout << "a的地址：" << &a << endl;
	cout << "指针p：" << p << endl;
	cout << "指针p的地址" << &p << endl;

	//2.指针的使用；
	//通过在指针前加 * 的方式解引用，找到指针指向的内存中的数据；

	*p = 520;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");
	return 0;
}