#include <bits/stdc++.h>
using namespace std;

void solve(int idx,vector<int>&ds,int s,int sum,int arr[],int n){
    if(idx == n){
        if(s==sum){
            for(auto it:ds){
            cout << it << ' ';
            }
            cout << endl;
        }
        return;
    }
    //take
    ds.push_back(arr[idx]);
    s+= arr[idx];
    solve(idx+1,ds,s,sum,arr, n);
    // not take
    ds.pop_back();
    s-= arr[idx];
    solve(idx+1,ds,s,sum,arr, n);
}

//Way 2
bool solve2(int idx,vector<int>&ds,int s,int sum,int arr[],int n){
    if(idx == n){
        if(s==sum){
            for(auto it:ds){
            cout << it << ' ';
            }
            cout << endl;

            return true;
        }
        return false;
    }
    //take
    ds.push_back(arr[idx]);
    s+= arr[idx];
    if(solve2(idx+1,ds,s,sum,arr, n) == true){
        return true;
    };
    // not take
    ds.pop_back();
    s-= arr[idx];
    if(solve2(idx+1,ds,s,sum,arr, n)== true) return true;
    return false;
}
int main() {
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int>ds;
    solve(0,ds,0,sum,arr,n);
    solve2(0,ds,0,sum,arr,n);
}


