/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月06日 星期六 19时24分53秒
 ************************************************************************/

#include <iostream>
using namespace std;
/*
 * 测试表达式求值顺序
 * 并未出现表达式求值顺序出错，但是不建议在同一语句中对单一数据会对象进行修改，
 * 这个行为的结果是未知的，和编译器相关
 */
int f(int *num)
{
    *num = 12;
    return *num;
}

int g(int *num)
{
    *num = 21;
    return *num;
}

int main(int argc, char **argv)
{
    cout<<"Algorithm 4.3\n";
    int num = 0;
    cout<<"input number:";
    cin>>num;

    cout<<f(&num)<<g(&num)<<endl;
    cout<<num--<<num<<num++<<endl;

    return 0;
}
