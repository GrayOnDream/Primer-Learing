/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 14时08分22秒
 ************************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool fun(int n)
{
    return n == 0;
}

int main(int argc, char **argv)
{
    cout<<"primer 10.36\n";
    vector<int> v = {1,2,30,34,0,57,9};
    auto f = [](const int &n){return n == 0;};
    auto it = find(v.rbegin(),v.rend(),0);
    cout<<(it.base() - v.begin())<<endl;

    return 0;
}
