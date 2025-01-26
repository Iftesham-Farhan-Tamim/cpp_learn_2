// // Given an integer array arr, move all 0's to the end of it while maintaining
// // the relative order of the non-zero elements.

// // Note that you must do this in-place without making a copy of the array.

// #include<bits/stdc++.h>
// using namespace std;

// void swapZeroesToEnd(vector<int> &v) {
//     int n = v.size();
//     for(int i=n-1; i>=0; i--) {
//         int j=0;
//         bool flag = false;

//         while(j!=i) {
//             if(v[j] == 0 && v[j+1]!=0) {
//                 swap(v[j], v[j+1]);
//                 flag = true;
//             }
//             j++;
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

//     swapZeroesToEnd(v);

//     for(int i=0; i<n; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// input 1:
// 6
// 3 0 2 0 1 5

// output 1:
// 3 2 1 5 0 0 

// input 2:
// 5
// 0 5 0 3 42

// output 2:
// 5 3 42 0 0 
// ............................................................................................
// // Give an array of names of the fruites; you are supposed to sort it in
// // lexicographical order using the selection sort

// #include<bits/stdc++.h>
// using namespace std;

// void selectionSort(char fruit[][60], int n) {
//     for(int i=0; i<n-1; i++) {
//         // finding the min element
//         int min_index = i;
//         for(int j=i+1; j<n; j++) {
//             if(strcmp(fruit[min_index], fruit[j]) > 0) {
//                 min_index = j;
//             }
//         }

//         // place the min element at the beginning
//         if(i!=min_index) {
//             swap(fruit[i], fruit[min_index]);
//         }
//     }
//     return;
// }

// int main() {
//     char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};

//     int n = sizeof(fruit)/sizeof(fruit[0]);

//     selectionSort(fruit, n);

//     for(int i=0; i<n; i++) {
//         cout << fruit[i] << " ";
//     }
//     cout << endl;
// }

// output:
// apple kiwi lime mango papaya watermelon 