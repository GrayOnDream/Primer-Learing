/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 12时54分55秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

class HasPtr
{
private:
    string *ps;
    int i;
public:
    HasPtr(const string &str = string())
        :ps(new string(str)), i(0){}
    HasPtr(const HasPtr &hp)
        :ps(new string(*(hp.ps))),i(hp.i){}
};

int main(int argc, char **argv)
{
    return 0;
}
