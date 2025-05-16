// // --> Recursion (Naive / Brute-force approach)

// #include<bits/stdc++.h>
// using namespace std;

// #define pii pair<int,int>
// #define vii vector<pii>
// #define rep(i,a,b) for(int i=a; i<b; i++)
// #define ff first
// #define ss second
// #define setBits(x) builtin_popcount(x)

// const int N = 1e3+2, MOD = 1e9+7;

// int fib(int n) {

//     if(n == 0 || n == 1) return n;

//     return fib(n-1) + fib(n-2);
// }

// signed main() {
//     int n;
//     cin >> n;

//     cout << fib(n) << endl;
// }

// input:
// 8

// output:
// 21
// ............................................................................................
// // --> Memoization (Top-Down Dynamic Programming)

// #include<bits/stdc++.h>
// using namespace std;

// #define pii pair<int,int>
// #define vii vector<pii>
// #define rep(i,a,b) for(int i=a; i<b; i++)
// #define ff first
// #define ss second
// #define setBits(x) builtin_popcount(x)
// #define vi vector<int>

// const int N = 1e5+2, MOD = 1e9+7;

// int dp[N];

// int fib(int n) {

//     if(n == 0 || n == 1) return n;

//     if(dp[n] != -1) return dp[n];

//     dp[n] = fib(n-1) + fib(n-2);

//     return dp[n];
// }

// signed main() {
//     int n;
//     cin >> n;

//     rep(i, 0, N) {
//         dp[i] = -1;
//     }

//     cout << fib(n) << endl;
// }

// input:
// 8

// output:
// 21
// ............................................................................................
// // -->  Tabulation (Botttom-Up Dynamic Programming) 

// #include<bits/stdc++.h>
// using namespace std;

// #define pii pair<int,int>
// #define vii vector<pii>
// #define rep(i,a,b) for(int i=a; i<b; i++)
// #define ff first
// #define ss second
// #define setBits(x) builtin_popcount(x)
// #define vi vector<int>

// const int N = 1e5+2, MOD = 1e9+7;

// int dp[N];

// signed main() {
//     int n;
//     cin >> n;

//     vi dp(n+1);

//     dp[0] = 0;
//     dp[1] = 1;

//     for(int i=2; i<=n; i++) {
//         dp[i] = dp[i-1] + dp[i-2];
//     }

//     cout << dp[n] << endl;
// }

// input:
// 8

// output:
// 21
// ............................................................................................
// // --> Space-Optimized Tabulation Version (Only O(1) Space)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int prev2 = 0, prev1 = 1, curr;

    for (int i = 2; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    cout << prev1 << endl;
}

// input:
// 8

// output:
// 21
// ............................................................................................
// ............................................................................................
// ............................................................................................
// ............................................................................................