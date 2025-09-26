#include <bits/stdc++.h>
using namespace std;

bool solve(string s, int i, int n) {
    if (i >= n / 2) return true;               // Base case: checked all pairs
    if (s[i] != s[n - i - 1]) return false;    // Mismatch found
    return solve(s, i + 1, n);                 // Return recursive result
}

int main() {
    string s = "madam";
    int n = s.size();
    cout << (solve(s, 0, n) ? "YES" : "NO");
}

