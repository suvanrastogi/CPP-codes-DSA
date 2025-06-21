// class Solution {
//   public:
//     // Function to delete middle element of a stack.
//     void solve(stack<int>&s,int size,int count){
//         if(count==floor((size/2)+1)){
//             s.pop();
//             return ;
//         }
        
//         int num=s.top();
//         s.pop();
//         solve(s,size,count+1);
        
//         //returning from recursion 
//         s.push(num);
        
//     }
//     void deleteMid(stack<int>& s) {
//         // code here..
//         int count =1;

//         solve(s,s.size(),count);
//     }
// };