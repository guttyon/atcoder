#include <stdio.h>

int atoi(char* s){
    int n;
    scanf(s, "%d", &n);
    return n;
}

int main(int argn, char** argv){
    /*
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int x = atoi(argv[3]);
    int t = atoi(argv[4]);
    int d = atoi(argv[5]);
    */

   int n, m, x, t, d;

    scanf("%d %d %d %d %d", &n, &m, &x, &t, &d);

    int ans;
    int a = t - x * d;
    if(x < m){
        ans = t;
    }else if(x > m){
        ans = a + m * d;
        //ans = m * d;
    }else{
        // x == m
        ans = a + x * d;
    }
    printf("%d", ans);
    return 0;
}
