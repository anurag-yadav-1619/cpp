# include <iostream>
using namespace std;
void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;i<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    bubble(arr,n);
     for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}