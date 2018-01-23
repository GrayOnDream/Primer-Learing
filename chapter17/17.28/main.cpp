/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 09时23分53秒
 ************************************************************************/
#include <random>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 17.28\n";
    int n;
    cin>>n;
    default_random_engine e(n);
    for(int i = 0;i < 10;i ++)
        cout<<e()<<"\t";
    cout<<endl;

    return 0;
}
