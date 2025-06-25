//first solution for power of 2

// #include <iostream>
// using namespace std;

// int main() {
//     int digit;
//     cin >> digit;

//     // Edge case: 0 or negative number is not a power of two
//     if (digit <= 0) {
//         cout << "No, it is not a power of two";
//         return 0;
//     }

//     // Check using bitwise AND trick
//     if ((digit & (digit - 1)) == 0) {
//         cout << "Yes, it is a power of two";
//     } else {
//         cout << "No, it is not a power of two";
//     }

//     return 0;
// }

//second solution for power of 2

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isPowerOfTwo(int n){
//     int i=0;
//     while(i<=(n/2)){
//         int newnum=pow(2,i);
//         if(newnum==n){
//             return true;
//         }
//         i++;
//     }
//     return false;
// }

// int main(){
//     int digit;
//     cin>>digit;
//     if (digit==1){
//         cout<<"yes it is power of two";
//     }
//     int ans=isPowerOfTwo(digit);
//     if(!ans){
//         cout<<"not power of 2";
//     }
//     else{cout<<"power of 2";}
//     return 0;
// }
