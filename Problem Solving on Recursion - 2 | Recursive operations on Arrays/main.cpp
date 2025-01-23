// // Given an array, print all the elements of the array.

// #include<bits/stdc++.h>
// using namespace std;

// void f(int *arr, int idx, int n) {
//     // base case
//     if(idx == n) return;
//     // self work
//     cout << arr[idx] << " ";
//     // assume that
//     f(arr, idx+1, n);
// }

// int main() {
//     int n = 5;
//     int arr[] = {6, 1, 9, 3, 4};
//     f(arr, 0, n);
// }

// output:
// 6 1 9 3 4
// ............................................................................................
// // For a given array, find the sum of values of an array.

// #include<bits/stdc++.h>
// using namespace std;

// int f(int *arr, int idx, int n) {
//     // base case
//     if(idx == n-1) {
//         // we only have one element left, so it is the maximum
//         return arr[idx];
//     }
//     return max(arr[idx], f(arr, idx + 1, n));
// }

// int main() {
//     int arr[] = {3, 10, 3, 2, 5};
//     int n = 5;
//     cout << f(arr, 0, n);
// }

// output:
// 10
// ............................................................................................
// // For a given array, find the sum of values of an array

// #include<bits/stdc++.h>
// using namespace std;

// int f(int *arr, int idx, int n) {
//     // base case
//     if(idx == n-1) {
//         // idx is at the last index so there is only one element under consideration
//         return arr[idx];
//     }
//     return arr[idx]  + f(arr, idx + 1, n);
// }

// int main() {
//     int arr[] = {2, 3, 5, 20, 1};
//     int n = 5;
//     cout << f(arr, 0, n) << " ";
// }

// output:
// 31