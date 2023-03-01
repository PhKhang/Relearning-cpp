#include <iostream>
#include "bai01.h"

using namespace std;

// TODO: 8, 9, 10, 15

int main(){
    int a[] = {2, 3, 5, 6, 7, 8, 24, 34}, na = sizeof(a) / sizeof(a[0]);
    int b[] = {1, 6, 34, 65, 76, 5, 11, 31}, nb = sizeof(b) / sizeof(b[0]);
    
    int length, width;
    int **c = nullptr, **d = nullptr;
    generateMatrix1(c, length, width);
    generateMatrix1(d, length, width);
    
    print2dArray(c, length, width);
    print2dArray(d, length, width);
    
    int **concatcd = nullptr;
    concatcd = concatenate2MatricesV(c, d, length, width);
    
    cout << "\nConcated matrix" << endl;
    print2dArray(concatcd, length * 2, width);
    
    return 0;
}