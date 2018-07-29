// fstream.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;


int main()
{
	ofstream out;//声明一个对象
	out.open("C:\\Users\\83718\\Desktop\\猜想.txt", ostream::app);//调用open()函数 打开文件
	if (!out) {
		cout << "打开文件失败" << endl;
		return -1;
	}
	out << "7" << endl;
	out << "hello github,zheshi" << endl;//向打开的文件内写入内容
	out << "nihoa wode shijje jun" << endl;
	out.close();

	ifstream in("C:\\Users\\83718\\Desktop\\猜想.txt");//两种方法都可行 
													 //in.open("C:\\Users\\83718\\Desktop\\猜想.txt");
	if (!in) {
		cerr << "无法打开输入文件" << endl;
		return -1;
	}

	string line;
	vector<string> words;
	while (in >> line)
		//while (getline(in, line)) //注意这里是 in不是cin
	{
		words.push_back(line);
	}
	in.close();
	for (auto c : words) {
		cout << c << endl;
	}
	/*auto iterator = words.begin();
	for (int i = 0; i < words.size(); i++)
	cout << *(iterator+i)<<endl;*/
	return 0;
}


