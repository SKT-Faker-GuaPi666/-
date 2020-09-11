#include<iostream>
using namespace std;

//对象的初始化和清理

class Person241
{
public:
	//1.构造函数
	//没有返回值，不用写void；
	//函数名与类名相同；
	//构造函数可以有参数，因此可以发生重载；
	//程序在调用对象的时候会自动调用构造调用，无需手动调用，且只需要调用一次
	Person241()
	{
		cout << "Person 构造函数的调用" << endl;
	}
public:
	//2.析构函数
	//没有返回值，不用写void；
	//函数名与类名相同，函数名前要加‘~’；
	//构造函数不可以有参数，因此不可以发生重载；
	//程序在销毁前，会自动调用析构函数，无需手动调用，且只需要调用一次
	~Person241()
	{
		cout << "Person 析构函数的调用" << endl;
	}

};

//构造和析构都是必须有的实现，若不写，则编译器会提供一个空实现的构造和析构
void test24101()
{
	Person241 p;//在栈上的数据，test01执行完毕后，释放这个对象
}

int main21()
{
	test24101();
	Person241 p;

	system("pause");
	return 0;
}