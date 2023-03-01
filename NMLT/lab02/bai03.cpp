#include <iostream>
#include <cmath>

using namespace std;

int maint(){
    int so;
    cout << "Nhap mot so ban nghi la so chinh phuong";
    cin >> so;
    
    if (pow(int(sqrt(so)), 2) == so)
        cout << "La so chinh phuong";
    else
        cout << "Khong phai la so chinh phuong";
        
    return 0;
}