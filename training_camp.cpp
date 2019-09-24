#include <iostream>
#include <cmath>
using namespace std;

int main(){   
    int N;
    double result;
    cin >> N;
    double power = 1;
    for (int i = 1; i <= N; i++){
        power *= i;
    }
    result = power % (pow(10, 2) + 7);

    return 0;
}