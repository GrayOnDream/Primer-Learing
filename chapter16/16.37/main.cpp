/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 10时51分44秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 16.37\n";
    //max(1,2.3) is error
    //the complier can not match it
    cout<<max((double)1,2.3)<<endl;
    return 0;
}
