#include <iostream>

using namespace std;

void inputArray(float A[], int n){
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> A[i];
    }
}

void printArray(float A[], int n){
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

bool isPrime(int a){
    if (a <= 1)
        return false;
        
    for (int i = 2; i*i <= a; i++){
        if (a % i == 0)
            return false;
    }
    
    return true;
}

int countArrayPrime(int A[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans += isPrime(A[i]);
    }
    
    return ans;
}

float sumArray(float A[], int n){
    float ans = 0;
    for (int i = 0; i < n; i++){
        ans += A[i];
    }
    
    return ans;
}

bool isIncreasing(float A[], int n){
    for (int i = 0; i < n - 1; i++){
        if (A[i] > A[i+1])
            return false;
    }
    
    return true;
}
bool isDecreasing(float A[], int n){
    for (int i = 0; i < n - 1; i++){
        if (A[i] < A[i+1])
            return false;
    }
    
    return true;
}

void input2DArray(float A[][1000], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << "Nhap phan tu [" << m << "][" << n << ": ";
            cin >> A[m][n];
        }
    }
}

void print2DArray(float A[][1000], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << A[m][n] << " ";
        }
    }
    
    cout << endl;
}

void rotate2DArray(float A[][1000], int m, int n){
    
}

void sum2DArray(float A[][1000], float B[][1000], float result[][1000], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            result[m][n] = A[m][n] + B[m][n];
        }
    }
}


int main(){
    float B[100];
    inputArray(B, 4);
    printArray(B, 4);
}