// String0.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<string>
#include<vector>
using namespace std;

///string类型 一个只包含字符元素的特殊容器 
//int main()
//{
//	string s;
//	while (cin >> s) {
//		/*cout << s.size() << endl;
//		cout << s[1] << s[2]<<endl;*/
//		for (auto &c : s) {
//			/*cout << c << " ";*/
//			if (islower(c)) {
//				c=toupper(c);
//				cout << c<< " ";
//			}
//		}
//		cout << endl;
//		
//	}
//	return 0;
//}


//vector 一个类模板 容器
int main(){
	/*vector<int> v; 
	
	int i;
	while (cin >> i)
		v.push_back(i);
	cout << v[0];*/

	vector<string>v1;
	string s;
	getline(cin,s);
	for (int i = 0; i << 100; i++) {
		v1.push_back(s);
	}
		for (auto c : s)
		{
			cout << c << " ";

}
return 0;
}