#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Nhap vao mot so x ";
    cin >> x;
    
    if (0 <= x && x <= 9)
        cout << x;
    else if (10 <= x && x <= 35)
        cout << char(x-10 + int('A'));
        
    return 0;
}