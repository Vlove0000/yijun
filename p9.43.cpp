// p9.43.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

void replace_string(string &s, const string &oldVal, const string &newVal) {
	auto len = oldVal.size();
	if (len = 0)
		return;
	auto it = s.begin();
	auto it2 = oldVal.begin();
	while (it < s.end()) {
		auto it1 = it;//为了下面的应用
		while (*it1 == *it2&&it2 != oldVal.end())//没有第二个条件，可能会陷入死循环，跳不出来。
		{
			it1++; it2++;

		}
		if (it2 == oldVal.end()){//跳出上一个while之后，验证是否是满足第二个条件才跳出循环的。
			 //it=s.erase(it1 - oldVal.size() - 1, it1);
			it = s.erase(it, it1);
			s.insert(it,newVal.begin(), newVal.end());
			it += newVal.size();
		}
		else {
			it = it1;
		}
	}
	
	/*for (auto it1 = s.begin(); it1 != s.end(); it1++) {

		if (*it1 == oldVal)
		{

		}
	}*/

}
int main()
{
	
    return 0;
}

