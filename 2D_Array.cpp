#include<iostream>
#include<vector>
using namespace std;

// bool linearSearch(int matrix[4][3], int row, int col, int key){
//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){
//             if(matrix[i][j] == key){
//                 return [i][j];
//             }
//         }
//     }

//     return [-1][-1]; 
// }

// int getMaxSum(int mat[4][3], int row, int col){
//     int maxRowSum = INT_MIN;

//     for(int i=0; i<row; i++){
//         int rowSum = 0;
//         for(int j=0; j<col; j++){
//             rowSum += mat[i][j];
//         }

//         maxRowSum = max(maxRowSum, rowSum);
//     }

//     return maxRowSum;
// }

int getDiagonalSum(int mat[4][4], int n){
    int diagonalSum = 0;

    for(int i=0; i<n; i++){
        for(int j=o; j<n; j++){
            if(i == j){
                sum += mat[i][j];
            }else if(j == n-i-1){
                sum += mat[i][j];
            }
        }
    }    

    return diagonalSum;
}
    //O(n
int main(){
    // int matrix [4][3];
    // int row = 4, col = 3;
    
    // //Input
    // for (int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cin>>matrix[i][j];
    //     }
    // }

    // //Output
    // for (int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // int matrix [4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // int row = 4; 
    // int col = 3;

    // cout << getMaxSum(matrix, row, col)<<endl;

    //Diagonal Sum
    int matrix [4][4] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15,16}};
    int n = 4;

    cout << getDiagonalSum(matrix, n) << endl;

    return 0;
}