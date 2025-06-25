// class Solution {
//     bool matches(char top, char ch){
//         if(top=='(' && ch==')' || top=='{' && ch=='}' || top=='[' && ch==']'){
//             return true;
//         }else {return false;}
//     }
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(int i=0;i<s.length();i++){
//             char ch=s[i];
//             if(ch=='(' || ch=='{' || ch=='['){
//                 st.push(ch);
//             }else{
//                 if(!st.empty()){
//                     char top=st.top();
//                     if(matches(top,ch)){
//                     st.pop();
//                     }else{return false;}
                    
//                 }else{
//                     return false;
//                 }
//             }

//         }//for loop ends.

// return st.empty();
//     }
// };