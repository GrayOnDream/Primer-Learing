/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 12时54分55秒
************************************************************************/
#ifndef _HASPTR_H_
#define _HASPTR_H_

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class HasPtr
{
    void friend swap( HasPtr &rst, HasPtr &snd);
private:
    string *ps;
    int i;
    int *use;
public:
    HasPtr(const string &str = string())
        :ps(new string(str)), i(0),use(new int(1)){}
    HasPtr(const HasPtr &hp)
    {
        ++*hp.use;
        if(--*use == 0)
        {
            delete ps;
            delete use;
        }

        ps = hp.ps;
        i = hp.i;
        use = hp.use;
    }

    HasPtr &operator=(const HasPtr &hp)
    {
        ++*hp.use;
        if(--*use == 0)
        {
            delete ps;
            delete use;
        }

        ps = hp.ps;
        i = hp.i;
        use = hp.use;
        return *this;
    }

    bool operator<(const HasPtr &hp)
    {
        return *ps < *hp.ps;
    }
    
    void print()
    {
        cout<<"memeber print: "<<this->i<<"\t"<<*this->ps<<endl;
    }

    ~HasPtr()
    {
        if(*--use == 0)
        {
            delete use;
            delete ps;
        }
    }
};

void swap(HasPtr &rst, HasPtr &snd)
{
    std::cout<<"swap\n";
    using std::swap;
    swap(rst.i,snd.i);
    swap(rst.ps,snd.ps);
}

#endif
