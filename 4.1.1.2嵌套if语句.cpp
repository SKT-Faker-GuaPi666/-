#include<iostream>
using namespace std;
int main112()
{
	//1.选择科目；
	int a = 0;
	cout << "请选择您的科目，理科输入1，文科输入2" << endl;
	cin >> a;
	if (a > 1)
	{    
		//2.1.输入文科分数；
		int 文科score = 0;
		cout << "您选择的是文科，请输入您的分数" << endl;
		cin >> 文科score;
		//2.2.显示文科分数；
		cout << "您选择的是文科，您的分数为：" <<文科score<< endl;
		//2.3.判断本科线；
		  //如果大于470  一本；
		if (文科score > 470)
		{
			cout << "恭喜你考入一本大学" << endl;
			//2.4判断分数是否能考入名校；
			if (文科score > 700) 
			{
				cout << "您能考入北京大学" << endl;
			}
			else if (文科score > 650)
			{
				cout << "您能考入清华大学" << endl;
			}
			else if (文科score > 600)
			{
				cout << "您能考入人民大学" << endl;
			}
			else {
				cout << "您的分数不能考入全国排名前三的大学请选择其他院校" << endl;
			}
		}
		//如果大于450  二本；
		else if (文科score > 450)
		{
			cout << "恭喜您考入二本大学" << endl;
		}
		//如果大于400  三本；
		else if (文科score > 400)
		{
			cout << "恭喜您考入三本大学" << endl;
		}
		//其余， 没考上；
		else
		{
			cout << "您未能考入本科，请继续努力" << endl;
		}
	}
	else
	{
		//3.1.输入理科分数；
		int 理科score = 0;
		cout << "您选择的是理科，请输入您的分数" << endl;
		cin >> 理科score;
		//3.2.显示理科分数；
		cout << "您选择的是理科，您的分数为：" << 理科score << endl;
		//3.3.判断本科线
		  //如果大于450  一本；
		if (理科score > 450)
		{
			cout << "恭喜你考入一本大学" << endl;
			//2.4判断分数是否能考入名校；
			if (理科score > 700)
			{
				cout << "您能考入清华大学" << endl;
			}
			else if (理科score > 650)
			{
				cout << "您能考入北京大学" << endl;
			}
			else if (理科score > 600)
			{
				cout << "您能考入人民大学" << endl;
			}
			else {
				cout << "您的分数不能考入全国排名前三的大学请选择其他院校" << endl;
			}
		}
		//如果大于400  二本；
		else if (理科score > 400)
		{
			cout << "恭喜您考入二本大学" << endl;
		}
		//如果大于350  三本；
		else if (理科score > 350)
		{
			cout << "恭喜您考入三本大学" << endl;
		}
		//其余，没考上；
		else
		{
			cout << "您未能考入本科，请继续努力" << endl;
		}
	}
	system("pause");
	return 0;
}