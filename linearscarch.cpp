# include <iostream>
using namespace std;
int main(){
   
    int arr[]={32,54,32,56,54,43,66};
     int n;
     int x;
     cout<<"enter the array : "<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<x<<"is present0";
            break;
        }
       
    }

    return 0;
}