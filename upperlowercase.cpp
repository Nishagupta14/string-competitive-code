#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    //convt to upper case
    for(i=0;i<str.size();i++){
        if(str[i]>='a' && str[i<='z'])
        str[i] -=32;
    }
    cout<<str<<endl;
}
//covt to lowercase
for(int i=0;i<str.size();i++){
    if(str[i]>='A' && str[i]<='Z'){
        str[i] +=32;
    }

}
cout<<str<<endl;
//3rd method using function
transform(str.begin(),str.end(),str.begin().::toupper);
cout<<str;
return 0;
}
