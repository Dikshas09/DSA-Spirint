#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int k=2;
    int n= v.size();
    reverse(0,n-k-1,v)
}
int reverse(int s,int e,vector<int>&v){
    
}
