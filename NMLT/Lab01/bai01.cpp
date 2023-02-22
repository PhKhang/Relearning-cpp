#include <iostream>

using namespace std;

void print2dArray(int a[][3]){
    for (int i = 0; i < 9; i++)
        cout << *( *(a) + i) \
        << (( (i + 1) % 3 != 0 )? " ": "\n");
}

int main() {
    int b[] = {9,0,9,9,9};
    int a[][3] = { 
{56 , -45 , -44},
{-32 ,  -2 ,  62},
{0 ,   3 , -70}
};
                
    for (int i = 0; i < 9; i++){
        
        int min = *(*(a) + i), minIndex = i;
        
        for (int j = i + 1; j < 9; j++){
            if ( *(*(a) + j) < min){
                min = *(*(a) + j);
                minIndex = j;
            }
        }
        
        *(*(a) + minIndex) = *(*(a) + i);
        *(*(a) + i) = min;
    }
    
    print2dArray(a);
                
}