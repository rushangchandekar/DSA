#include<iostream>
using namespace std;
int main(){

    //while loop
    // int n=20;
    // int count = 1;
    // while (count <= n) {
    //     cout << count << endl;
    //     count++;
    // }

    //for loop
    // int n=15;
    // for (int i = 1; i <= n; i++){
    //     cout<<i<<endl;
    // }

    //Que: Sum of n numbers
    // int n=5;
    // int sum = 0;
    // for (int i = 1; i <= n; i++){
    //     sum = sum + i;
    // }
    // cout<<"Sum ="<<sum<<endl;

    //Que: Sum of all odd no.
    // int n = 20;
    // int sum = 0; 
    // for(int i=1; i<=n; i++){
    //     if(i%2 == 0){
    //         sum = sum + i;
    //     }
    // }
    // cout<<"Sum ="<<sum<<endl;

    //do while
    // int n = 5;
    // int i = 1;
    // do{
    //     cout<<i<<" ";
    //     i++;
    // } while (i <= n);
    
    //Que: Prime or not
    int n = 5;
    bool isPrime = true;
    for(int i=2; i <= n-1; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
}