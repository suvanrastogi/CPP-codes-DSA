// #include <iostream>
// using namespace std;

// void Palindrome(int digit){
//     int test=digit;
//     int num=0;
//     int rem;
    
//     while(digit!=0){
//     rem=digit%10;
//     digit=digit/10;
//     num=num*10+rem;
//     }
//     cout<<num;
// if(test==num){
//     cout<<"palindrome";
// }else {
//     cout<<"not palindrome";
// }
    
// }
// int main() {
//     // Write C++ code here
// int n;
// cin>>n;
// Palindrome(n);

//     return 0;
// }




// two pointer approach
// #include <iostream>
// using namespace std;

// bool Palindrome(string digit){
// int length=digit.size();
// int j=0;
// int i=length-1;
// while(j<=i){
//     if(digit[i]==digit[j]){
//         j++;
//         i--;
//     }else return false;
// }
//    return true;
// }
// int main() {
//     // Write C++ code here
// string n;
// cin>>n;
// if(Palindrome(n)){
//     cout<<"palindrome";
// }else{
//     cout<<"not palindrome";
// };

//     return 0;
// }