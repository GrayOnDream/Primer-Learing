/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 20时13分28秒
 ************************************************************************/

#include <iostream>
using namespace std;

void reference(int &n)
{
    n *= 2;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.11\n";
    int n = 0;
    cin>>n;
    reference(n);
    cout<<n<<endl;
    return 0;
}
