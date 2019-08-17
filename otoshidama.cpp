#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, Y;
    cin >> N >> Y;
    // 1万円札
    for(int i = 0; i <= N; i++){
        // 5千円札
        for(int j = 0; j <= N - i; j++){
            // 千円札
            int k = N - i - j;
            int total = 10000 * i + 5000 * j + 1000 * k;
            if(total == Y){
                 cout << i << " " << j << " " << k << endl;
                 return 0;
            }
        }
    }
    cout << -1 << " " <<  -1 << " " << -1 << endl;
    return 0;
}