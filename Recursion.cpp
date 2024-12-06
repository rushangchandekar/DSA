#include<iostream>
#include<vector>
using namespace std;


// Que: Print number from 1 to n

// void printNum(int n){
//     if (n==1){
//         cout<<"1\n";
//         return;
//     }

//     cout<<n<<" ";
//     printNum(n-1);
        
// }
// int main(){
//     printNum(5);
//     return 0;

// }


//Que: Print N factorial

// int factorial(int n){
//     if (n == 0){
//         return 1;
//     }

//     return n * factorial(n-1);
// }

// int main(){
//     cout<<factorial (5)<<endl;
//     return 0;
// }


//Que: Sum of N munbers

// int sum(int n){
//     if (n == 1){
//         return 1;
//     }

//     return n + sum(n-1);
// }

// int main(){
//     cout<<sum(5)<<endl;
//     return 0;
// }

//Que: Check if array is sorted

// bool isSorted(vector<int> arr, int n){
//     if (n==0 || n==1){
//         return true;
//     }

//     return arr[n-1] > arr[n-2] && isSorted(arr, n-1);
// }

// int main(){
//     vector<int> arr = {1, 2, 3, 4, 5};
//     cout<<isSorted(arr, arr.size())<<endl;
//     return 0;
// }


//Que: Print all Subsets

void printSubsets(vector<int> &arr, vector<int> &ans, int i){
    if(i == arr.size()){
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }

    //include
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i+1);

    //exclude
    ans.pop_back(); //backtrack
    printSubsets(arr, ans, i+1);
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> ans;
    printSubsets(arr, ans, 0);
    return 0;
}   
