/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 22时31分08秒
 ************************************************************************/
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void print_int(vector<int> v,int n)
{
    cout<<"v"<<n<<"\tsize:"<<v.size()<<"\t";
    for(auto i:v)
    {
        cout<<i<<"\t";
    }

    cout<<endl;
}

void print_str(vector<string> v,int n)
{
    cout<<"v"<<n<<"\tsize:"<<v.size()<<"\t";
    for(auto i:v)
    {
        cout<<i<<"\t";
    }

    cout<<endl;
}

int main(int argc, char **argv)
{
    cout<<"Primer 3.16\n";
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10,"hi"};


    print_int(v1,1);
    print_int(v2,2);
    print_int(v3,3);
    print_int(v4,4);
    print_int(v5,5);
    print_str(v6,6);
    print_str(v7,7);

    return 0;
}
