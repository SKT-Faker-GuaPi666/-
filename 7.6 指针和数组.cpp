#include<iostream>
using namespace std;
int main()
{
	//指针和数组；
	//利用指针访问数组中的元素；
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;//此时p所指向的地址为arr的首地址，也就是arr[0]的地址；
	for (int i = 0; i < 10; i++)
	{
		cout << *p << " ";
		p++;//让指针向后偏移4个字节；
	}
	cout << endl;

	system("pause");
	return 0;
}