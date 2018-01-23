/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 14时16分52秒
 ************************************************************************/
#include <tuple>
#include <iostream>
#include <functional>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 17.2\n";
    tuple<int,const string,vector<int>,pair<int,int>> t(1,"w",{2,3,4},make_pair<int,int>(1,1));
    return 0;
}
