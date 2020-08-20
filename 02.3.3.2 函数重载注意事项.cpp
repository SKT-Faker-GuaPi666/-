#include<iostream>;
using namespace std;

//函数重载的注意事项
//1.引用作为重载的条件；
void func33201(int& a)
{
	cout << "func(int& a)调用" << endl;
}

void func33201(const int& a)//是只读状态的引用
{
	cout << "func(const int& a)调用" << endl;
}

//2.函数重载碰到默认参数；
void func33202(int a)
{
	cout << "func33202(int a)调用" << endl;
}

void func33202(int a, int b = 20)
{
	cout << "func33202(int a, int b = 20)调用" << endl;
}


int main()
{
	int a = 10;
	func33201(a);
	const int b = 20;
	func33201(b);
	func33201(10);
	func33202(10,10);//该传参，有两个传递值，可以调用func33202(int a, int b = 20)
	//func33202(10);//该传参，只有一个传递值，存在二义性，编译器无法解决；
	system("pause");
	return 0;
}