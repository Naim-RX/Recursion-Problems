#include <bits/stdc++.h>
using namespace std;

void sum(int n,int s){
    if(n<1){
        cout << s;
        return;
    }
    sum(n-1,s+n);
}

int main(){
    int n = 5;
    sum(n,0);
}
