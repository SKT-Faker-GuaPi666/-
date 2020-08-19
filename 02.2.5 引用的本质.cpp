#include<iostream>
using namespace std;
void func(int& ref)
{
	ref = 1314;
}

int main5()
{
	int a = 10;
	cout << a << endl;

	//自动转换为int *const ref=&a；指针常量的指针指向性是不变的，所以引用不可改；
	int& ref = a;
	ref = 520;

	func(a);
	cout << ref << endl;

	cout << ref << endl;
	cout << "a的地址为：" << (int)&a << endl;

	int* p = &a;
	cout <<"指针p的储存为："<< (int)p << endl;//此时p储存的是a的地址；

	cout <<"引用ref的地址为："<< (int)&ref << endl;//而ret的地址与a的地址相同；
	system("pause");
	return 0;
}