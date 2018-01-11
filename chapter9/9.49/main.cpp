/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 14时22分50秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.49\n";
    string word;
    string result;
    string up = "bdfl";
    string down = "gpqy";
    while(cin>>word)
    {
        if(word.find_first_of(up) == string::npos &&
           word.find_first_of(down) == string::npos &&
           word.size() > result.size())
        {
            result = word;
        }
    }

    cout<<result<<endl;

    return 0;
}
