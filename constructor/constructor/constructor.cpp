// constructor.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//class Examble {
//private:
//	double  a;
//	int c;
//public:
//	两个构造函数，参数不一样
//	Examble(double x) :a(x) {}
//	Examble(int b,int b0) : a(b),c(b0)
//	{
//	}
//	void show() {
//		cout << a << endl;
//		cout << c << endl;
//}
//
//};
//int main()
//{
//	Examble D(100.01);
//	Examble A(200,300);//这个200，300对应的是构造函数里的形参200,300
//	Examble B = A;
//	D.show();
//	A.show();
//	B.show();
//    return 0;
//}

class Examble {
private:
	int a;
	int b;
public:
	Examble(int c) :a(c) {}
	Examble(int c,int d):a(c),b(d){}
	/*Examble(const Examble&D)
	{
		a = D.a;

	}*/
	Examble(const Examble&D)
	{
		a = D.a;
		b = D.b;
	}
	void show() {
		cout << "数据成员的初始值" << a <<" "<<b<< endl;
	}
	
};
int main() {
	Examble A(100);
	Examble B = A;//注意这里的对象初始化要调用拷贝构造函数，而非赋值 
	B.show();

	Examble C(200, 300);
	Examble F = C;
	F.show();
}
