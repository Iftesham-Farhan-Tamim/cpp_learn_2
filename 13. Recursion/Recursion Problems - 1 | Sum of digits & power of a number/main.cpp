// // Given an integer, find out the sum of it's digits using recursion.

// #include <bits/stdc++.h>
// using namespace std;

// int f(int n) {
//     // base case
//     if(n <= 9 and n>= 0) return n;
//     return f(n/10) + (n%10);
// }

// int main() {
//     int result = f(653);
//     cout << result;
// }

// output:
// 14
// ............................................................................................
// // Given two numbers p & q, find the value p^q using a recursive function

// #include<bits/stdc++.h>
// using namespace std;

// int f(int p, int q) {
//     // base case
//     if(q == 0) return 1;
//     return p * f(p, q-1);
// }

// int main() {
//     int result = f(3, 4);
//     cout << result;
// }

// output:
// 81
// ............................................................................................
// // Alternate: optimized approach

// #include<bits/stdc++.h>
// using namespace std;

// int f(int p, int q) {
//     // base case
//     if(q == 0) return 1;
//     if(q % 2 == 0) {
//         // if q is a even
//         int result = f(p, q/2);
//         return result * result;
//     } else{
//         // if q is odd
//         int result = f(p, (q - 1) / 2);
//         return p * result * result;
//     }
// }

// int main() {
//     int res = f(2, 5);
//     cout << res;
// }

// output:
// 32