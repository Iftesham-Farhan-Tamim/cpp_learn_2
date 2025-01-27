// // Given a matrix 'a' of dimension n * m and 2 coordinates(l1, r1) and (l2, r2). 
// // Return the sum of the rectangle from (l1, r1) to (l2, r2).

// #include<bits/stdc++.h>
// using namespace std;

// int rectangleSum(vector<vector<int> > &matrix, int l1, int r1, int l2, int r2) {
//     int sum=0;
//     for(int i=l1; i<=l2; i++) {
//         for(int j=r1; j<=r2; j++) {
//             sum+=matrix[i][j];
//         }
//     }
//     return sum;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int> > matrix(n, vector<int> (m));

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int l1, r1, l2, r2;
//     cin >> l1 >> r1 >> l2 >> r2;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int sum = rectangleSum(matrix, l1, r1, l2, r2);
//     cout << "sum: " << sum << endl;
// }

// input:
// 3 4
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 1
// 2 2

// output:
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// sum: 34
// ............................................................................................
// // Method-2: Pre-Calculating the horizontal sum for each row in the matrix

// #include<bits/stdc++.h>
// using namespace std;

// int rectangleSum(vector<vector<int> > &matrix, int l1, int r1, int l2, int r2) {
//     int sum=0;

//     //prefix sum array row-wise
//     for(int i=0; i<matrix.size(); i++) {
//         for(int j=1; j<matrix[0].size(); j++) {
//             matrix[i][j]+=matrix[i][j-1];
//         }
//     }

//     for(int i=l1; i<=l2; i++) {
//         if(r1!=0) {
//             sum+=(matrix[i][r2]-matrix[i][r1-1]);
//         }
//         else {
//             //matrix[i][r1-1]=0;
//             sum+=matrix[i][r2];
//         }
//     }
//     return sum;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int> > matrix(n, vector<int> (m));

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int l1, r1, l2, r2;
//     cin >> l1 >> r1 >> l2 >> r2;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int sum = rectangleSum(matrix, l1, r1, l2, r2);
//     cout << "sum: " << sum << endl;
// }

// input:
// 3 4
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 1
// 2 2

// output:
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// sum: 34
// ............................................................................................
// // Method-3: Prefix sum over columns and Rows Both

// #include<bits/stdc++.h>
// using namespace std;

// int rectangleSum(vector<vector<int> > &matrix, int l1, int r1, int l2, int r2) {
//     int sum=0;

//     // prefix sum array row-wise
//     for(int i=0; i<matrix.size(); i++) {
//         for(int j=1; j<matrix[0].size(); j++) {
//             matrix[i][j]+=matrix[i][j-1];
//         }
//     }

//     // prefix sum array column-wise
//     for(int i=1; i<matrix.size(); i++) {
//         for(int j=0; j<matrix[0].size(); j++) {
//             matrix[i][j]+=matrix[i-1][j];
//         }
//     }

//     //printing prefix sum 2d array
//     for(int i=0; i<matrix.size(); i++) {
//         for(int j=0; j<matrix[0].size(); j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int top_sum=0; 
//     int left_sum=0; 
//     int topleft_sum = 0;
//     if(l1!=0) top_sum = matrix[l1-1][r2];
//     if(r1!=0) left_sum = matrix[l2][r1-1];
//     if(l1!=0 && r1!=0) topleft_sum = matrix[l1-1][r1-1];

//     sum = matrix[l2][r2] - top_sum - left_sum + topleft_sum;
//     return sum;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int> > matrix(n, vector<int> (m));

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cin >> matrix[i][j];
//         }
//     }

//     int l1, r1, l2, r2;
//     cin >> l1 >> r1 >> l2 >> r2;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<m; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int sum = rectangleSum(matrix, l1, r1, l2, r2);
//     cout << "sum: " << sum << endl;
// }

// input:
// 3 4
// 1 2 3 4 5 6 7 8 9 10 11 12
// 1 1
// 2 2

// input:
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 1 3 6 10 
// 6 14 24 36 
// 15 33 54 78 
// sum: 34