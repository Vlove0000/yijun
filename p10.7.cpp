
#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

void elimDups(vector<string> & ve0)
{
	sort(ve0.begin(), ve0.end());
	for (auto c : ve0)
		cout << c << "  ";
	cout << "\n";
	//将重复的单词提取并排到到后方去
	auto end_unique = unique(ve0.begin(), ve0.end());
	for (auto c : ve0)
		cout << c << "  ";
	cout << "\n";
	//将重复的单词删除掉
	ve0.erase(end_unique, ve0.end());
	for (auto c : ve0)
		cout << c << "  ";
	cout << "\n";
	
}
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}
int main()
{
	vector<string> ve;
	ifstream in;
	in.open("C:\\Users\\83718\\Desktop\\猜想.txt");
	string val;
	while (in >> val) {
		ve.push_back("66");
		ve.push_back(val);
	}
	//读入文件内容后输出
	for (auto c : ve)
		cout << c << "  ";
	cout << "\n";
	//字典排序后进行输出
	
	 elimDups(ve);
	
	 stable_sort(ve.begin(), ve.end(),isShorter);
	 for (auto c : ve)
		 cout << c << "  ";
	 cout << "\n";
    return 0;
}

