#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    map<int, int> hayStack;
    vector<int> amountOf(n+1, 0);
    
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        for (a; a <= b; a++){
            amountOf[a]++;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        hayStack[amountOf[i]]++;
    }
    
    int halfPoint = n/2 + 1;
    for (auto i:hayStack){
        halfPoint -= min(halfPoint, i.second);
        if (halfPoint <= 0){
            cout << i.first;
            return 0;
        }
    }
    
    return 0;
}