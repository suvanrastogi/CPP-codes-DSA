#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
int n;
cin>>n;
int prod=1;
int sum=0;
while(n!=0){
    int digit=n%10;
    prod=prod*digit;
    sum=sum+digit;
    n=n/10;
}
int answer= prod-sum;
cout<<answer<<endl;
    return 0;
}