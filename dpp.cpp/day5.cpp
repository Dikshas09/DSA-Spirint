#include<iostream>
using namespace std;
int main(){
//ques1...................................................................................    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
 // ques2...............................................................................  
   int n1;
    cin>>n1;
    int arr[n1];
    for(int i=0;i<n1;i++){
        cin>>arr[i];
    }
    cout<<"size of array = "<<sizeof(arr)/sizeof(arr[0]);
// ques 3...........................................................................    
    int n2,m=1;
    cin>>n2;
    int arr[n2];
    for(int i=0;i<n2;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n2;i++){
        m*=arr[i];
    }
    cout<<"mulipliction of elements "<<m;
// ques 4.............................................................    
    int n3;
    cin>>n3;
    int arr[n3];
    for(int i=0;i<n3;i++){
        cin>>arr[i];
    }
        cout<<"minimum element = "<<endl;
    int max=arr[0];
    for(int i=1;i<n3;i++){
        if(max>arr[i]){
            max=arr[i];
        }
    }
    cout<<"minimun element in array "<<max;
//ques 5......................................................................................
    int n4;
    cin>>n4;
    int arr[n4];
    for(int i=0;i<n4;i++){
        cin>>arr[i];
    } 
        cout<<"negative element = "<<endl;   
    for(int i=0;i<n4;i++){
        if(arr[i]<0){
            cout<<arr[i]<<endl;
        }
    }
//ques 6..................................................................................
    int n5;
    cin>>n5;
    int arr[n5];
    for(int i=0;i<n5;i++){
        cin>>arr[i];
    }
        cout<<"Element greater than 100"<<endl;    
    for(int i=0;i<n5;i++){
        if(arr[i]>100){
            cout<<arr[i]<<endl;
        }
    }
//que 7,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
    int n6;
    cin>>n6;
    int arr[n6];
    for(int i=0;i<n6;i++){
        cin>>arr[i];
    }  
    cout<<"array at even index"<<endl;  
    for(int i=0;i<n6;i++){
        if(i%2==0){
            cout<<arr[i]<<endl;
        }
    }
   //section 2 (Medium level).....................................................................................................
// ques 1.....................................................................................
    int n7,div=0,prime=0;
    cin>>n7;
    int arr[n7];
    for(int i=0;i<n7;i++){
        cin>>arr[i];
    } 
    for(int i=1;i<=n7;i++){
        if(arr[i]%i==0){
            div++;
            prime++;
        }
    }
    if(div==2){
        cout<<"no. of prime no. = "<<prime; 
    }
//ques2......................................................................................................
   int n8;
    cin>>n8;
    int arr[n8];
    for(int i=0;i<n8;i++){
        cin>>arr[i];
    }  
    cout<<"element divisible by 3 or 5 "<<endl;  
    for(int i=0;i<n8;i++){
        if(arr[i]%3==0||arr[i]%5==0){
            cout<<arr[i]<<endl;
        }
    }
// ques3................................................................................
   int n9;
    cin>>n9;
    int arr[n9];
    for(int i=0;i<n9;i++){
        cin>>arr[i];
    }  
    cout<<"updated array "<<endl;  
    for(int i=0;i<n9;i++){
        arr[i]=arr[i]*arr[i]; 
    }
    for(int i=0;i<n9;i++){
        cout<<arr[i]<<endl; 
    }
// ques4...................................................................................
    int n14;
    cin>>n14;
    int arr[n14];
    for(int i=0;i<n14;i++){
        cin>>arr[i];
    }    
    for(int i=0;i<n14;i++){
        for(int j=i+1;j<n14-1;j++){
            if(arr[i]==arr[j]){
                cout<<"duplicate elements are present";
            }
        }
    }
// ques5..................................................................
    int n13;
    cin>>n13;
    int arr[n13];
    for(int i=0;i<n13;i++){
        cin>>arr[i];
    }    
    for(int i=0;i<n13;i++){
        int oc=0;
        for(int j=i+1;j<n13-1;j++){
            if(arr[i]==arr[j]){
                oc++;
            }
        } 
        if(oc%2!=0){
            cout<<"Element is occuring odd no of times "<< endl;
            cout<<arr[i];
        }  
    }
    
    
//section 3 (hard level) .........................................................................................................
//ques 1............................................................
   int n10;
    cin>>n10;
    int arr[n10];
    for(int i=0;i<n10;i++){
        cin>>arr[i];
    } 
    cout<<"element equal to its index value"<<endl;   
    for(int i=0;i<n10;i++){
        if(arr[i]==i){
            cout<< arr[i]<<endl;
        }
    }
//ques2................................................................................
  int n11,i;
    cin>>n11;
    int arr[n11];
    for(int i=0;i<n11;i++){
        cin>>arr[i];
    } 
    cout<<" give index value"<<endl;   
     cin>>i;
     cout<<arr[i];
// quesz 3......................................................................................
    int n12;
    cin>>n12;
    int s=0;
    int end=n12-1;
    int arr[n12];
    for(int i=0;i<n12;i++){
        cin>>arr[i];
    } 
    cout<<" arr is pallindrome "<<endl;   
    while(s!=end){
        if(arr[s]==arr[end]){
            s++;
            end--;
        }
        
    }
    cout<<"True";
}    