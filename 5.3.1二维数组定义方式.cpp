#include<iostream>
using namespace std;
int main531()
{
	//数组的定义方式；
	//1.数据类型  数据名[行数][列数]；
	int arr1[3][3];
	arr1[0][0] = 11;
	arr1[0][1] = 12;
	arr1[0][2] = 13;
	arr1[1][0] = 14;
	arr1[1][1] = 15;
	arr1[1][2] = 16;
	arr1[2][0] = 17;
	arr1[2][1] = 18;
	arr1[2][2] = 19;
	cout << "第一组：" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	//2.数据类型  数组名[行数][列数]={{数据1，数据2}，{数据3，数据4}}；
	int arr2[3][3] =
	{
		{11,12,13},
		{14,15,16},
		{17,18,19}
	};
	cout << "第二组：" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	//一般使用第二种；

	//3.数据类型  数组名[行数][列数]={数据1，数据2，数据3，数据4}；
	int arr3[3][3] = { 21,22,23,24,25,26,27,28,29 };
	cout << "第三组：" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j]<<" ";
		}
		cout << endl;
	}

	//4.数据类型  数组名[][列数]={数据1，数据2，数据3，数据4}；
	int arr4[][3] = { 41,42,43,44,45,46,47,48,49 };
	cout <<"第四组："<< endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}
