#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(int argn, char** argv){
    char* s = new char[100000];
    //cin >> s;
    scanf("%s", s);
    int n = strlen(s);

    char* e = s + n;
    int ok = 0;
    while(1){
        if(e < s)break;
        if(e == s){
            ok = 1;
            break;
        }
        *e = 0;
        if(e-2>=s && strcmp(e-2, "er") == 0){
            if(s > e-2-1)break;
            if(e-6>=s && strcmp(e-6, "eraser") == 0){
                e -= 6;
                //*e = 0;
            }else if(e-7>=s && strcmp(e-7, "dreamer") == 0){
                e -= 7;
                //*e = 0;
            }else{
                break;
            }
        }else if(e-5>=s && (strcmp(e-5, "dream") == 0 || strcmp(e-5, "erase") == 0)){
            e -= 5;
            //*e = 0;
        }else{
            break;
        }
    }
    if(ok)cout << "YES";
    else cout << "NO";
    return 0;
}
