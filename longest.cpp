
#include <stdio.h>
#include <math.h>

struct Pt{
    int x,y;
};


float dist(const Pt& a, const Pt& b){
    float x = (a.x - b.x);
    float y = (a.y - b.y);
    return x*x + y*y;
}

int main(){
    int n;
    scanf("%d", &n);

    Pt* pt = new Pt[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &pt[i].x, &pt[i].y);
    }

    float m = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            float d = dist(pt[i], pt[j]);
            if(d > m)m = d;
        }
    }
    printf("%f", sqrt(m));
    return 0;
}
