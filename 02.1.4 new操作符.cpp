#include<iostream>
using namespace std;

//1.new的基本语法；
int* func()
{
	//在堆区创建一个整型的数据
	//new返回的是 该数据类型的指针
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据由程序员管理开辟与释放，
	//可以利用关键字delete释放；
	delete p;
	//cout << *p << endl;//内存已经被释放，再次访问就是非法的；

}

//2.在堆区利用new开辟数组；
void test02()
{
	//创建10整型数据的数组，在堆区；
	int* arr = new int[10];//10代表数组有10个元素

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//给10个元素赋值   100~109
	}
	cout << "\n";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	//释放堆区数组
	//释放数组的时候要加[]；
	delete[] arr;

}




int main()
{

	test01();
	test02();

	system("pause");
	return 0;
}