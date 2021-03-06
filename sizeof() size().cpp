// sizeof() size().cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

//sizeof()如下：
//数组——编译时分配的数组空间大小；
//指针——存储该指针所用的空间大小（存储该指针的地址的长度，是长整型，应该为4）；
//类型——该类型所占的空间大小；
//对象——对象的实际占用空间大小；
//函数——函数的返回类型所占的空间大小。函数的返回类型不能是void。
int main()
{
	string a2 = ("hello");
	int a3[5][8];
	cout <<"a3:"<< sizeof(a3) <<"  "<< sizeof(*a3) << endl;
	int a1[] = { 0,1,2,3,4,5,6,7,8,9 };
	cout << sizeof(*a1) << endl;//第一个元素0所占用的内存大小
	cout << sizeof(a1) << "  " << size(a1) << endl;//数组a1占用内存的大小  及a1内元素的个数
	cout << sizeof(a2) << "  " << size(a2)<<"   " <<a2.size()<< endl;//size为啥不是6呢？？因为返回的长度大小不包括NULL。
	cout << a2[0] << "  " << sizeof(a2[0])<<endl;//h是char类型的

	//sizeof与strlen()的区别
	/*strlen(...)是函数，要在运行时才能计算。参数必须是字符型指针（char*）。当数组名作为参数传入时，实际上数组就退化成指针了。
		它的功能是：返回字符串的长度。该字符串可能是自己定义的，也可能是内存中随机的，该函数实际完成的功能是从代表该字符串的第一个地址开始遍历，直到遇到结束符NULL。返回的长度大小不包括NULL。*/
	
		//sizeof返回定义arr数组时，编译器为其分配的数组空间大小，不关心里面存了多少数据。strlen只关心存储的数据内容，不关心空间的大小和类型。
	char arr[10] = "What?";
	int len_one1 = strlen(arr);
	int len_two1 = sizeof(arr);
	cout << len_one1 << " and " << len_two1 << endl;


	/*第一个输出结果22实际上每次运行可能不一样，这取决于parr里面存了什么（从parr[0]开始知道遇到第一个NULL结束）；
	第二个结果实际上本意是想计算parr所指向的动态内存空间的大小，但是事与愿违，sizeof认为parr是个字符指针，因此返回的是该指针所占的空间（指针的存储用的是长整型，所以为4）;
	第三个结果，由于*parr所代表的是parr所指的地址空间存放的字符，所以长度为1。*/
	char * parr = new char[10];
	int len_one = strlen(parr);
	int len_two = sizeof(parr);
	int len_three = sizeof(*parr);
	cout << len_one << " and " << len_two << " and " << len_three << endl;
	return 0;
}

