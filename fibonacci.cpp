#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
int n;
cin>>n;
int a=0;
int b=1;
cout<<a<<" "<<b<<" ";
for(int i =1;i<=n;i++){
    int nextNumber = a+b;
    cout<<nextNumber<<" ";
    a=b;
    b=nextNumber;

    
}
    return 0;
}



//secondsolution



#include<iostream>
using namespace std;


void fibonacci(int n){

int a=0;
int b=1;

for(int i=0;i<n;i++){
    int next=a+b;
cout<<a;
    a=b;
    b=next;
    
}

}
int main(){
    int term;
    cout<<"enter the term till which you want the fibonacci : ";
    cin>>term;
    fibonacci(term);
    return 0;
}
