// #include<iostream>
// #include<vector>
// using namespace std;
// int binarySearch(vector<int> arr, int tar){
//     int st=0, end=arr.size()-1;

//     while(st <= end){
//         int mid = st + (end - st) / 2;

//         if (tar > arr[mid]){
//             st = mid + 1; //2nd half
//         }else if(tar < arr[mid]){
//             end = mid - 1; //1st half
//         }else{
//             return mid;
//         }
//     }
    
//     return -1;
// }
// int main(){

//     vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; //odd
//     int tar1 = 9;
//     //cout<< binarySearch(arr1, tar1) << endl;

//     vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; //even
//     int tar2 = 5;
//     //cout<< binarySearch(arr2, tar2) << endl;
//     return 0;
// }





//Book Allocation 
// #include <iostream>
// #include <vector>
// using namespace std;

// bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
//     int students = 1, pages = 0;

//     for(int i = 0; i < n; i++){
//         if(arr[i] > maxAllowedPages){
//             return false;
//         }

//         if(pages + arr[i] <= maxAllowedPages){
//             pages += arr[i];
//         } else {
//             students++;
//             pages = arr[i];
//         }
//     }
//     // Corrected return statement
//     return (students <= m);
// }

// int allocationBook(vector<int> &arr, int n, int m) {
//     if (m < n){
//         return -1;
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++) { // O(n)
//         sum += arr[i];
//     }

//     int ans = -1;
//     int st = 0, end = sum; // Range of possible answers

//     while (st <= end){
//         int mid = st + (end - st) / 2;

//         if (isValid(arr, n, m, mid)){ // Try lower half
//             ans = mid;
//             end = mid - 1;
//         } else { // Try upper half
//             st = mid + 1;
//         } 
//     }

//     return ans;
// } 

// int main(){
//     vector<int> arr = {2, 1, 3, 4};
//     int n = 4, m = 2;

//     // Corrected function name
//     cout << allocationBook(arr, n, m) << endl;
//     return 0;
// }


//Painter Partition
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){
    int painter = 1, time = 0;

    for(int i = 0; i < n; i++){
        if  (time + arr[i] <= maxAllowedTime){
              time += arr[i];
        }else {
            painter++;
            time = arr[i];
        }
    }
        
    return painter <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m){
    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while(st <= end){
        int mid = st + (end-st)/2;

        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    // Corrected function name
    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}