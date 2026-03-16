# include <iostream>
// #include<cmath>
#include <climits>
using namespace std;
int main(){
    int arr[]={4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=INT_MIN;
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
       mx=max(mx,arr[i]);
       mn=min(mn,arr[i]);
    }
    cout<<mx<<" " <<endl;
    cout<<mn<<" " <<endl;

    return 0;
} 