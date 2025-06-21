// // User function Template for C++ using recursion


// class Solution {
    

// void insertAtBottom(stack<int>&s,int x){
//     if(s.empty()){
//         s.push(x);
//         return;
//     }
//     int num=s.top();
//     s.pop();
    
//     insertAtBottom(s,x);
    
//     s.push(num);
//     }
    
//   public:
//     void Reverse(stack<int> &St) {
//         //basecase
//         if(St.empty()){
//             return;
//         }
        
//         int num=St.top();
//         St.pop();
        
//         Reverse(St);
        
//         insertAtBottom(St,num);
        
//     }
// };