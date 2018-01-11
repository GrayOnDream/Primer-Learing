/*************************************************************************
	> File Name: 6.39/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 22时20分02秒
 ************************************************************************/

#include <iostream>
using namespace std;

int fun()
{

}
//double fun();     /error

//int ff(int a)
//{

//}

int ff(int &a)
{
    cout<<"a"<<endl;
}

//int ff(const int a)
//{

//}
int ff(const int &a)
{
  cout<<"const\n";  
}

//void fu(int a = 0,int b)
//{
    
//}

void fb(int a,int b = 0,char c='a')
{

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
int main(int argc, char **argv)
{
    cout<<"primer 6.39\n";
    int n = 0;
    ff(1);
    ff(n);
    fb(1,'a');
    return 0;
}
