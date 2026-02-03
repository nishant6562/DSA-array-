//PRINT N TIMES LINEARLY

// #include<iostream>
// using namespace std;
// int cnt=0;
// void print(int cnt,int n){
//     if(cnt==n){
//         return ;
//     }
//     cout<<cnt<<" ";
//     cnt++;
//     print(cnt,n);
// }

// int main(){
//     int n;
//     cin>>n;
//     print(cnt,n);
//     cout<<"print";
//     return 0;
// }

//in REVERSE ORDER
#include<iostream>
using namespace std;

void print(int cnt){
    if(cnt == 0){
        return;
    }
    cout << cnt << " ";
    print(cnt - 1);
}

int main(){
    int n;
    cin >> n;
    print(n);
    cout << "print";
    return 0;
}
