#include<iostream>
using namespace std;
int main5()
{
	int a = 10;
	int b = 10;

	//1.const修饰指针，常量指针；
	const int* p = &a;
	//指针指向的值不可以修改，指针的指向可以修改；
    //*p = 20;错误；
	p = &b;//正确；

	//2.const修饰常量，指针常量；
	int* const p2 = &a;
	//指针的值可以修改，指针的指向不可以修改；
	*p2 = 20;//正确；
	//p2 = &b;//错误；

	//3.const修饰指针也修饰常量；
	const int* const p3 = & a;
	//指针的值和指向都不可以修改；
	//*p3 = 20;错误；
	//p3 = &b;错误；



	system("pause");
	return 0;
}