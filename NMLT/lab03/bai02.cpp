#include <iostream>

using namespace std;

int dem(int a){
    int ans = 0;
    while (a){
        ans++;
    }
    return ans;
}

int main(){
    unsigned long long i = 1000001, b;
    b = i;
     
    int muoikhac = 1;
    while (b / muoikhac > 999){
        muoikhac *= 1000;
    }
    
    muoikhac /= 1000;
        
    for (int j = 0; j <= muoikhac; j++){
        
        if (j != 0)
            cout << ',';
        
        int muoi = 1;
        while (i / muoi > 999){
            muoi *= 1000;
        }
        
        if (!(i <= 999))
            cout << i / muoi;
        else
            cout << i / muoi / 100 << i / muoi / 10 % 10 << i / muoi % 10;
            
            
        i %= muoi;
        
    }
}