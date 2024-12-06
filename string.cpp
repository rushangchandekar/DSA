#include<iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter the word:";
    getline(cin, str);

    int st = 0, end = str.size() - 1;

    while(st < end){
        if(str[st] == str[end]){
            cout<<"It is a Palindrome word"<<endl;
        }else {
            cout<<"It is not a palindrome world"<<endl;
        }
    return 0;
    }
}