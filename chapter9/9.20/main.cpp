/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 10时34分14秒
 ************************************************************************/
#include <list>
#include <vector>
#include <deque>
#include <iostream>
using namespace std;

void print_d(deque<int> d)
{
    for(auto i:d)
    {
        cout<<i<<"\t";
    }
}

int main(int argc, char **argv)
{
    cout<<"primer 9.20\n";
    deque<int> odd;
    deque<int> even;
    list<int> l = {1,2,3,4,5,6,7,8};

    //list的迭代器不支持+n
    for(list<int>::iterator it = l.begin();
        it != l.end();
       it ++)
    {
        odd.push_back(*it);
        even.push_back(*(++it));
    }
    
    print_d(even);
    cout<<endl;
    print_d(odd);

    return 0;
}
