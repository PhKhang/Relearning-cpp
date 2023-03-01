#include <iostream>

using namespace std;

void inputArray(int* a, int& n) {
    // take input from the user for size of the array
    cout << "Enter size of array: ";
    cin >> n;

    // allocate memory to the array using new operator
    int *b = new int[n];

    // loop through the array and take input from the user
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> *(b + i);
        cout << "<" << *(b + i) << ">" << endl;
    }
    
    a = b;
}

int main() {
    int* a, *c, *d;
    int n = 69;
    
    c = new int[3];
    *(c + 0) = 47;
    *(c + 1) = 45;
    *(c + 2) = 46;
    for (int i = 0; i < 3; i++)
        cout << *(c + i) << " ";
    
    a = c;
    
    inputArray(a, n);

    // print the array
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " ";
    }

    // free the memory allocated to the array using delete operator
    delete[] a;

    return 0;
}
