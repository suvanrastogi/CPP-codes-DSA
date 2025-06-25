// Online C++ compiler to run C++ program online 
//reverse string using cpp

#include <iostream>
#include <string>
using namespace std;

string reverseString(string s , int i , int j){ //using pass by value , can also do it by pass by reference void reverseString(string& s, int i , int j)

    swap(s[i],s[j]);
    i++;
    j--;
    if(i<j){
    s=reverseString(s,i,j);
    }
    return s;
}

int main() {
    // Write C++ code here
    string s("abcde");
    int length=s.length();
    int i=0;
    int j=length-1;
    s=reverseString(s,i,j);
    cout << s << endl;

    return 0;
}
