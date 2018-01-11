/*************************************************************************
	> File Name: 7.4/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 07时38分49秒
 ************************************************************************/
#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::istream;
using std::ostream;
using std::endl;

class Person
{
private:
    string _name;
    size_t _age;
    string _address;
    string _telephone;
public:
    /*
     * constructor
     */
    Person() = default;
    explicit Person(const string &name):_name(name){}
    Person(const string &name,size_t age,const string &add,const string &tele)
                :_name(name),_age(age),_address(add),_telephone(tele){}

    /*
     * get/set
     */
    string getName() const
    {
        return _name;
    }

    void setName(const string &name)
    {
        this->_name = name;
    }

    size_t getAge() const
    {
        return _age;
    }

    void setAge(const int &age)
    {
        this->_age = age;
    }

    string getAddress() const
    {
        return _address;
    }

    void setAddress(const string &add)
    {
        this->_address = add;
    }

    string getTelephone() const
    {
        return _telephone;
    }

    void setTelephone(const string &tele)
    {
        this->_telephone = tele;
    }
    
public:
    /*
     * telephone should be 11 bits long
     * the measure will be added after
     */
    istream &read(istream &is)
    {
        return is>>this->_name>>this->_age>>this->_address>>this->_telephone;
    }

    ostream &print(ostream &os,const char &ch) const
    {
        return os<<_name<<ch<<_age<<ch<<_address<<ch<<_telephone<<endl;
    }
};

#endif //_PERSON_H_
