/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 20时16分19秒
 ************************************************************************/

#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.12\n";
    cout<<"input two number:";
    int n1,n2;
    cin >> n1>>n2;
    swap(n1,n2);
    cout<<"result:"<<n1<<"\t"<<n2<<endl;

    return 0;
}
