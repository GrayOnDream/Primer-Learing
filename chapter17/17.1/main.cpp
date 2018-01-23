/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 14时14分21秒
 ************************************************************************/
#include <tuple>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 17.1\n";
    tuple<int,int,int> t(1,2,3);
    cout<<get<0>(t)<<endl;
    cout<<get<1>(t)<<endl;
    cout<<get<2>(t)<<endl;
    return 0;
}
