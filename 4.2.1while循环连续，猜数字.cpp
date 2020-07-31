#include<iostream>
using namespace std;
#include<ctime>
//time系统时间头文件包含
int main()
{
	//添加随机种子，利用当前系统时间生成随机数，防止每次随机数都一样；
	srand((unsigned int)time(NULL));
	cout << "请输入1—100的数字" << endl;
	//1.系统生成随机数；
	int num = rand() % 100 + 1;
	//2.玩家进行猜测；
	int val = 0;
	//3.判断玩家的猜测；
	//猜对   推出；
	//猜错   提示 过大或过小  重新返回第二步骤；
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜您猜对了" << endl;
			break;
		}
	}


	system("pause");
	return 0;
}