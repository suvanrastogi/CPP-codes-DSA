//using pointers - method 1

#include<iostream>
#include <vector>
using namespace std;

int main(){
    int size=5;
    vector<int> arr(size);
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int *i=&arr[0];
    int *j=&arr[size-1];
    
    while(i<=j){
        int temp=*i;
        *i = *j;
        *j = temp;
        i=i+1;
        j=j-1;
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}

//using pointers - method 2
#include<iostream>
#include <vector>
using namespace std;

int main(){
    int size=5;
    vector<int> arr(size);
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int *i=&arr[0];
    int *j=&arr[size-1];
    
    while(i<=j){
        swap(*i,*j);
        i=i+1;
        j=j-1;
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}