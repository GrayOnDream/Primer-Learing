/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 21时32分18秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Primer 3.2\n";
    string str;
    int n = 0;
    while(getline(cin,str))//while(cin>>str)
    {
        n++;
        cout<<n<<"\t"<<str<<endl;
    }

    return 0;
}
