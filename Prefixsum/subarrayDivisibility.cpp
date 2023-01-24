#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int remain[int(2e5 + 1)];

    for (int i = 0; i < int(2e5 + 1); i++) {
        remain[i] = 0;
    }

    remain[0] = 1;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        sum += temp;

        remain[((sum) % n + n) % n]++;
    }

    long long ans = 0;
    for (int i = 0; i < int(2e5 + 1); i++) {
        long long rem = remain[i];
        ans += ((rem) * (rem - 1)) / 2;
    } 

    cout << ans;

    return 0;
}