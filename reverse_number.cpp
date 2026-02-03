#include<iostream>
using namespace std;

int n=5;
int arr[] = {1,2,3,4,5};
void reverse(int i){
    if(i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1);
}

//using two painter

 
int main(){
    reverse(0);
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}

