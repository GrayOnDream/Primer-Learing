/*************************************************************************
	> File Name: 7.4/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 07时38分49秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
    string _name;
    size_t _age;
    string _address;
    string _telephone;
public:
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

};

int main(int argc, char **argv)
{
    return 0;
}
