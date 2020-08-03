#include<iostream>
using namespace std;
int main33()
{
	//goto语句;
	cout << "1.xxxxx" << endl;
	cout << "2.xxxxx" << endl;
	goto FLAG;//前往FLAG标记；
	cout << "3.xxxxx" << endl;
	cout << "4.xxxxx" << endl;
	FLAG://标记，后面跟冒号；
	cout << "5.xxxxx" << endl;

	system("pause");
	return 0;
}