/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 04时54分32秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 5.17\n";
    int a[] = {1,2,3};
    int b[] = {1,2,3,4,5};
    for(size_t i = 0;i < 3;i ++)
    {
        if(a[i] != b[i])
        {
            cout<<"false\n";
            return 0;
        }
    }

    cout<<"true\n";
    return 0;
}
