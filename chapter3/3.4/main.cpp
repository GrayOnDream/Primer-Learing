/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 21时36分46秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Primer 3.4\n";
    string str1;
    string str2;
    if(cin>>str1>>str2)
    {
        if(str1 == str2)
        {
            cout<<str1<<"=="<<str2<<endl;
        }
        else
        {
            if(str1 > str2)
            {
                cout<<str1<<endl;
            }
            else
            {
                cout<<str2<<endl;
            }
        }

        if(str1.size() == str2.size())
        {
            cout<<"size equal\n";
        }
        else
        {
            if(str1.size() > str2.size())
            {
                cout<<str1<<endl;
            }
            else
            {
                cout<<str2<<endl;
            }
        }
    }

    return 0;
}
