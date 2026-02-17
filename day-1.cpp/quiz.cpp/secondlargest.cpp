#include <cmath>
#include <climits>
 #include <cstdio>
 #include <vector>
 #include <iostream>
 #include <algorithm>
 using namespace std;
 int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(n<2){
        return 0;
    }
    int largest=INT_MIN;
    int secondl=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>largest){
                secondl=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest&&arr[i]>=secondl)
            {
                secondl=arr[i];
            }
            
        } 
    cout<<secondl;
    return 0;
 }