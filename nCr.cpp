#include <iostream>
using  namespace std;
int factorial(int a){
    int fact=1;
         for (int i=1;i<=a;i++)
         {
        fact=fact*i;
        
         }return fact;
    }
    
int nCr(int n, int r)
{
int calc= (factorial(n)/(factorial(n-r)*factorial(r)));
return calc;
}

int main() {
int c ,d;
cout<<"enter value of n and r";
cin>>c>>d;
cout<<nCr(c,d);
    return 0;
}