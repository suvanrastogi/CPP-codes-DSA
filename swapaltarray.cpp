#include<stdio.h>
#include<iostream>
using namespace std;

//print Array function

void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }cout << endl;
}

//swap function for alternate;
void swapalt(int arr[],int n){
    for (int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

//main function
int main(){
    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};
    
    swapalt(even,8);
    swapalt(odd,5);
    
    printArray(even,8);
    printArray(odd,5);
    return 0;
}

