#include<iostream>
using namespace std;

//����ʹ�ó�����ͨ�����������βΣ�
void showValue(const int& ref)
{
	//ref = 10;�����޸ģ�
	cout << ref << endl;
}
int main()
{

	//int& ref = 10;//���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬���д���

	//����const����ԣ��������Ż����룬int temp = 10; const int& ref = temp;
	const int& ref = 520;

	cout << ref << endl;
	//���������ó������÷�ֹ������޸�ʵ��
	int a = 1314;
	showValue(a);


	system("pause");
	return 0;
}