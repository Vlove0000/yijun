// intint.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void swap(int  &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << endl;
}

int main()
{

	int c = 1; int d = 2;
	swap(c, d);

	cout << c << " " << d << endl;

	return 0;
}
