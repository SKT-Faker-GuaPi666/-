#include<iostream>
using namespace std;
int main22()
{
	//����������;��
	//1.����ͨ����������ͳ������ռ���ڴ��С��
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "����Ԫ����ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "�����е�Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2.����ͨ���������鿴�����׵�ַ��
	cout << "�����׵�ַΪ��16���ƣ���" << arr << endl;//16���ƣ�
	cout << "�����׵�ַΪ��10���ƣ���" << (int)arr << endl;//10���ƣ�ͨ��intת����
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;
	//������Ϊ�����������Խ��и�ֵ������

	system("pause");
	return 0;
}