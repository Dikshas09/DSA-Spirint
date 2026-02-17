 #include <cmath>
 #include <cstdio>
 #include <vector>
 #include <iostream>
 #include <algorithm>
 using namespace std;


 int main() {
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 int nums[]={2,0,2,1,1,0};
 int n=6;
 int c1=0,c0=0,c2=0;
 for(int i=0;i<n;i++){
 if(nums[i]==0){
 c0++;
 }
 else if (nums[i]==1){
 c1++;
 }
 else{
 c2++;
 }
 }
 int i=0;
 while(i<n){
 while(c0!=0){
 nums[i]=0;
 i++;
 c0--;
 }
 while(c1!=0){
 nums[i]=1;
 i++;
 c1--;
 }
 nums[i]=2;
 i++;
 }
 for(int i=0;i<n;i++){
 cout<<nums[i]<<"";
 }
 return 0;
 } 