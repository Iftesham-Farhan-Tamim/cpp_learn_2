// // Given an nxm matrix 'a', return all element of the matrix in spiral order.

// #include<bits/stdc++.h>
// using namespace std;

// void spiralOrder(vector<vector<int> > & matrix) {
//     int left = 0;
//     int right = matrix[0].size()-1;
//     int top=0;
//     int bottom=matrix.size()-1;

//     int direction=0;

//     while(left<=right && top<=bottom) {
//         //left-> right
//         if(direction==0) {
//             for(int col=left; col<=right; col++) {
//                 cout << matrix[top][col] << " ";
//             }
//             top++;
//         }
//         //top-> bottom
//         else if(direction==1) {
//             for(int row=top; row<=bottom; row++) {
//                 cout << matrix[row][right] << " ";
//             }
//             right--;
//         }
//         //right-> left
//         else if(direction==2) {
//             for(int col=right; col>=left; col--) {
//                 cout << matrix[bottom][col] << " ";
//             }
//             bottom--;
//         }
//         //bottom-> top
//         else{
//             for(int row=bottom; row>=top; row--) {
//                 cout << matrix[row][left] << " ";
//             }
//             left++;
//         }
//         direction = (direction+1)%4;
//     }
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

//     spiralOrder(matrix);
// }

// input:
// 3 3
// 1 2 3 4 5 6 7 8 9

// output:
// 1 2 3 6 9 8 7 4 5
// ............................................................................................
// // Given a positive integer n, generate an n*n matrix filled with elements 
// // from 1 to n2 in spiral order.

#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > creatingSpiralMatrix(int n) {
    vector<vector<int> > matrix(n, vector<int> (n));

    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;

    int direction=0; 
    int value=1;

    while(left<=right && top<=bottom) {
        if(direction==0) {
            for(int i=left; i<=right; i++) {
                matrix[top][i]=value++;
            }
            top++;
        }
        else if(direction==1) {
            for(int j=top; j<=bottom; j++) {
                matrix[j][right]=value++;
            }
            right--;
        }
        else if(direction==2) {
            for(int i=right; i>=left; i--) {
                matrix[bottom][i]=value++;
            }
            bottom--;
        }
        else {
            for(int j=bottom; j>=top; j--) {
                matrix[j][left]=value++;
            }
            bottom--;
        }
        direction=(direction+1)%4;
    }

    return matrix;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int> > matrix(n, vector<int> (n));

    matrix = creatingSpiralMatrix(n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// input:
// 3

// output:
// 1 2 3 
// 8 0 4 
// 7 6 5 