#include <iostream>
#include <fstream>

#include <chrono>
#include <ctime>

using namespace std;

void findMinMax(int a[], int &min, int &max, int n){
    min = max = a[0];
    for (int i = 0; i < (n / 2) * 2; i+=2){
        
        if (a[i] < a[i + 1]){
            if (max < a[i + 1]){
                max = a[i + 1];
            }
            if (min > a[i])
                min = a[i];
        }
                
        else{
            if (min > a[i + 1]){
                min = a[i + 1];
            }
            
            if (max < a[i])
                max = a[i];
        }
    }
    
    if (n % 2 != 0){
        if (max < a[n - 1])
            max = a[n - 1];
        if (min > a[n - 1])
            min = a[n - 1];
    }
        
}

void findMinMaxTeachsWay(int a[], int &min, int &max, int n){
    min = max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > max)
            max = a[i];
        else if (a[i] < min)
            min = a[i];
    }
}

void findMinMaxSlowWay(int a[], int &min, int &max, int n){
    min = max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];  
    }
        
}

int main(){
    int array[4800];
    int n = 4800;
    
    ifstream in("minMax.txt");
    
    for (int i = 0; i < n; i++)
        in >> array[i];
    
    
    int min, max;
    
    
    
    cout << "Round 1! ---------\n";
    
    auto start = std::chrono::system_clock::now();
    
    findMinMaxSlowWay(array, min, max, n);
    
    auto end = std::chrono::system_clock::now();
    
    std::chrono::duration<double> elapsed_seconds = end - start;
    
    cout << "So min la: " << min << ", so max la: " << max << endl;
    cout << "elapsed time: " << fixed << elapsed_seconds.count() << "s" << endl;
    
    
    
    
    cout << "\nRound 2! ---------\n";
    
    start = std::chrono::system_clock::now();
    
    findMinMaxTeachsWay(array, min, max, n);
    
    end = std::chrono::system_clock::now();
    
    elapsed_seconds = end - start;
    
    cout << "So min la: " << min << ", so max la: " << max << endl;
    cout << "elapsed time: " << fixed << elapsed_seconds.count() << "s" << endl;
    
    
    
    
    cout << "\nRound 3! ---------\n";
    
    start = std::chrono::system_clock::now();
    
    findMinMax(array, min, max, n);
    
    end = std::chrono::system_clock::now();
    
    elapsed_seconds = end - start;
    
    cout << "So min la: " << min << ", so max la: " << max << endl;
    cout << "elapsed time: " << fixed << elapsed_seconds.count() << "s" << endl;
    
    return 0;
}