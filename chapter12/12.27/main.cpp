/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 11时53分34秒
 ************************************************************************/
#include "QueryText.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 12.27\n";
    QueryText text("word");
    text.read_data();
    text.query_word("i");
    text.print_lines(cout,"i");
    return 0;
}
