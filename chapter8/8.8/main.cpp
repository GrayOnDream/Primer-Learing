/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月09日 星期二 14时10分35秒
 ************************************************************************/
#include "Sale_data.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 8.6\n";

    if(argc > 2)
    {
        ifstream in(argv[1]);
        ofstream out(argv[2],ofstream::out | ofstream::app);
        Sale_data total;
        if(total.read(in))
        {
            Sale_data tmp;
            while(tmp.read(in))
            {
                if(tmp.get_book_number() == total.get_book_number())
                {
                    total.combine(tmp);
                }
                else
                {
                    total.print(out,'\t');
                    out<<endl;
                    total = tmp;
                }
            }

            total.print(out,'\t');
            out<<endl;
        }

    }

    return 0;

}
