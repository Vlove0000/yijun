// p10.29-10.33.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
#include<iterator>
using namespace std;


vector <string>ve0,ve3;
vector<int>ve1;
int main()
{
 /* 从文件流中读取数据*/
	//fstream in;
	//in.open("C:\\Users\\83718\\Desktop\\猜想2.txt");
	//if (!in) {
	//	cerr << "此文件打开失败" << endl;
	//	return -1;
	//}
	//istream_iterator<string> in_iter(in);//为什么要多此一举呢
	//istream_iterator<string> eof;//上一步后从in中读取的数据的尾后迭代器
	//while (in_iter != eof) {
	//	/*cout << *in_iter << "    ";
	//	in_iter++;*/
	//	ve0.push_back(*in_iter++);
	//}
	//for (auto c : ve0) {
	//	cout << c << " ";
	//}
	//cout << endl;

	//从标准输入中读取数据
	istream_iterator<int>in_iter(cin);
	istream_iterator<int> eof;
	while (in_iter != eof) {
		ve1.push_back(*in_iter);

	}
	for (auto c : ve1) {
		cout << c << " ";
	}
	sort(ve1.begin(), ve1.end());
	cout << "sort后的数据" << endl;
	for (auto c : ve1) {
		cout << c << " ";
	}
	

	ostream_iterator<int>out_iter(cout, " ");
	copy(ve1.begin(), ve1.end(), out_iter);
	
	
    return 0;
}

