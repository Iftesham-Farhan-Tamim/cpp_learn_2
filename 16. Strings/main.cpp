// // declare and print string

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     // string str = "hello";
//     // string str1("world");
//     // cout << str << " " << str1 << endl;

//     string str;
//     cin >> str;
//     cout << str << endl;
// }

// output:
// hello world
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string str;
//     getline(cin, str);
//     cout << str << endl;

//     char ch = 'A';
//     cout << int(ch) << endl;  // 65 (ASCII Values of A)
// }

// input:
// 97

// output:
// 97
// ............................................................................................
// // reverse() 
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string str = "hello";
//     reverse(str.begin(), str.end());
//     cout << str << endl;  // olleh
// }
// ............................................................................................
// // substr()
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string str = "farhantamim";
//     cout << str.substr(6, 10) << endl;  // tamim
//     cout << str.substr(1) << endl;  // arhantamim
// }
// ............................................................................................
// // "+" operator
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     string s1 = "hello ";
//     string s2 = "world";

//     cout << s1 + s2 << endl;  // hello world
    
//     s1+=s2;  // (s1=s1+s2)

//     cout << s1 << endl;
// }
// ............................................................................................
// // strcat()
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     char s1[20] = "hello ";
//     char s2[20] = "world";

//     strcat(s1, s2);
//     cout << s1 << endl;  // hello world
// }
// ............................................................................................
// // push_back()
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s1 = "abcd";
//     char ch = 'e';

//     s1.push_back(ch);
//     cout << s1 << endl;  // abcde
// }
// ............................................................................................
// // size()
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s1 = "abcde";
//     cout << s1.size() << endl;  // 5

//     char ch[20] = "abcde";
//     cout << strlen(ch) << endl;  // 5
// }
// ............................................................................................
// // to_string()
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int num = 432;
//     string str = to_string(num);
//     str+="1";
//     cout << str[1]<<endl;  // 3
//     cout << str << endl;  // 4321
// }
// ............................................................................................
// // Given a string str, sort the given string.
// // Constraints: The string will contain only alphabetical characters from a-z.

// // Input 1: "helloworld"
// // Output 2: "dehllloorw"
// // Input 2: "star"
// // Output 2: "arst"

// #include <bits/stdc++.h>
// using namespace std;

// string countSort(string str) {
//     vector<int> freq(26, 0);

//     for(int i=0; i<str.length(); i++) {
//         int index = str[i]-'a';
//         freq[index]++;
//     }

//     // create sorted string
//     int j=0;
//     for(int i=0; i<26; i++) {
//         while(freq[i]--) {
//             str[j++] = i + 'a';
//         }
//     }

//     return str;
// }

// int main() {
//     string str;
//     cin >> str;

//     cout << countSort(str) << endl;
// }
// ............................................................................................
// // Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// // Constraints : String s and t will only contain lowercase alphabetical characters.

// // input 1: "anagram", t = "nagaram"
// // output 1: yes
// // input 2: s = "bank", t = "atm"
// // output 2: no

// #include <bits/stdc++.h>
// using namespace std;

// bool isAnagram(string s1, string s2) {
//     // create freq array
//     vector<int> freq(26, 0);

//     // if lengths are different for s1, s2 --> return false
//     if(s1.length()!=s2.length()) {
//         return false;
//     }

//     // store frequency of characters in s1 and s2
//     for(int i=0; i<s1.length(); i++) {
//         freq[s1[i]-'a']++;  // for s1, we are incrementing freq of char
//         freq[s2[i]-'a']--;  // for s2, we are decrementing freq of char
//     }

//     // checking if freq of every character is a
//     for(int i=0; i<26; i++) {
//         if(freq[i]!=0) {  // not anagram
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     string s1, s2;
//     cin >> s1 >> s2;

//     if(isAnagram(s1, s2)) {
//         cout << "String are anagrams" << endl;
//     } else {
//         cout << "String are not anagrams" << endl;
//     }
// }

// Input: 
// anagram
// nagaram

// Output:
// String are anagrams
// ............................................................................................
// // Given two strings s and t, determine if they are isomorphic.

// // input: s="egg", t="add"
// // output: yes

// #include <bits/stdc++.h>
// using namespace std;

// bool isIsomorphic(string s1, string s2) {
//     vector<int> v1(128, -1);
//     vector<int> v2(128, -1);

//     if(s1.size()!=s2.size()) {  // if strings length does not match
//         return false;
//     }

//     for(int i=0; i<s1.size(); i++) {
//         if(v1[s1[i]]!=v2[s2[i]]) {  // checking if value of character at idx i match in both vectors
//             return false;
//         }
//         v1[s1[i]] = v2[s2[i]] = i;  // storing string position in vectors for characters at idx i
//     }

//     return true;
// }

// int main() {
//     string s1, s2;
//     cin >> s1 >> s2;

//     if(isIsomorphic(s1, s2)) {
//         cout << "They are isomorphic" << endl;
//     } else {
//         cout << "They are not isomorphic" << endl;
//     }
// }

// input:
// egg
// add

// output:
// They are isomorphic
// ............................................................................................
// // Given an array of strings. Write a problem to find the longest common prefix
// // string amongst an array of strings.

// // input: arr=["flower", "flight","flask"]
// // output: "fi"

// #include <bits/stdc++.h>
// using namespace std;

// string LongestCommonPrefix(vector<string> &str) {
//     // sorting the array of strings
//     sort(str.begin(), str.end());

//     string s1 = str[0];  // first string
//     int i = 0;
//     string s2 = str[str.size()-1];  // last string
//     int j = 0;

//     string ans = "";
//     while(i<s1.size() && j<s2.size()) {
//         if(s1[i] == s2[j]) {
//             ans+=s1[i];
//             i++; 
//             j++;
//         } else {
//             break;
//         }
//     }
//     return ans;
// }

// // // 2nd methode (more optimized)
// string LongestCommonPrefix(vector<string> &str) {
//     // keeping first string as const and comparing it with all other strings
//     string s1 = str[0];
//     int ans_length = s1.size();

//     for(int i=1; i<str.size(); i++) {
//         int j = 0;
//         while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j])  // finding the common prefix string length
//             j++;
//         ans_length = min(ans_length, j);  // updating length of ans string
//     }

//     string ans = s1.substr(0, ans_length);
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter no of strings: ";
//     cin >> n;

//     cout << "Enter strings";
//     vector<string> str(n);
//     for(int i=0; i<n; i++) {
//         cin >> str[i];
//     }

//     cout << "Longest common prefix: " << LongestCommonPrefix(str) << endl;
// }

// input 1:
// Enter no of strings: 3
// Enter strings
// ant
// anti
// anthem

// output 1:
// Longest common prefix: ant

// input 2:
// Enter no of strings: 3
// Enter strings
// apple
// add
// bee

// output 2:
// Longest common prefix: 

// input 3:  (from 2nd methode)
// Enter no of strings: 3
// Enter strings
// ant anti anthem

// output 3:
// Longest common prefix: ant
// ............................................................................................
// // An encoded string(s) is given, and the task is to decode it. The encoding pattern is that
// // the occurrence of the string is given at the starting of the string and each string is
// // enclosed by square brackets.

// // Note: The occurrence of a single string is less than 1000.

// // input 1: s=a[b]
// // output 1: b

// // input 2: s = 3[b2[ca]]
// // output 2: bcacabcacabcaca

// // input 3: s = 1[a2[b3[c]]]
// // output 3: abcccbccc

// #include <bits/stdc++.h>
// using namespace std;

// string decodedString(string s) {
//     string result = "";
//     // traversing the encoded string
//     for(int i=0; i<s.length(); i++) {
//         if(s[i]!=']') {
//             result.push_back(s[i]);
//         } else {
//             // extract str from result
//             string str = "";
//             while(!result.empty() && result.back()!='[') {
//                 str.push_back(result.back());
//                 result.pop_back();
//             }

//             // reversing the str
//             reverse(str.begin(), str.end());

//             // remove last char from result which is [
//             result.pop_back();

//             // extract num from result
//             string num = "";
//             while(!result.empty() && (result.back() >= '0' && result.back()<='9')) {
//                 num.push_back(result.back());
//                 result.pop_back();
//             }

//             // reversing the num string
//             reverse(num.begin(), num.end());

//             // convert string to integer
//             int int_num = stoi(num);

//             // inserting str in result int_num times
//             while(int_num) {
//                 result += str;
//                 int_num--;
//             }
//         }
//     }
//     return result;
// }

// int main() {
//     string str;
//     cin >> str;

//     cout << decodedString(str) << endl;
// }

// space complexity -> 0(n) where n is length of decoded string
// time complexity -> 0(n) where n is length of decoded string
// ............................................................................................
// // Given a binary string and an integer k, return the maximum number of consecutive
// // 1's in the string if you can flip at most k 0's

// // input: "0001101011", k = 2
// // output: 7

// #include <bits/stdc++.h>
// using namespace std;

// int longestOnes(string str, int k) {
//     int start = 0;
//     int end = 0;
//     int zero_count = 0;
//     int max_length = 0;

//     for(;end<str.length();end++) {
//         if(str[end]=='0') {
//             zero_count++;
//         }

//         while(zero_count>k){
//             if(str[start]=='0') {
//                 zero_count--;
//                 start++;  // contracting our window
//             }
//         }

//         // zero_count <= k
//         max_length = max(max_length, end-start+1);
//     }

//     return max_length;
// }

// int main() {
//     string str;
//     cout << "Enter binary string: ";
//     cin >> str;

//     int k;
//     cout << "Enter max flips: ";
//     cin >> k;

//     cout << longestOnes(str, k) << endl;
// }