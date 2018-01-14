/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 13时56分10秒
 ************************************************************************/
#include "Employee.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 13.18\n";
    Employee player("jiangyao");
    cout<<player.getName()<<"\t"<<player.getNumber()<<endl;

    return 0;
}
