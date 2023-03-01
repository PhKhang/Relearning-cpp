#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cout << "Nhap so a, b va c: ";
    cin >> a >> b >> c;
    
    int min = a, max = b;
    
    if (min > max){
        int temp = min;
        min = max;
        max = temp;
    }
        
    if (c < min){
        int temp = c;
        c = min;
        min = temp;
    }
    
    if (c > max){
        int temp = c;
        c = max;
        max = c;
    }
    
    cout << "Thu tu tang dan: " << min << " " << a + b + c - (min + max) << " " << max;
    
    return 0;
}