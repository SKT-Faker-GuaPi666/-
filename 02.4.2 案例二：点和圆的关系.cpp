#include<iostream>
using namespace std;
#include "point.h"
#include "circle.h"
//���Բ�Ĺ�ϵ

////��������
//class Point
//{
//public:
//	//����x
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡx
//	int getX()
//	{
//		return m_X;
//	}
//	//����y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡy
//	int getY()
//	{
//		return m_Y;
//	}
//
//
//private:
//	int m_X;
//	int m_Y;
//};

////Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private :
//	int m_R;//�뾶;
//	Point m_Center;//Բ�ģ�
//};
//�жϵ��Բ�Ĺ�ϵ
void isInCircle0242(Circle& c, Point& p)
{
	//��������֮����루ƽ����
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	//�жϹ�ϵ
	if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}

}
int main0242()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(10);
	c.setCenter(center);
	//������
	Point p;
	p.setX(20);
	p.setY(14);
	//�жϹ�ϵ
	isInCircle0242(c, p);

	system("pause");
	return 0;
}