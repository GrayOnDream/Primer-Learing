/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 23时00分37秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 3.23\n";
    vector<int> v= {1,2,3,4,4,5,6,7,8,8,9};
    for(auto it = v.begin(); it != v.end();it ++)
    {
        *it = 2 * (*it);
        cout<<*it<<"\t";
    }

    cout<<endl;
    return 0;
}
