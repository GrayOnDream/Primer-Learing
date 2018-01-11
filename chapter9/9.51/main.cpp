/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 14时34分54秒
 ************************************************************************/
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

class dae
{
public:
    int year;
    int month;
    int day;

    //Jan 1,1900
    //1/1/1991
    //jan 1 1900
    dae(const string &str)
    {
        istringstream is(str);
        string tmp;
        is>>tmp;
        if(int ret = findMonth(tmp))
        {
            month = ret;
        }
    }

    void print()
    {
        cout<<year<<"\t"<<month<<"\t"<<day<<endl;
    }
    int findMonth(const string &str)
    {
        vector<string> v = {"Jan","Feb"};
        for(int i = 0;i < v.size();i ++)
        {
            if(v[i] == str) return i + 1;
        }
    }
};

int main(int argc, char **argv)
{
    cout<<"primer 9.51\n";
    dae d("Jan 1/1000");
    d.print();

    return 0;
}
