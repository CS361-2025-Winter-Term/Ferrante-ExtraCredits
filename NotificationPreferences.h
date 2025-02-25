#ifndef NOTIFICATIONPREFERENCES_H
#define NOTIFICATIONPREFERENCES_H
#include <string>

using namespace std; 

enum class Frequency {
    HOURLY, DAILY, WEEKLY, MONTHLY,
};

class NotificationPreferences {
    public:
        NotificationPreferences(Frequency freq, bool Enabled); //constructor

        //getter
        Frequency getFrequency() const;
        bool isEnabled() const;

    private:
        Frequency freq;
        bool Enabled;
};

#endif
