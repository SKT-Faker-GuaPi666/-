#include<iostream>
using namespace std;

//构造函数调用规则
//1.创建一个类，c++编译器会给每个类都添加至少3个函数；
//默认构造函数（空实现）
//析构构造函数（空实现）
//拷贝构造函数（空实现）


//2.如果我们写了有参构造函数，编译器就不会再提供默认构造函数，以然提供拷贝构造；
//3.如果我们写了拷贝构造函数，编译器就不会再提供其他普通构造函数了；
class Person
{
public:
	//Person()
	//{
	//	cout << "Person的默认构造函数调用" << endl;
	//}
	//Person(int age)
	//{
	//	cout << "Person的有参构造函数调用" << endl;
	//	m_age = age;
	//}
	//Person(const Person &p)
	//{
	//	cout << "Person的拷贝构造函数调用" << endl;
	//	m_age = p.m_age;
	//}

	~Person()
	{
		cout << "Person的析构构造函数调用" << endl;
	}
	int m_age;
};

//void test01()
//{
//	Person p;
//	p.m_age = 22;
//
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}
//void test02()
//{
//	Person p(19);
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}
int main()
{
	//test02();

	system("pause");
	return 0;
}