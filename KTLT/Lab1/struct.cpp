#include <iostream>
#include <iomanip>
#include <cmath>

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

bool operator<(Time a, Time b){
    int aSecond, bSecond;
    aSecond = a.hour * 3600 + a.minute * 60 + a.second;
    bSecond = b.hour * 3600 + b.minute * 60 + b.second;

    return aSecond < bSecond;
}


struct Fraction {
    int numerator, denominator;
};

void inputFraction(Fraction *fract) {
    cout << "Input fraction: ";
    char temp;
    cin >> fract->denominator >> temp >> fract->numerator;
}

bool operator<(Fraction a, Fraction b){
    return a.numerator * b.denominator < b.numerator * a.denominator;
}

bool operator>(Fraction a, Fraction b){
    return a.numerator * b.denominator > b.numerator * a.denominator;
}



struct Point{
    double x, y;
};

istream &operator>>(istream &cin, Point &point){
    char temp;
    cin >> point.x >> temp >> point.y;
    
    return cin;
}

ostream &operator<<(ostream &cout, Point a){
    cout << a.x << ", " << a.y;
    
    return cout;
}

void quadrantDeter(Point a){
    string ans = "";
    ans += ((a.y >= 0)? "Up" : "Down");
    ans += "-";
    ans += ((a.x >= 0)? "Right" : "Left");
    
    cout << ans << endl;
}

double distant(Point a, Point b){
    return sqrt( abs(a.x - b.x) * abs(a.x - b.x) +  abs(a.y - b.y) * abs(a.y - b.y));
}

Point findMid(Point a, Point b){
    Point mid{ (a.x + b.x) / 2, (a.y + b.y) / 2};
    return mid;
}

int main(){
    Point a, b;
    cin >> a >> b;
    
    cout << distant(a, b) << endl;
    Point c = findMid(a, b);
    cout << c << endl;
    
    return 0;
}