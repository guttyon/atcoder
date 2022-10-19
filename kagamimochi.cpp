#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argn, char** argv){
    int N;
    cin >> N;
    int* d = new int[N];
    for(int i = 0; i < N; i++)cin >> d[i];
    sort(d, d + N);
    auto it = std::unique(d, d + N);
    int nnn = it - d;
    cout << nnn;

    return 0;
}
