/*************************************************************************
	> File Name: Query.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 20时38分52秒
 ************************************************************************/
#include "Query.h"
#include <iostream>
using std::ostream;
using std::istream;

ostream &operator<<(ostream &os, const Query &query)
{
    return os<<query.rep();
}
