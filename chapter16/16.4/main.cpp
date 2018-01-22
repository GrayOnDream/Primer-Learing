/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月19日 星期五 12时11分01秒
 ************************************************************************/
#include <vector>
#include <list>
#include <string>
#include <iostream>
using namespace std;

template <typename T,typename Y>
T find_ele(const T &beg,const T &end,Y ele)
{
    for(auto it = beg; it != end; it ++)
    {
        if(*it == ele)
        {
            return it;
        }
    }

    return end;
}

int main(int argc, char **argv)
{
    cout<<"primer 16.4\n";
    int array[] = {1,2,3,4,5,6};
    vector<int> vec(begin(array),end(array));
    list<int> lt(begin(array),end(array));
    cout<<find_ele(vec.begin(),vec.end(),3) - vec.begin()<<endl;
    cout<<*find_ele(lt.begin(),lt.end(),3)<<endl;
    return 0;
}
