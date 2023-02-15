#include <iostream>
#include <ctime>
#include <chrono>


using std::cout; using std::endl;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::seconds;
using std::chrono::system_clock;

using namespace std;

int main() {
    freopen("in.out/minmax.in", "r", stdin);
    
    auto millisec_since_epoch = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    
    int n = 805;
    
    int min, max;
    cin >> max;
    min = max;
    
    for (int i=1; i<n; i++){
        int temp;
        cin >> temp;
        if (temp > max){
            max = temp;
        }
        else {
            if (temp < min)
                min = temp;
        }
    }
    
    cout << "So max la: " << max << ", so min la: " << min << endl;
    cout << "Took: " << duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count() - millisec_since_epoch << endl;
}