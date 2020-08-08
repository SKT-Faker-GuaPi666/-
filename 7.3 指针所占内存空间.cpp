#include<iostream>
using namespace std;
int main()
{
	//指针所占内存空间；
	long long a = 10;

	long long* p = &a;

	//在32位操作系统下，指针是占4个字节空间大小，不管是什么数据类型；
	//64位下是8个字节空间大小，
	cout << "sizeof(long long *) = "<< sizeof(long long *) << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << endl;

	system("pause");
	return 0;
}