/*************************************************************************
	> File Name: Screen.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 14时22分50秒
 ************************************************************************/
#ifndef _SCREEN_H
#define _SCREEN_H
#include <string>

using std::string;

class Screen
{
public:
    typedef std::string::size_type position_type ; 
private:
    position_type _height;
    position_type _width;
    position_type _cursor;
    string _content;
public:
    /**
     * constructor
     **/
    Screen() = default;
    Screen(position_type h,position_type w):
            _height(h),_width(w),_content(h * w,' '){}
    Screen(position_type h,position_type w,char ch):
            _height(h),_width(w),_content(h * w,ch){}
public:
    inline char getChar() const;
    inline char getChar(position_type x,position_type y) const;
    inline void move(position_type x,position_type y);
};

#endif

