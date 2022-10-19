#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argn, char** argv){
    int N, A, B;
    cin >> N >> A >> B;

    int nnn = 0;
    for(int i = 1; i <= N; i++){
        int a = i;
        int n4 = (a / 10000); a -= n4 * 10000;
        int n3 = (a / 1000);  a -= n3 * 1000;
        int n2 = (a / 100);   a -= n2 * 100;
        int n1 = (a / 10);    a -= n1 * 10;
        int n0 = a;
        //cout << n4 << n3 << n2 << n1 << n0 << endl;
        int s = n4 + n3 + n2 + n1 + n0;
        if(s >= A && s <= B)nnn+=i;
    }
    cout << nnn;
    return 0;
}
