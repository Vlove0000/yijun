// p9.4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;

 vector<int>::iterator search(vector<int>::iterator it, vector<int>::iterator end, int val) {
	for (  ; it != end; it++) {
		if (*it == val) {
			//printf("ha");
			return it;
		}
			
		else{ 
			printf("没找到\n");
			//return false;//为什么不循环了    解答：如果执行了这一步就会直接 返回到主调函数（就是cout << search(num.begin(), num.end(), 20) << endl;)。
		}
		
	}
	//printf("666666\n");
}

int main() {
	vector<int> num = {20, 2, 3, 4, 5, 6, 7, 8, 9,0};
	
	cout << *(search(num.begin(), num.end(), 4))<< endl;
	/*cout << search(num.begin(), num.end(), 2) << endl;
	cout << search(num.begin(), num.end(), 3) << endl;
	cout << search(num.begin(), num.end(), 4) << endl;
	cout << search(num.begin(), num.end(), 5) << endl;
	cout << search(num.begin(), num.end(), 8) << endl;
	cout << search(num.begin(), num.end(), 9) << endl;
	cout << search(num.begin(), num.end(), 10) << endl;*/



	return 0;
}

//int main()
//{
//	int a = 9;
//	vector<int>num;
//	for (auto it = num.begin(); it != num.end(); it++) {
//		if(*it==a){
//			cout << *it << endl;
//			return 1;
//
//		}
//	}
//
//    return 0;
//}

