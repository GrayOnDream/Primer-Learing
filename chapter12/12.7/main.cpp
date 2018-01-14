/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 14时30分34秒
 ************************************************************************/
#include <vector>
#include <memory>
#include <iostream>
using namespace std;

shared_ptr<vector<int>> get_vector()
{
    return make_shared<vector<int>>();
}

void read_data( istream &is, shared_ptr<vector<int>> ptr)
{
    int number = 0;
    while(is>>number)
    {
        ptr->push_back(number);
    }
}

void wirte_data( ostream &os, shared_ptr<vector<int>> ptr)
{
    for(auto v:*ptr)
    {
        os<<v<<endl;
    }
}

int main(int argc, char **argv)
{
    cout<<"primer 12.6\n";
    shared_ptr<vector<int>> ptr = get_vector();
    read_data( cin, ptr);
    wirte_data( cout, ptr);

    return 0;
}
