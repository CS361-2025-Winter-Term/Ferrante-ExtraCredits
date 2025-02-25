#ifndef AUTHENTICATIONMANAGER_H
#define AUTHENTICATIONMANAGER_H

#include <string>
#include "UserProfile.h"

using namespace std;

enum class RegistrationStatus {
    USER_ALREADY_EXISTS, UNKNOWN_ERROR, SUCCESS
};

class AuthenticationManager{
    public:
        bool validateUsername(string username);
        bool validatePassword(string password);
        void hashPassword();
        bool validateEmail(string email);

        RegistrationStatus saveNewUser(UserProfile userProfile, string password);


};






#endif