#include<iostream>
using namespace std;

//brute force approach
//first sort
//last lement will be largest
int main(){
    int n=5;
    int arr[] = {4,6,2,1,3};
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"lsrgest will be"<<arr[n-1];
    return 0;
}

//optimal approch
int main(){
    int n=6;
    int arr[] = {5,4,6,7,8,3};
    int largest= arr[0];
    for(int i=0; i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }     
    }cout<<largest<<" ";
    return 0;
}