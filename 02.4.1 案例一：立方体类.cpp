#include<iostream>
using namespace std;

//��������ư�����

class Cube
{
private:
	int m_L = 0;//��
	int m_W = 0;//��
	int m_H = 0;//��
public:
	void setL(int l)//���ó�
	{
		m_L = l;
	}
	int getL()
	{
		return m_L;
	}

	void setW(int w)//���ÿ�
	{
		m_W = w;
	}
	int getW()
	{
		return m_W;
	}

	void setH(int h)//���ø�
	{
		m_H = h;
	}
	int getH()
	{
		return m_H;
	}

	int calculate_s()//�������
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
	int calculate_v()//�������
	{
		return m_L * m_W * m_H;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByclass(Cube &c2)
	{
		if (m_L == c2.getL() && m_W == c2.getW() && m_H == c2.getH())
		{
			return true;
		}
		return false;
	}
};

//����ȫ�ֺ����ж� �����������Ƿ����
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

	cout << "c1�����Ϊ:" << c1.calculate_s() << endl;
	cout << "c1�����Ϊ:" << c1.calculate_v() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	//ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "ȫ�ֺ����жϣ�c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "ȫ�ֺ����жϣ�c1��c2�ǲ���ȵ�" << endl;
	}
	//��Ա�����ж�
	ret = c1.isSameByclass(c2);
	if (ret)
	{
		cout << "��Ա�����жϣ�c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "��Ա�����жϣ�c1��c2�ǲ���ȵ�" << endl;
	}
	system("pause");
	return 0;
}