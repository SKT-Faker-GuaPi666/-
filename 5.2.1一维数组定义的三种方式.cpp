#include<iostream>
using namespace std;
int main()
{
	//����
	//1.��������  ��������  [���鳤��]��
	int arr1[5];
		arr1[0] = 1;
		arr1[1] = 2;
		arr1[2] = 3;
		arr1[3] = 4;
		arr1[4] = 5;
		for (int i = 0; i < 5; i++)
		{
			cout << arr1[i] << endl;
		}

		//2. ��������  ��������[���鳤��]={ֵ1��ֵ2...};
		//����ڳ�ʼ�����ݵ�ʱ��û��ȫ����д�꣬����0����ȫʣ�����ݣ�
		int arr2[5] = { 10,20,30 };
		for (int j = 0; j < 5; j++)
		{
			cout << arr2[j] << endl;
		}
		//3. ��������  ��������[]={ֵ1��ֵ2....};
		//���������ʱ�򣬱����г�ʼ����
		int arr3[] = { 100,200,300,400,500 };
		for (int k = 0; k < 5; k++)
		{
			cout << arr3[k] << endl;
		}

		
	system("pause");
	return 0;
}