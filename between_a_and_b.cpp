#include <iostream>
using namespace std;

// 0以上n以下のうちxで割り切れるものの個数
long long method(long n, long x) {
    long long result = 0;
    if (n == -1) {
        result = 0;
    } else {
        result = n / x + 1;
    }
    return result;
}

int main(){   
    long long a, b, x;
    cin >> a >> b >> x;
    // cout << a-1 << endl;
    long long result_a = method(a-1, x);
    long long result_b = method(b, x);

    cout << result_b - result_a << endl;

    return 0;
}