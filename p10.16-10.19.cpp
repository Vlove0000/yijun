// p10.16-10.19.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
vector<string>words;
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
		words.push_back(val);
	}
	in.close();
	/*elimdups(words);
	for (auto c : words) {
		cout << c << "  ";
	}*/
	
	biggies(words, 4);
    return 0;
}

