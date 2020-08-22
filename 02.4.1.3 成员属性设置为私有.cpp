#include<iostream>
using namespace std;

//成员属性设为私有；
//1.可以自己控制读写权限
//2.对于写权限，可以检测数据的有效性

//设计人类
class Person413
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}

	//获取姓名
	string getName()
	{
		return m_Name;
	}

	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			m_Age = 0;
			cout << "狗贼，乱输入！\t给爷重新输！！！" << endl;
			return;
		}
		m_Age = age;
	}

	//获取年龄 
	int getAge()
	{
		//m_Age = 0;//初始化为0；
		return m_Age;
	}

	//设置现任  只写
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	//姓名 可读可写
	string m_Name;
	//年龄 可读可写
	int m_Age;
	//现任 只写
	string m_Lover;
};


int main13()
{
	Person13 p;
	p.setName("张三");
	cout << "姓名为:" << p.getName() << endl;
	p.setLover("刘某");
	//cout << "现任为:" << p.getLover() << endl;

	p.setAge(21);
	cout << "年龄为:" << p.getAge() << endl;
	
	system("pause");
	return 0;
}