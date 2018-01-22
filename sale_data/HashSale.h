/*************************************************************************
	> File Name: HashSale.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 13时16分21秒
 ************************************************************************/
#ifndef _HASHSALE_H
#define _HASHSALE_H
#include "Sale_data.h"

namespace std
{
    template<>
    struct hash<Sale_data>
    {
        typedef size_t result_type;
        typedef Sale_data arguement_type;
        size_t operator()(const Sale_data &s) const;
    };

    size_t hash<Sale_data>::operator()(const Sale_data &s) const
    {
        return hash<string>()(s._bookNo) ^ 
               hash<unsigned>()(s._unit_qutity) ^
               hash<double>()(s._revenue);
    }
}

#endif

