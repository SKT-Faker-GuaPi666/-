#include<iostream>
using namespace std;
int main23()
{
	//ð������
	//1.�������ݣ�
	int arr[] = { 2,3,5,1,10,53,22,11,5,23 };
	//2.��ӡ��ʼ���飺
	cout << "��ʼ����Ϊ��";
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		cout << arr[a] << " ";
	}
	cout << endl;
	//3.��ѭ��������������Ϊ Ԫ�ظ���-1��
	for (int b = 0; b < sizeof(arr) / sizeof(arr[0]) - 1; b++)
	{
		//4.��ѭ�������бȽϣ� ����= Ԫ�ظ���-��ǰ����-1��
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - b - 1; i++)
		{
			if (arr[i] > arr[i + 1])//����һ�������ڵڶ����򣬽������ǣ�
			{
				int j = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = j;
			}
		}
	}
	//5.��ӡ������ɵ����飻
	cout << "���������Ϊ��";
	for (int c = 0; c < sizeof(arr) / sizeof(arr[0]); c++)
	{
		cout << arr[c] << " ";
	}
	cout << endl;
	

	system("pause");
	return 0;
}