#include<iostream>
using namespace std;

//const���γ�Ա����

//������
class Person434
{
public:
	//this ָ��ı��� ��ָ�볣����ָ���ָ���ǲ������޸ĵ�
	//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸ģ�
	//�������ȼ���  const Person * const this
	void  showPerson() const
	{
		this->m_B = 100;
		//this->m_A = 100;//�������ڲ������޸ĳ�Ա����
		//this = NULL;//this ָ���ǲ������޸�ָ��ģ�
	}

	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;//�ڱ���ǰ����mutable�γ�������������ڳ��������޸�;
};

//������

void test43401()
{
	const Person434 p;//�ڶ���ǰ��const����Ϊ������
	//p.m_A = 100;//m_A�ǲ����޸ĵı���
	p.m_B = 100;//m_B��һ������ı������ڳ������¿����޸ģ�

	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
}

int main434()
{
	 

	system("pause");
	return 0;
}