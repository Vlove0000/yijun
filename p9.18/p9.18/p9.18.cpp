

#include "stdafx.h"
#include<iostream>
#include<string>
#include<deque>
#include<list>
using namespace std;

int main()
{
	list<string> de;
	string s;
	while (cin >> s)
	{
		de.push_back(s);
	}
	//3种输出的方法
	for (auto c : de)
		cout << c << " " << endl;
	/*auto it = de.begin();
	for (; it < de.end(); it++)
		cout << *it << " " << endl;
	for (int i = 0; i < size(de); i++)
		cout << de[i] << " " << endl;*/


	//p9.20
	list<int>li = { 1,2,3,4,5,6,7,8,9,10,64,437,6 };
	deque<int>de1,de2;
	//deque<int>de2;
	for (auto itli = li.begin(); itli != li.end(); itli++)
		if (*itli % 2 == 0) {
			de1.push_front(*itli);
			cout << *itli << " " ;
		}
		else {
			de2.push_back(*itli);
		}

    return 0;
}

