#include<iostream>
using namespace std;
string removeDuplicates(string[]);
int main(){
    string s="abbaca";
    string t;
    t=removeDuplicates(s);
    cout<<t;
    return 0;
}
    string removeDuplicates(string s) {
      string ans;
      for(int i=0;i<s.size();i++){
        if(s[i]==ans[i-1]){
            ans.pop_back();
        }
        else {
            ans.push_back(s[i]);
        }
      }
      return ans;  
    }