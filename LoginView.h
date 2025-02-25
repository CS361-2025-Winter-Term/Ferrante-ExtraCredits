#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include <string>
#include "UserProfile.h"

class LoginView{
    public: 
        void readUsernameTextbox();
        void readPassWordTextbox();
        void readEmailTextbox();
        void readNotificationPreferences();

        void registerUser(UserProfile profile, string password);
        void transitionToHomeView(UserProfile profile);

        void displayError(string &errorText);

        void createNotificationPreferences();
        void createUserProfile();

    private:
        UserProfile* profile;
        string username;
        string password;
        string email;
        NotificationPreferences preferences;


};
















#endif