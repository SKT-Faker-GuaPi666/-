#include<iostream>
using namespace std;
int main()
{
	//ָ����ռ�ڴ�ռ䣻
	long long a = 10;

	long long* p = &a;

	//��32λ����ϵͳ�£�ָ����ռ4���ֽڿռ��С��������ʲô�������ͣ�
	//64λ����8���ֽڿռ��С��
	cout << "sizeof(long long *) = "<< sizeof(long long *) << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << endl;

	system("pause");
	return 0;
}