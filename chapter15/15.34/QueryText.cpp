/*************************************************************************
	> File Name: QueryText.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 11时03分15秒
 ************************************************************************/
#include "QueryText.h"

void QueryText::read_data()
{
    string str;
    while(getline(is,str))
    {
        _data->push_back(str);
    }
}

QueryResult QueryText::query(const string &str)
{
    set<size_t> lines;
    for(size_t i = 0;i < _data->size();i ++)
    {
        istringstream in((*_data)[i]);
        string tmp;
        while(in>>tmp)
        {
            if(tmp == str)
            {
                lines.insert(i);
                break;
            }
        }

        //break to here;
    }

    _result.push_back(str, lines);   
    return _result;
}



void QueryText::print_lines(ostream& os,
        const string &str)
{
    set<size_t> lines = _result.get_lines(str);
    os<<str<<" occurs "<<lines.size()<<std::endl;
    for(auto i:lines)
    {
        os<<"\t"<<(*_data)[i]<<std::endl;
    }
}
