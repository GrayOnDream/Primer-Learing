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
    vector<double> v = {1.1,2.2,3.5,4.9,6.6,7.10,4.6,5.899};
    cout<<"result:"<<accumulate(v.cbegin(),v.cend(),0.0);


    return 0;
}
