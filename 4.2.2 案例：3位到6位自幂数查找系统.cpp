#include<iostream>
using namespace std;
//�û�������ҷ�Χ���ҳ��÷�Χ�Ŀ��ܴ��ڵ�ˮ�ɻ�������Ҷõ�����������������������
int main422()
{
	//3.��飻
	while (1)
	{
		//1.�û�������ҷ�Χ��
		cout << "��������Ҫ���ҵķ�Χ�����ղ�ͬ�����ַ֣�������ˮ�ɻ���Ϊ��100-1000֮���������" << endl;
		int min = 0;
		int max = 0;
		cout << "��������Сֵ" << endl;
		cin >> min;
		cout << "���������ֵ" << endl;
		cin >> max;
		//2.��ӡ����������ݷ�Χ��
		cout << "������ķ�ΧΪ:" << min << "-" << max << endl;
		if (min > 100)
		{
			if (max < 1000000)
			{
				do
				{
					int a = 0;
					int b = 0;
					int c = 0;
					int d = 0;
					int e = 0;
					int f = 0;
					a = min % 10;              //��ȡ��λ��
					b = min / 10 % 10;         //��ȡʮλ��
					c = min / 100 % 10;        //��ȡ��λ��
					d = min / 1000 % 10;       //��ȡǧλ��
					e = min / 10000 % 10;      //��ȡ��λ��
					f = min / 100000;     //��ȡʮ��λ��
					//4.�жϣ����ಢ���㣻
					if (max < 1000)
					{
						if (a * a * a + b * b * b + c * c * c == min)
						{
							cout << "ˮ�ɻ�����" << min << endl;
						}
					}
					else if (max < 10000)
					{
						if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == min)
						{
							cout << "��Ҷõ������" << min << endl;
						}
					}
					else if (max < 100000)
					{
						if (a * a * a * a * a + b * b * b * b * b + c * c * c * c * c + d * d * d * d * d + e * e * e * e * e == min)
						{
							cout << "���������" << min << endl;
						}
					}
					else if (max < 1000000)
					{
						if (a * a * a * a * a * a + b * b * b * b * b * b + c * c * c * c * c * c + d * d * d * d * d * d + e * e * e * e * e * e + f * f * f * f * f * f == min)
						{
							cout << "��������" << min << endl;
						}
					}
					min++;
				} while (min <= max);
				break;
			}
			else
			{
				cout << "����������ֵ�������������룡" << endl;
			}
		}
		else
		{
			cout << "���������Сֵ��С�����������룡" << endl;
		}
	}
	

	system("pause");
	return 0;
}