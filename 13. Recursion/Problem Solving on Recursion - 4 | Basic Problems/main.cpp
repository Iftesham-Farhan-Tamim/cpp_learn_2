// // Given a number n, Find the increasing sequence from 1 to n without using any loop.

// #include<bits/stdc++.h>
// using namespace std;

// void f(int n) {
//     // base case
//     if(n < 1) return;
//     // go and print first n-1 natural numbers -> assumption
//     f(n-1);
//     cout << n << " ";
// }

// int main() {
//     f(20);
// }

// output:
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// ............................................................................................
// // Given a number num and a value k. Print k multiples of num.

// #include<bits/stdc++.h>
// using namespace std;

// void f(int num, int k) {
//     // base case
//     if(k == 0) return;
//     // assumption
//     f(num, k-1); // the function correctly prints the first k-1 multiples
//     // self work
//     cout << (num * k) << " ";
// }

// int main() {
//     f(3, 3);
// }

// output:
// 3 6 9
// ............................................................................................
// // Given a number n. Find the sum of natural numbers till n but with alternate signs.

// #include<bits/stdc++.h>
// using namespace std;

// int f(int n) {
//     // base case
//     if(n == 0) return 0;
//     // assumption
//     return f(n-1) + ((n % 2 == 0) ? (-n) : (n));
// }

// int main() {
//     cout << f(5) << endl;
//     cout << f(10) << endl;
// }

// output:
// 3
// -5