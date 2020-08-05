#include<iostream>
using namespace std;
int main23()
{
	//冒泡排序；
	//1.输入数据；
	int arr[] = { 2,3,5,1,10,53,22,11,5,23 };
	//2.打印初始数组：
	cout << "初始数组为：";
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		cout << arr[a] << " ";
	}
	cout << endl;
	//3.外循环，总排序轮数为 元素个数-1；
	for (int b = 0; b < sizeof(arr) / sizeof(arr[0]) - 1; b++)
	{
		//4.内循环，进行比较； 次数= 元素个数-当前轮数-1；
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - b - 1; i++)
		{
			if (arr[i] > arr[i + 1])//若第一个数大于第二个则，交换他们；
			{
				int j = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = j;
			}
		}
	}
	//5.打印排序完成的数组；
	cout << "排序后数组为：";
	for (int c = 0; c < sizeof(arr) / sizeof(arr[0]); c++)
	{
		cout << arr[c] << " ";
	}
	cout << endl;
	

	system("pause");
	return 0;
}