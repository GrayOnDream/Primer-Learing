/*************************************************************************
	> File Name: 6.55/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 22时49分36秒
 ************************************************************************/

#include <iostream>
using namespace std;

int add(int a,int b)
{
    return a + b;
}

int min(int a,int b)
{
    return a - b;
}

int mult(int a,int b)
{
    return a * b;
}

int div1(int a,int b)
{
    if(b == 0) return (unsigned)(-1) /2;
    return a / b;
}

int oper(int a,int b,char op)
{
    int (*p)(int,int);
    switch(op)
    {
        case '+':p = add;break;
        case '-':p = min;break;
        case '*':p = mult;break;
        case '/':p = div;break;
        default:
            cout<<"wrong operation\n";return 0;
    }

    return p(a,b);
}
int main(int argc, char **argv)
{
    cout<<"primer 6.55\n";

    char ch;
    int n1,n2;
    while(cin>>n1>>ch>>n2)
    {
        cout<<oper(n1,n2,ch)<<endl;
    }
    return 0;
}
