// Online C++ compiler to run C++ program online
#include <iostream>
using  namespace std;

void merge(int *arr, int s, int e){
   int mid = (s+e)/2;
   int len1=mid-s+1;
   int len2=e-mid;
   
   int *first=new int[len1];
   int *second=new int[len2];
   //creating a new array same as size of first array 
   int mainArrayIndex=s;
   for(int i=0;i<len1;i++){
       first[i]=arr[mainArrayIndex++];
  }
//   creating a new array same as size of second array 
    mainArrayIndex=mid+1;
   for(int i=0;i<len2;i++){
       second[i]=arr[mainArrayIndex++];
   }
   
   int index1=0;
   int index2=0;
   mainArrayIndex=s;
   //comparing which elemnt is smaller in both the cases 
   while(index1<len1 && index2<len2){
       if(first[index1]<second[index2]){
           arr[mainArrayIndex++]=first[index1++];
       }
        else{
           arr[mainArrayIndex++]=second[index2++];
       }
   }
   
   //incase the second array was small and gets ended first 
   while(index1<len1){
       arr[mainArrayIndex++]=first[index1++];
   }
   
   //incase the first aray was small and  gets ended second 
      while(index2<len2){
       arr[mainArrayIndex++]=second[index2++];
   }
}

void mergeSort(int *arr, int s, int e){
    if(s >= e){
        return;
    }
  
    int mid=(s+e)/2;
    // sort the left part
    mergeSort(arr,s,mid);
    //sort the right part
    mergeSort(arr,mid+1,e);
    
    //merge
    merge(arr,s,e);
}



int main() {
int arr[]={5,4,3,2,1, 55,4,76,23,13};
int size=10;
int s=0;
int e=size-1;
mergeSort(arr,s,e);
for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}

    return 0;
}

