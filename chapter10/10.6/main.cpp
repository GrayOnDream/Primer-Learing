/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 10时45分30秒
 ************************************************************************/
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.6\n";
    vector<int> v = {1,2,4,5,6,8};
    fill_n(v.begin(),30,0);
    for(auto a:v)
    {
        cout<<a<<endl;
    }

    return 0;
}
