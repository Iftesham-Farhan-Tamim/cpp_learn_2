// #include<bits/stdc++.h>
// using namespace std;

// void insertionSort(vector<int> &v) {
//     int n = v.size();

//     for(int i=1; i<n; i++) {
//         int current_ele = v[i];

//         // find the correct position for our current element
//         int j=i-1;
//         while(j>=0 && v[j] > current_ele) {
//             v[j+1] = v[j];
//             j--;
//         }

//         // insertion current element
//         v[j+1] = current_ele;
//     }
//     return;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> v(n);

//     for(int i=0; i<n; i++) {
//         cin >> v[i];
//     }

//     insertionSort(v);

//     for(int i=0; i<n; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// input:
// 5
// 11 8 15 9 4

// output:
// 4 8 9 11 15 