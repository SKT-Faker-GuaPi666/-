#include<iostream>
using namespace std;

//立方体设计案例：

class Cube
{
private:
	int m_L = 0;//长
	int m_W = 0;//宽
	int m_H = 0;//高
public:
	void setL(int l)//设置长
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}

	void setW(int w)//设置宽
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}

	void setH(int h)//设置高
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}

	int calculate_s()//面积计算
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
	int calculate_v()//体积计算
	{
		return m_L * m_W * m_H;
	}
	//利用成员函数判断两个立方体是否相等
	bool isSameByclass(Cube &c2)
	{
		if (m_L == c2.getL() && m_W == c2.getW() && m_H == c2.getH())
		{
			return true;
		}
		return false;
	}
};

//利用全局函数判断 两个立方体是否相等
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}

int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1的面积为:" << c1.calculate_s() << endl;
	cout << "c1的体积为:" << c1.calculate_v() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	//全局函数判断
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "全局函数判断：c1和c2是相等的" << endl;
	}
	else
	{
		cout << "全局函数判断：c1和c2是不相等的" << endl;
	}
	//成员函数判断
	ret = c1.isSameByclass(c2);
	if (ret)
	{
		cout << "成员函数判断：c1和c2是相等的" << endl;
	}
	else
	{
		cout << "成员函数判断：c1和c2是不相等的" << endl;
	}
	system("pause");
	return 0;
}