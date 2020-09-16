#include<iostream>
using namespace std;
//this 指针概念


class Person
{
public:
	Person(int age)
	{
		//this 指针指向的是被调用的成员函数所属的对象 
		this->age = age;
	}

	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		//this 指向p2的指针，而*this指向的就是p2这个对象本身；
		return *this;
	}

	int age;
};

//1.解决名称冲突
void test01()
{
	Person p1(19);
	cout << "p1的年龄为：" << p1.age << endl;
}

//2.返回对象本身用*this
void test02()
{
	Person p1(10);

	Person p2(20);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2的年龄为：" << p2.age << endl;
}


int main()
{
	test01();

	test02();

	system("pause");
	return 0;
}