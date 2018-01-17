/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 14时49分17秒
 ************************************************************************/

#include <iostream>
using namespace std;

class if_then
{
public:
    int operator()(int _1,int _2,int _3)
    {
        if(_1)
        {
            return _1;
        }
        else if(_2)
        {
            return _2;
        }

        return _3;
    }
};
int main(int argc, char **argv)
{
    cout<<"primer 14.24\n";
    if_then f;
    cout<<f(1,2,3)<<endl;
    return 0;

}
