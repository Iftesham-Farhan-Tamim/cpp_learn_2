// // Given two numbers x and y. Find the greatest common divisor of x and y using recursion.

// #include<bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     if(b > a) return gcd(b, a);
//     if(b == 0) return a; // base case
//     return gcd(b, a%b);
// }

// int main() {
//     int x = gcd(40, 48);
//     cout << x << endl;
// }

// output:
// 8
// ............................................................................................
// // Given a number n. Print if it is an armstrong number or not.
// // An armstrong number is a number if the sum of every digit in that number
// // raised to the power of total digits in that number is equal to the number.

// #include<bits/stdc++.h>
// using namespace std;

// int pow_recursive(int p, int q) {
//     // base case
//     if(q == 0) return 1;
//     if(q % 2 == 0) {
//         // if q is even
//         int result = pow_recursive(p, q/2);
//         return result * result;
//     } else {
//         // if q is odd
//         int result = pow_recursive(p, (q-1) / 2);
//         return p  * result * result;
//     }
// }

// int f(int n, int d) {
//     // base case
//     if(n == 0) return 0;
//     return pow_recursive(n % 10, d) + f(n/10, d);
// }

// int main() {
//     int n;
//     cin >> n;

//     int no_of_digits = 0;
//     int temp = n;
//     while(temp > 0) {
//         temp = temp / 10;
//         no_of_digits++;
//     }

//     int result = f(n, no_of_digits);
//     if(result == n) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }
// }


// input:
// 153
// output:
// YES

// input:
// 453
// output:
// NO
// ............................................................................................
// // There are N stones, numbered 1,2,...,N. For each i (1<=i<=N), the height of stone i is 
// // hi. There is a frog who is initially on stone 1. He will repeat the following action some
// // number of times to reach stone N: 

// // if the frog is currently on stone i, jump to stone i+1 or stone i+2. Here, a cost of |hi-hj|
// // is incurred, where j is the stone to land on.

// // Find the minimum possible total cost incurred before the frog reaches stone N.

// // input n = 4;
// // arr[] = 10 30 40 20
// // output = 30

// #include<bits/stdc++.h>
// using namespace std;

// int f(int *h, int n, int i) {
//     // base case
//     if(i == n-1) return 0;
//     if(i == n-2) return f(h, n, i+1) + abs(h[i] - h[i+1]);

//     return min(f(h, n, i+1) + abs(h[i] - h[i+1]), f(h, n, i+2) + abs(h[i] - h[i+2]));
// }

// int main() {
//     int arr[] = {10, 30, 40, 20};
//     int n = 4;
//     cout << f(arr, n, 0);
// }

// output: 
// 30