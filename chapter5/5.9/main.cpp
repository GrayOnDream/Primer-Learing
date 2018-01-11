/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 03时57分06秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 5.9\n";
    char ch;
    int vowelCount = 0;
    int otherCount = 0;
    while(cin >> ch)
    {
        if(ch == 'a' || 
           ch == 'e' || 
           ch == 'i' || 
           ch == 'o' || 
           ch == 'u')
        {
            ++vowelCount;
        }
        else
        {
            ++otherCount;
        }
    }

    cout<<"count of vowel is "<<vowelCount<<endl;
    cout<<"count of other alpha is "<<otherCount<<endl;

    return 0;
}
