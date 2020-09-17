#include<iostream>
using namespace std;

//const修饰成员变量

//常函数
class Person434
{
public:
	//this 指针的本质 是指针常量，指针的指向是不可以修改的
	//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改；
	//常函数等价于  const Person * const this
	void  showPerson() const
	{
		this->m_B = 100;
		//this->m_A = 100;//常函数内不可以修改成员属性
		//this = NULL;//this 指针是不可以修改指向的；
	}

	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//在变量前加上mutable形成特殊变量，可在常函数中修改;
};

//常对象

void test43401()
{
	const Person434 p;//在对象前加const，变为常对象
	//p.m_A = 100;//m_A是不可修改的变量
	p.m_B = 100;//m_B是一个特殊的变量，在常对象下可以修改；

	//常对象只能调用常函数
	p.showPerson();
	//p.func();//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
}

int main434()
{
	 

	system("pause");
	return 0;
}