#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N= 1e6+1;

int sum(int A[], int N)
{
    if (N <= 0) return 0;
    return sum(A, N - 1) + A[N - 1];
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    int t;cin >> t;
    int c = 0;
    while(t--){
        ++c;
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i];
        cout << "Case " << c << ": " <<sum(ar,n) << endl;
    }
}
