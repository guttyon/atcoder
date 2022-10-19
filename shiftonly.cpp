#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(int argn, char** argv){
    int N;
    cin >> N;
    long long* A = new long long[N];
    for(int i = 0; i < N; i++)cin >> A[i];

    int nn = log2(1000000000);
    int mj = nn;
    for(int i = 0; i < N; i++){
        int j = 0;
        for(j = 0; j < nn; j++){
            if(A[i] & 1)break;
            A[i] >>= 1;
        }
        if(mj > j)mj = j;
    }
    printf("%d", mj);

    return 0;
}
