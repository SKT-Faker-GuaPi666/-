#include<iostream>
using namespace std;
int main32()
{
	//continue语句；
	for (int i = 0; i <= 100; i++)
	{
		//若是偶数输出，若是奇数不输出；
		if (i % 2 != 0)
		{
			continue;//可以筛选条件，执行到此就不再向下执行，执行下一次循环；
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}