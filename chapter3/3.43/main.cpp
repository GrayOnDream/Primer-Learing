/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月06日 星期六 00时53分26秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 3.43\n";
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
    for(int (&i)[3][3]:a)
    {
        for(int (&j)[3]:i)
        {
            for(int k:j)
            {
                cout<<k<<"\t";
            }

            cout<<endl;
        }

        cout<<endl;
    }

    cout<<"original for output with pointer:\n";
    for(int i = 0;i < 3;i ++)
    {
        for(int j = 0;j < 3;j ++)
        {
            for(int k = 0;k < 3;k ++)
            {
                cout<<*(*(*(a + i) + j)+k)<<"\t";
            }

            cout<<endl;
        }

        cout<<endl;
    }

    cout<<"original for output with index:\n";
    for(int i = 0;i < 3;i ++)
    {
        for(int j = 0;j < 3;j ++)
        {
            for(int k = 0;k < 3;k ++)
            {
                cout<<a[i][j][k]<<"\t";
            }

            cout<<endl;
        }

        cout<<endl;
    }
    return 0;
}
