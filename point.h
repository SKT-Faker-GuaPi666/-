#pragma once
#include<iostream>
using namespace std;

//创建点类
class Point
{
public:
	//设置x
	void setX(int x);

		//读取x
		int getX();

		//设置y
	void setY(int y);

		//读取y
		int getY();
	
private:
	int m_X;
	int m_Y;
};
