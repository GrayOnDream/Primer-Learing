/*************************************************************************
	> File Name: MailMessage.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 02时36分35秒
 ************************************************************************/
#include "MailMessage.h"


void MailMessage::add_to_message(const MailMessage &msg)
{
    for(auto folder:msg._folders)
    {
        folder->add_message(*this);
    }
}

void MailMessage::remove_from_folders()
{
    for(auto folder:_folders)
    {
        folder->remove_message(*this);
    }
}

MailMessage::MailMessage(const MailMessage &msg)
{
    _contents = msg._contents;
    _folders = msg._folders;
    add_to_message(msg);
}

MailMessage &MailMessage::operator=(const MailMessage &msg)
{
    remove_from_folders();
    _contents = msg._contents;
    _folders = msg._folders;
    add_to_message(msg);
    return *this;
}

/*
 *  confusion
 *  this should be as same as strvector,but why here change the data from msg
 *  while strvector just change its member to nullptr
 */
MailMessage::MailMessage(MailMessage &&msg)noexcept
:_contents(std::move(msg._contents)),_folders(std::move(msg._folders))
{
    for(auto folder:_folders)
    {
        folder->remove_message(msg);
        folder->add_message(*this);
    }

    msg._folders.clear();
}

MailMessage &MailMessage::operator=(MailMessage &&msg)noexcept
{
    if(this != &msg)
    {
        remove_from_folders();
        _contents = std::move(msg._contents);
        for(auto folder:_folders)
        {
            folder->remove_message(msg);
            folder->add_message(*this);
        }
    
        msg._folders.clear();

    }

    return *this;
}

void MailMessage::save(MailFolder &folder)
{
    _folders.insert(&folder);
    folder.add_message(*this);
}

void MailMessage::remove(MailFolder &folder)
{
    folder.remove_message(*this);
    _folders.erase(&folder);
}

void swap(MailMessage &rst, MailMessage &snd)
{
   using std::swap;
   for(auto f:rst._folders)
   {
       f->remove_message(rst);
   }

   for(auto f:snd._folders)
   {
       f->remove_message(snd);
   }

   swap(rst._folders,snd._folders);
   swap(rst._contents,snd._contents);
   for(auto f:rst._folders)
   {
       f->add_message(rst);
   }

   for(auto f:snd._folders)
   {
       f->add_message(snd);
   }

}
