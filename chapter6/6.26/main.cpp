/*************************************************************************
	> File Name: 6.26/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 21时24分03秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 6.26\n";

    int n = argc;
    cout<<argc<<endl;
    while(n != 1)
    {
        cout<<n<<endl;
        cout<<argv[1]<<endl;
        if(string(argv[n - 1]) == string("-h"))
        {
            cout<<"this comline is for test\n";
        }
        else if(string(argv[n - 1]) == string("-m"))
        {
            cout<<"output some thing as you want to say!\n";
        }
        else if(string(argv[n - 1]) == string("-f"))
        {
            cout<<"now you did it!\n";
        }
        else
        {
            cout<<"no input files!\n";
        }       
        
        n--;
    }

    return 0;
}
