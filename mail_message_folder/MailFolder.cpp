/*************************************************************************
	> File Name: MailFolder.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 02时55分42秒
 ************************************************************************/
#include "MailFolder.h"

void MailFolder::remove_messages_from_folder()
{
    for(auto msg:_messages)
    {
        msg->remove(*this);
    }
}

void MailFolder::save_to_folder(const MailFolder &folder)
{
    for(auto msg:folder._messages)
    {
        msg->save(*this);
    }
}

MailFolder::MailFolder(const MailFolder &folder)
{
    _folder_name = folder._folder_name;
    _messages = folder._messages;
    save_to_folder(folder);
}

MailFolder &MailFolder::operator=(const MailFolder &folder)
{
    remove_messages_from_folder();
    _folder_name = folder._folder_name;
    _messages = folder._messages;
    save_to_folder(folder);
    return *this;
}

void MailFolder::remove_message(MailMessage &msg)
{
    _messages.erase(&msg);
    msg.remove(*this);
}

void MailFolder::add_message(MailMessage &msg)
{
    _messages.insert(&msg);
    msg.save(*this);
}

void swap(MailFolder &rst, MailFolder &snd)
{
   using std::swap;
   for(auto msg:rst._messages)
   {
       msg->remove(rst);
   }

   for(auto msg:snd._messages)
   {
       msg->remove(snd);
   }

   swap(rst._messages,snd._messages);
   swap(rst._folder_name,snd._folder_name);
   for(auto msg:rst._messages)
   {
       msg->save(rst);
   }

   for(auto msg:snd._messages)
   {
       msg->save(snd);
   }
}

