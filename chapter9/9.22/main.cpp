/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 10时49分57秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.22\n";
    int num;
    cin>>num;
    vector<int> v = {1,2,3,4,4,5};
    vector<int>::iterator it = v.begin(),mid = v.begin() + v.size()/2;
    //logic error
    //it ++ is lack
    while(it != mid)
    {
        if(*it == num)
        {
            v.insert(it,2 * num);
        }
    }

    for(auto n:v)
    {
        cout<<n<<"\t";
    }

    cout<<endl;

    return 0;
}
