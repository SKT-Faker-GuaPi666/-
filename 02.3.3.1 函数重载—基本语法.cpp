#include<iostream>
using namespace std;

//�������أ�
//�����ú�������ͬ����߸����ԣ�

//�������ص���������
//1.ͬһ������
//2.��������ͬ��
//3.�����������Ͳ�ͬ���������ͬ����˳��ͬ��


void func331(int a)
{
	cout << "func331(int a)�ĵ���" << endl;
}
void func331(double a)
{
	cout << "func331(double a)�ĵ���" << endl;
}
void func331(int a, double b)
{
	cout << "func331(int a, double b)�ĵ���" << endl;
}
void func331(double b, int a)
{
	cout << "func331(double b, int a)�ĵ���" << endl;
}
int func331(double b, int a, int c)//�����޷����ؽ�������ֵ���ֵĺ�����
{
	cout << "int func331(double b, int a��int c)�ĵ���" << endl;
	return 0;
}


int main31()
{
	func331(10);
	func331(10.0);
	func331(10, 10.0);
	func331(10.0, 10);
	func331(10.0, 10, 10);

	system("pause");
	return 0;
}