#include<iostream>
using namespace std;
int main(){
    // Square pattern
    //Que: 1 2 3 4
    //     1 2 3 4
    //     1 2 3 4
    //     1 2 3 4
    // int n = 5;
    // for (int i = 0; i < n; i++){
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++){
    //         cout<<ch<<" ";
    //         ch = ch + 1;
    //     }
    //     cout<<endl;
    // }
    
    //Que: 1 2 3
    //     4 5 6
    //     7 8 9
    // int n = 4;
    // char ch = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    //Triangle
    //Que:*
    //    * *
    //    * * *
    //    * * * *
    //  int n = 4;
    //  for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i + 1; j++){
    //         cout<<i + 1<<" ";
    //     }
    //     cout<<endl;
    //  }
    //Que:1
    //    1 2
    //    1 2 3
    //    1 2 3 4
    // int n = 4;
    // for(int i = 0; i < n; i++){
    //     int num = 1;
    //     for (int j = 1; j <= i+1; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //    cout<<endl; 
    // }

    //Reverse Triangle
    //Que:1
    //    2 1
    //    3 2 1
    //    4 3 2 1
    // int n = 4;
    // for (int i = 0; i < n; i++){
    //     for (int j = i+1; j > 0; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //Floyd Triangle
    //Que:1
    //    2 3
    //    4 5 6
    //    7 8 9 10
    // int n = 4;
    // char ch= 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout<<ch<<" ";
    //         ch++; 
    //     }
    //     cout<<endl;
    // }

    //Inverted Triangle
    //Que:1 1 1 1
    //      2 2 2
    //        3 3
    //          4
    // int n = 4;
    // for (int i = 0; i < n; i++){
    //     //spaces
    //     for (int j = 0; j < i; j++){
    //         cout<<" ";
    //     }
    //     //nums
    //     for (int j = 0; j < n-i; j++){
    //         cout<<(i+1);
    //     }
    // cout<<endl;    
    // }
    
    //Pyramid Pattern
    //Que:         1
    //           1 2 1
    //         1 2 3 2 1
    //       1 2 3 4 3 2 1
    // int n = 8;
    // for (int i = 0; i < n; i++){
    //     //spaces: n-i-1
    //     for (int j = 0; j < n-i-1; j++){
    //         cout<<" ";
    //     }

    //     //num1: i+1
    //     for (int j = 1; j <= i+1; j++){
    //         cout<<j;
    //     }

    //     //num2: 1
    //     for (int j = i; j >= 1; j--){
    //         cout<<j;
    //     }
    // cout<<endl;   
    // }
    
    //Hollow Diamond
    //Que:    *
    //       * *
    //      *   *
    //     *     *
    //      *   *
    //       * *
    //        *
    // int n = 4;
    // //top
    // for (int i = 0; i < n; i++){
    //     // spaces
    //     for (int j = 0; j < (n-i-1); j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";

    //     if (i != 0){
    //         //spaces
    //         for (int j = 0; j < 2*i-1; j++){
    //         cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;    
    // }
    
    // //bottom
    // for (int i = 0; i < n-1; i++){
    //     //spaces
    //     for (int j = 0; j < i+1; j++){
    //         cout<<" ";
    //     }
    //     cout<<"*";

    //     if (i != n-2){
    //         //spaces
    //         for (int j = 0; j < 2*(n-i)-5; j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
            
    //     }
    //     cout<<endl;
        
    // }
    
    //Butterfly pattern
    
    return 0;
}