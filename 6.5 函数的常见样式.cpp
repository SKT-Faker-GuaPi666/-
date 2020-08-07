#include<iostream>
using namespace std;
//函数的四种常见样式；
//1.无参无返；
void test51()
{
	cout << "this is test 1" << endl;
}

//2.有参无返；
void test52(int num1, int num2)
{
	cout << "this is test 2 传入的值为：num1 = " << num1 << " num2 = " << num2 << endl;
}

//3.无参有返；
string test53()
{
	cout << "this is test 3" << endl;
	return "爱你哟！！！";
}

//4.有参有返；
int test54(int num1,int num2)
{
	cout << "this is test 4" << endl;
	return num1 * num2;
}

int main5()
{
	//无参无返函数的调用；
	test51();

	//有参无返函数的调用；
	test52(10, 20);

	//无参有返函数的调用；
    test53();
	cout << test53() << endl;

	//有参有返函数的调用；
	int  result = test54(52,10);
	cout << "num1×num2 = " << result << endl;

	system("pause");
	return 0;
}