/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 12时55分24秒
 ************************************************************************/
#include <forward_list>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.27\n";
    forward_list<int> f = {1,2,3,4,45,6,7};
    for(auto pre = f.before_begin(),cur = f.begin();
        cur != f.end();
       )
    {
        if((*cur)%2 == 1)
        {
           cur = f.erase_after(pre);
        }
        else
        {
            pre = cur;
            cur++;
        }
    }
    
    for(auto n:f)
    {
        cout<<n<<endl;
    }

    return 0;
}
