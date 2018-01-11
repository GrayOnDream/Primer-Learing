/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 22时45分55秒
 ************************************************************************/
#include <vector>
#include <string>
#include <iostream>
using namespace std;

void print_adj(vector<int> v)
{
    for(vector<int>::size_type i = 0;
       i < v.size();
       i += 2)
    {
        cout<<v[i] + v[i + 1]<<"\t";
    }
}


void print_fb(vector<int> v)
{
    for(vector<int>::size_type i = 0;
       i < v.size()/2;
       i ++)
    {
        cout<<v[i] + v[v.size() - i - 1]<<"\t";
    }
}

int main(int argc, char **argv)
{
    cout<<"Primer 3.20\n";
    vector<int> v;
    int n;
    while(cin >> n)
    {
        v.push_back(n);
    }

    print_adj(v);
    cout<<endl;
    print_fb(v);
    cout<<endl;
    
    return 0;
}
