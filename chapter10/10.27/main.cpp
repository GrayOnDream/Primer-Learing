/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 12时59分53秒
 ************************************************************************/
#include <vector>
#include <list>
#include <iterator>
#include <functional>
#include <algorithm>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.27\n"<<endl;
    vector<int> v = {1,2,4,4,5,4};
    list<int> l;
    sort(v.begin(),v.end());
    unique_copy(v.begin(),v.end(),back_inserter(l));
    for(auto s:l)
    {
        cout<<s<<endl;
    }
    
    return 0;
}
