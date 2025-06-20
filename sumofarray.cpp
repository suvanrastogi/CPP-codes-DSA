#include<iostream>
#include<vector>
using namespace std;

int main(){
int size=5;
//  vector<int> arr(size);
int *arr=new int[size];

 for(int i=0;i<size;i++){
     cin>> arr[i];
 }
 int sum=0;
 for(int i=0;i<size;i++){
    sum+=arr[i];
 }
 
 cout<<sum;
 return 0;
}