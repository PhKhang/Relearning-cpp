#include <iostream>

using namespace std;

int tri(int a, int b){
    return (b - a)*2;
}

int main(){
    string s = "AB", ans = "";
    int row;
    
    cout << "Number of rows: ";
    cin >> row;
    
    int triResult = row + row - 2;
    
    for (int i = 0; i < row; i++){
        int add = 0;
        int len = s.length() - 1;
        
        while (i + add <= len){
            cout << "len: " << i + add << endl;
            ans += s.at(add + i);
            cout << s.at(add + i) << endl;
            
            if (i != 0 && i != row - 1 && add + i + tri(i, row - 1) <= len){
                ans += s.at(add + i + tri(i, row - 1));
                cout << s.at(add + i + tri(i, row - 1)) << endl;
            }
            
            add += triResult;
        }
        cout << "----" << endl;
    }
    
    cout << ans;
}