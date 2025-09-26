#include <bits/stdc++.h>
using namespace std;

int rec(int n){
    if(n==0) return n;
    cout << n << ' ';
    rec(n-1);
    cout << n << ' ';
}

int main(){
    int n  = 5;
    rec(n);
    cout << endl;
}
