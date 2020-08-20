#include<iostream>
using namespace std;

//占位参数；
//语法：返回值类型  函数名 （数据类型）{}

void func3201(int a, int)
{
	cout << "this is func！！！" << endl;
}

//占位参数，还可以有默认参数
void func3202(int a, int = 10)
{
	cout << "ohhhhhhhhhhhhhhh" << endl;
}

int main2()
{
	func3201(10, 20);
	func3202(10);

	system("pause");
	return 0;
}