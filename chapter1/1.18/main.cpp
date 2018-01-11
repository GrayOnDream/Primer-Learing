/*************************************************************************
	> File Name: 1.18/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 01时49分11秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc,char **argv)
{
    std::cout<<"C++ primer example 1.18\n";
    int cur = 0,num = 0;
    if(std::cin >> cur)
    {
        int count = 1;
        while(std::cin>>num)
        {
            if(num == cur)
            {
                count ++;
            }
            else
            {
                std::cout<<cur<<" occur "<<count<<" times\n";
                count = 1;
                cur = num;
            }
        }

        std::cout<<cur<<" occur "<<count<<" times\n";
    }
    else
    {
        std::cout<<"no input!\n";
    }

    return 0;
}
