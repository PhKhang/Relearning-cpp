#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

void bai02() {
    string a = R"(C Language Basic Syntax Rules:
    1. Lowercase letters are significant
    2. main is where program execution begins
    3. Opening and closing braces enclose program statements in a routine
    4. All program statements must be terminated by a semicolon)";

    cout << a;
}

int bai03() {
    return 321 - 123;
}

int bai04(int a, int b) {
    return a - b;
}

int bai05(int x){
    return pow(x, 3) - 5*pow(x, 2) + 6;
} 

void bai06(double r) {
    cout << "Dien tich hinh tron ban kinh " << r << " la: " << r*r*3.141592 << endl;
    cout << "Chu vi hinh tron ban kinh " << r << " la: " << 2*r*3.141592 << endl;
}

double bai07(double m, double D){
    return m/D;
}

double bai08(double v, double l){
    return l/v;
}

double bai09(double v){
    return v*1.1;
}

int bai10(int a){
    int ans = (a % 10) * 10;
    a /= 10;
    ans += a;
    return ans;
}

void bai11(int sec) {
    cout << setfill('0') << setw(2) << sec / 3600 << ":" << setfill('0') << setw(2) << sec % 3600 / 60 << ":" << setfill('0') << setw(2) << sec % 3600 << endl;
}

double bai12(double m1, double m2, double d){
    return 6.67e-11 * m1 * m2 / pow(d, 2);
}

int bai13(double m) {
    return ceil(m/20);
}

void bai14(int a) {
    cout << "So to 10 dong la: " << a/10;
    a%=10;
    cout << ", so to 5 dong la: " << a/5;
    a%=5;
    cout << ", so to 1 dong la: " << a << endl;
}

void bai15(int a, int b){
    string below = "x" + to_string(b);
    int n = 7;
    
    cout << setw(n) << setfill(' ') << a << endl;
    cout << setw(n) << setfill(' ') << below << endl;
    
    cout << setw(n) << setfill('-') << "" << endl;
    
    cout << setw(n) << setfill(' ') << b % 10 * a << endl;
    cout << setw(n-1) << setfill(' ') << (b / 10 % 10) * a << endl;
    cout << setw(n-2) << setfill(' ') << (b / 100 % 10) * a << endl;
    
    cout << setw(n) << setfill('-') << "" << endl;
    cout << setw(n) << setfill(' ') << a * b << endl;
}

double bai17(double h, double w){
    return w / (h*h);
}

void bai18(int n = 3){
    double ans = 0;
    double temp;
    
    cin >> temp;
    ans += temp;
    
    cin >> temp;
    ans += temp;
    
    cin >> temp;
    ans += temp;
    
    cout << "Tong thoi gian chay cua " << n << " nguoi la: " << ans << endl;
}

int main() {
    
    bai15(335, 924);
    
    return 0;
}