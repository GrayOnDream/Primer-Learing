/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 10时08分57秒
 ************************************************************************/
#include <vector>
#include <string>
#include <list>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.14\n";

    vector<char *> v = {"what","any"};
    list<string> l(v.begin(),v.end());
    return 0;
}
