# include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN;
    int amx=INT_MIN;

    for(int i=0;i<n;i++){
         if(mx<arr[i] )mx=arr[i];

    }
     for(int i=0;i<n;i++){
         if(amx<arr[i] &&arr[i]!=mx )
         amx=arr[i];

    }
    
    cout<<mx<<endl; 
    cout<<amx<<endl; 
    
    return 0;
}   

