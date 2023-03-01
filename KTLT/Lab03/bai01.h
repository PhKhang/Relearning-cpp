#include <iostream>
#include <algorithm>

using namespace std;

// bai 1
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// bai 2
int* sum(int* a, int* b){
    int *sum = new int;
    *sum = *a + *b;
    return sum;
}

// bai 3
void inputArray(int* &a, int &n){
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    
    a = new int[n];
    
    for (int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> *(a + i);
    }
}

// bai 4
void printArray(int *a, int n){
    for (int j = 0; j < n; j++){
        cout << a[j] << " ";
    }
    cout << endl;
}

// bai 5
int* findMax(int* arr, int n){
    int *max = new int;
    *max = *arr;
    for (int i = 1; i < n; i++){
        if (*(arr + i) > *max)
            *max = *(arr + i);
    }
    return max;
}

// bai 6
int* copyArray(int* arr, int n){
    int *newArray = new int[n];
    for (int i = 0; i < n; i++)
        *(newArray + i) = *(arr + i);
    return newArray;
}

// bai 7
int* countEvens(int* arr, int n, int* evens){
    *evens = 0;
    for (int i = 0; i < n; i++)
        if (*(arr + i) % 2 == 0)
            *evens = *evens + 1;
            
    return evens;
}

int* genEvenSubarray(int* arr, int n, int* count){
    int *b = new int[*count];
    int indexB = 0;
    for (int i = 0; i < n; i++)
        if (*(arr + i) % 2 == 0){
            *(b + indexB) = *(arr + i);
            indexB++;
        }
        
    return b;
}

// bai 8
int* findLargestTotalSubarray(int* a, int n, int &total, int &length){
    total = 0;
    int *newArr = new int[n], subArrLength = n, indexNewArr = 0;
    
    for (int i = 0; i < n; i++){
        if (*(a + i) <= 0){
            subArrLength--;
        }
        else {
            *(newArr + indexNewArr) = *(a + i);
            indexNewArr++;
        }
    }
    
    length = subArrLength;
    return newArr;
}

// bai 9
int* findLongestAscendingSubarray(int* a, int n, int &length){
    return new int;
}

// bai 10
void swapArrays(int* a, int* b, int &na, int &nb){
    
}

// bai 11
int* concatenate2Arrays(int* a, int* b, int na, int nb){
    int *result = new int[na + nb];
    
    int indexResult = 0;
    
    for (int i = 0; i < na; i++){
        *(result + indexResult) = *(a + i);
        indexResult++;
    }
    
    for (int i = 0; i < nb; i++){
        *(result + indexResult) = *(b + i);
        indexResult++;
    }
    
    return result;
}

// bai 12
int* merge2Arrays(int* a, int* b, int na, int nb, int&nc){
    int indexa, indexb;
    indexa = indexb = 0;
    
    int *result = new int[na + nb];
    nc = na + nb;
    
    for (int i = 0; i < na + nb; i++){
        int newElement;
        if (indexa >= na){
            newElement = *(b + indexb);
            indexb++;
        }
        else if (indexb >= nb){
            newElement = *(a + indexa);
            indexa++;
        }
        else if (*(a + indexa) < *(b + indexb)){
            newElement = *(a + indexa);
            indexa++;
        }
        else {
            newElement = *(b + indexb);
            indexb++;
        }
        
        *(result + i) = newElement;
    }
    
    return result;
}

// bai 13
void generateMatrix1(int** &A, int &length, int &width) {
    srand(time(NULL));
    
    cout << "Nhap chieu cao va chieu rong cua ma tran: ";
    cin >> length >> width;
    
    A = new int*[length];
    for (int i = 0; i < length; i++){
        A[i] = new int[width];
        
        for (int j = 0; j < width; j++){
            A[i][j] = rand();
        }
    }
}

void print2dArray(int **c, int clength, int cwidth){
    cout << endl;
    
    for (int i = 0; i < clength; i++){
        for (int j = 0; j < cwidth; j++)
            cout << c[i][j] << "\t";
        cout << endl;
    }
}

// bai 14
int** generateMatrix2(int* a, int* b, int na, int nb){
    int **result = new int*[na];
    for (int i = 0; i < na; i++)
        *(result + i) = new int[nb];
        
    for (int i = 0; i < na; i++)
        for (int j = 0; j < nb; j++)
            result[i][j] = a[i] * b[j];
            
    return result;
}

// bai 15
void swapRows(int** a, int length, int width){
    
}

// bai 16
int** transposeMatrix(int** a, int length, int width){
    // "Length of 2 dimensional array is the number of rows in it."
    int w = max(length, width);
    int l = min(length, width);
    
    for (int i = 0; i < l; i++){
        for (int j = 0; j < w; j++){
            if (j <= i)
                continue;
            
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    
    return a;
}

// bai 17
int** concatenate2MatricesH(int** a, int** b, int length, int width){
    int **concat = new int*[length];
    
    for (int i = 0; i < length; i++)
        *(concat + i) = new int[width * 2];
        
    for (int i = 0; i < length; i++)
        for (int j = 0; j < width; j++)
            concat[i][j] = a[i][j];
            
    for (int i = 0; i < length; i++)
        for (int j = 0; j < width; j++)
            concat[i][j + width] = b[i][j];
            
    return concat;
}

int** concatenate2MatricesV(int** a, int** b, int length, int width){
    int **concat = new int*[length * 2];
    
    for (int i = 0; i < length * 2; i++)
        *(concat + i) = new int[width];
        
    for (int i = 0; i < length; i++)
        for (int j = 0; j < width; j++)
            concat[i][j] = a[i][j];
            
    for (int i = 0; i < length; i++)
        for (int j = 0; j < width; j++)
            concat[i + length][j] = b[i][j];
            
    return concat;
}

// bai 18
bool multiple2Matrices(int** a, int** b, int lengtha, int widtha, int lengthb, int widthb){
    if (widtha != lengthb)
        return false;
    
    int **result = new int*[lengtha];
    for (int i = 0; i < lengtha; i++)
        *(result + i) = new int[widthb];
    
    
}
