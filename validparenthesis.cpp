#include<stack>
#include<bits/stdc++.h>
using namespace std;
bool validparenthesis(string s){
    stack<char>st;
    for(char &x:s){
        switch(x){
        case '(' :st.push('(');
        break;
         case '{' :st.push('{');
        break;
         case '[' :st.push('[');
        break;
         case ')' :if(st.top()!='('||st.empty()){
             return false;
         }
         else{
         st.pop();
         }
         break;
         case '}' :if(st.top()!='{'||st.empty())
         {return false;
         }
         else{
         st.pop();
         }
        break;
         case ']' :if(st.top()!='['||st.empty())
         {return false;
         }
         else{
         st.pop();
         }
        break;
         
        }
        }
         return st.empty();
         
        
    
}
int main(){
    string s;
    cin>>s;
    if(validparenthesis(s)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}
