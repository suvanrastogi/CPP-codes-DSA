#include<iostream>
#include<map>
using namespace std;


class LinkedList{
    public:
    int data;
    LinkedList* next;

    LinkedList(int data){
        this->data=data;
        this->next=NULL;
    }

};

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
LinkedList* addInMiddle(int d, int pos, LinkedList*& head, LinkedList*& tail) {
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
  return temp->next;
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
  map<LinkedList*,bool> visited;
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

LinkedList* floydDetection(LinkedList* head) {
  LinkedList* slow = head;
  LinkedList* fast = head;

while(fast!=slow){
    fast=fast->next->next;
    slow=slow->next;
}
return fast;
}


LinkedList* detectNodeOfLoop(LinkedList* head){
    LinkedList* poi=floydDetection(head);
    LinkedList* temp=head;
    while(temp!=poi){
        temp=temp->next;
        poi=poi->next;
    }
    return temp;
}

int main(){

    LinkedList* head=NULL;
    LinkedList* tail=NULL;

    addAtBegin(0,head);
    addAtEnd(1,tail);
     addAtEnd(2,tail);
      addAtEnd(3,tail);
       addAtEnd(4,tail);
        addAtEnd(5,tail);

LinkedList*temp=addInMiddle(10,3,head,tail);
tail->next=temp;

    LinkedList* poiNode=detectNodeOfLoop(head);

    cout<<"point of intersection is:"<<poiNode->data;


    return 0;
}