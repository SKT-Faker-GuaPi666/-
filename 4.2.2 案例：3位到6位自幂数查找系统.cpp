#include<iostream>
using namespace std;
//用户输入查找范围，找出该范围的可能存在的水仙花数，四叶玫瑰数、五角星数、六合数；
int main422()
{
	//3.检查；
	while (1)
	{
		//1.用户定义查找范围；
		cout << "请输入您要查找的范围，按照不同的数种分；（例如水仙花数为：100-1000之间的数集）" << endl;
		int min = 0;
		int max = 0;
		cout << "请输入最小值" << endl;
		cin >> min;
		cout << "请输入最大值" << endl;
		cin >> max;
		//2.打印，输入的数据范围；
		cout << "您输入的范围为:" << min << "-" << max << endl;
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
					a = min % 10;              //提取个位；
					b = min / 10 % 10;         //提取十位；
					c = min / 100 % 10;        //提取百位；
					d = min / 1000 % 10;       //提取千位；
					e = min / 10000 % 10;      //提取万位；
					f = min / 100000;     //提取十万位；
					//4.判断，分类并运算；
					if (max < 1000)
					{
						if (a * a * a + b * b * b + c * c * c == min)
						{
							cout << "水仙花数：" << min << endl;
						}
					}
					else if (max < 10000)
					{
						if (a * a * a * a + b * b * b * b + c * c * c * c + d * d * d * d == min)
						{
							cout << "四叶玫瑰数：" << min << endl;
						}
					}
					else if (max < 100000)
					{
						if (a * a * a * a * a + b * b * b * b * b + c * c * c * c * c + d * d * d * d * d + e * e * e * e * e == min)
						{
							cout << "五角星数：" << min << endl;
						}
					}
					else if (max < 1000000)
					{
						if (a * a * a * a * a * a + b * b * b * b * b * b + c * c * c * c * c * c + d * d * d * d * d * d + e * e * e * e * e * e + f * f * f * f * f * f == min)
						{
							cout << "六合数：" << min << endl;
						}
					}
					min++;
				} while (min <= max);
				break;
			}
			else
			{
				cout << "您输入的最大值过大，请重新输入！" << endl;
			}
		}
		else
		{
			cout << "您输入的最小值过小，请重新输入！" << endl;
		}
	}
	

	system("pause");
	return 0;
}