// #include<bits/stdc++.h>
// using namespace std;

// void bubbleSort(vector<int> &v) {
//     int n = v.size();

//     for(int i=0; i<n-1; i++) {
//         for(int j=0; j<n-i-1; j++) {
//             if(v[j]>v[j+1]) {
//                 swap(v[j],v[j+1]);
//             }
//         }
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

//     bubbleSort(v);

//     for(int i=0; i<n; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// input:
// 5
// 20 50 40 10 30

// output:
// 10 20 30 40 50 
// ............................................................................................
// // Optimizing Bubble Sort

// #include<bits/stdc++.h>
// using namespace std;

// void bubbleSort(vector<int> &v) {
//     int n = v.size();

//     for(int i=0; i<n-1; i++) {
//         bool flag = false;
//         for(int j=0; j<n-i-1; j++) {
//             if(v[j]>v[j+1]) {
//                 flag = true;
//                 swap(v[j],v[j+1]);
//             }
//         }
//         if(!flag) break;
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

//     bubbleSort(v);

//     for(int i=0; i<n; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// input:
// 5
// 20 50 40 10 30

// output:
// 10 20 30 40 50 