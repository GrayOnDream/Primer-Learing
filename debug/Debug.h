/*************************************************************************
	> File Name: Debug.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 18时54分44秒
 ************************************************************************/
#ifndef _DEBUG_H
#define _DEBUG_H

class Debug
{
private:
    bool _hardware;
    bool _io;
    bool _logic;
    bool _other;
public:
    constexpr Debug(bool b = true):Debug(b,b,b,b){}
    constexpr Debug(bool h,bool i,bool l,bool o)
                    :_hardware(h),_io(i),_logic(l),_other(o){}
public:
    constexpr bool any()
    {
        return _hardware || _io || _logic || _other;
    }

    void setHardware(bool b){ _hardware = b; }
    void setIO(bool b){ _io= b; }
    void setLogic(bool b){ _logic= b; }
    void setOther(bool b){ _other= b; }
};

#endif

