#include<iostream>
using namespace std;
int main2()
{
	//1.���ñ����ʼ��
	int a = 10;
	//int& b;//�������ñ����ʼ����
	int& b = a;

	//2.�����ڳ�ʼ���󣬲����Ըı�
	int c = 20;

	b = c;//���ڸ�ֵ���������Ǹ���
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;


	system("pause");
	return 0;
}