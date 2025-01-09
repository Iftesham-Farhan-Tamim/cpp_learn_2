// // Taking 2D array as input

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,m;
//     cin >> n >> m;

//     int array[n][m];

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cin >> array[i][j];
//         }
//     }

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cout << array[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// input:
// 3 3

// 1 2 3
// 4 5 6
// 7 8 9

// output:
// 1 2 3 
// 4 5 6 
// 7 8 9 
// ............................................................................................
// // Write a program to display multiplication of two matrices entered by the user

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int r1,c1;
//     cin >> r1 >> c1;

//     int A[r1][c1];
//     for(int i=0; i<r1; i++) {
//         for(int j=0; j<c1; j++) {
//             cin >> A[i][j];
//         }
//     }

//     int r2, c2;
//     cin >> r2 >> c2;

//     int B[r2][c2];
//     for(int i=0; i<r2; i++) {
//         for(int j=0; j<c2; j++) {
//             cin >> B[i][j];
//         }
//     }

//     if(c1!=r2) {
//         cout << "Matrix multiplication not possible for this input" << endl;
//     }

//     int C[r1][c2];

//     for(int i=0; i<r1; i++) {
//         for(int j=0; j<c2; j++) {
//             C[i][j]=0;
//             for(int k=0; k<r2; k++) {  // r2==c1
//                 C[i][j]+=A[i][k]*B[k][j];
//             }
//         }
//     }

//     for(int i=0; i<r1; i++) {
//         for(int j=0; j<c2; j++) {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// input:
// 2 2
// 1 2 3 4
// 2 2
// 5 6 7 8

// output:
// 19 22 
// 43 50 

// input:
// 2 3
// 1 2 3 4 5 6
// 3 2
// 1 2 3 4 5 6

// output:
// 22 28 
// 49 64 
// ............................................................................................
// // write a program to display transpose of matrix entered by the user.

// #include<iostream>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;

//     int array[n][m];
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cin >> array[i][j];
//         }
//     }

//     int transpose[m][n];
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             transpose[i][j]=array[j][i];
//         }
//     }

//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// input:
// 2 3
// 1 2 3 4 5 6

// output:
// 1 4 
// 2 5 
// 3 6 