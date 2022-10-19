#include <stdio.h>

int main(int argn, char** argv){
    
    int a, b, c;
    char s[100];
    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", s);
    printf("%d %s", a+b+c, s);
    return 0;
}
