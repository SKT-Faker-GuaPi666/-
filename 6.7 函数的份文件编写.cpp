#include<iostream>
using namespace std;
#include"swap.h"

//�����ķ��ļ���д��
//ʵ���������ֽ��н����ĺ�����

////����������
//void swap(int a, int b);

//�������壻
//void swap(int num1, int num2)
//{
//	cout << "����ǰ��" << endl;
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "������" << endl;
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//}

//1.����.h��׺����ͷ�ļ���
//2.����.cpp��׺����Դ�ļ���
//3.��ͷ�ļ���д������������
//4.��Դ�ļ���д�����Ķ��壻


int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);


	system("pause");
	return 0;
}