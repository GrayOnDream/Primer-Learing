/*************************************************************************
	> File Name: Screen.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 14时22分28秒
 ************************************************************************/
#include "Screen.h"

char Screen::getChar() const
{
    return _content[_cursor];
}

char Screen::getChar(position_type x,position_type y) const
{
    position_type row = y * _width;
    return _content[row + x];
}

void Screen::move(position_type x,position_type y)
{
    position_type row = y * _width;
    _cursor = x + row;
}


