#include<iostream>
using namespace std;

//�������Ϊ���Ա
class Phone427
{
public:
	Phone427(string name)
	{
		m_Pname = name;
		cout << "Phone���캯������" << endl;
	}

	~Phone427()
	{
		cout << "Phone������������" << endl;
	}

	string m_Pname;
};

class Person427
{
public:
	//Phone m_Phone = pName; ��ʽת����
	Person427(string name,int age, string pname) :m_Name(name),m_Age(age), m_Phone(pname)
	{
		cout << "Person���캯������" << endl;
	}

	~Person427()
	{
		cout << "Person������������" << endl;
	}

    string m_Name;//����
	int m_Age;
	Phone427 m_Phone;//�ֻ�
};

void test42701()
{
	Person427 p("������",21, "��Ϊ��ҫmat10");
	cout << p.m_Name << "����" << p.m_Age << "��,����" << p.m_Phone.m_Pname << endl;
}

//�������������Ϊ�����Աʱ������ʱ�ȹ���������ٹ�������
//����ʱ���������������������

int main427()
{
	test42701();
	system("pause");
	return 0;
}