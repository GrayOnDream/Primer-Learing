/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月19日 星期五 12时18分30秒
 ************************************************************************/

#include <iostream>
using namespace std;

template<typename T,unsigned N>
void print(ostream &os, const T (&array)[N])
{
    for(int i = 0;i < N;i ++)
    {
        os<<array[i]<<endl;
    }
}

int main(int argc, char **argv)
{
    cout<<"primer 16.5\n";
    int array[5] = {1,2,3,4,5};
    print(cout,array);
    print(cout,"what");
    return 0;
}
