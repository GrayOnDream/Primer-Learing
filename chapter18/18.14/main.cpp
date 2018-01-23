/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 17时10分19秒
 ************************************************************************/

#include <iostream>
using namespace std;

//this is visible in the file but others'
namespace 
{
    int i = 0;
}

int main(int argc, char **argv)
{
    cout<<"primer 18.14\n";
    cout<<i<<endl;
    return 0;
}
