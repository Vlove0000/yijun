// p5.3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int sum = 0, val = 1;
	while (val <= 10) {
		sum += val, ++val;
	}
	cout << sum << endl;
    return 0;
}

