#include<iostream>
using namespace std;
int main5()
{
	int a = 10;
	int b = 10;

	//1.const����ָ�룬����ָ�룻
	const int* p = &a;
	//ָ��ָ���ֵ�������޸ģ�ָ���ָ������޸ģ�
    //*p = 20;����
	p = &b;//��ȷ��

	//2.const���γ�����ָ�볣����
	int* const p2 = &a;
	//ָ���ֵ�����޸ģ�ָ���ָ�򲻿����޸ģ�
	*p2 = 20;//��ȷ��
	//p2 = &b;//����

	//3.const����ָ��Ҳ���γ�����
	const int* const p3 = & a;
	//ָ���ֵ��ָ�򶼲������޸ģ�
	//*p3 = 20;����
	//p3 = &b;����



	system("pause");
	return 0;
}