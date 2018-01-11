/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 13时18分30秒
 ************************************************************************/
#include <iterator>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.29\n";
    ifstream ifile("in");
    istream_iterator<string> eof,in(ifile);
    vector<string> v;
    while(in != eof)
    {
        v.push_back(*in++);
    }
    
    for(auto s:v)
    {
        cout<<s<<endl;
    }
    return 0;
}
