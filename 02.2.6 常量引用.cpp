#include<iostream>
using namespace std;

//引用使用场景，通常用来修饰形参；
void showValue(const int& ref)
{
	//ref = 10;不可修改；
	cout << ref << endl;
}
int main()
{

	//int& ref = 10;//引用本身需要一个合法的内存空间，这行错误；

	//加入const则可以，编译器优化代码，int temp = 10; const int& ref = temp;
	const int& ref = 520;

	cout << ref << endl;
	//函数中利用常量引用防止误操作修改实参
	int a = 1314;
	showValue(a);


	system("pause");
	return 0;
}