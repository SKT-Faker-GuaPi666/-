#include<iostream>
using namespace std;

//��Ա������Ϊ˽�У�
//1.�����Լ����ƶ�дȨ��
//2.����дȨ�ޣ����Լ�����ݵ���Ч��

//�������
class Person413
{
public:
	//��������
	void setName(string name)
	{
		m_Name = name;
	}

	//��ȡ����
	string getName()
	{
		return m_Name;
	}

	//��������
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			m_Age = 0;
			cout << "�����������룡\t��ү�����䣡����" << endl;
			return;
		}
		m_Age = age;
	}

	//��ȡ���� 
	int getAge()
	{
		//m_Age = 0;//��ʼ��Ϊ0��
		return m_Age;
	}

	//��������  ֻд
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	//���� �ɶ���д
	string m_Name;
	//���� �ɶ���д
	int m_Age;
	//���� ֻд
	string m_Lover;
};


int main13()
{
	Person13 p;
	p.setName("����");
	cout << "����Ϊ:" << p.getName() << endl;
	p.setLover("��ĳ");
	//cout << "����Ϊ:" << p.getLover() << endl;

	p.setAge(21);
	cout << "����Ϊ:" << p.getAge() << endl;
	
	system("pause");
	return 0;
}