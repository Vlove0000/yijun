

#include "stdafx.h"
#include<vector>
#include<string>
#include<iostream>
#include<forward_list>
using namespace std;


vector<double> ve = { 1,2,9,8 };
int main()
{
	/*cout << ve.at(0) << " " << ve[0] << endl<<ve.front()<<*(ve.begin());*/
	/*cout << size(ve) << ve[0] << ve[1] << ve[2] << ve[3] << endl;
	ve.pop_back();
	cout << ve[size(ve) - 1] << endl;
	cout << size(ve) <<" "<<sizeof(ve) <<endl;*/

	//p9.27
	forward_list<int>flst = { 1,2,4,3,5,6,8,9,0,1,6,7 };
	auto prev = flst.before_begin();
	auto itflst = flst.begin();
	/*for (auto prev = flst.before_begin(); itflst != flst.end(); itflst++)
		cout << *itflst << " ";*/
	while (itflst != flst.end())
	{
		if (*itflst %2) //当余数为1的时候执行
		{
			itflst=flst.erase_after(prev);//.erase_after()是有返回值的，返回的是被删除元素之后的元素迭代器。
			//itflst++;
		}
		else {
			//cout << *itflst;
			itflst=flst.insert_after(itflst, *itflst);//返回的是插入如之后的那个元素的迭代器。
			prev = itflst;
			itflst++;		
		}
	}
	/*for (; itflst != flst.end(); itflst++)
	{
		if (*itflst % 2 == 0)
		{
			flst.erase_after(prev);
		}
		prev = itflst;
	}*/
	for (auto itflst= flst.begin(); itflst != flst.end(); itflst++)
		cout << *itflst << " " ;
	
    return 0;
}

