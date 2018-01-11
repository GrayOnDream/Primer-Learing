/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 10时27分23秒
 ************************************************************************/
#include <string>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.2\n";
    list<string> l = {"what","can","i","do","strive","continue"};
    cout<<count(l.cbegin(),l.cend(),string("can"))<<endl;

    return 0;
}
