/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 10时19分09秒
 ************************************************************************/
#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.16\n";
    list<int> l = {1,2,3};
    vector<int> v = {1,2,3};
    //error
    cout<<(l < v)<<endl;

    return 0;
}
