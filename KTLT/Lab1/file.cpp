#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

string toLower(string a){
    string lower = "";
    for (int i = 0; i < a.size(); i++)
        lower += tolower(a.at(i));
        
    return lower;
}

int main(){
    /* freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout); */
    
    ifstream in1, in2("input2.txt");
    ofstream out1;
    in1.open("input1.txt"); 
    out1.open("output1.txt");
    
    int n;
    in1 >> n;
    
    for (int i = 0; i < n; i++){
        double a, b;
        char operation;
        in1 >> a >> operation >> b;
        
        switch (operation){
            case '+':
                out1 << a + b << endl;
                break;
            case '-':
                out1 << a - b << endl;
                break;
            case '*':
                out1 << a * b << endl;
                break;
            case '/':
                out1 << a / b << endl;
                break;
        }
        
    }
    
    string key;
    cout << "Input your word: ";
    cin >> key;
    key = toLower(key);
    
    string temp;
    int ans = 0;
    while (in2 >> temp){
        temp = toLower(temp);
        if (temp == key)
            ans++;
    }
    
    cout << "Your word has repeated: " << ans << " times";
    
    return 0;
}