#include <stdio.h>
#include <utility>
#include <string.h>

char s[2 * 100000 + 1];
char t[2 * 100000 + 1];
char s2[2 * 100000 + 1];
char t2[2 * 100000 + 1];
int sc[2 * 100000 + 1];
int tc[2 * 100000 + 1];

void build(char* ss, char* tgt, int* c, int* cn){
    int n = strlen(ss);

    int j = 0;
    int jj = 0;
    int star=0;
    char prev = ss[0];
    tgt[j++] = ss[0];
    
    for(int i = 1; i < n; i++){
        if(prev == ss[i]){
            if(star==0){
                tgt[j++] = '+';
                star = 1;
            }
            c[jj]++;
        }else{
            if(star)jj++;
            star = 0;
            tgt[j++] = ss[i];
            prev = ss[i];
        }
    }
    if(star)jj++;
    tgt[j++] = 0;
    *cn = jj;
}

int allcmp(int* a, int* b, int n){
    for(int i = 0; i < n;i++){
        if(a[i] > b[i]){
            return -1;
        }
    }
    return 0;
}
int main(){
    scanf("%s", s);
    scanf("%s", t);

    int sn, tn;
    build(s, s2, sc, &sn);
    build(t, t2, tc, &tn);

#if 0
    printf("%s, %d\n", s2, sn);
    for(int i = 0; i < sn; i++){
        printf("%d,",sc[i]);
    }
    printf("%s, %d\n", t2, tn);
#endif //0
    if(strcmp(s2, t2) == 0 && allcmp(sc, tc, sn) == 0){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}