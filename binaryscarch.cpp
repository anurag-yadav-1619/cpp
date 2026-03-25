# include <iostream>
#include<vector>
using namespace std;
int anurag(vector<int> arr,int tar){
    int st=0,end=arr.size()-1;
    while (st<=end){
        int mid=(st+end)/2;
        if(tar>arr[mid]){
            st=mid+1;
        }
        else if(tar<arr[mid]){
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}




int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};
    int tar1=0;
    cout<< anurag(arr1,tar1)<<endl;
    vector<int> arr2={-1,0,3,4,5,9,12};
    int tar2=7;
    cout<< anurag(arr2,tar2)<<endl;

    
    return 0;
}