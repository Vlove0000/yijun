// p9.50.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<string>
#include<vector>
#include<iostream>
using namespace std;

class data {
public:
	unsigned year, month, day;

};
vector<string> val = {"123","5","68" };

int main(){
	/*data::data*/

	int sum;
		for(auto c : val) {
			int d = stoi(c);
			 sum += d;
		}
	cout<<sum;
    return 0;
}

