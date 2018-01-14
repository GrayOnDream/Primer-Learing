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
    :ps(new string(*(hp.ps))),i(hp.i){
        cout<<"hasptr(const hasptr &hp) function!\n";
    }

    HasPtr &operator=(const HasPtr &hp)
    {
        cout<<"opertor function!\n";
        this->i = hp.i;
        this->ps = new string(*hp.ps);
        return *this;
    }

    void print()
    {
        cout<<"memeber print: "<<this->i<<"\t"<<*this->ps<<endl;
    }
};

int main(int argc, char **argv)
{
    cout<<"primer 13.8\n";
    HasPtr ptr("fuck");
    HasPtr p(ptr);
    HasPtr pp = p;

    ptr.print();
    p.print();
    pp.print();
    

    return 0;
}
