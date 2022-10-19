#include <stdio.h>

int main(int argn, char** argv){
    int a, b;
    scanf("%d %d", &a, &b);
    long long c = a * b;
    if(c % 2){
        printf("Odd");
    }else{
        printf("Even");
    }
    return 0;
}
