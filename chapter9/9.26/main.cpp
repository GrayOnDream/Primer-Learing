/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 12时40分09秒
 ************************************************************************/
#include <string>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.26\n";
    int a[] = {1,34,556,23,57,23,7};
    list<int> l(begin(a),end(a));
    vector<int> v(begin(a),end(a));
    //delete odd in vector
    cout<<"vector<>odd\n";
    for(auto it = v.begin();it != v.end();)
    {
        if((*it)%2 == 1)
            v.erase(it);
        else
            it++;
    }

    cout<<"vector<int>:\n";
    for(auto n:v)
    {
        cout<<n<<"\t";
    }

    cout<<"vector<int> even\n";
    for(auto it = l.begin();it != l.end();)
    {
        cout<<*it<<"debug\n";
        if((*it)%2 == 0)
            it = l.erase(it);
        else
            it++;
    }

    cout<<endl<<"list<int>:\n";
    for(auto n:l)
    {
        cout<<n<<"\t";
    }
    return 0;
}
