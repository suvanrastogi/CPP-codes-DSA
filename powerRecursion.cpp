// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int powerRecursion(int a, int b){
    
    //logic 2^10 = 2^5 * 2^5
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    
    int ans=powerRecursion(a,b/2);
    
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}

int main() {
int a =2 , b=10;
int ans=powerRecursion(a,b);
cout<<ans<<endl;
    return 0;
}
