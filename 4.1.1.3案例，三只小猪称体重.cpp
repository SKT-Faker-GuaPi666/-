#include<iostream>
using namespace std;
int main113()
{
	//1.输入三只小猪的重量；
	float a = 0.0f;
	float b = 0.0f;
	float c = 0.0f;
	cout << "请输入小猪a的重量（单位：千克）" << endl;
	cin >> a;
	cout << "请输入小猪b的重量（单位：千克）" << endl;
	cin >> b;
	cout << "请输入小猪c的重量（单位：千克）" << endl;
	cin >> c;
	//2.显示三只小猪的重量；
	cout << "小猪a的重量为：" << a << "千克" << endl;
	cout << "小猪b的重量为：" << b << "千克" << endl;
	cout << "小猪c的重量为：" << c << "千克" << endl;
	//3.判断那只最重；
	if (a > b)
	{
		if (a > c)
		{
			cout << "小猪a的重量最重，为：" << a << "千克" << endl;
		}
		else
		{
			cout << "小猪c的重量最重，为：" << c << "千克" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "小猪b的重量最重，为：" << b << "千克" << endl;
		}
		else
		{
			cout << "小猪c的重量最重，为：" << c << "千克" << endl;
		}
	}

	system("pause");
	return 0;
}