#include <iostream>

using namespace std;

int sequentialSearch(int array[], int key, int n){
    array[n] = key;
    
    int index = 0;
    while (array[index] != key){
        index++;
    }
    
    return ((index < n)? index : -1);
}

int binarySearch(int array[], int key, int n, int start = 0, int end = -1){
    if ( !((array[0] >= array[(n - 1)/2] && array[(n - 1)/2] >= array[n - 1]) || (array[0] <= array[(n - 1)/2] && array[(n - 1)/2] <= array[n - 1])) ){
        cout << "Not sorted" << endl;
        return -1;
    }
        
    if (end == -1)
        end = n - 1;
        
    int mid;
    while (start <= end){
        mid = (start + end)/ 2;
        
        if (array[mid] == key)
            return mid;
        
        else {
            if (array[mid] > key){
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
    }
        
    return -1;
}

int binarySearchRecursive(int array[], int key, int n, int start = 0, int end = -2){
    if ( !((array[0] >= array[(n - 1)/2] && array[(n - 1)/2] >= array[n - 1]) || (array[0] <= array[(n - 1)/2] && array[(n - 1)/2] <= array[n - 1])) ){
        cout << "Not sorted" << endl;
        return -1;
    }
        
    if (end == -2)
        end = n - 1;
        
    if (start > end)
        return -1;
        
    int mid;
    mid = (start + end)/ 2;
    
    if (array[mid] == key)
        return mid;
    else
        if (array[mid] > key)
            return binarySearchRecursive(array, key, n, start, mid - 1);
        else
            return binarySearchRecursive(array, key, n, mid + 1, end);
       
    return -1;
}

int interpolationSearch(int array[], int key, int n, int start = 0, int end = -2){
    if ( !((array[0] >= array[(n - 1)/2] && array[(n - 1)/2] >= array[n - 1]) || (array[0] <= array[(n - 1)/2] && array[(n - 1)/2] <= array[n - 1])) ){
        cout << "Not sorted" << endl;
        return -1;
    }
        
    if (end == -2)
        end = n - 1;
        
    int mid;
    while (start <= end && (array[start] <= key && key <= array[end]) ){
        if (start == end)
            return ((array[start] == key)? start : -1);
            
        mid = start + (((double)(end - start) /
            (array[end] - array[start])) * (key - array[start]));
        
        if (array[mid] == key)
            return mid;
            
        if (array[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
       
    return -1;
}


int main() {
    int array[] = {26, 11, 27, 13, 10, 7, 12, 23, -4, 17, 28, 25, -3, 2, 24}, n = 15;
    int arraySorted[] = {-5, -4, -2, 6, 8, 11, 12, 14, 16, 18, 21, 23, 24, 28, 29};
    
    int key = 24;
    cout << interpolationSearch(arraySorted, key, n);
    
    return 0;
}