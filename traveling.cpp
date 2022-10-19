#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct Pt{int x,y;};

int manhattan(Pt& a, Pt& b){
    return abs(a.x - b.x) + abs(a.y - b.y);
}

int main(int argn, char** argv){
    int N;
    cin >> N;
    N+=1;
    int* t = new int[N];
    Pt* pt = new Pt[N];
    pt[0].x = 0;
    pt[0].y = 0;
    t[0] = 0;
    for(int i = 1; i < N; i++){
        cin >> t[i] >> pt[i].x >> pt[i].y;
    }

    int ok = 1;
    for(int i = 1; i < N; i++){
        int d = manhattan(pt[i-1], pt[i]);
        int dt = t[i] - t[i-1];
        if(dt < d){ok = 0; break;}
        if((dt - d) % 2 != 0){ok = 0; break;}
    }
    if(ok)printf("Yes");
    else printf("No");
    return 0;
}
