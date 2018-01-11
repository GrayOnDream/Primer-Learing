/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 04时25分37秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 5.14\n";
    string str;
    size_t count = 1;
    size_t max = 0;
    string maxString;
    cin >> str;
    maxString = str;
    while(cin >> str)
    {
        if(str == maxString)
        {
            ++count;
        }
        else if(max < count)
        {
            max = count;
            maxString = str;
        }
    }

    cout<<"max string is "<<maxString<<" "<<max<<" times!"<<endl;
    return 0;
}
