/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 01时26分24秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

class Sale_data
{
private:
    string _bookNo;
    double _revenue;
    size_t _unit_qutity;
public:
    double get_averge()
    {
        if(_unit_qutity == 0) return 0;
        return _revenue / _unit_qutity;
    }

    void combine(const Sale_data &cur)
    {
        this->_unit_qutity += cur._unit_qutity;
        this->_revenue = cur._revenue;
    }

    string get_book_number()const
    {
        return this->_bookNo;
    }

    double get_revenue()
    {
        return this->_revenue;
    }

    size_t get_qutity()
    {
        return this->_unit_qutity;
    }
};

int main(int argc, char **argv)
{
    return 0;
}
