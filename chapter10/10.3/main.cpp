/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 10时32分27秒
 ************************************************************************/
#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.3\n";
    vector<int> v = {1,2,3,4,6,7,4,5};
    cout<<"result:"<<accumulate(v.cbegin(),v.cend(),0);


    return 0;
}
