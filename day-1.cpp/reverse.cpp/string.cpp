#include<iostream>
#include<vector>
#include<string>
using namespace std;
//int myLength(char arr[]);
//void upercase(char arr[]);
int main(){
    //section C
    //Ques 1 ...................................................................................
    char ch1[50];
    cin.getline(ch1,50);
    for(int i=0;ch1[i]!='\0';i++){
        cout<<ch1[i]<<endl;
    }
    //ques 2...............................................................................................
    char ch[20];
    cin>>ch;
    int l=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            break;
        }
        else{
            l++;
        }
    }
    cout<<l;
    //ques 3.......................................................................................................
    char v[20];
    cin.getline(v,20);
    int cv=0,cc=0;
    for(int i=0;v[i]!='\0';i++){
        if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'||v[i]=='A'||v[i]=='E'||v[i]=='I'||v[i]=='O'||v[i]=='U'){
            cv++;
        }
        else{
            cc++;
        }
    }
    cout<<"no of vowels= "<<cv<<endl;
    cout<<"no of consonant= "<<cc<<endl;
    //ques 4...................................................................................................
    char ch2[20];
    cin>>ch2;
    int l=0;
    for(int i=0;ch2[i]!='\0';i++){
        if(ch2[i]==' '){
            break;
        }
        else{
            l++;
        }
    }
    for(int i=l;i>=0;i--){
        cout<<ch2[i];
    }
    //section d...........................................................................
    //ques 1...................................................................................
    char pl[20];
    cin>>pl;
    int l=0;
    for(int i=0;pl[i]!='\0';i++){
        if(pl[i]==' '){
            break;
        }
        else{
            l++;
        }
    }
    int i=0;
    int j=l-1;
    while(i<=j){
        if(pl[i]!=pl[j]){
            cout<<"not a palindrome";
            break; 
        }
        i++;
        j--;

    }
    cout<<"palindrome"<<endl;
    //ques 2...............................................................................................
    char re[20];
    cin.getline(re,20);
    for(int i=0;re[i]!='\0';i++){
        if(re[i]==' '){
            re[i]='@';
        }
    }
    for(int i=0;re[i]!='\0';i++){
        cout<<re[i];
    }
   //ques 3...................................................................................................
   char rev[20];
   cin>>rev;
   int l=0;
    for(int i=0;rev[i]!='\0';i++){
        if(rev[i]==' '){
            break;
        }
        else{
            l++;
        }
    }
    if(l%2==0){
        for(int i=0;i<l/2;i++){
            cout<<rev[i];
        }
        for(int i=l;i>=l/2;i--){
            cout<<rev[i];
        }
    }
    //bonus questions.....................................................................................
    //ques 1...............................................................................................
   char en[20];
   cin>>en;
   int l= myLength(en);
   cout<<l;
   //ques 2.................................................................................................
   char lo[20];
   cin>>lo;
   upercase(lo);
   cout<<lo;
   return 0;
}
int myLength(char arr[]){
    int l=0;
    for(int i=0;arr[i]!='\0';i++){
            l++;
    } 
    return l;
}
void upercase(char arr[]){
    for(int i=0;arr[i]='\0';i++){
        if(arr[i]>='a'&& arr[i]<='z'){
            arr[i] = arr[i]-32;
        }
    }
}