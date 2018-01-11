/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 21时08分29秒
 ************************************************************************/

#include <iostream>
using namespace std;

void swap_p(int *& p1,int *&p2)
{
    int *tmp = p1;
    p1 = p2;
    p2 = tmp;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.22\n";
    int n1 = 12;
    int n2 = 14;
    int *p1 = &n1;
    int *p2 = &n2;

    swap_p(p1,p2);
    cout<<"p1 = "<<*p1<<endl;
    cout<<"p2 = "<<*p2<<endl;

    return 0;
}
