/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 18时18分18秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

class win
{
public:
    string n;
    win(const string &s = "")
    {
        n = s;
        cout<<"string:"<<n<<endl;
    }

    win(istream &is = cin)
    {
        cin>>n;
        cout<<"istream:"<<n<<endl;
    }
};

int main(int argc, char **argv)
{
    cout<<"primer 7.39\n";

    win w; //error ambiguous

    return 0;
}
