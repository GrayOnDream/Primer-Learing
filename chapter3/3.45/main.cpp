/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月06日 星期六 00时53分26秒
 ************************************************************************/

#include <iostream>
using namespace std;

typedef int (&array_1)[3];
typedef int (&array_2)[3][3];
typedef int (&array_3)[3][3][3];

int main(int argc, char **argv)
{
    cout<<"primer 3.45\n";
    int a[][3][3] = {
                        {
                            {1,2,3},
                            {2,3,4},
                            {3,4,5}
                        }
                        ,
                        {
                            {1,2,3},
                            {2,3,4},
                            {3,4,5}
                        }
                        ,
                        {
                            {1,2,3},
                            {2,3,4},
                            {3,4,5}
                        }
                    };

    cout<<"for output:\n";
    for(auto &i:a)
    {
        for(auto &j:i)
        {
            for(int &k:j)
            {
                cout<<k<<"\t";
            }

            cout<<endl;
        }

        cout<<endl;
    }

    cout<<"for output with decltype:\n";
    for(decltype(a[3]) i:a)
    {
        for(decltype(a[3][3]) j:i)
        {
            for(int &k:j)
            {
                cout<<k<<"\t";
            }

            cout<<endl;
        }

        cout<<endl;
    }
    return 0;
}
