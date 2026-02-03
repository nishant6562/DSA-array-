#include<iostream>
#include<string>

using namespace std;

bool name(int i,string &s,int n){
    if(i>=n/2)
    return true;

    if(s[i]!=s[n-i-1])
    return false;

    return name(i+1,s,n);
}

int main(){
    string s;
    cin>>s;
    // if(name(0,s,s.length()))
    // cout<<"palindrome";
    // else
    // cout<<"not";
    name(0,s,s.length());
    return 0;
}