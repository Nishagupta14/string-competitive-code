/*O(N! * log(N!)),
You are given a string 'STR' consisting of lowercase English letters. Your task is to return all permutations of the given string in lexicographically increasing order.
String A is lexicographically less than string B, if either A is a prefix of B (and A ≠ B), or there exists such i (1 <= i <= min(|A|, |B|)), that A[i] < B[i], and for any j (1 <= j < i) A[i] = B[i]. Here |A| denotes the length of the string A.
For example :
3
abc
bc
c
Sample Output 1:
abc acb bac bca cab cba
bc cb
c*/
#include<algorithm>
void permutehelper(vector<string>&ans,int l,int r,string& str){
    if(l==r){
        ans.push_back(str);
        return;
    }
    for(int i=l;i<=r;i++){
        swap(str[l],str[i]);
        permutehelper(ans,l+1,r,str);
        swap(str[l],str[i]);
    }
}
vector<string> generatePermutations(string &str)
{
    // write your code here
    int l=0,r=str.size()-1;
    vector<string>ans;
    permutehelper(ans,l,r,str);
    sort(ans.begin(),ans.end());
    return ans;
    
}