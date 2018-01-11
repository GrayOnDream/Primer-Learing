/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 09时56分24秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.10\n";

    vector<int>  v1;
    const vector<int>  v2;
    
    //error!can not complie
    //vector<int>::iterator p = v1.begin(), p1 = v2.begin(); 
    vector<int>::const_iterator p = v1.begin(), p1 = v2.begin(); 

    return 0;
}
