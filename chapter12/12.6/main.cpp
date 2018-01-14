/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 14时23分47秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

vector<int>* get_vector()
{
    return new vector<int>();
}

void read_data(istream &is, vector<int> *pv)
{
    if(pv == nullptr) return;
    int number = 0;
    while(is>>number)
    {
        pv->push_back(number);
    }
}

void print_data(ostream &os,vector<int> *pv)
{
    if(nullptr == pv) return;
    for(auto v:*pv)
    {
        os<<v<<endl;
    }
}

void free_delete(vector<int> *p)
{
    if(p != nullptr)
    {
        delete p;
        p = nullptr;
    }

    return;
}

int main(int argc, char **argv)
{
    cout<<"primer 12.6\n";
    vector<int> *p = get_vector();
    read_data(cin,p);
    print_data(cout,p);
    free_delete(p);
    return 0;
}
