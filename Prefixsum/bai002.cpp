#include <iostream> 
using namespace std;

int main(){
    freopen("in.out/bcount.in", "r", stdin);
    freopen("in.out/bcount.out", "w", stdout);
    
    int n, q;
    cin >> n >> q;
    
    int b1[100001];
    int b2[100001];
    int b3[100001];
    
    b1[0] = b2[0] = b3[0] = 0;
    
    for (int i=1; i <= n; i++){
        int id;
        cin >> id;
        b1[i] = b1[i - 1] + ((id == 1)? 1 : 0);
        b2[i] = b2[i - 1] + ((id == 2)? 1 : 0);
        b3[i] = b3[i - 1] + ((id == 3)? 1 : 0);
    }
    
    for (int i = 1; i <= q; i++){
        int a, b;
        cin >> a >> b;
        cout << b1[b] - b1[a - 1] << " " << b2[b] - b2[a - 1] << " " << b3[b] - b3[a - 1] << endl;
    }
}