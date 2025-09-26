#include <bits/stdc++.h>
using namespace std;

void solve(int idx,vector<int>&ds,int arr[],int n){
    if(idx == n){
        for(auto it:ds){
            cout << it << ' ';
        }
        cout << endl;
        return;
    }
    //take
    ds.push_back(arr[idx]);
    solve(idx+1,ds,arr, n);
    // not take
    ds.pop_back();
    solve(idx+1,ds,arr, n);
}

int main() {
    int arr[] = {1,2,3};
    int n = 3;
    vector<int>ds;
    solve(0,ds,arr,n);
}


