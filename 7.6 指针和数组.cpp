#include<iostream>
using namespace std;
int main()
{
	//ָ������飻
	//����ָ����������е�Ԫ�أ�
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;//��ʱp��ָ��ĵ�ַΪarr���׵�ַ��Ҳ����arr[0]�ĵ�ַ��
	for (int i = 0; i < 10; i++)
	{
		cout << *p << " ";
		p++;//��ָ�����ƫ��4���ֽڣ�
	}
	cout << endl;

	system("pause");
	return 0;
}