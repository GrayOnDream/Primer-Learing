/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 14时59分42秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Base
{
public:
    void public_mem(){}
protected:
    int protected_mem();
private:
    char private_mem();
};

class PublicDerv : public Base
{};

class PrivateDerv : private Base
{};

class ProtectedDerv : protected Base
{};

class DerivedFromPublic : public PublicDerv
{};

class DerivedFromPrivate : public PrivateDerv
{};

class DerivedFromProtected : public ProtectedDerv
{};

int main(int argc, char **argv)
{
    cout<<"primer 15.18\n";
    PublicDerv d1;
    PrivateDerv d2;
    ProtectedDerv d3;

    DerivedFromPublic dd1;
    DerivedFromPrivate dd2;
    DerivedFromProtected dd3;

    Base *p = &d1;
    p = &d2;
    p = &d3;
    p = &dd1;
    p = &dd2;
    p = &dd3;
    
    
    return 0;
}
