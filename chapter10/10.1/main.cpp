/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 10时21分14秒
 ************************************************************************/
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.1\n";
    vector<int> v = {1,33,67,2,44,4,42,4,854,4};
    cout<<count(v.cbegin(),v.cend(),4);
    cout<<endl;

    return 0;
}
