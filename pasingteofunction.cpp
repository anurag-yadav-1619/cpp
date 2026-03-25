# include <iostream>
using namespace std;
void change(int arr[]){
    arr[0]=10;

}

int main(){
    // cout<<sum(4,50)<<endl;
    int arr[]={1,2,3,4,5,6,7};
    cout<<arr[0]<<endl;
    change(arr);
    cout<<arr[0]<<endl;



   
   
    return 0;
}