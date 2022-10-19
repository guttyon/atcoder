#include <stdio.h>
#include <assert.h>
#include <algorithm>
#include <utility>
typedef long long i64;

//static_assert(sizeof(int) == 8, "999888");

int main(int argn, char** argv){
    int N, L, T;
    scanf("%d %d %d", &N, &L, &T);
    int* x = new int[N];
    int* w = new int[N];
    for(int i = 0; i < N; i++){
        scanf("%d %d", x + i, w + i);
    }

    int* x2 = new int[N];
    int* x3 = new int[2*N];
    if(w[0]== 1){
        // Tまでの間にw[i] == 2のやつに何回ぶつかるかを数える。
        // 相対速度が2なので、L/2[s]で衝突する。
        int n=0;
        for(int i = 1; i < N; i++){
            if(w[i] == 1)continue;
            float t = (x[i] - x[0]) / 2.;
            if(T>=t){
                n++;
                n += (T-t)/(L/2);
            }
        }
        int id = n % N;
        int x_id = (x[0] + T) % L;
        for(int i = 0; i < N; i++){
            int s = w[i] == 1 ? 1 : -1;
            x2[i] = (x[i] + s * T + (i64)T * L) % L; // +TLは、()内をプラスにするため。%Lにより除去される。
            assert(x2[i] < L);
        }
        std::sort(x2, x2 + N);
        std::copy(x2, x2 + N, x3);
        std::copy(x2, x2 + N, x3 + N);

        int iii;
        for(iii = 0; iii < N; iii++){
            if(x2[iii] == x_id)break;
        }
        int zero;
        if(iii >= id){
            zero = iii - id;
        }else{
            zero = N - (id - iii);
        }
        //printf("zero %d\n", zero);
        for(int i = 0; i < N; i++){
            printf("%d\n", x3[zero + i]);
        }
    }else{
        // Tまでの間にw[i] == 2のやつに何回ぶつかるかを数える。
        // 相対速度が2なので、L/2[s]で衝突する。
        int n=0;
        for(int i = 1; i < N; i++){
            if(w[i] == 2)continue;
            float t = ((L - x[i]) + x[0]) / 2.;
            if(T>=t){
                n++;
                n += (T-t)/(L/2);
            }
        }
        int id = ((i64)N*N - n) % N; // N*Nは()内がマイナスにならないように。
        int x_id = (x[0] - T + (i64)T * L) % L;
        for(int i = 0; i < N; i++){
            int s = w[i] == 1 ? 1 : -1;
            x2[i] = (x[i] + s * T + (i64)T * L) % L; // +TLは、()内をプラスにするため。%Lにより除去される。
            assert(x2[i] < L);
        }
        std::sort(x2, x2 + N);
        std::copy(x2, x2 + N, x3);
        std::copy(x2, x2 + N, x3 + N);

        int iii;
        for(iii = 0; iii < N; iii++){
            if(x2[iii] == x_id)break;
        }
        int zero;
        if(iii >= id){
            zero = iii - id;
        }else{
            zero = N - (id - iii);
        }
        //printf("zero %d\n", zero);
        for(int i = 0; i < N; i++){
            printf("%d\n", x3[zero + i]);
        }
    }
    return 0;
}
