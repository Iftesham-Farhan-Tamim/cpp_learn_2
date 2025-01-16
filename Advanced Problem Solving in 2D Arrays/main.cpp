// // vector<vector<datatype> > vector_name


// // Given a boolean 2D array, where each row is sorted. Find the
// // row with the maximum number of 1s.

#include <bits/stdc++.h>
using namespace std;

int maximumOnesRow(vector<vector<int> > &V) {
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int columns = V[0].size();

    for(int i=0; i<V.size(); i++) {
        for(int j=0; j<V[i].size(); j++) {
            if(V[i][j] == 1) {
                int numberOfOnes = columns - j;
                if(numberOfOnes > maxOnes) {
                    maxOnes = numberOfOnes;
                    maxOnesRow = i; 
                }
                return 0;
            }
        }
    }

    return maxOnesRow;
}


// V[0].size(): Returns the number of columns (since V[0] is the first row).
// V.size(): Returns the number of rows (since V is a 2D vector, this gives the number of rows).


int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int> > vec(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }

    int res = maximumOnesRow(vec);
    cout << res << endl;
}

// input: 
// 3 4
// 0 1 1 1 0 0 0 1 0 0 1 1

// output:
// 0


// input:
// 3 4
// 0 0 0 0 0 0 0 1 0 1 1 1

// output:
// 2
// ............................................................................................
// // Alternate way(to find: row with left most one)

// #include<bits/stdc++.h>
// using namespace std;

// int leftMostOneRow(vector<vector<int> > &V) {
//     int leftMostOne = -1;
//     int maxOnesRow = -1;
//     int j = V[0].size() - 1;

//     // finding leftmost one in 0th row
//     while(j>=0 && V[0][j]==1) {
//         leftMostOne = j;
//         maxOnesRow = 0;
//         j--;
//     }

//     // check in the rest of the rows if we can find a one left to the leftMostOne
//     for(int i=1; i<V.size(); i++) {
//         while(j>=0 && V[i][j]==1) {
//             leftMostOne = j;
//             j--;
//             maxOnesRow = i;
//         }
//     }

//     return maxOnesRow;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<vector<int> > vec(n, vector<int>(m));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> vec[i][j];
//         }
//     }

//     int res = leftMostOneRow(vec);
//     cout << res << endl;
// }

// input: 
// 3 4
// 0 1 1 1 0 0 0 1 0 0 1 1

// output:
// 0


// input:
// 3 4
// 0 0 0 0 0 0 0 1 0 1 1 1

// output:
// 2
// ............................................................................................
// // Given a square matrix, turn it by 90 degrees in a clockwise 
// // direction without using any extra space

// // 1 2 3
// // 4 5 6
// // 7 8 9

// #include<bits/stdc++.h>
// using namespace std;

// void rotateArray(vector<vector<int> > &Vec) {

//     int n = Vec.size();

//     //transpose
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<i; j++) {
//             swap(Vec[i][j],Vec[j][i]);
//         }
//     }

//     //reverse every row
//     for(int i=0; i<n; i++) {
//         reverse(Vec[i].begin(),Vec[i].end());
//     }

//     return;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<vector<int> > Vec(n, vector<int> (n));

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             cin >> Vec[i][j];
//         }
//     }

//     rotateArray(Vec);
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             cout << Vec[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// input:
// 3
// 1 2 3 4 5 6 7 8 9

// output:
// 7 4 1 
// 8 5 2 
// 9 6 3 