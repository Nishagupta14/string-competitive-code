#include<bits/stdc++.h>
#include<vector>
#include<utility>
#include<set>
#include<stack>
#include<unordered_map>
#include<unordered_set>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define loop(i,s,e) for(int i=s;i<e;i++)
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int sum=0;
    int num=0;//keep track of ones tens
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            num=num*10+(str[i]-'0');//(str[i]-'0') int mein convert kardega then num* se ones ,tens hoga
        }
        else{
             //agar digit nhi hai to sum mein num add kardo
            sum +=num;
            num=0;
        }
    }
    cout<<sum+num;//last digit bhi number ho skta hai issiliye we are adding num to sum

    return 0;
}