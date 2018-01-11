/*************************************************************************
	> File Name: 2.14/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 19时20分52秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    std::cout<<"C++ primer 2.14\n";
    int i = 100,sum = 0;
    for(int i = 0;i != 10;i ++)
    {
        sum += i;
    }

    std::cout<<i<<" "<<sum<<std::endl;
    return 0;
}
