#include<iostream>
using namespace std;

//�������캯���ĵ���ʱ��
//1.Person ��Ĵ���
class Person423
{
public:
	Person423()
	{
		cout << "Person Ĭ�Ϲ��캯������" << endl;
	}
	Person423(int age)
	{
		cout << "Person �вι��캯������" << endl;
		m_age = age;
	}
	Person423(const Person423& p)
	{
		cout << "Person �������캯������" << endl;
		m_age = p.m_age;
	}

	~Person423()
	{
		cout << "Person ������������" << endl;
	}

	int m_age;

};
//2.1ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test42301()
{
	Person423 p1(20);
	Person423 p2(p1);
}
//2.2ֵ���ݵķ�ʽ������������ֵ

void doWork42301(Person423 p)
{

}

void test42302()
{
	Person423 p;
	doWork42301(p);
}

//3.��ֵ��ʽ���ؾֲ�������

Person423 doWork42302()
{
	Person423 p1;
	cout << "doWork02��ַΪ��\t" << (int*)&p1 << endl;
	return p1;
}

void test42303()
{
	Person423 p = doWork42302();
	cout << "  ���غ��ַΪ��\t" << (int*)&p << endl;
}

int main423()
{
	test42301();
	test42302();
	test42303();

	system("pause");
	return 0;
}