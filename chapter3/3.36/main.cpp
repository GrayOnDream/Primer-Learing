/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 23时40分57秒
 ************************************************************************/

#include <iostream>
using namespace std;

bool com(int *a,size_t len1,int *b,size_t len2)
{
    if(len1 != len2) return false;
    for(size_t i = 0;i < len1;i ++)
    {
        if(*(a + i) != *(b + i))
        {
            return false;
        }
    }

    return true;
}


int main(int argc, char **argv)
{
    cout<<"primer 3.36\n";
    int a[4] = {12,13,4,5};
    int b[4] = {12,13,4,5};
    
    cout<<com(a,4,b,4);

    return 0;
}
