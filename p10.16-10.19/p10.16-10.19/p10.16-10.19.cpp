// p10.16-10.19.cpp: 定义控制台应用程序的入口点。
//
//一定要注意细节，每个参数，每个逻辑符号的意义，写法<与<=及可能完全不一样。
#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
vector<string>file;
void elimdups(vector<string> &words) {
	sort(words.begin(), words.end());
	auto uniqueendit=unique(words.begin(), words.end());
	words.erase(uniqueendit, words.end());
	stable_sort(words.begin(), words.end(), [](string a, string b) {return a.size() <b.size(); });

}
void biggies(vector<string>&words,size_t sz) {
	elimdups(words);
	auto wc =find_if(words.begin(), words.end(), [sz](const string &a) {return a.size() >= sz; });
	auto count = words.end() - wc;

	//两种输出方式
	for (auto i = wc; i < words.end(); i++) {
		cout << *i << " " << endl;
	}
	/*for_each(wc, words.end(), [](const string&s) {cout << s << " "; });*/
	cout << endl;
}
int main()
{
	ifstream in;
	in.open("C:\\Users\\83718\\Desktop\\猜想2.txt");
	if (!in) {
		cerr << "打开文件失败"<<endl;
		return -1;
	}
	string val;
	while (in >> val) {
		file.push_back(val);
	}
	in.close();
	/*elimdups(words);
	for (auto c : words) {
		cout << c << "  ";
	}*/
	
	biggies(file, 4);
    return 0;
}

