#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool compareString(string a, string b){
    if (a.size() > b.size()){
        return false;
    }
    
    if (a.compare(b) == 0)
        return true;
    
    if (a.compare(b) == -1)
        if (a.at(0) != b.at(0))
            return false;
        else
            return true;
    
    return false;
}

int main(){
    vector<string> strs = {"aa", "ab"};
    
    string prefix = strs[0];
    
    cout << prefix.compare("ab") << endl;
    
    for (int i = 1; i < strs.size(); i++){
        
        while (prefix.size() > 0 && !compareString(prefix, strs[i])){
            prefix.resize(prefix.size() - 1);
        }
        
        if (prefix.size() <= 0)
            break;
    }
    
    if (prefix.size() > 0)
        cout << prefix;
    else
        cout << "No matching prefix";
    
    return 0;
}