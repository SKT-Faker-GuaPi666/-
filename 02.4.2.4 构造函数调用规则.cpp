#include<iostream>
using namespace std;

//���캯�����ù���
//1.����һ���࣬c++���������ÿ���඼�������3��������
//Ĭ�Ϲ��캯������ʵ�֣�
//�������캯������ʵ�֣�
//�������캯������ʵ�֣�


//2.�������д���вι��캯�����������Ͳ������ṩĬ�Ϲ��캯������Ȼ�ṩ�������죻
//3.�������д�˿������캯�����������Ͳ������ṩ������ͨ���캯���ˣ�
class Person
{
public:
	//Person()
	//{
	//	cout << "Person��Ĭ�Ϲ��캯������" << endl;
	//}
	//Person(int age)
	//{
	//	cout << "Person���вι��캯������" << endl;
	//	m_age = age;
	//}
	//Person(const Person &p)
	//{
	//	cout << "Person�Ŀ������캯������" << endl;
	//	m_age = p.m_age;
	//}

	~Person()
	{
		cout << "Person���������캯������" << endl;
	}
	int m_age;
};

//void test01()
//{
//	Person p;
//	p.m_age = 22;
//
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//}
//void test02()
//{
//	Person p(19);
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//}
int main()
{
	//test02();

	system("pause");
	return 0;
}