#include <iostream>

using namespace std;

int main(){
    double toan, li, hoa;
    toan = 5;
    li = 5;
    hoa = 6;
    
    if (toan + li + hoa >= 15 && toan >= 4 && li >= 4 && hoa >= 4){
        cout << "Dau" << endl;
        
        if (toan > 5 && li > 5 && hoa > 5)
            cout << "Hoc deu cac mon" << endl;
        else if (toan < 5 || li < 5 || hoa < 5)
            cout << "Chua hoc deu cac mon";
    }
    else
        cout << "Thi hong";
        
    return 0;
}