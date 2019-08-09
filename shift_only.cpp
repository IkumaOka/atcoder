#include <iostream>
using namespace std;

int main()
{   
    int num, iter;
    cin >> num;
    int* a = new int[num];
    for(int i = 0; i < num; i++){
        cin >> a[i];
    }
    iter = 0;
    int n;
    while (true){
        for(int i = 0; i < num; i++){
            if (a[i] % 2 == 0){
                a[i] = a[i] / 2;
            }
            else{
                delete [] a;
                cout << iter << endl;
                return 0;
            }
        }
        iter += 1;
    }
    return 0;
}