#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argn, char** argv){
    int A, B, C, X; // 500, 100, 50
    cin >> A;
    cin >> B >> C >> X;
    //cout << A << B << C << X;

    int mA = min(A, X / 500);
    int mB = min(B, X / 100);
    int mC = min(C, X / 50);

    int n = 0;
    for(int nA = 0; nA <= mA; nA++){
        for(int nB = 0; nB <= mB; nB++){
            int r = X - nA * 500 - nB * 100;
            if(r >= 0 && r / 50 <= C)n++;
        }
    }
    printf("%d", n);

    return 0;
}
