#include <iostream>
#include <iomanip>

using namespace std;

struct Time
{
    int hour, minute, second;
};

void inputTime(Time *time){
    char temp;
    bool passed = false;
    while (!passed)
        if (!(cin >> time->hour >> temp >> time->minute >> temp >> time->second \
            && time->hour <= 24 && time->minute <= 60 && time->second <= 60))
            cout << "Please re enter your time\n";
            
        else 
            passed = true;
}

void outputTime(Time time){
    cout << setw(2) << setfill('0') << time.hour << ":";
    cout << setw(2) << setfill('0') << time.minute << ":" ;
    cout << setw(2) << setfill('0') << time.second << endl;
}

void timePassed(Time time){
    int totalSecond = time.hour * 3600 + time.minute * 60 + time.second;
    cout << "It's been " << totalSecond / 60 << " minutes and " << totalSecond % 60 << " seconds" << endl;
}

int earlierTime(Time a, Time b){
    int aSecond, bSecond;
    aSecond = a.hour * 3600 + a.minute * 60 + a.second;
    bSecond = b.hour * 3600 + b.minute * 60 + b.second;

    return aSecond > bSecond;
}


struct Fraction {
    int numerator, denominator;
};

void inputFraction(Fraction *fract) {
    cout << "Input fraction: ";
    char temp;
    cin >> fract->denominator >> temp >> fract->numerator;
}

int main(){
    Time a;
    inputTime(&a);
    outputTime(a);
    timePassed(a);
    
    return 0;
}