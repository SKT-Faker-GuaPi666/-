#include<iostream>
using namespace std;

//����Ȩ��
//����
//����Ȩ��  public           ��Ա  ���ڿ��Է���  ������Է���
//����Ȩ��  protected        ��Ա  ���ڿ��Է���  ���ⲻ���Է���
//                                 �ӿ��Է��ʸ��еı�������
//˽��Ȩ��  private          ��Ա  ���ڿ��Է���  ���ⲻ���Է���
//                                 �Ӳ����Է��ʸ��еı�������

class Person4113
{
public:
	//����Ȩ��
	string m_Name;
protected:
	//����Ȩ��
	string m_Car;
private:
	//˽��Ȩ��
	int m_Password;

public:
	void func()
	{
		m_Name = "��ԭ�غ�";
		m_Car = "AE86";
		m_Password = 1366578;
	}
};

int main113()
{
	//ʵ�����������
	Person4113 p1;
	p1.m_Name = "��ԭ��̫";
	//p1.Car = "����";      //����Ȩ�����ݣ���������ʲ�����
	//p1.Password = 155364; //˽��Ȩ�����ݣ���������ʲ�����
	p1.func();



	system("pause");
	return 0;
}