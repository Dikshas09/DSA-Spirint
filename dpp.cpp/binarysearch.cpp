#include<iostream>
#include <algorithm>
using namespace std;

int findmissing(int arr[],int n){
    int l=0;
    int h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==mid){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return l;
}
int main(){
    //ques 1 section D..........................................................................................................
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;;
    }
    sort(begin(arr),end(arr));
    int t;
    cin>>t;
    int l=0;
    int h=9;
    bool found=false;
    while(l<=h){
        int mid= l+(h-l)/2;
        if (arr[mid]==t)
        {
            found=true;
            cout<<"found"<<endl;
            break;
        }
        else if(arr[mid]>t){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
    if(found==false){
        cout<<"not found";
    }
   //ques 2...................................................................................................................
   int arr1[5];
   for(int i=0;i<5;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<endl;
    }
    sort(begin(arr1),end(arr1));
    int t;
    cout<<"enter no to found ";
    cin>>t;
    int l=0;
    int h=9;
    bool found=false;
    while(l<=h){
        int mid= l+(h-l)/2;
        if (arr1[mid]==t)
        {
            found=true;
            cout<<mid;
            break;
        }
        else if(arr1[mid]>t){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
    if(found==false){
        cout<<"not found"<<endl;
        cout<<"0";
    }
    //ques 3..................................................................................................................
    int arr2[5];
   for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<endl;
    }
    sort(begin(arr2),end(arr2));
    int t;
    cout<<"enter no to found ";
    cin>>t;
    int l=0;
    int h=9;
    bool found=false;
    while(l<=h){
        int mid= l+(h-l)/2;
        if (arr2[mid]==t)
        {
            found=true;
            cout<<arr2[mid+1];
            break;
        }
        else if(arr2[mid]>t){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
    if(found==false){
        cout<<"not found"<<endl;
    }
    //ques 4.....................................................................................
    int arr2[10];
    for(int i=0;i<10;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<10;i++){
        cout<<arr2[i]<<endl;
    }
    sort(begin(arr2),end(arr2));
    int t;
    cout<<"enter no to found ";
    cin>>t;
    int l=0;
    int h=9;
    bool found=false;
    while(l<=h){
        int mid= l+(h-l)/2;
        if (arr2[mid]==t)
        {
            found=true;
            if(arr2[mid+1]!=t){
                cout<<mid; 
                break;
            }
            else{
                l=mid+1;
            }    
        }
        else if(arr2[mid]>t){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
    if(found==false){
        cout<<"not found"<<endl;
    }
   //section E ..............................................................................................................
   //ques 1........................................................................................................
    int arr2[5];
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    cout<<"array =";
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    sort(begin(arr2),end(arr2));
    int m=findmissing(arr2, 5);
    cout<<m;
   //ques 2..........................................................................................................  
   
    int arr2[5];
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    cout<<"array =";
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<endl;
    }
    sort(begin(arr2),end(arr2));
    int l=0;
    int h=4;
    bool found=false;
    while(l<=h){
        int mid= l+(h-l)/2;
        if (arr2[mid]<=mid)
        {
            l=mid+1;
            if(arr2[mid]>mid){
                cout<<mid;
            }
            break;
        }
        else if(arr2[mid]>mid){
            cout<<mid;
            break;
        }
        else{
            cout<<"not found";
        }
    }
    //ques 3..................................................................................................................
    int arr2[5];
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<endl;
    }
    sort(begin(arr2),end(arr2));
    int t;
    cout<<"enter no to found ";
    cin>>t;
    int l=0;
    int h=4;
    bool found=false;
    while(l<=h){
        int mid= l+(h-l)/2;
        if (arr2[mid]==t)
        {
            found=true;
            cout<<arr2[mid-1]; 
            break;  
        }
        else if(arr2[mid]>t){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
        
    }
    if(found==false){
        cout<<"not found"<<endl;
    }
}   
