// // Remove all the occurrences of 'a' from string s = "abcax".

// #include<bits/stdc++.h>
// using namespace std;

// string f(string &s, int idx, int n) {
//     // base case
//     if(idx == n) return "";
//     string curr = "";
//     curr += s[idx];
//     return ((s[idx] == 'a') ? "" : curr) + f(s, idx + 1, n);
// }

// int main() {
//     string s = "abcax";
//     int n = 5;
//     cout << f(s, 0, n);
// }

// output:
// bcx
// ............................................................................................
// // write a program to check whether a given number is palindrome
// // or not.

// #include<bits/stdc++.h>
// using namespace std;

// bool f(int num, int *temp) {
//     // base case
//     if(num >= 0 and num <= 9) {
//         return (num == (*temp)%10);
//     }
//     bool result =  (f(num/10, temp) and (num%10) == ((*temp) % 10));
//     (*temp) /= 10;
//     return result;
// }

// int main() {
//     int num = 12621;
//     int anotherNum = num;
//     int *temp = &anotherNum;
//     cout << f(num, temp);
// }

// output:
// 0