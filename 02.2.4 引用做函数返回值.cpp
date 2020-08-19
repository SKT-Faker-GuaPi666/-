#include<iostream>
using namespace std;

//引用做函数的返回值
	//1.不要返回局部变量的引用；
int& test2401()
{
	int a = 10;//局部变量保存在栈区，运行完由系统自动释放；
	return a;
}


//2.函数的调用可以为左值；
int& test2402()
{
	static int a = 10;//静态变量，存放在全局区，在全局区上的数据在程序结束后系统释放；
	return a;
}

int main4()
{
	int& ref = test2401();
	cout << "ref= " << ref << endl;//编译器保留一次；
	cout << "ref= " << ref << endl;

	int& ret2 = test2402();
	cout << "ret2= " << ret2 << endl;
	cout << "ret2= " << ret2 << endl;

	test2402() = 520;//如果函数的返回值是引用，这个函数调用可以为左值；
	cout << "ret2= " << ret2 << endl;
	cout << "ret2= " << ret2 << endl;

	int& ret3 = test2402();
	cout << "ret3= " << ret3 << endl;
	cout << "ret3= " << ret3 << endl;
	system("pause");
	return 0;
}