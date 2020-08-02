#include<iostream>
using namespace std;
int main423()
{
	//逢七过，案例；
	//1.输入（1—100）数字
	for (int a = 1;a<=100; a++)
	{
	    //2.判断，找出其中，任何跟 7 有关的数字，打印为，“过”；
		if (a % 10 == 7|| a / 10 == 7|| a % 7 == 0)//使用或的逻辑运算符；
		{
			cout << "过" << endl;
		}
		else
		{
			cout << a << endl;//不是特殊数字，则打印原数字；
		}

	}
	system("pause");
	return 0;
}