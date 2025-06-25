#include <iostream>
#include <map>
using namespace std;

class LinkedList {
 public:
  int data;
  LinkedList* next;

 public:
  // constructor
  LinkedList(int nodeValue) {
    data = nodeValue;
    next = NULL;
  }

  ~LinkedList() {
    int value = this->data;
    // memory free

    cout << " memory is free for node with data " << value << endl;
  }
};
// add at end
void addAtEnd(int d, LinkedList*& tail) {
  LinkedList* newnode = new LinkedList(d);
  tail->next = newnode;
  tail = newnode;
}

// add at begin
void addAtBegin(int d, LinkedList*& head) {
  LinkedList* newnode = new LinkedList(d);
  newnode->next = head;
  head = newnode;
}

// print the linkedlist
void print(LinkedList* head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
}

// add in the middle
void addInMiddle(int d, int pos, LinkedList*& head, LinkedList*& tail) {
  LinkedList* newnode = new LinkedList(d);
  LinkedList* temp = head;

  if (pos == 1) {
    addAtBegin(d, head);
  } else {
    int cnt = 1;
    while (cnt < pos - 1) {
      temp = temp->next;
      cnt++;
    }
    if (temp->next == NULL) {
      temp->next = newnode;
      newnode->next = NULL;
      tail = newnode;
    } else {
      newnode->next = temp->next;
      temp->next = newnode;
    }
  }
}

// delete from begining
void deleteNode(int pos, LinkedList*& head) {
  if (pos == 1) {
    LinkedList* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return;
  } else {
    LinkedList* temp = head;
    LinkedList* prev = NULL;
    int cnt = 1;
    while (cnt < pos) {
      prev = temp;
      temp = temp->next;
      cnt++;
    }
    prev->next = temp->next;
    temp->next = NULL;
    delete temp;
    return;
  }
}
//
bool isCircular(LinkedList* head) {
  LinkedList* temp = head;
  // TRAVERSING TO THE LAST NODE
  while (temp != NULL) {
    if (temp != head) {
      temp = temp->next;
    } else {
      return true;
    }
  }
}

LinkedList* reverseLinkedList(LinkedList* head) {
  LinkedList* prev = NULL;
  LinkedList* curr = head;
  while (curr != NULL) {
    LinkedList* forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}

LinkedList* reverseLLKgroups(int k, LinkedList* head) {
  if (head == NULL) {
    return NULL;
  }
  LinkedList* curr = head;
  LinkedList* prev = NULL;
  LinkedList* next = NULL;
  int count = 0;

  while (curr != NULL && count < k) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }

  // recursive call
  if (next != NULL) {
    head->next = reverseLLKgroups(k, next);
  }

  //
  return prev;
}

// DETECT loop
bool isLoopPresent(LinkedList* head) {
  map<LinkedList*, bool> visited;
  LinkedList* temp = head;

  while (temp != NULL) {
    if (visited[temp] == true) {
      return true;
    }
    visited[temp] = true;
    temp = temp->next;
  }
  return false;
}

// floyd detection loop
bool floydDetection(LinkedList* head) {
  LinkedList* slow = head;
  LinkedList* fast = head;
  if (head == NULL) {
    return false;
  }

  while (fast != NULL || slow != NULL) {
    fast = fast->next;
    if (fast != NULL) {
      fast = fast->next;
    }
    slow = slow->next;
    if (slow == fast) {
      return true;
    }
  }

  return false;
}

LinkedList* detectNodeOfLoop(){
  
}
// main starts
int main() {
  LinkedList* newnode = new LinkedList(5);

  LinkedList* head = newnode;
  LinkedList* tail = newnode;

  addAtBegin(6, head);
  addAtEnd(7, tail);
  addInMiddle(8, 3, head, tail);
  addInMiddle(9, 1, head, tail);
  addInMiddle(10, 6, head, tail);

  cout << "head before reversal is" << head->data << endl;
  cout << "tail before reversal is " << tail->data << endl;

  tail->next = head;

  if (floydDetection(head)) {
    cout << "present" << endl;
  } else {
    cout << "not present" << endl;
  }

  cout << "head after reversal is " << head->data << endl;
  cout << "tail after reversal is " << tail->data << endl;
  return 0;
}
