// // Count sort

// #include<bits/stdc++.h>
// using namespace std;

// void countSort(vector<int> &v) {
//     int n = v.size();

//     // find the max element
//     int max_ele = INT_MIN;
//     for(int i=0; i<n; i++) {
//         max_ele=max(v[i], max_ele);
//     }

//     // create the freq array
//     vector<int> freq(max_ele+1, 0);
//     for(int i=0; i<n; i++) {
//         freq[v[i]]++;
//     }

//     //calculate cumulative freq
//     for(int i=1; i<=max_ele; i++) {
//         freq[i]+=freq[i-1];
//     }

//     // calculate the sorted array
//     vector<int> ans(n);
//     for(int i=n-1; i>=0; i--) {
//         ans[--freq[v[i]]]=v[i];
//     }

//     // copy back the ans to original array
//     for(int i=0; i<n; i++) {
//         v[i]=ans[i];
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(n);

//     for(int i=0; i<n; i++) {
//         cin >> a[i];
//     }

//     countSort(a);

//     for(int i=0; i<n; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// input:
// 6
// 5 4 3 2 3 2

// output:
// 2 2 3 3 4 5 
// ............................................................................................
// // Radix sort

// #include<bits/stdc++.h>
// using namespace std;

// void countSort(vector<int> &v, int pos) {

//     int n = v.size();
//     // create freq array
//     vector<int> freq(10, 0);
//     for(int i=0; i<n; i++) {
//         freq[(v[i]/pos)%10]++;
//     }

//     // cumulative freq
//     for(int i=1; i<10; i++) {
//         freq[i]+=freq[i-1];
//     }

//     // ans array
//     vector<int> ans(n);
//     for(int i=n-1; i>=0; i--) {
//         ans[--freq[(v[i]/pos)%10]] = v[i];
//     }

//     for(int i=0; i<n; i++) {
//         v[i] = ans[i];
//     }
// }

// void radixSort(vector<int> &v) {

//     int max_ele = INT_MIN;
//     // for(auto x:v) {
//     //     max_ele = max(x, max_ele);
//     // }

//     for(int i=0; i<v.size(); i++) {
//         max_ele = max(v[i], max_ele);
//     }

//     for(int pos = 1; max_ele/pos > 0; pos*=10) {
//         countSort(v, pos);
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) {
//         cin >> v[i];
//     }

//     radixSort(v);
//     for(int i=0; i<n; i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// input:
// 6
// 5 4 3 2 3 2

// output:
// 2 2 3 3 4 5 