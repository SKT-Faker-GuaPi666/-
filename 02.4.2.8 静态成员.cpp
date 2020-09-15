#include<iostream>
using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person428
{
public:
	//静态成员函数
	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态的成员变量
		//m_B = 200;//静态成员函数不可以访问非成员变量
		cout << "static void func调用" << endl;
	}
	static int m_A;//静态成员变量
	int m_B;//非静态成员变量
	//静态函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2调用" << endl;
	}

};
//有两种访问方式
void test42801()
{
	//1.通过对象访问；
	Person428 p;
	p.func();
	//2.通过类名访问；
	Person428::func();

}

int main428()
{
	test42801();

	system("pause");
	return 0;
}