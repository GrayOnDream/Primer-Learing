/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 09时04分09秒
 ************************************************************************/
#include <string>
#include <regex>
#include <iostream>
using namespace std;

bool valid(const smatch &match)
{
    if(match[1].matched)
    {
        return match[3].matched && (match[4].matched == 0 || match[4].str() == " ");
    }
    else
    {
        return !match[3].matched && match[4].str() == match[6].str();
    }
}

int main(int argc, char **argv)
{
    cout<<"primer 17.20\n";
    try
    {
        string pat = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([.- ]?)(\\d{4})";
        regex re(pat);
        smatch match;
        string str;
        while(cin>>str)
        {
            for(sregex_iterator it(str.begin(),str.end(),re),end_it;
                    it != end_it; it ++)
            {
                if(valid(*it))
                {
                    cout<<"valid: "<<it->str()<<endl;
                }   
                else
                {
                    cout<<"not valid: "<<it->str()<<endl;
                }
            }
        }
    }
    catch(regex_error &r)
    {
        cout<<"error:"<<r.what()<<endl;
        cout<<r.code()<<endl;
    }
    return 0;
}
