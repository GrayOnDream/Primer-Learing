/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 20时07分58秒
 ************************************************************************/

#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.10\n";
    cout<<"input two numbers:";
    int num1,num2;
    cin>>num1>>num2;
    swap(&num1,&num2);
    cout<<"result:"<<num1<<"\t"<<num2<<endl;


    return 0;
}
