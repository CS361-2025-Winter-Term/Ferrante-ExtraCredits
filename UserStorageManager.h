#ifndef USERSTORAGEMANAGER_H
#define USERSTORAGEMANAGER_H

#include <string>
#include "UserProfile.h"
using namespace std;
class UserStorageManager {
    public:
        void findUserByUsername(const string& username);
        void saveUserToDatabase(UserProfile userProfile);
};


#endif