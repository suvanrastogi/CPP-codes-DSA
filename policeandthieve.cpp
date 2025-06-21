// class Solution {
//   public:
    // bool policeFoundFor(int j,int k, map<int,char>&police){
    //     int minRange=abs(j-k);
    //     int maxRange=abs(j+k);
    //     for(auto key:police){
    //         if(j-k <0 && j!=0){
    //         if(0<=key.first && maxRange>=key.first) {
    //           police.erase(key.first);
    //           return true;
               
    //       }
    //         }
    //       if(minRange<=key.first && maxRange>=key.first) {
    //           police.erase(key.first);
    //           return true;
               
    //       }
    //     }
        
    // }
    
//     bool policeFoundFor(int j, int k, map<int, char>& police) {
//     int minRange = abs(j - k);
//     int maxRange = abs(j + k);

//     for (auto it = police.begin(); it != police.end(); ) {
//         int idx = it->first;

//         if ((j - k < 0 && j != 0 && 0 <= idx && idx <= maxRange) ||
//             (minRange <= idx && idx <= maxRange)) {

//             police.erase(it++);
//             return true;
//         } else {
//             ++it;
//         }
//     }

//     return false;
// }

    
//     int catchThieves(vector<char> &arr, int k) {
//         // Code here
//         int count=0;
            
//         //for police
//         map<int,char> police;
//         for(int i=0;i<arr.size();i++){
//             char ch=arr[i];
//             if(ch=='P'){
//                 police[i]=ch;
//             }
//         }
//         //all police and thier indexes mapped into map 
            
                
//                 for(int j=0;j<arr.size();j++){
//                     if(!police.empty()){
//                     if(arr[j]=='T'&& policeFoundFor(j,k,police)){count++;}
//                     }else{
//                         break;
//                     }
//                 }
            
//     return count;
//     }
// };
//THE ABOVE APPROACHIS WRONG IT DOESNT EFFICIENTLY MANAGES POSITION OF THIEVES AND POLICE
//above is the hardwork of 1.5 hour thinking process - hardwork




















//BELOW IS GREEDY and correct approach
// class Solution {
// public:
//     int catchThieves(vector<char>& arr, int k) {
//         vector<int> police;
//         vector<int> thieves;
//         int n = arr.size();

//         // Step 1: Store indices of all 'P' and 'T'
//         for (int i = 0; i < n; i++) {
//             if (arr[i] == 'P') police.push_back(i);
//             else if (arr[i] == 'T') thieves.push_back(i);
//         }

//         int i = 0, j = 0, count = 0;

//         // Step 2: Match each police with nearest thief within range
//         while (i < thieves.size() && j < police.size()) {
//             if (abs(thieves[i] - police[j]) <= k) {
//                 count++;
//                 i++;
//                 j++;
//             }
//             else if (thieves[i] < police[j]) {
//                 i++;
//             } else {
//                 j++;
//             }
//         }

//         return count;
//     }
// };
