// 777.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
/*int main()
{
	string a,k;
	getline(cin, a);
	for (auto c : a)
	{
		k=toupper(c);
		cout << k; 
	}
		return 0;
}*/

int main()
{
	string a;
	getline(cin, a);
	for (auto&c : a)
		c = toupper(c);
		cout << a;
	return 0;
}