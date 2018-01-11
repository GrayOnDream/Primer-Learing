/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月06日 星期六 20时22分04秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Algorithm 4.21\n";
    int a[] = {1,2,3,4,5,6};
    vector<int> b(begin(a),end(a));
    
    for(int &i:b)
    {
        ((i%2) == 1) ? i = 2 * i:true;
        cout<<i<<endl;
    }

    return 0;
}
