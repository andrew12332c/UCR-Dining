#ifndef HOURS_H
#define HOURS

#include <string>

using namespace std;

class Hours {
  public: 
    void setOpeningHour(int hour) {
        openHour = hour;
    }
    
    void setOpeningMinute(int minute) {
        openMinute = minute;
    }

    void setClosingHour(int hour) {
        closeHour = hour;
    }

    void setClosingMinute(int minute) {
        closeMinute = minute;
    }


    int getOpenHour() {
        return openHour;
    }   

    int getOpenMinute() {
        return openMinute;
    }

    int getCloseHour() {
        return closeHour;
    }

    int getCloseMinute() {
        return closeMinute;
    }

    

  protected:
    int openHour;
    int openMinute;
    int closeHour;
    int closeMinute;
};

#endif