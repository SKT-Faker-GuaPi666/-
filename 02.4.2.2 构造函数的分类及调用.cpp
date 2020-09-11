#include<iostream>
using namespace std;

//构造函数的分类及调用
//1.分类
//    按照参数分类： 有参构造（默认构造）和 有参构造
//    按照类型分类； 普通构造  拷贝构造
class Person422
{
public:
	//构造函数
	Person422()
	{
		cout << "Person 的无参构造函数调用" << endl;
	}
	Person422(int a)
	{

		age = a;
		cout << "Person 的有参构造函数调用" << endl;
	}
	//拷贝构造函数
	Person422(const Person422& p)
	{
		//将传入的人身上的所以属性，拷贝到我身上
		cout << "Person 拷贝函数的调用" << endl;
		age = p.age;
	}


	~Person422()
	{
		cout << "Person 的析构函数调用" << endl;
	}
	int age;
};

//2.调用
void test42201()
{
	//括号法：

	Person422 p1;//默认构造函数调用；
	Person422 p2(10);//有参构造函数调用
	Person422 p3(p2);//拷贝构造函数调用

	/*cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;*/
	//注意：调用函数的时候，不要加（），否则编译器会认为该代码为一个函数的声明，
	//不会认为在创建对象，例如：Person p1();



	//显示法：
	Person422 p4;
	Person422 p5 = Person422(10);//有参构造
	Person422 p6 = Person422(p4);//拷贝构造

	Person422(10);//匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	cout << "aaa" << endl;

	//注意事项2
	//不要利用拷贝构造函数  初始化匿名对象//Person(p3);
	//编译器会认为Person(p3)===Person p3;
	//编译器会认为是一个对象的声明，会产生重定义；

	//隐式转化法：
	Person422 p7 = 10;//相当于  Person p7 = Person （10）；有参构造
	Person422 p8 = p7;//相当于  Person p8 = Person （p7）；拷贝构造

}



int main()
{
	test42201();
	system("pause");
	return 0;
}