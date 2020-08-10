#include<iostream>
using namespace std;

//2.创建运算函数；
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
	//1.创建一个数组，
	int arr[10] = { 1,23,22,14,15,45,16,8,3,10 };
	//数组长度；
	int len = sizeof(arr) / sizeof(arr[0]);


	//3.打印数组
	//打印原数组；
	cout << "原数组为：";
	printArray(arr, len);
	//打印排序后的数组；
	bubbleSort(arr, len);
	cout << "排序后数组为：";
	printArray(arr, len);
	

	system("pause");
	return 0;
}