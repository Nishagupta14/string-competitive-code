#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
        return true;
    
}
int main(){
    string str;
    cin>>str;
    if(isPalindrome(str)){
        cout<<"IS PALINDROME";
    }
    else{
        cout<<"IS NOT PALINDROME";
    }

}