#include <iostream>

using namespace std;

int main(){
    double a, b, c;
    cout << "Nhap 3 canh cua mot tam giac ";
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a){
        
        if (a == b || a == c || c == b)
        
            if (a == b && a == c && c == b)
                cout << "La tam giac deu";
            else if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a)
                cout << "La tam giac vuong can";
            else
                cout << "La tam giac can";
                
        else if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a)
            cout << "La tam giac vuong";
            
        else
            cout << "La tam giac thuong";
    }
    else
        cout << "Khong phai la 3 canh cua mot tam giac";
        
    return 0;
}