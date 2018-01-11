/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 13时28分24秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.28\n";
    vector<int> p;
    int num;
    cout<<"翻倍增长\n";
    while(cin >> num)
    {
        cout<<"before:"<<p.size()<<"\t"<<p.capacity();
        cout<<endl;
        p.push_back(num);
        cout<<"after:"<<p.size()<<"\t"<<p.capacity();
        cout<<endl;
        p.resize(num);
    }
    return 0;
}
