// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int x = 18;
//     int y = 20;
//     cout << &x << " " << &y;
// }

// output:
// 0x7ffee57ef5ac 0x7ffee57ef5a8
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int x = 18;
//     int y = 20;

//     int *ptr = &x;
//     cout << ptr;
// }

// output:
// 0x7ffee6e4f55c
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     float y = 7.9;
//     float *ptrf = &y;
//     cout << ptrf << "\n";
// }

// output:
// 0x7ffeeabff55c
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int *ptr;
//     cout << ptr;
// }

// output:
// 0x10d48d025
// ............................................................................................
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int *ptr;

//     cout << ptr << endl;
//     int marks = 90;
//     ptr = &marks;
//     cout << ptr << endl;
// }

// output:
// 0x10f336025
// 0x7ffee2fc85a4
// ............................................................................................
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x = 18;
    float y = 7.9;

    // Create a pointer that can store address of x.
    // As x is an integer variable, so we need a pointer.
    // that can store address of integer type.

    int *ptr = &x;
    cout << "Address stored inside ptr: " << ptr << endl;
    cout << "Value present at the address stored in ptr: " << *ptr << endl;

    // Create a pointer that can store address of y.
    // y is a float variable, so we need to store it in a 
    // float pointer

    float *ptrf = &y;
    cout << "Address stored inside ptrf: " << ptrf << endl;
    cout << "Value present at the address stored in ptrf: " << *ptrf << endl;

    x = 23; // the bucket x updated the value from 18 -> 23
    // but ptr is still pointing to same bucket
    // now if we derefernce ptr, we will get 23

    cout << "New updated value of x " << x << endl;
    cout << "ptr still pointing to same memory which has 23 instead of 18 " << *ptr << endl;

    // updating x with pointer
    *ptr = 50;
    cout << "New value of x " << x << endl;
    cout << "New value pointed by ptr " << *ptr << endl;

    int valueAtX = *ptr;
    cout << valueAtX << endl;
}

// output:
// Address stored inside ptr: 0x7ffee446755c
// Value present at the address stored in ptr: 18
// Address stored inside ptrf: 0x7ffee4467558
// Value present at the address stored in ptrf: 7.9
// New updated value of x 23
// ptr still pointing to same memory which has 23 instead of 18 23
// New value of x 50
// New value pointed by ptr 50
// 50
// ............................................................................................

// ............................................................................................

// ............................................................................................
// ............................................................................................
// ............................................................................................
// ............................................................................................
