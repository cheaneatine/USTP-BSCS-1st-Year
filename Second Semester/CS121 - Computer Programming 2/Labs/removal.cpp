/*
____________________________________
|             Time                 |
|__________________________________|
| - hour: int                      |
| - minute: int                    |
| - second: int                    |
|__________________________________|
| + Time()                         |
| + Time(elapseTime)               |
| + Time(h, m, s)                  |
| + getHour(): int                 |
| + getMinute(): int               |
| + getSecond(): int               |
| + setTime(elapseTime: int): void |
|__________________________________|
*/

#include <iostream>
#include <ctime>
using namespace std;

class Time {
private:                        // diri gina store ang values nga ga represent ug specific time
    int hour;  
    int minute;
    int second;

public:
    Time() {
        time_t TimeNow = time(0);        // no-arg constructor, walay ginakuha nga argument and only displays the current time, mao gi use ang function nga time(0)
        struct tm *localTime = localtime(&TimeNow);
        hour = localTime -> tm_hour;
        minute = localTime -> tm_min;
        second = localTime -> tm_sec;
    }

    Time(int elapseTime) {          // diri kay ga take ug argument, tawag ani kay elapseTime, ga represent ug number of seconds since January 1, 1970
        setTime(elapseTime);
    }

    Time(int h, int m, int s){     // tulo ka arguments, h m s, ga represent as hour, minute, and seconds
        hour = h;
        minute = m;
        second = s;
    }

    int getHour() {                // ang get functions ang ga allow ug retrieve sa values sa hour, minute, and seconds.
        return hour;
    }

    int getMinute() {
        return minute;
    }

    int getSecond() {
        return second;
    }

    void setTime(int elapseTime) {      // diri gina calculate ang argument nga elapseTime, gina-calculate ang hour, minute and seconds
        int totalSeconds = elapseTime % 86400;      // number of seconds in a day
        hour = totalSeconds / 3600;
        minute = (totalSeconds % 3600) / 60;       
        second = (totalSeconds % 3600) % 60;
    }
};

int main() {
    Time time1;
    Time time2(555555);

    cout << "Time 1: " << time1.getHour() << ":" << time1.getMinute() << ":" << time1.getSecond() << endl;
    cout << "Time 2: " << time2.getHour() << ":" << time2.getMinute() << ":" << time2.getSecond() << endl;

    return 0; 
}