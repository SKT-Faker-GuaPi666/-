#include<iostream>
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person428
{
public:
	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬�ĳ�Ա����
		//m_B = 200;//��̬��Ա���������Է��ʷǳ�Ա����
		cout << "static void func����" << endl;
	}
	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����
	//��̬����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2����" << endl;
	}

};
//�����ַ��ʷ�ʽ
void test42801()
{
	//1.ͨ��������ʣ�
	Person428 p;
	p.func();
	//2.ͨ���������ʣ�
	Person428::func();

}

int main428()
{
	test42801();

	system("pause");
	return 0;
}