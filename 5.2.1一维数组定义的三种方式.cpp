#include<iostream>
using namespace std;
int main()
{
	//数组
	//1.数据类型  数据名称  [数组长度]；
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

		//2. 数据类型  数组名称[数组长度]={值1，值2...};
		//如果在初始化数据的时候，没有全部填写完，会用0来补全剩余数据；
		int arr2[5] = { 10,20,30 };
		for (int j = 0; j < 5; j++)
		{
			cout << arr2[j] << endl;
		}
		//3. 数据类型  数据名称[]={值1，值2....};
		//定义数组的时候，必须有初始长度
		int arr3[] = { 100,200,300,400,500 };
		for (int k = 0; k < 5; k++)
		{
			cout << arr3[k] << endl;
		}

		
	system("pause");
	return 0;
}