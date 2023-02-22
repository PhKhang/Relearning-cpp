#include <iostream>

using namespace std;

void selectionSort(int array[], int n){
    
    for (int i = 0; i < n - 1; i++){
        int min = array[i], indexMin = i;
        
        for (int j = i + 1; j < n; j++){
            if (min > array[j]){
                min = array[j];
                indexMin = j;
            }
        }
        
        array[indexMin] = array[i];
        array[i] = min;
    }
}

void insertionSort(int array[], int n){
    
    for (int i = 1; i < n; i++){
        
        int j = i - 1, value = array[i];
        while ((value < array[j]) && j >= 0){
            array[j + 1] = array[j];
            j--;
        }
        
        array[j + 1] = value;
    }
}

void insertionSortWithSentinel(int array[], int n){
    
    for (int i = n; i > 0; i--)
        array[i] = array[i - 1];
    
    
    for (int i = 2; i <= n; i++){
        
        int j = i - 1, value = array[i];
        array[0] = value;
        
        while (value < array[j]){
            array[j + 1] = array[j];
            j--;
        }
        
        array[j + 1] = value;
    }
    
    for (int i = 0; i < n; i++)
        array[i] = array[i + 1];
}

void binaryInsertionSort(int array[], int n){
    
    for (int i = 1; i < n; i++){
        
        int value = array[i];
        
        int left = 0, right = i - 1;
        while (left <= right){
            
            int mid = (left + right)/2;
            if (array[mid] > array[i]){
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        
        for (int j = i - 1; j >= left; j--){
            swap(array[j], array[j + 1]);
        }
        
        array[left] = value;
    }
}

void bubbleSort(int array[], int n){
    bool sorted = false;
    
    for  (int i = 0; i < n - 1; i++){
        sorted = true;
        for (int j = 0; j < n - 1 - i; j++){
            
            if (array[j] > array[j + 1]){
                swap(array[j], array[j + 1]);
                sorted = false;
            }
        }
        
        if (sorted)
            break;
    }
}

void shakerSort(int array[], int n){
    bool sorted = false, direction = true;
    int start = 0, end = n;
    
    while (!sorted){
        sorted = true;
        if (direction){
            for (int j = start; j < end - 1; j++){
                
                if (array[j] > array[j + 1]){
                    swap(array[j], array[j + 1]);
                    sorted = false;
                }
                
            }
            end--;
            direction = !direction;
        }
        else {
            for (int j = end - 1; j > start; j--){
                
                if (array[j] < array[j - 1]){
                    swap(array[j], array[j - 1]);
                    sorted = false;
                }
                
            }
            start++;
            
            direction = !direction;
        }
        
    }
}

int main(){
    int array[] = {3, 8, 19, 10, 26, 5, 11, 30, -3, 29, -1, 4, 9, 0, 23, 18, 2, 7, -4, 15, 13, 6, 24, 1, 20, 21, 14, 22, 12, 27};
    int n = 30;
    
    binaryInsertionSort(array, n);
    
    for (int i:array)
        cout << i << " ";
        
    return 0;
}