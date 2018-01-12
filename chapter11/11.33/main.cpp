/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 17时35分59秒
 ************************************************************************/
#include <map>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

map<string,string> buildMap(ifstream &in)
{
    map<string,string> m;
    string readStr;
    while(getline(in, readStr))
    {
        istringstream istr(readStr);
        string en,ch;
        istr>>en>>ch;
        m[en] = ch;
    }

    return m;
}

void translate(const map<string,string> &m, vector<string> &vec)
{
    for(string &str:vec)
    {
        auto it = m.find(str);
        if(it != m.end())
        {
            str = it->second;
        }
    }
}

vector<string> read_file(ifstream &in)
{
    vector<string> v;
    string str;
    while(in>>str)
    {
        v.push_back(str);
    }

    return v;
}

int main(int argc, char **argv)
{
    cout<<"primer 11.33\n";
    ifstream infile("words");
    ifstream wordFile("g");
    vector<string> v = read_file(wordFile);
    map<string, string> m = buildMap(infile);
    translate(m,v);
    for(auto s:v)
    {
        cout<<s;
    }

    cout<<endl;

    return 0;
}
