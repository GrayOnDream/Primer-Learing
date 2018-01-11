/*************************************************************************
	> File Name: WindowManager.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 17时38分21秒
 ************************************************************************/
#ifndef _WINDOWMANAGER_H
#define _WINDOWMANAGER_H

#include "Screen.h"
#include <vector>

using std::vector;
class Screen;
class WindowManager
{
public:
    using index_type = vector<Screen>::size_type;
private:
    vector<Screen> _screens;        
public:
    void clear(index_type index);
};

#endif

