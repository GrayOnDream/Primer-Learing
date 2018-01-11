/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 10时03分17秒
 ************************************************************************/
#include <vector>
#include <list>
#include <deque>
#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    cout<<"primer 9.13\n";
    vector<int> ve = {1,2,3,4};
    vector<double> v = {1,2,3,4};
    list<int> l1(ve.begin(),ve.end());
    list<int> l(v.begin(),v.end());

    return 0;
}
