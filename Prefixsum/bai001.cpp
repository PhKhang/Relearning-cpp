#include <iostream>
#include <vector>
using namespace std;

int main(){
    freopen("in.out/div7.in", "r", stdin);
    freopen("in.out/div7.out", "w", stdout);
    
    int n;
    cin >> n;
    
    int sum = 0, ans = 0;
    vector <int> repeated(7, -1);
    for (int i = 1; i <= n; i++){
        int id;
        cin >> id;
        sum = (sum + id) % 7;
        
        
        if (repeated[sum] == -1){
            repeated[sum] = i;
        }
        else {
            ans = max(ans, i - repeated[sum]);
        }
    }
    
    cout << ans;
}