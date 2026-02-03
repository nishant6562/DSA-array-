#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[6] = {1,2,3,4,5,6};
    int d;
    cin>>d;
    int index = -1;

    for(int i = 0; i < n; i++){
        if(arr[i]==d){
            index = i;
            break;
        }
    }
        if(index!=-1){
            cout<<index;
        }
        else{
            cout<<"not in the array";
        }
    return 0;
}