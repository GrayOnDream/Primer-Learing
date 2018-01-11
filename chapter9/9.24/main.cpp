/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 10时56分40秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

#define STRING_PRINT(x) cout<<#x<<"\t"<<x<<endl;
int main(int argc, char **argv)
{
    cout<<"primer 9.24\n";
    vector<int> v = {1,2,3};
    STRING_PRINT(v[0])
    STRING_PRINT(*v.begin());
    STRING_PRINT(v.at(0))

    return 0;
}
