// #include<bits/stdc++.h>
// using namespace std;

// void selectionSort(vector<int> &v) {
//     int n = v.size();
//     for(int i=0; i<n-1; i++) {
//         // finding min element in unsorted array
//         int min_index = i;
//         for(int j=i+1; j<n; j++) {
//             if(v[j] < v[min_index]) {
//                 min_index = j;
//             }
//         }

//         // placing min element at beginning
//         if(i!=min_index) {
//             swap(v[i], v[min_index]);
//         }
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) {
//         cin >> v[i];
//     }

//     selectionSort(v);

//     for(int i=0; i<n; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// input:
// 5
// 5 8 4 9 2

// output:
// 2 4 5 8 9 