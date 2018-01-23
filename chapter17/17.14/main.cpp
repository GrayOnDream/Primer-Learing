/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 08时38分28秒
 ************************************************************************/
#include <regex>
#include <iostream>
#include <exception>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 17.14\n";
    try
    {
        string str;
        cin>>str;
        regex re("[[:alpha:]]+\\.(cpp|cxx|cc)$",regex::icase);
        smatch match;
        if(regex_search(str,match,re))
        {
            cout<<match.str()<<endl;
        }
    }
    catch(regex_error &e)
    {
        cout<<e.what()<<endl;
        cout<<e.code()<<endl;
    }

    return 0;
}
