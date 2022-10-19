#include <stdio.h>

int main(int argn, char** argv){
    int n, y;
    scanf("%d %d", &n, &y);

    y /= 1000;
    // 1, 5, 10
    const int m10 = y / 10;
    int a = y % 10;

    const int m5 = a / 5;
    int b = a % 5;
    
    const int m1 = b;

    //printf("%d %d %d\n", m10, m5, m1);
    //y -= m1;
    //n -= m1;
    for(int n10 = 0; n10 <= m10; n10++){
        for(int n5 = 0; n5 <= (m10 - n10) * 2 + m5; n5++){
            int n1 = y - n10 * 10 - n5 * 5;
            if(n1 >= 0 && n10 + n5 + n1 == n){
            //if(n10 + n5 == n && n10 * 10 + n5 * 5 == y){
                printf("%d %d %d", n10, n5, n1);
                return 0;
            }
        }
    }
    printf("-1 -1 -1");

    return 0;
}
