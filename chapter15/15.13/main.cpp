/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 14时00分50秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class father
{
protected:
    string name;
public:
    father(const string &nm):name(nm){}
    virtual void print()
    {
        cout<<"in parent\n";
        cout<<name<<endl;
    }
};

class child : public father
{
int i = 0;
public:
    child(const string &nm,int j):father(nm),i(j){}
    void print()
    {
        cout<<"in child\n";
        print();
        cout<<i<<endl;
    }
};

int main(int argc, char **argv)
{
    cout<<"primer 15.13\n";
    child ch("child",2);
    ch.print();
    return 0;
}
