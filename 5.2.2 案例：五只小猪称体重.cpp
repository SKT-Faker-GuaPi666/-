#include<iostream>
using namespace std;
int main522()
{
	//1.����С�����أ�
	int arr[5] = { 360,300,400,350,410 };
	int max = 0;
	//����ʾ����
	/*for (int i = 0; i < 4; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			max = arr[i];
		}
		else
		{
			max = arr[i + 1];
		}

	}*/
	//����ʾ����
	for (int j = 0; j < 5; j++)
	{
		if (max < arr[j])
		{
			max = arr[j];
		}
	
	}
	cout << "���ص�С������Ϊ��" << max << endl;

	system("pause");
	return 0;
}