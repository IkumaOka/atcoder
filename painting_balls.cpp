#include <iostream>
#include <math.h>
using namespace std;

int main(){   
    int N, K;
    cin >> N >> K;
    long ans;
    ans = K * pow((K - 1), (N - 1));
    cout << ans << endl;
    return 0;
}