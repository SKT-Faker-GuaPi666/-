#include<iostream>
using namespace std;

//��Ա���� �� ��Ա���� �ֿ������

class Person431
{
	int m_A;        //�Ǿ�̬��Ա���� ��������Ķ�����
	static int m_B; //��̬��Ա���� ����������Ķ�����
	void func(){}   //�Ǿ�̬��Ա���� ����������Ķ�����
	static void func2(){} //��̬��Ա��������������Ķ�����
};
void test43101()
{
	Person431 p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//c++���������ÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ���ڴ��λ��
	//ÿ���ն���ҲӦ���и���һ�޶����ڴ��ַ
	cout << "size of p = " << sizeof(p) << endl;
}
void test43102()
{
	Person431 p;
	cout << "size of p = " << sizeof(p) << endl;
}

int main431()
{
	//test01();
	test43102();
	system("pause");
	return 0;
}