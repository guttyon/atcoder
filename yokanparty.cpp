#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(int argn, char** argv){
    int N, L, K;
    cin >> N >> L >> K;
    ll* A = new ll[N];
    for(int i = 0; i < N; i++)cin >> A[i];

    ll* tbl = new ll[K * N];

    // 各マスはそれまでの最小のピースの値。
    for(int n = 0; n < N; n++)tbl[n] = 0; // k=0;
    for(int k = 0; k < K; k++)tbl[N * k + 0] = 0; // n=0;

    for(int k = 1; k < K; k++){
        for(int n = 1; n < N; n++){
        }
    }




    ll s = L / (K + 1);
    int pj = 0;
    for(int i = 0; i < K; i++){
        int s0 = 0;
        for(int j = pj + 1; j < N; j++){
            int s0 = A[j] - A[pj];
            if(s0 >= s){

            }
        }
    }

    return 0;
}
