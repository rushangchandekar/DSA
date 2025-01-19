#include <iostream>
#include <vector>
using namespace std;

void mergeSort(arr[], st, end){
    If (st < end) {
        int mid = st + (end-st)/2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, st, mid, end);
    }
}

void merge(arr, st, mid, end){
    vector<int>temp;
    int i=st, j=mid+1;
    while(i <= mid && j <= end){ 
        if(A[i] <= A[j]){
        temp.push_back(A[i]);
        i++;
    }else {
        temp.push_back(A[j]);
        j++;
    }
    }
}

// 𝘓𝘦𝘧𝘵
while(i <= mid){
 temp.push_back(A[i]);
 i++;
}

// 𝘙𝘪𝘨𝘩𝘵
while(j <= mid){
 temp.push_back(A[j]);
 j++;
}

for(idx = 0; idx < temp.size( ); idx++){
 A[idx + st] = temp[idx];
}

int main(){
    // int arr[] = {12, 11, 13, 5, 6,}
    // int n = sizeof(arr)/sizeof(arr[0]);
    // mergeSort(arr, 0, n-1);
    return 0;
}