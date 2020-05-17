// xorの計算方法　
#include <iostream>
using namespace std;
#include <string>

int main(){   
    int a, b, c, d;
    cin >> a >> b >> c;
    d = a ^ b ^ c;
    cout << d << endl;

    return 0;
}