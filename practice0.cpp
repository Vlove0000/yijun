// practice0.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	bool z0;
	char z1;
	wchar_t z2;
	char16_t z3;
	char32_t z4;
	short z5;
	int z6;
	long z7;
	long long z8;
	float z9;
	double z10;
	long double z11;
	
	union Data {
		struct {
			int x; int y;
		}s;
		
		int x, y;

	}d;
	d.x = 1;
	d.y = 2;
	d.s.x = d.x*d.x;
	d.s.y = d.y + d.y;
	printf("%d%d\n", d.s.x, d.s.y);
	//cout << &s.x << " " << &s.y << endl;
	cout << &d.x << " " << &d.y << endl;
	cout << &d.s.x <<"\n"<< &d.s.y << endl;
	cout << sizeof(z0) << sizeof(z1) << " " << sizeof(z2) << sizeof(z3) << sizeof(z4) << sizeof(z5) << sizeof(z6) << sizeof(z7) << sizeof(z8) << sizeof(z9) << sizeof(z10) << sizeof(z11) << endl;
    return 0;
}

