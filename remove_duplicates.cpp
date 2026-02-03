#include<iostream>
using namespace std;

// optmal approach
int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int i = 0;   // index of unique elements

    for(int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }

    int newLength = i + 1;

    // print array without duplicates
    for(int k = 0; k < newLength; k++){
        cout << arr[k] << " ";
    }

    return 0;
}
