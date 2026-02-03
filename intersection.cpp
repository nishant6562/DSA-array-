#include<iostream>
using namespace std;
int main(){
    int a[] = {1,1,2,3,4,5};
    int b[] = {2,3,4,4,5,6};

    int n = 6, m = 6;
    int i = 0, j = 0;
    int last = -1;

    while(i<n && j<m){
        if(a[i]<b[j])
        i++;
        else if(a[i]>b[j]){
            j++;
        }
        else{
            if(a[i]!=last){
            cout<<a[i]<<" ";
            last = a[i];
        }
        i++;j++;
    }
    }
    return 0;
}