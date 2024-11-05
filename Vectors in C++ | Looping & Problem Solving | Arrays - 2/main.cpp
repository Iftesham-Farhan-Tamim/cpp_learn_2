// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;

//     cout << "Size: " << v.size() << endl;
//     cout << "Capacity: " <<v.capacity()<<endl;

//     v.push_back(1);
//     cout << "Size: " << v.size() << endl;
//     cout << "Capacity: " << v.capacity()<< endl;

//     v.push_back(2);
//     cout << "Size: " << v.size() << endl;
//     cout << "Capacity: " << v.capacity() << endl;

//     v.push_back(3);
//     cout << "Size: " << v.size() << endl;
//     cout << "Capacity: " << v.capacity() << endl;

//     v.resize(5);
//     cout << "Size :" << v.size() << endl;
//     cout << "Capacity :" << v.capacity() << endl;

//     v.resize(6);
//     cout << "Size :" << v.size() << endl;
//     cout << "Capacity :" << v.capacity() << endl;

//     v.pop_back();
//     v.pop_back();
//     cout << "Size :" << v.size() << endl;
//     cout << "Capacity: " << v.capacity() << endl;
// }

// output:
// Size: 0
// Capacity: 0
// Size: 1
// Capacity: 1
// Size: 2
// Capacity: 2
// Size: 3
// Capacity: 4
// Size :5
// Capacity :8
// Size :6
// Capacity :8

// Size :4
// Capacity: 8
// ............................................................................................
// // Looping in vectors
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;

//     for(int i=0; i<5; i++) {
//         int element;
//         cin >> element;
//         v.push_back(element);
//     }

//     // //for loop
//     // for(int i=0; i<v.size(); i++) {
//     //     cout << v[i] << " ";
//     // }


//     //for each loop
//     for(int ele : v) {
//         cout << ele << " ";
//     }


//     // //Erasing an Element from the Vector
//     v.erase(v.end()-2);  // idx 3 will remove = (5-2)


//     // //while loop
//     // int idx = 0;
//     // while(idx<v.size()) {
//     //     cout << v[idx++] << " ";
//     // }

// }
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v(5);

//     for(int i=0; i<v.size(); i++) {
//         cin >> v[i];
//     }

//     for(int i=0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
// }
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v(6);
//     int x = 1;
//     int ans = 0;
//     for(int i=0; i<v.size(); i++) {
//         cin >> v[i];
//     }

//     // for(int i=0; i<v.size(); i++) {
//     //     if(x == v[i]) {
//     //         ans = i;
//     //     }
//     // }

//     for(int i=v.size()-1; i>=0; i--) {
//         if(x == v[i]) {
//             ans = i;
//             break;
//         }
//     }

//     cout << ans << endl;
// }
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// }
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

// }
// ............................................................................................

