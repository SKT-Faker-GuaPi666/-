#include<iostream>
using namespace std;
int main()
{
	//1.�������飻
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//2.��ӡ��ʼ���飻
	cout << "��ʼ���飺";
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	//����ʾ����
	int a = 0;
	int b = sizeof(arr) / sizeof(arr[0])-1;
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) / 2; j++)
	{
		int c = 0;
		c = arr[a];
		arr[a] = arr[b];
		arr[b] = c;
		a++;
		b--;
	}
	cout << "�û������飺";
	for (int k = 0; k < sizeof(arr) / sizeof(arr[0]); k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;
	//���ʾ����
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "�ڶ����û������飺";
	for (int s = 0; s < sizeof(arr) / sizeof(arr[0]); s++)
	{
		cout << arr[s] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}