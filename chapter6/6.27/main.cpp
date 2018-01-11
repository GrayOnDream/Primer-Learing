/*************************************************************************
	> File Name: 6.27/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 21时37分45秒
 ************************************************************************/
#include <initializer_list>
#include <iostream>
using namespace std;

int get_sum(initializer_list<int> lst)
{
    int sum = 0;
    for(auto n:lst)
    {
        sum += n;
    }

    return sum;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.27\n";

    cout<<get_sum({1,2,3,3,4})<<endl;

    return 0;
}
