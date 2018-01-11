/*************************************************************************
	> File Name: Screen.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 14时22分28秒
 ************************************************************************/
 #ifndef _SCREEN_H_
 #define _SCREEN_H_

#include <iostream>
#include <string>

using std::ostream;
using std::istream;
using std::cout;
using std::cin;
using std::string;

class Screen
{
public:
    typedef string::size_type position_type;
private:
    position_type _width;
    position_type _height;
    position_type _cursor;
    string _content;
public:
    Screen() = default;
    Screen(position_type w,position_type h)
            :_width(w),_height(h),_cursor(0),_content(h * w,' '){}
    Screen(position_type w,position_type h,char ch)
            :_width(w),_height(h),_cursor(0),_content(h * w,ch){}
            
public:
    char getChar() const;
    char getChar(position_type x,position_type y)const;
    
    Screen &move(position_type x,position_type y);

    Screen &set(position_type x,position_type y,char ch);
    Screen &set(char ch);

    const Screen &display(ostream &os) const;
    Screen &display(ostream &os);
private:
    void operate_display(ostream &os)const
    {
        os<<_content;
    }
};

#endif //_SCREEN_H_
