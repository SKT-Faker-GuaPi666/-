#include<iostream>
using namespace std;
int main24()
{
	//利用嵌套循环实现星图；
	//打印一行星图；
	//外层循环；
	for (int i = 0; i < 10; i++)
	{
		//内层循环；
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	//外层执行一次，内层执行一轮；
	system("pause");
	return 0;
}