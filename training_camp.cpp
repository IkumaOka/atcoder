#include <iostream>
#include <math.h>
using namespace std;

int main(){   
    int N;
    cin >> N;
    int64_t power = 1;
    for (int i = 1; i <= N; i++){
        power = fmod(i*power, (pow(10, 9) + 7));
    }
    cout << power << endl;
    return 0;
}