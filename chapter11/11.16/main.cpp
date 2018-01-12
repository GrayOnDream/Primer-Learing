/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 16时38分13秒
 ************************************************************************/
#include <vector>
#include <string>
#include <map>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 11.16\n";
    map<string,int> m;

    m[string("what")] = 1;
    m[string("how")] = 2;
    m[string("when")] = 3;

    auto it = m.begin();
    //error it->first = string("which");
    it->second = 4;

    return 0;
}
