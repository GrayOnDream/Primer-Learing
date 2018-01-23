/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 15时43分21秒
 ************************************************************************/
#include <bitset>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 17.10\n";
    int array[] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0;i < 9;i ++)
    {
        bitset<10> b(array[i]);
        cout<<b<<endl;
    }

    return 0;
}
