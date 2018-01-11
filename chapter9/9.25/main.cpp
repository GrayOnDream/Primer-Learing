/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 12时34分14秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.25\n";
    vector<int> v = {1,2,3,4,5,6};
    vector<int>::iterator begin = v.begin();
    vector<int>::iterator end   = v.end();
    vector<int>::iterator p = begin + 1;
    cout<<"begin<-->end"<<endl;
    //   v.erase(begin,end);         //all erase
    v.erase(end,end);
    for(auto a:v)
    {
        cout<<a<<endl;
    }

    return 0;
}
