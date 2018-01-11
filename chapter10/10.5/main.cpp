/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 10时37分14秒
 ************************************************************************/
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.5\n";
    vector<char*> v1 = {"what","can"};
    vector<char*> v2 = {"what"};
    cout<<equal(v1.cbegin(),v1.cend(),v2.cbegin())<<endl;


    return 0;
}
