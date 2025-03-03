// // Implementation of a listnode in a singly linked list

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node *next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// int main() {
//     Node *n = new Node(1);
//     cout << n->val << " " << n->next << endl;
// }

// output:
// 1 0x0
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node *next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int val) {
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void display(Node* head) {
//     Node* temp=head;
//     while(temp!=NULL) {
//         cout << temp->val << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* head = NULL;
//     insertAtHead(head, 2);
//     display(head);
//     insertAtHead(head, 1);
//     display(head);
// }

// output:
// 2->NULL
// 1->2->NULL
// ............................................................................................
// // Insertion at k-th position in a singly linked list

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node *next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int val) {
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val) {
//     Node* new_node = new Node(val);

//     // If list is empty, new node becomes head
//     if(head == NULL) {
//         head = new_node;
//         return;
//     }

//     Node* temp = head;
//     while(temp->next != NULL) {
//         temp=temp->next;
//     }
//     // temp has reached last node
//     temp->next = new_node;
// }

// void display(Node* head) {
//     Node* temp=head;
//     while(temp!=NULL) {
//         cout << temp->val << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* head = NULL;
//     insertAtHead(head, 1);  // Insert 1 at head
//     insertAtTail(head, 2);  // Insert 2 at tail
//     insertAtTail(head, 3);  // Insert 3 at tail
//     display(head); // Output: 1->2->3->NULL
// }

// output:
// 1->2->3->NULL
// ............................................................................................
// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node *next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int val) {
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val) {
//     Node* new_node = new Node(val);

//     // If list is empty, new node becomes head
//     if(head == NULL) {
//         head = new_node;
//         return;
//     }

//     Node* temp = head;
//     while(temp->next != NULL) {
//         temp=temp->next;
//     }
//     // temp has reached last node
//     temp->next = new_node;
// }

// void insertAtPosition(Node* &head, int val, int pos) {
//     if(pos==0) {
//         insertAtHead(head, val);
//         return;
//     }

//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos!=pos-1) {
//         temp=temp->next;
//         current_pos++;
//     }

//     // temp is pointing to node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void display(Node* head) {
//     Node* temp=head;
//     while(temp!=NULL) {
//         cout << temp->val << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* head = NULL;
//     insertAtHead(head, 2);
//     display(head);
//     insertAtHead(head, 1);
//     display(head);
//     insertAtTail(head, 3);
//     display(head);
//     insertAtPosition(head, 4, 1);
//     display(head);
// }

// output:
// 2->NULL
// 1->2->NULL
// 1->2->3->NULL
// 1->4->2->3->NULL
// ............................................................................................
// // Updation at k-th position in a singly linked list

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node *next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int val) {
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val) {
//     Node* new_node = new Node(val);

//     // If list is empty, new node becomes head
//     if(head == NULL) {
//         head = new_node;
//         return;
//     }

//     Node* temp = head;
//     while(temp->next != NULL) {
//         temp=temp->next;
//     }
//     // temp has reached last node
//     temp->next = new_node;
// }

// void insertAtPosition(Node* &head, int val, int pos) {
//     if(pos==0) {
//         insertAtHead(head, val);
//         return;
//     }

//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos!=pos-1) {
//         temp=temp->next;
//         current_pos++;
//     }

//     // temp is pointing to node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void updateAtPosition(Node* &head, int k, int val) {
//     Node* temp = head;
//     int curr_pos = 0;

//     while(curr_pos!=k) {
//         temp=temp->next;
//         curr_pos++;
//     }

//     // temp will be pointing to the k-th node
//     temp->val = val;
// }

// void display(Node* head) {
//     Node* temp=head;
//     while(temp!=NULL) {
//         cout << temp->val << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* head = NULL;
//     insertAtHead(head, 2);
//     display(head);
//     insertAtHead(head, 1);
//     display(head);
//     insertAtTail(head, 3);
//     display(head);
//     insertAtPosition(head, 4, 1);
//     display(head);
//     updateAtPosition(head, 2, 5);
//     display(head);
// }

// 2->NULL
// 1->2->NULL
// 1->2->3->NULL
// 1->4->2->3->NULL
// 1->4->5->3->NULL
// ............................................................................................
// // Deletion at k-th position in a singly linked list

// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node *next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// void insertAtHead(Node* &head, int val) {
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val) {
//     Node* new_node = new Node(val);

//     // If list is empty, new node becomes head
//     if(head == NULL) {
//         head = new_node;
//         return;
//     }

//     Node* temp = head;
//     while(temp->next != NULL) {
//         temp=temp->next;
//     }
//     // temp has reached last node
//     temp->next = new_node;
// }

// void insertAtPosition(Node* &head, int val, int pos) {
//     if(pos==0) {
//         insertAtHead(head, val);
//         return;
//     }

//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos!=pos-1) {
//         temp=temp->next;
//         current_pos++;
//     }

//     // temp is pointing to node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void updateAtPosition(Node* &head, int k, int val) {
//     Node* temp = head;
//     int curr_pos = 0;

//     while(curr_pos!=k) {
//         temp=temp->next;
//         curr_pos++;
//     }

//     // temp will be pointing to the k-th node
//     temp->val = val;
// }

// void deleteAtHead(Node* &head) {
//     Node* temp = head;
//     head = head->next;
//     free(temp);
// }

// void display(Node* head) {
//     Node* temp=head;
//     while(temp!=NULL) {
//         cout << temp->val << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     Node* head = NULL;
//     insertAtHead(head, 2);
//     display(head);
//     insertAtHead(head, 1);
//     display(head);
//     insertAtTail(head, 3);
//     display(head);
//     insertAtPosition(head, 4, 1);
//     display(head);
//     updateAtPosition(head, 2, 5);
//     display(head);
//     deleteAtHead(head);
//     display(head);
// }

// output;
// 2->NULL
// 1->2->NULL
// 1->2->3->NULL
// 1->4->2->3->NULL
// 1->4->5->3->NULL
// 4->5->3->NULL
// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................

// ............................................................................................
