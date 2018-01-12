/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 16时42分56秒
 ************************************************************************/
#include <map>
#include <string>
#include <set>
#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 11.17\n";
    vector<int> v = {1,2,3,4};
    set<int> s;
    copy( v.begin(), v.end(), inserter(s,s.end()));
    //error copy( v.begin(), v.end(), back_inserter(s));
    copy( s.begin(), s.end(), inserter(v, v.end()));
    copy( s.begin(), s.end(), back_inserter( v));
    return 0;
}
