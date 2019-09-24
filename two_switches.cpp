#include <iostream>
using namespace std;

int main(){   
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b <= c and a < d) cout << 0 << endl;
    if (a < c and c < b and b < d) cout << b - c << endl;
    if (c < a and d < b and a < d) cout << d - a << endl;
    if (a < c and d < b) cout << d - c << endl;
    if (c < a and b < d) cout << b - a << endl;
    if (d <= a and c < b) cout << 0 << endl;
    if (a == c and d < b) cout << d - c << endl;
    if (a == c and b < d) cout << b - a << endl;
    if (b == d and a < c) cout << d - c << endl;
    if (b == d and c < a) cout << b - a << endl;
    if( a == c and b == d) cout << b - a << endl;

    return 0;
}