/*************************************************************************
	> File Name: MailMessage.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 02时30分10秒
 ************************************************************************/
#ifndef _MAILMESSAGE_H
#define _MAILMESSAGE_H
#include <iostream>
#include <set>
#include <vector>
#include <string>
#include "MailFolder.h"

using std::set;
using std::string;

class MailFolder;
class MailMessage
{
private:
    friend class MailFloder;
    friend void swap(MailMessage &rst, MailMessage &snd);
private:
    set<MailFolder*> _folders;
    string _contents;
private:
    void add_to_message(const MailMessage &msg);
    void remove_from_folders();
public:
    MailMessage(const string msg):_contents(msg){}
    MailMessage(const MailMessage &msg);
    MailMessage &operator=(const MailMessage &msg);
    MailMessage(MailMessage &&msg)noexcept;
    MailMessage &operator=(MailMessage &&msg)noexcept;
    ~MailMessage();
public:
    void save(MailFolder &folder);
    void remove(MailFolder &folder);
};


#endif

