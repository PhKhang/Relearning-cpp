#include <iostream>
#include <cmath>

using namespace std;

void LinearEquation(double a, double b){
    cout << "x of a Linear Equation with a = " << a << ", b = " << b << " is " << - b / a << endl;
}

void QuadraticEquation(double a, double b, double c){
    if (a == 0){
        if (b != 0){
            cout << "The equation has a = 0 which makes it a Linear Equation with b = " << b << ", c = " << c << " has x of " << - c / b;
            return ;
        }
        
        else {
            cout << "No x found for equation with a = " << a << ", b = " << b << " and c = " << c;
            return ;
        }
    }
    
    double delta = b*b - 4*a*c;
    
    if (delta == 0){
        cout << a << "x^2 + " << b << "x + " << c << " has x1 = x2 = " << - b / (2*a);
    }
    else if (delta < 0){
        cout << a << "x^2 + " << b << "x + " << c << " has no x belongs to R";
    }
    else{
        cout << a << "x^2 + " << b << "x + " << c << " has \nx1 = " << (- b + sqrt(delta)) / (2*a) << endl;
        cout << "x2 = " << (- b - sqrt(delta)) / (2*a) << endl;
    }
    
    return ;
}

bool isPrime(int a){
    if (a <= 1)
        return false;
        
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0)
            return false;
    }
    
    return true;
}

int countPrime(int a, int b){
    int ans = 0;
    for (a; a <= b; a++){
        ans += isPrime(a);
    }
    
    return ans;
}

int sumDigits(int n){
    int ans = 0;
    while (n){
        ans += n%10;
        n /= 10;
    }
    
    return ans;
}

void Triangle(float a, float b, float c){
    if ( a >= b + c || b >= a + c || c >= a + b){
        cout << "Could not make a triangle\n";
        return ;
    }
    
    if (a == b || a == c || b == c){
        if (a == b && a == c && b == c){
            cout << "This is a equilateral triangle\n";
            return ;
        }
        
        if (a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b ){
            cout << "This is a right isosceles triangle\n";
            return ;
        }
        
        cout << "This is a isosceles triangle\n";
        return ;
    }
    
    if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a) {
        cout << "This is a right triangle\n";
        return ;
    }
    
    cout << "This is a normal triangle";
    return;
}

int main(){
    LinearEquation(23, 45);
    
    QuadraticEquation(1, 5, 2);
    
    cout << isPrime(1) << endl;
    
    cout << "Number of primes: " << countPrime(1, 4) << endl;
    
    cout << "Sum of all digits is " << sumDigits(100000) << endl;
    
    cout << "Triangle result: ";
    Triangle(0, 0, 0);
    cout << endl;
    
    return 0;
}