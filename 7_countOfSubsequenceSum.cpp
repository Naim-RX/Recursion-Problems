#include <bits/stdc++.h>
using namespace std;

int solve2(int idx,int s,int sum,int arr[],int n){
    if(idx == n){
        if(s==sum){

            return 1;
        }
        return 0;
    }
    //take
    s+= arr[idx];
    int l = solve2(idx+1,s,sum,arr, n);
    // not take
    s-= arr[idx];
    int r = solve2(idx+1,s,sum,arr, n);
    return l+r;
}
int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    cout << solve2(0,0,sum,arr,n);
}



