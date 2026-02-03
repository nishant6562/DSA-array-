// #include<iostream>
// using namespace std;

// void print(int i,int n){
//     if(i<0){
//         return;
//     }
//     print(i-1,n);
//     cout<<i<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n,n);
//     return 0;
// }

#include<iostream>
using namespace std;

void print(int i,int n){
    if(i>n){
        return;
    }
    print(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n,i;
    cin>>n;
    print(1,n);
    return 0;
}