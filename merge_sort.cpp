#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    int temp[high - low + 1];  // Regular array, NOT vector
    int k = 0;
    
    // Merge two sorted halves
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp[k++] = arr[left++];
        }
        else{
            temp[k++] = arr[right++];
        }
    }
    
    // Copy remaining elements from left half
    while(left <= mid){
        temp[k++] = arr[left++];
    }
    
    // Copy remaining elements from right half
    while(right <= high){
        temp[k++] = arr[right++];
    }
    
    // Copy back to original array
    for(int i = 0; i < k; i++){
        arr[low + i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low >= high){
        return;
    }
    
    int mid = low + (high - low) / 2;
    
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main(){
    int n;
    cin >> n;
    int arr[100];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    mergeSort(arr, 0, n - 1);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
