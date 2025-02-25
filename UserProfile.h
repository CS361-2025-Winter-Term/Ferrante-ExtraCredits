#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <string>
#include "NotificationPreferences.h"
using namespace std;

class UserProfile{
    public:
        UserProfile(const string& username, const string& email, const NotificationPreferences& preferences);
}




#endif