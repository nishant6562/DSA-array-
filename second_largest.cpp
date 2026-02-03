#include<iostream>
using namespace std;

//optoimal approach
int main(){
    int n=6;
    int arr[]= {4,5,3,2,7,8};
    int largest = arr[0];
    int slargest = INT_MIN;
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        slargest = arr[i];
    }
    cout<<slargest;
    return 0;
}

//brute force approach
// int main(){
//     int n=6;
//     int arr[]= {4,5,3,2,6,7};
//     int largest = arr[0];
//     int secondlargest= -1;
//     for(int i=n-1; i>=1; i--){
//         for(int j=0; j<i; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=n-2; i>=0; i--){
//         if(arr[i]!=largest){
//             secondlargest = arr[i];
//             break;
//         }
//     }
//     cout<<secondlargest;
//     return 0;
// }