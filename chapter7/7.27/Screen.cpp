/*************************************************************************
	> File Name: Screen.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 14时22分28秒
 ************************************************************************/
#include "Screen.h"

inline char Screen::getChar() const
{
    return _content[_cursor];
}

char Screen::getChar(position_type x,position_type y) const
{
    position_type row = y * _width;
    return _content[row + x];
}

Screen &Screen::move(position_type x,position_type y) 
{
    position_type row = y * _width;
    _cursor = x + row;
    return *this;
}

Screen &Screen::set(position_type x,position_type y,char ch)
{
    _content[y * _width + x] = ch;
    return *this;
}

Screen &Screen::set(char ch)
{
    _content[_cursor] = ch;
    return *this;
}

/*
 * to adapt the non-const to const
 */
inline const Screen &Screen::display(ostream &os)const
{
    operate_display(os);
    return *this;
}

Screen &Screen::display(ostream &os)
{
    operate_display(os);
    return *this;
}
