#include<iostream>
using namespace std;

//1.����ӷ�������
//���������ʱ��num1��num2��û����ʵ���ݣ�
//���������ֻ��һ����ʽ�ϵĲ��������βΣ�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}
int �˷�(int num1, int num2)
{
	int sum = num1 * num2;
	return sum;
}

//2.main�����е���add������
int main()
{
	int a = 10;
	int b = 23;
	//�﷨���������� ��������
	//a��b��Ϊʵ�ʲ��������ʵ�Σ�
	//�����ú�����ʱ��ʵ�ε�ֵ�ᴫ�ݸ��βΣ�
	int c = add(a, b);
	cout << "c=" << c << endl;
	int d = �˷�(a, b);
	cout << "d=" << d << endl;

	system("pause");
	return 0;
}