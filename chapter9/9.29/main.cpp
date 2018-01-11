/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 13时16分23秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.29\n";
    vector<int> v;
    cout<<v.size()<<endl;
    v.resize(10,1);
    cout<<v.size()<<endl;
    v.resize(100,2);
    cout<<v.size()<<endl;
    v.resize(13,3);
    cout<<v.size()<<endl;



    return 0;
}
