/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 05时11分32秒
 ************************************************************************/
#include <exception>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 5.24\n";
    
    int n1 = 0;
    int n2 = 0;
    cout<<"input first number:";
    cin>>n1;
    cout<<"input second number:";
    cin>>n2;

    try
    {
        if(n2 == 0) throw runtime_error("can not be zero!");
        cout<<"result:"<<n1/(n2 * 1.0)<<endl;
    }
    catch(runtime_error e)
    {
        cout<<e.what()<<endl;
    }

    return 0;
}
