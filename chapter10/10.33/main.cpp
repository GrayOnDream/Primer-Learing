/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 13时32分17秒
 ************************************************************************/
#include <iterator>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void write_file(const string &in,const string &odd,const string &even)
{
    ifstream infile(in);
    ofstream oddfile(odd),evenfile(even);
    istream_iterator<int> eof,rd(infile);
    ostream_iterator<int> oddit(oddfile,"\n"),evenit(evenfile,"\n");

    while(rd != eof)
    {
        int num = *rd++;
        if(num%2 == 1)
        {
            oddit = num;
        }
        else
        {
            evenit = num;
        }
    }
}

int main(int argc, char **argv)
{
    cout<<"primer 10.33\n";
    write_file("in","odd","even");
    return 0;
}
