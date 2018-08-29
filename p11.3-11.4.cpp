// p11.3-11.4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;


int main()
{

	vector<string>ve0;
	string val;
	ifstream in;
	in.open("C:\\Users\\83718\\Desktop\\猜想2.txt");
	while (!in) {
		cerr << " 文件打不开" << endl;
		return -1;
	}
	/*while (in >> val) {
		ve0.push_back(val);

	}
	auto it=find(ve0.begin(), ve0.end(), "ai");
	auto a=count(ve0.begin(), ve0.end(), "ai");
	cout << a << endl;*/

	map<string,size_t>word_count;
	string word;
	while (in >> word) {
		++word_count[word];
	}
	for (const auto &w : word_count)
		cout << w.first << "出现了" << w.second << "次" << endl;
    return 0;
}

