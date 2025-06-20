
//method 1

// #include <iostream>
// using namespace std;

// //linear search function
// bool isPresent(int arr[],int size, int key){
//     for(int i=0;i<size;i++){
//        if(arr[i]==key){
//            return 1;
//        }
//     }return 0;
// }

// //main function
// int main() {
  
//   int arr[]={25,7,-2,10,22,-2,0,5,22,1};
//   int size=(sizeof(arr)/sizeof(arr[0]));
//    int key;
//   cout << "ENTER THE element you want to search for : "<< endl;
//   cin>>key;
//   bool found = isPresent(arr,10,key);
  
//      if (found){
//      cout << " element present";
//            }
//      else{
//      cout<< "not present";
//      }
 
//     return 0;
// }


//method 2
// #include <iostream>
// using namespace std;

// int main(){
//     int size;    
//     int key;

//     cout<<"enter the size of the array : ";
//     cin>>size;
//     int *arr=new int[size];

//     //enter elements of an array
//     for(int i=0;i<size;i++){
//         cin >> arr[i];
//     }
//     cout<<"enter the key you want to search for : ";
//     cin>>key;
//     // 
    
//     for(int i=0;i<size;i++){
//         if(key==arr[i]){
//             cout<<"key found";
//             break;
//         }
//         if(arr[i]==arr[size-1] && key!=arr[i]){
//             cout<<"key not found";
//         }
        
//     }
    
    
//     return 0;
// }