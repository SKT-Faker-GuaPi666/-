#include<iostream>
using namespace std;

//类对象作为类成员
class Phone427
{
public:
	Phone427(string name)
	{
		m_Pname = name;
		cout << "Phone构造函数调用" << endl;
	}

	~Phone427()
	{
		cout << "Phone析构函数调用" << endl;
	}

	string m_Pname;
};

class Person427
{
public:
	//Phone m_Phone = pName; 隐式转换法
	Person427(string name,int age, string pname) :m_Name(name),m_Age(age), m_Phone(pname)
	{
		cout << "Person构造函数调用" << endl;
	}

	~Person427()
	{
		cout << "Person析构函数调用" << endl;
	}

    string m_Name;//姓名
	int m_Age;
	Phone427 m_Phone;//手机
};

void test42701()
{
	Person427 p("刘佳琪",21, "华为荣耀mat10");
	cout << p.m_Name << "今年" << p.m_Age << "岁,拿着" << p.m_Phone.m_Pname << endl;
}

//当其他类对象作为本类成员时，构造时先构造类对象，再构造自身，
//析构时先析构自身，再析构类对象；

int main427()
{
	test42701();
	system("pause");
	return 0;
}