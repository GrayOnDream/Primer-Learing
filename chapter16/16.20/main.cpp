/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月19日 星期五 14时13分54秒
 ************************************************************************/
#include <vector>
#include <list>
#include <iostream>
using namespace std;

template<typename T>
void print(ostream &os, T &con)
{
    typedef typename T::iterator type;
    for(type it = con.begin();it != con.end();it ++)
    {
        os<<*it<<endl;
    }
}

int main(int argc, char **argv)
{
    cout<<"primer 16.19\n";
    int array[] = {1,2,1,2,3};
    vector<int> vec(begin(array),end(array));
    list<int> lst(begin(array),end(array));

    print(cout,vec);
    cout<<endl;
    print(cout,lst);
    cout<<endl;

    return 0;
}
