// p10.1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>
#include<numeric>
using namespace std;
//class COUNT{ 
//private:
//	int *it0;
//	
//	int val;
//public:
//	int count(it0, it1, val) {
//
//	}
//
//};


int main()
{
	int n;
	vector<int>ve0;
	while (cin >> n) {
		ve0.push_back(n);

	}
	
	if (ve0.empty()) {
		cout << "int 是空的"<<endl;
		string str;
		list<string>li;
		while (cin >> str) {
		li.push_back(str);
		}
		if (li.empty()) {
			cout << "根本就没写入数据"<<endl;
		}
		auto sum1 = count(li.begin(), li.end(), "he");

		cout << "string类型个数" <<" "<< sum1 << endl;
	}
	else{
		/*for (auto c : ve0) {
			cout << c;
		}*/
		cout << "\n";
		auto sum = count(ve0.begin(), ve0.end(), 4);
		cout << "4的个数为"<<sum;

		auto sum2=accumulate(ve0.begin(), ve0.end(), 1);
		cout << "整数之和为" << sum2 << endl;
	}
	
 

	
	return 0;
}

