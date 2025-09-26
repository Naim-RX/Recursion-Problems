#include <bits/stdc++.h>
using namespace std;

void solve(int l,int r,int arr[5]){
    if(l >= r) return;
    swap(arr[l],arr[r]);
    solve(l+1,r-1,arr);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    solve(0,4,arr);
    for(int i=0;i<5;i++){
        cout << arr[i] << endl;
    }
}
