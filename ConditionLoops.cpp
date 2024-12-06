#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if (ch >= 65 && ch <= 90){
        cout<<"It is a Uppercase";
    }else if(ch >= 97 && ch <= 122){
        cout<<"It is a Lowercase";
    }else{
        cout<<"Invalid Character";
    }
    return 0;
}