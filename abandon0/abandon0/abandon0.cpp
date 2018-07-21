// abandon0.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
 
//y用引用不用指针是因为引用不再另开辟 内存，别名与本身用的是同一个地址。
//在main函数中调用swap函数时实参不必再变量名前加&以表示地址，系统传递的是实参的地址不是实参的值
////int i = 5;
////const int &a = i;
////a = 3;//错误，因为引用a是const int 类型不能直接改变引用的值
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
}

int main()
{
	
	int c = 1; int d = 2;
	swap(c, d);
	
	cout << c << " " << d <<endl;

    return 0;
}

