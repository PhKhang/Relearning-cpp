#include <iostream>

using namespace std;

int main(){
    int a[] = {458, -150, 1505, -21, 1979, 148, 86, 384, 1084, 938, 1197, 115, -830, 869, 371, 1796, 1177, -805, 1694, 1679};
    int n = 20;
    
    for (int i = 0; i < 20; i++){
        
        int min = a[i], minIndex = i;
        
        for (int j = i + 1; j < n; j++){
            
            if (a[j] % 2 == 0)
                if (a[j] < min){
                    min = a[j];
                    minIndex = j;
                }
            else 
                if (a[j] < min){
                    min = a[j];
                    minIndex = j;
                }
        }
        
        a[minIndex] = a[i];
        a[i] = min;
        
    }
    
    for (auto i:a)
        cout << i << " ";
        
    cout << endl;
    
    return 0;
}