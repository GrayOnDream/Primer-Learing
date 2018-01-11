/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 14时00分57秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.33\n";
    vector<int> p = {1,2,3,4,5};
    for(auto it = p.end();;)
    {
        it--;
        cout<<*it<<endl;
        if(it == p.begin()) break;

    }

    return 0;
}
