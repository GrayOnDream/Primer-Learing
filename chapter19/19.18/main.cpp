/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 14时02分04秒
 ************************************************************************/
#include <functional>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int count_some(const vector<string> &v)
{
    return count_if(v.begin(),v.end(),mem_fn(&string::empty));
}

int main(int argc, char **argv)
{
    cout<<"primer 19.18\n";
    vector<string> str = {"" , "", "1", "", "2"};
    cout<<count_some(str)<<endl;

    return 0;
}
