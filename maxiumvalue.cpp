# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ernter the n: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){}
    int arr[i];
    cin>>arr[n];
};
    

    int n=sizeof(arr)/sizeof(arr[0]);
    int mx=arr[0];
    for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
    }
    cout<<mx<<endl; 
    
    return 0;
}   