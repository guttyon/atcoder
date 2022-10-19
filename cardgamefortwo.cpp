#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argn, char** argv){
    int N;
    cin >> N;
    int* a = new int[N];
    for(int i = 0; i < N; i++)cin >> a[i];

    sort(a, a + N, [](auto i, auto ii){return i > ii;});
    //printf("%d, %d", a[0], a[1]);

    int x = 0;
    int y = 0;
    for(int i = 0; i < N; i++){
        if(i % 2 == 0)x += a[i];
        else y += a[i];
    }

    cout << x - y;
    return 0;
}
