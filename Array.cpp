#include<iostream>
#include <climits>
using namespace std;

//Pass by reference
// void changeArr(int arr[], int size){
//     cout<<"in function\n";
//     for (int i = 0; i < size; i++){
//         arr[i] = 2*arr[i];
//     }
// }

//Linear search
// int search(int arr[], int size, int target){
//     for (int i = 0; i < size; i++){
//         if (arr[i] == target){
//             return i;
//         }
//     }    
//     return -1;
//     }
    
//Reverse an array
void reverse(int arr[], int size){
    int start = 0, end = size-1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    //initialization of array 
    // int num[] = {4,45,12,-978,05};
    // int size = 5;
    // cout<< marks[0]<<endl;
    // cout<< marks[1]<<endl;
    // cout<< marks[2]<<endl;
    // cout<< marks[3]<<endl;
    // cout<< marks[4]<<endl;

    //Loops on array: 0 to size-1
    // for (int i = 0; i < size; i++){
    //     cout<< marks[i] <<endl;
    // }
    
    //Que: Find smallest / largest
    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    // for (int i = 0; i < size; i++){
    //     smallest = min(num[i] , smallest);
    //     largest = max(num[i] , largest);
    // }
    // cout<<"Smallest = "<<smallest<<endl;
    // cout<<"Largest = "<<largest<<endl;

    //Pass by reference
    // int arr[] = {1, 2, 3};
    // changeArr(arr, 3);
    // cout<<"in main\n";
    // for (int i = 0; i < 3; i++){
    //     cout<< arr[i] << " ";
    // }
    // cout<<endl;

    //Linear search
    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int size = 7;
    // int target = 50;

    // cout<< search(arr, size, target) << endl;

    //Reverse an array
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reverse(arr, size);
    for (int i = 0; i < size; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    return 0;
}