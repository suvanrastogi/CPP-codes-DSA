#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main(){
    int size;
    cout << "Enter number of elements in array: ";
    cin >> size;

    vector<int> arr(size);
    // int arr[100]; 
    // int *arr=new int[size];

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    
    int maxi=INT_MIN;
    int mini=INT_MAX;
    
    //SELECTING MAXIUMUM IN THE ARRAY 
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    
    //selecting minimum in the array 
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    
    cout<<"maximum of an array : "<<maxi<<"\nminimum of an array : "<<mini;
    
    return 0;
}