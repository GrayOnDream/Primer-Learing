/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 03时45分05秒
 ************************************************************************/

#include <iostream>
using namespace std;

char transform_grade(size_t score)
{
    if(score < 60)
    {
        return 'D';
    }
    else if(score > 90)
    {
        return 'A';
    }
    else if(score < 80)
    {
        return 'C';
    }
    else
    {
        return 'B';
    }

    return 'Z';     //error
}

int main(int argc, char **argv)
{
    cout<<"Primer 5.5\n";
    size_t score = 0;
    while(cin >> score)
    {
        cout<<score<<"\t"<<transform_grade(score)<<endl;    
    }

    return 0;
}
