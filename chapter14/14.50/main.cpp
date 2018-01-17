/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 15时43分57秒
 ************************************************************************/

#include <iostream>
using namespace std;

class func
{
public:
    func(double = 0){cout<<"func(double)\n";}
    operator double(){cout<<"double convert\n";}
    operator int(){cout<<"int convert\n";}
};

int main(int argc, char **argv)
{
    cout<<"primer 14.50\n";
    func f;
    int a = f;
    //float b = f; //error ambigous
    double c = f;
    return 0;
}
