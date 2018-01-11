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
    Sale_data()
    {
        _bookNo      = "";
        _revenue     = 0.0;
        _unit_qutity = 0;
    }

    double get_averge()
    {
        if(_unit_qutity == 0) return 0;
        return _revenue / _unit_qutity;
    }

    void combine(const Sale_data &cur)
    {
        this->_unit_qutity += cur._unit_qutity;
        this->_revenue += cur._revenue;
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
public:
    ostream &print(ostream &os,char ch)
    {
        return os<<this->_bookNo<<ch<<this->_unit_qutity<<ch<<this->get_averge()<<endl;
    }

    istream &read(istream &is)
    {
        double price = 0.0;
        is>>this->_bookNo>>this->_unit_qutity>>price;
        this->_revenue = price * _unit_qutity;
        return is;
    }
};

int main(int argc, char **argv)
{
    cout<<"primer 7.6\n";
    
    Sale_data total,tmp;
    cout<<"input the data:(format:number qutity price)\n";
    if(total.read(cin))
    {
        while(tmp.read(cin))
        {
            if(tmp.get_book_number() == total.get_book_number())
            {
                total.combine(tmp);
            }
            else
            {
                cout<<"sales total:";
                total.print(cout,'\t');
                total = tmp;
            }
        }

        cout<<"sales total:";
        total.print(cout,'\t');
    }
    

    return 0;
}
