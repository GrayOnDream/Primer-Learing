/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月06日 星期六 20时26分44秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Algorithm 4.22\n";
    int num = 0;
    cout<<"input number:";
    while(cin >> num)
    {
        cout<<"result ?:"<<((num < 60)?"fial":(num < 75)?"low pass":"high pass")<<endl;
        cout<<"result f:";
        if(num < 60)
        {
            cout<<"fial"<<endl;
        }
        else if(num < 75)
        {
            cout<<"low pass\n";
        }
        else
        {
            cout<<"high pass\n";
        }

        cout<<endl<<"input number:";
    }
    return 0;
}
