/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 17时07分31秒
 ************************************************************************/
#include "Screen.h"
#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    Screen screen(4,4,'#');
    screen.move(2,2).set('/').display(cout);
    cout<<"\n";
    screen.display(cout);

    return 0;
}
