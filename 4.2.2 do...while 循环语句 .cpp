#include<iostream>
using namespace std;
int main22()
{
	//do...while 语句；
	//在屏幕中输出，0到9；
	int num = 0;
	do 
	{
		cout << num << endl;
		num++;
	} 
	//do...while 循环，是先执行一次循环语句，在判断循环条件；
	//while是先判断条件，再执行循环语句；
	while (num < 10);
	system("pause");
	return 0;
}