#include<iostream>
using namespace std;

//拷贝构造函数的调用时机
//1.Person 类的创建
class Person423
{
public:
	Person423()
	{
		cout << "Person 默认构造函数调用" << endl;
	}
	Person423(int age)
	{
		cout << "Person 有参构造函数调用" << endl;
		m_age = age;
	}
	Person423(const Person423& p)
	{
		cout << "Person 拷贝构造函数调用" << endl;
		m_age = p.m_age;
	}

	~Person423()
	{
		cout << "Person 析构函数调用" << endl;
	}

	int m_age;

};
//2.1使用一个已经创建完毕的对象来初始化一个新对象；
void test42301()
{
	Person423 p1(20);
	Person423 p2(p1);
}
//2.2值传递的方式给函数参数传值

void doWork42301(Person423 p)
{

}

void test42302()
{
	Person423 p;
	doWork42301(p);
}

//3.以值方式返回局部变量；

Person423 doWork42302()
{
	Person423 p1;
	cout << "doWork02地址为：\t" << (int*)&p1 << endl;
	return p1;
}

void test42303()
{
	Person423 p = doWork42302();
	cout << "  返回后地址为：\t" << (int*)&p << endl;
}

int main423()
{
	test42301();
	test42302();
	test42303();

	system("pause");
	return 0;
}