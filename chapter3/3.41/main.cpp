/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月06日 星期六 00时45分51秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 3.41\n";
    int a[] = {1,2,3,3,4};
    vector<int> b(begin(a),end(a));
    for(int i:b)
    {
        cout<<i<<endl;
    }

    int t[4];
    for(size_t i = 0;i < 4;i ++)
    {
        t[i] = b[i];
        cout<<t[i]<<endl;
    }

    
    return 0;
}
