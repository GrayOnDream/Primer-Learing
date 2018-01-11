/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 04时17分33秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 5.12\n";
    char ch = ' ';
    size_t count = 0;
    while(cin >> ch)
    {
        if(ch == 'f')
        {
            cin>>ch;
            if(ch == 'f' || 
               ch == 'l' ||
               ch == 'i')
            {
                ++count;
            }
        }
    }

    cout<<"count of ff/fi//fl is "<<count<<endl;

    return 0;
}
