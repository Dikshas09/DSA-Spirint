#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5);
    int arr[5];
    cout<<"original array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int arr1[5];
    for(int j=0;j<5;j++){
        arr1[j]= arr[5-j-1];
    }
    cout<<"Reversed array"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<endl;
    }
}