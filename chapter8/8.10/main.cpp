/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月09日 星期二 14时48分16秒
 ************************************************************************/
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 8.10\n";

    if(argc <= 1) return -1;
    ifstream file(argv[1]);
    string str;
    vector<string> vec;
    while(file>>str)
    {
        vec.push_back(str);
    }

    for(auto s:vec)
    {
        istringstream is(s);
    }

    return 0;
}
