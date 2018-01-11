/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 09时45分59秒
 ************************************************************************/
#include <vector>
#include <iterator>
#include <iostream>
using namespace std;

vector<int>::iterator find_int(vector<int>::iterator begin,
                               vector<int>::iterator end
                               ,int n)
{
    while(begin != end)
    {
        if(n == *begin)
        {
            return begin;
        }

        begin ++;
    }

    return end;
}

int main(int argc, char **argv)
{
    cout<<"primer 9.4\n";

    int a[] = {1,2,3,4,5};
    vector<int> v(begin(a),end(a));

    if(find_int(v.begin(),v.end(),3) != v.end())
    {
        cout<<"true!\n";    
    }

    return 0;

}
