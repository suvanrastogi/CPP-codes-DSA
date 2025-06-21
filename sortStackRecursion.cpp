/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */
// void  sortInsert(int num,stack<int>& s){
//     if(s.empty() || (!s.empty() && s.top()<num)){
//         s.push(num);
//         return;
//     }
//     int x=s.top();
  
//         s.pop();
//         sortInsert(num,s);
        


//     s.push(x);
// }
// void SortedStack ::sort() {
//     // Your code here
//     if(s.empty()){
//         return ;
//     }
//     int num=s.top();
//     s.pop();
    
//     sort();
    
//     sortInsert(num,s);
// }



//above is correct approach 


//below is wrong one my own hardwork
// void  sortInsert(int num,stack<int>& s){
//     if(s.empty()){
//         s.push(num);
//         return;
//     }
//     int x=s.top();
//     if(num<x){
//         s.pop();
//         sortInsert(num,s);
        
//     }
//     else{
//         s.push(num);
//         return;
//     }
//     s.push(x);//here i am pushing x even when it is not popped out so the corrected version of code is given below 
    
// }
// void SortedStack ::sort() {
//     // Your code here
//     if(s.empty()){
//         return ;
//     }
//     int num=s.top();
//     s.pop();
    
//     sort();
    
//     sortInsert(num,s);
// }



//changes that were made to my code and is also the right approach along with the first approach 

// void  sortInsert(int num,stack<int>& s){
//     if(s.empty()){
//         s.push(num);
//         return;
//     }
//     int x=s.top();
//     if(num<x){
//         s.pop();
//         sortInsert(num,s);
//         s.push(x);
//     }
//     else{
//         s.push(num);
//         return;
//     }
    
// }
// void SortedStack ::sort() {
//     // Your code here
//     if(s.empty()){
//         return ;
//     }
//     int num=s.top();
//     s.pop();
    
//     sort();
    
//     sortInsert(num,s);
// }