/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 16时51分35秒
 ************************************************************************/
#include <iostream>
#include "OutOfStock.h"

using namespace std;

void throw_some()
{
    throw new OutOfStock("throw exception!");
}

void nonexception_some()
{}

void print(int n)
{
    try
    {
        if(n == 1)
        {
            throw_some();
        }
        else
        {
            nonexception_some();
        }

        cout<<"in try....catch"<<endl;
    }
    catch(OutOfStock &e)
    {
        cout<<e.what()<<endl;
    }
}

int main(int argc, char **argv)
{
    cout<<"primer 18.10\n";
    print(argc);

    return 0;
}
