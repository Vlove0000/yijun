
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

bool isshorter(const string &s1,const string &s2){
	return s1.size() < s2.size();
}
int main()
{
	vector<string>ve;
	string val;
	fstream in;
	in.open("C:\\Users\\83718\\Desktop\\猜想2.txt");
	if (!in) {
		cerr << "无内容为空" << endl;
		return -1;
	}
	else
	while (in >> val)
	{
		ve.push_back(val);
	}
	in.close();
	cout << "没排序之前：" << endl;
	for (auto c : ve) {
		cout << c << "  ";
	}
	cout << "\n";

	stable_sort(ve.begin(), ve.end());
	cout << "stable_sort排序之后：" << endl;
	for (auto c : ve) {
		cout << c << "  ";
	}
	cout << "\n";

	sort(ve.begin(), ve.end(), isshorter);
	cout << "sort排序之后：" << endl;
	for (auto c : ve) {
		cout << c << "  ";
	}
	cout << "\n";

	
    return 0;
}

