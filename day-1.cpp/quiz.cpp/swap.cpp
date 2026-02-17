 #include <cmath>
 #include <cstdio>
 #include <vector>
 #include <iostream>
 #include <algorithm>
 using namespace std;
 int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
 int Array[]={10, 20, 30, 40, 50};
 int n=5;
 cout<<"Array BEFORE swap: ";
 for(int i=0;i<n;i++){
 cout<<Array[i]<<" ";
 }
 cout<<endl;
 int temp=Array[0];
 Array[0]=Array[n-1];
 Array[n-1]=temp;
 cout<<"Array AFTER swap: ";
 for(int i=0;i<n;i++){
 cout<<Array[i]<<" ";
 }
 cout<<endl;
 return 0;
 }