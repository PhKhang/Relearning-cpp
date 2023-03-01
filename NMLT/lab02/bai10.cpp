#include <iostream>

using namespace std;

int main(){
    double soCu, soMoi;
    cout << "Nhap vao chi so cu va chi so moi ";
    cin >> soCu >> soMoi;
    
    double dien = soMoi - soCu;
    double tien = 0;
    
    tien += min(dien, 100)*1000;
    
}