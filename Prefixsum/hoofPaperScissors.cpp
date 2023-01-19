// http://www.usaco.org/index.php?page=viewproblem2&cpid=691
#include <iostream>
using namespace std;

int main() {
    freopen("in.out/hps.in", "r", stdin);
    freopen("in.out/hps.out", "w", stdout);
    
    int n;
    cin >> n;
    
    int hoof[100001], paper[100001], scissors[100001];
    hoof[0] = paper[0] = scissors[0] = 0;
    
    for (int i = 0; i < n; i++){
        char temp;
        cin >> temp;
        
        hoof[i + 1] = hoof[i] + ((temp == 'S')? 1: 0);
        paper[i + 1] = paper[i] + ((temp == 'H')? 1: 0);
        scissors[i + 1] = scissors[i] + ((temp == 'P')? 1: 0);
    }
    
    int ans = max(hoof[n] - hoof[0], max(paper[n] - paper[0], scissors[n] - scissors[0]));
    
    for (int i = 1; i <= n - 1; i++){
        ans = max(hoof[i] - hoof[0] + paper[n] - paper[i], ans);
        ans = max(paper[i] - paper[0] + hoof[n] - hoof[i], ans);
        
        ans = max(scissors[i] - scissors[0] + paper[n] - paper[i], ans);
        ans = max(paper[i] - paper[0] + scissors[n] - scissors[i], ans);
        
        ans = max(paper[i] - paper[0] + scissors[n] - scissors[i], ans);
        ans = max(scissors[i] - scissors[0] + paper[n] - paper[i], ans);
        
        ans = max(hoof[i] - hoof[0] + scissors[n] - scissors[i], ans);
        ans = max(scissors[i] - scissors[0] + hoof[n] - hoof[i], ans);
        
        ans = max(scissors[i] - scissors[0] + hoof[n] - hoof[i], ans);
        ans = max(hoof[i] - hoof[0] + scissors[n] - scissors[i], ans);
        
        ans = max(paper[i] - paper[0] + hoof[n] - hoof[i], ans);
        ans = max(hoof[i] - hoof[0] + paper[n] - paper[i], ans);
        
    }
    
    cout << ans;
}