/*************************************************************************
	> File Name: MailFolder.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 02时47分53秒
 ************************************************************************/
#ifndef _MAILFOLDER_H
#define _MAILFOLDER_H
#include "MailMessage.h"
#include <set>
#include <string>

using std::string;
using std::set;

class MailMessage;
class MailFolder
{
private:
    friend void swap(MailFolder &rt, MailFolder &snd);
private:
    set<MailMessage*> _messages;
    string _folder_name;
private:
    void remove_messages_from_folder();
    void save_to_folder(const MailFolder &folder);
public:
    MailFolder(const string name):_folder_name(name){}
    MailFolder(const MailFolder &folder);
    MailFolder& operator=(const MailFolder &folder);
public:
    void remove_message(MailMessage &msg);
    void add_message(MailMessage &msg);
};

#endif

