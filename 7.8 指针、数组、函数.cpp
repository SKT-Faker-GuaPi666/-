#include<iostream>
using namespace std;

//2.�������㺯����
void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	//1.����һ�����飬
	int arr[10] = { 1,23,22,14,15,45,16,8,3,10 };
	//���鳤�ȣ�
	int len = sizeof(arr) / sizeof(arr[0]);


	//3.��ӡ����
	//��ӡԭ���飻
	cout << "ԭ����Ϊ��";
	printArray(arr, len);
	//��ӡ���������飻
	bubbleSort(arr, len);
	cout << "���������Ϊ��";
	printArray(arr, len);
	

	system("pause");
	return 0;
}