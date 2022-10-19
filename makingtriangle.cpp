#include <stdio.h>
//#include <utility>
#include <algorithm>

typedef long long i64;

int checktri(i64 a, i64 b, i64 c){
    i64 arr[3] = {a, b, c};
    //i64 arr2[3];
    //std::sort(arr, arr+3);
    if(arr[0] == arr[1] || arr[1] == arr[2])return -1;
    if(
        //arr[0] < arr[1] + arr[2] &&
        //arr[1] < arr[2] + arr[0] &&
        arr[2] < arr[0] + arr[1]
    ){
        //printf("[][] %lld %lld %lld\n", arr[0], arr[1], arr[2]);
        return 0;
    }
    return -1;
}


int main(int argn, char** argv){
    int n;
    scanf("%d", &n);

    long long* L = new long long[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &L[i]);
    }

    //i64* arr = new i64[n];
    std::sort(L, L + n);

    int nnn = 0;
    for(int i = 0; i < n; i++){
        //printf("[%d]:%lld, ", i, L[i]);
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if(checktri(L[i], L[j], L[k]) == 0){
                    //printf("[][] %d %d %d\n", i+1, j+1, k+1);
                    nnn++;
                }
            }
        }
    }
    printf("%d", nnn);
    return 0;
}
