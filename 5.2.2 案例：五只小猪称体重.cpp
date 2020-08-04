#include<iostream>
using namespace std;
int main522()
{
	//1.输入小猪体重；
	int arr[5] = { 360,300,400,350,410 };
	int max = 0;
	//繁琐示范；
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
	//精练示范：
	for (int j = 0; j < 5; j++)
	{
		if (max < arr[j])
		{
			max = arr[j];
		}
	
	}
	cout << "最重的小猪体重为：" << max << endl;

	system("pause");
	return 0;
}