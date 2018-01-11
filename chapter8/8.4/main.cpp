/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月09日 星期二 13时56分34秒
 ************************************************************************/
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 8.4\n";

    if(argc > 1)
    {
        vector<string> vec;
        string str;
        ifstream in(argv[1]);
        while(in>>str)
        {
            vec.push_back(str);
        }

        int i = 0;
        for(auto s:vec)
        {
            i ++;
            cout<<i<<":\t"<<s<<endl;
        }


    }

    return 0;
}
