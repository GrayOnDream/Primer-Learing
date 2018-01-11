/*************************************************************************
	> File Name: 6.30/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 21时58分34秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

bool str_sub(const string &str1,const string &str2)
{
    if(str1.size() == str2.size())
    {
        return str1 == str2;
    }

    auto size = (str1.size() < str2.size())?str1.size():str2.size();
    for(decltype(size) i = 0;i != size;++ i)
    {
        if(str1[i] != str2[i])
        {
            return;             //error return
        }
    }

    //no return may be a leak;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.30\n";


    return 0;
}
