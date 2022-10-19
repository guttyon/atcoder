#include <stdio.h>

int main(int argn, char** argv){
    int k, s;
    scanf("%d %d", &k, &s);

    //int x, y;
    int n = 0;
    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int z = s - x - y;
            if(z <= k && z >= 0){
                n++;
            }
        }
    }
    printf("%d", n);
    return 0;
}
