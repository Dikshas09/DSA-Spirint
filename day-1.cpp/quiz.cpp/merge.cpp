#include <cmath>
 #include <cstdio>
 #include <vector>
 #include <iostream>
 #include <algorithm>
 using namespace std;
 vector<int> merge(vector<int>&nums1,int m,vector<int>&nums2,int n){
 int k=m+n-1;
 int i=m-1;
 int j=n-1;
 while(i!=m && j!=n){
if(nums1[i]<=nums2[j]){
 nums1[k]=nums1[i];
 i++;
 }
 else{
 nums1[k]=nums2[j];
 j++;
 }
 k++;
 }
 while(i!=m){
 nums1[k]=nums1[i];
 i++;
 k++;
 }
 while(j!=m){
 nums1[k]=nums2[j];
 j++;
 k++;
 }
 return nums1;
 }

 int main() {
 /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 vector<int> num1[]={1,2,3,0,0,0};
 int m=3;
 int n=3;
 vector<int> num2[]={2,5,6};
 vector<int>num1= merge(num1,m,num2,n);
 cout<<num1;

 return 0;

 } 