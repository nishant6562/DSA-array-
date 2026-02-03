#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int sum = (n*(n+1))/2;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        s = s+arr[i];
    }
    int num = sum - s;
    cout<<num;
    return 0;
}