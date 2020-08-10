#include<iostream>
using namespace std;
//1.创建英雄联盟世界赛冠军队伍数据类型；包括（队名，冠军次数，夺冠时间）
struct Championteam
{
	//属性成员列表；
	//队名；
	string 战队名称;
	//年份；
	int 夺冠年份;
	//赛区；
	string 所属赛区;
}s3;

int main()
{
	//2.创建变量；
	//2.1：struct 结构体名 变量名；
	//在C++中，结构体定义的时候struct不可以省略，在创建变量的时候可以省略；
	Championteam s1;
	//给s1属性赋值；
	s1.战队名称 = "FNC";
	s1.夺冠年份 = 2011;
	s1.所属赛区 = "LEC";
	cout << "s1全球总决赛冠军队伍为：" << s1.战队名称 << " 夺冠年份为：" << s1.夺冠年份 << " 所属赛区为： " << s1.所属赛区 << endl;

	//2.2:struct 结构体名 变量名={成员值1、成员值2、...}
	struct Championteam  s2 = { "TPA",2012,"LMS" };
	cout << "s2全球总决赛冠军队伍为：" << s2.战队名称 << " 夺冠年份为：" << s2.夺冠年份 << " 所属赛区为： " << s2.所属赛区 << endl;
	//2.3:在定义结构体的时候顺便创建结构体变量
	s3.战队名称 = "SKT";
	s3.夺冠年份 = 2013;
	s3.所属赛区 = "LCK";
	cout << "s3全球总决赛冠军队伍为：" << s3.战队名称 << " 夺冠年份为：" << s3.夺冠年份 << " 所属赛区为： " << s3.所属赛区 << endl;

	struct Championteam s4 = { "SSW",2014,"LCK" };
	cout << "s4全球总决赛冠军队伍为：" << s4.战队名称 << " 夺冠年份为：" << s4.夺冠年份 << " 所属赛区为： " << s4.所属赛区 << endl;

	struct Championteam s5 = { "SKT",2015,"LCK" };
	cout << "s5全球总决赛冠军队伍为：" << s5.战队名称 << " 夺冠年份为：" << s5.夺冠年份 << " 所属赛区为： " << s5.所属赛区 << endl;

	struct Championteam s6 = { "SKT",2016,"LCK" };
	cout << "s6全球总决赛冠军队伍为：" << s6.战队名称 << " 夺冠年份为：" << s6.夺冠年份 << " 所属赛区为： " << s6.所属赛区 << endl;
	
	struct Championteam s7 = { "SSG",2017,"LCK" };
	cout << "s7全球总决赛冠军队伍为：" << s7.战队名称 << " 夺冠年份为：" << s7.夺冠年份 << " 所属赛区为： " << s7.所属赛区 << endl;
	
	struct Championteam s8 = { "IG",2018,"LPL" };
	cout << "s8全球总决赛冠军队伍为：" << s8.战队名称 << " 夺冠年份为：" << s8.夺冠年份 << " 所属赛区为： " << s8.所属赛区 << endl;
	
	struct Championteam s9 = { "FPX",2019,"LPL" };
	cout << "s9全球总决赛冠军队伍为：" << s9.战队名称 << " 夺冠年份为：" << s9.夺冠年份 << " 所属赛区为： " << s9.所属赛区 << endl;
	
	system("pause");
	return 0;
}