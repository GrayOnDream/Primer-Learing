/*************************************************************************
	> File Name: WindowManager.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 17时42分42秒
 ************************************************************************/
#include "WindowManager.h"

void WindowManager::clear(index_type index)
{
    _screens[index]._content = std::string(_screens[index]._width * _screens[index]._height,' ');
}
