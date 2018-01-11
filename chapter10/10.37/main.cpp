/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 14时16分38秒
 ************************************************************************/
#include <list>
#include <vector>
#include <iterator>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.37\n";
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    list<int> l;
    copy(v.rbegin() + 3,v.rend() - 3,back_inserter(l));
    for(auto s:l)
    {
        cout<<s<<endl;
    }
    return 0;
}
