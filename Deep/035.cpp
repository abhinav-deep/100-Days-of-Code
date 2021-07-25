/*
Problem - https://codeforces.com/contest/1552/problem/A
Author - Abhinav Deep
Date - July 25, 2021
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve();

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string temp = s;
    sort(s.begin(), s.end());
    int c =0;
    for(int i=0;i<n;i++){
        if(s[i] != temp[i]){
            c++;
        }
    }
    cout<<c<<endl;
    return;
}