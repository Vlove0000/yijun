
#include "stdafx.h"
#include<iostream>
using namespace std;


//void func() {//此函数无返回值void，所以此函数应该用return。
//	cout << "begin" << endl;
//	return ;
//	cout << "end" << endl;
//}
//
//int main() {//main函数有返回值，返回值类型int，所以可以return 0
//	func();
//	return 0 ;
//}

//int bfunc(bool e)
//{
//	int rst = 0;
//	return e;
//}
//
//void * bfunc2()
//{
//	void * p =NULL;
//	return p;
//}
// int& bfun3( int a,int b)
//{
//	int ch = 0;
//	int tem = a;
//	a = b;
//	b = tem;
//	return a ;
//	return ch;
//	
//}
//int main()
//{
//
//	cout<<bfunc(0)<<" "<<bfunc2() <<" "<<bfun3(1,200)<<" "<<endl;
//
//	/*int ret1 = bfunc();
//	bfunc2();
//	void * p = bfunc2();
//	bfun3();
//	char ch = bfun3();
//	system("pause");*/
//}


//函数返回的是一个指针/地址
int* add(int x, int y)
{
	/*static int sum;*/
	int sum = x + y;//这样没有警告码？返回的是局部变量的地址没有问题的吗？？？？
	//return sum;//“return”: 无法从“int”转换为“int *”
	return &sum;//返回指针/
}
int& fun0(int x0, int y0) {
	int sum;
	sum = x0 + y0;
	//return x0 ;
	return sum;//这样不报错误吗？

}
int main()
{
	int a = 3, b = 5;
	cout << add(a, b) <<" "<< *add(a, b) << endl;
	cout << fun0(2, 8);
}