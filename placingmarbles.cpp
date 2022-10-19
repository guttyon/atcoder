#include <stdio.h>

int main(int argn, char** argv){
    
    int d;
    scanf("%d", &d);

    int n = 0;
    if(d & 1)n++;
    if((d>>1) & 1)n++;
    if((d>>2) & 1)n++;

    printf("%d", n);
    return 0;
}
