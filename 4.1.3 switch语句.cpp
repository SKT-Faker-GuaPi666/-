#include<iostream>
using namespace std;
int main13()
{
    //渣男、渣女评判系统；
	//1.提示用户输入交谈对象频率；
	cout << "请输入你一年交谈的的对象数量" << endl;
	//2.显示；
	int num = 0;
	cin >> num;
	cout << "您一年交往对象的数量为：" <<num<<"个"<< endl;
	//3.根据用户的输入，提示用户最后的结果；
	switch (num)
	{
	case 0:
		cout << "您需要看医生，您的生理或者心理出现的严重问题!!!" << endl;
		break;
	case 1:
		cout << "您属于正常交往，是个老实人" << endl;
		break;
	case 2:
		cout << "您属于正常交往，是个老实人" << endl;
		break;
	case 3:
		cout << "您属于正常交往，但有转为渣男或者渣女的倾向，请加大力度" << endl;
		break;
	case 4:
		cout << "您有轻微的渣子倾向，请继续保持" << endl;
		break;
	case 5:
		cout << "您属于浅层次渣男或渣女，请适可而止" << endl;
		break;
	case 6:
		cout << "您属于一个标准渣男或者渣女，我想不明白你能2个月换一个，真有你的" << endl;
		break;
	case 7:
		cout<< "您属于一个标准渣男或者渣女，我想不明白你能2个月换一个，真有你的" << endl;
		break;
	case 8:
		cout << "你是一个高级渣男或者渣女，经常玩弄别人的感情，收手吧！" << endl;
		break;
	case 9:
		cout << "你是一个高级渣男或者渣女，经常玩弄别人的感情，收手吧！" << endl;
		break;
	default:
		cout << "你无可救药了，渣滓不得好死！！！" << endl;
		break;

	}
	//if和switch的区别；
	//switch的缺点，判断的时候只能是整型或者字符型，不可以是一个区间；
	//switch的优点，结构清晰，执行效率高；

	system("pause");
	return 0;
}