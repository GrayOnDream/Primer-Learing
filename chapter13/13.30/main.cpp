/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 14时33分14秒
 ************************************************************************/
#include "HasPtr.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 13.30\n";
    
    vector<HasPtr> v = {HasPtr("jiangyao"),HasPtr("yunnan"),HasPtr("ruirui")};
    cout<<"wap";
    sort(v.begin(),v.end());
    return 0;
}
