/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 14时38分20秒
 ************************************************************************/

#include <iostream>
using namespace std;

bool pointer()
{
    int *p = new int;
    return p;
}

int main(int argc, char **argv)
{
    cout<<"primer 12.8\n";
    cout<<pointer()<<endl;   

    return 0;
}
