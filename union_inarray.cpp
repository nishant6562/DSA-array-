#include<iostream>
using namespace std;

int main(){
    int a[] = {1,1,2,3,4,5};
    int b[] = {2,3,4,4,5,6};

    int n = 6, m = 6;
    int i = 0, j = 0;
    int last = -1;   // store last printed value

    while(i < n && j < m){
        if(a[i] < b[j]){
            if(a[i] != last){
                cout << a[i] << " ";
                last = a[i];
            }
            i++;
        }
        else if(a[i] > b[j]){
            if(b[j] != last){
                cout << b[j] << " ";
                last = b[j];
            }
            j++;
        }
        else{
            if(a[i] != last){
                cout << a[i] << " ";
                last = a[i];
            }
            i++;
            j++;
        }
    }

    // while(i < n){
    //     if(a[i] != last){
    //         cout << a[i] << " ";
    //         last = a[i];
    //     }
    //     i++;
    // }

    // while(j < m){
    //     if(b[j] != last){
    //         cout << b[j] << " ";
    //         last = b[j];
    //     }
    //     j++;
    // }

    return 0;
}
