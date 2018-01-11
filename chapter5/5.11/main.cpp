/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 03时57分06秒
 ************************************************************************/

/*
 * 无法正确统计tab，enter，space的数量，cin将其忽略
 *
 */
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 5.10\n";
    char ch;
    int aCount = 0;
    int eCount = 0;
    int iCount = 0;
    int oCount = 0;
    int uCount = 0;
    int spaceCount = 0;
    int tabCount = 0;
    int enterCount = 0;
    int otherCount = 0;

    while(cin >> ch)
    {
        if('a' == ch || 'A' == ch)
        {
            ++aCount;
        }
        else if('e' == ch || 'E' == ch)
        {
            ++eCount;
        }
        else if('i' == ch || 'I' == ch)
        {
            ++iCount;
        }
        else if('o' == ch || 'O' == ch)
        {
            ++oCount;
        }
        else if('u' == ch || 'U' == ch)
        {
            ++eCount;
        }
        else if('\t' == ch)
        {
            ++tabCount;
        }
        else if('\n' == ch)
        {
            ++enterCount;
        }
        else if(' ' == ch)
        {
            ++spaceCount;
        }
        else
        {
            ++otherCount;
        }
    }

    cout<<"count of a is "<<aCount<<endl;
    cout<<"count of e is "<<eCount<<endl;
    cout<<"count of i is "<<iCount<<endl;
    cout<<"count of o is "<<oCount<<endl;
    cout<<"count of u is "<<uCount<<endl;
    cout<<"count of space is "<<spaceCount<<endl;
    cout<<"count of tab is "<<tabCount<<endl;
    cout<<"count of enter is "<<enterCount<<endl;
    cout<<"count of other alpha is "<<otherCount<<endl;

    return 0;
}
