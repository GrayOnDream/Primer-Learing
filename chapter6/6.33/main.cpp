/*************************************************************************
	> File Name: 6.33/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 22时02分45秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

void print(const vector<int> &v,int &index)
{
    if(index == v.size()) return;
    cout<<v[index]<<endl;
    print(v,++index);
}

int main(int argc, char **argv)
{
    cout<<"primer 6.33\n";
    int a[] = {1,2,3,4};
    vector<int> v(begin(a),end(a));
    int n = 0;
    print(v,n);

    return 0;
}
