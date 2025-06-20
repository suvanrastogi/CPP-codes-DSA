/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         vector<int> arr;
//         ListNode* temp = head;

//         while(temp!=NULL){
//             arr.push_back(temp->val);
//             temp=temp->next;
//         }

//         int forward=0;
//         int backward=arr.size()-1;

//         while(forward<=backward){
//             if(arr[forward]==arr[backward]){
//                 forward++;
//                 backward--;
//             }  else{return false;}
//         }

//         return true;
//     }
// };

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode* slow=head;
//         ListNode*fast=head;
        
//         if(head==NULL || head->next==NULL) return true;
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }

//         //reverse the linkedlist 
//         ListNode* prev=NULL;
//         ListNode*curr=slow;
//         while(curr!=NULL){
//             ListNode*next=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=next;
//         }
//     ListNode*temp=head;
//         //compare both the reverse linked list from the middle and the first part of linked list
//         while(prev!=NULL){
//             if(temp->val!=prev->val){

//                 return false;
//             }else{
//              temp=temp->next;
//                 prev=prev->next;
//             }
//         }

//         return true;
//     }
// };