/*
Problem - https://codeforces.com/contest/1553/problem/A
Author - Abhinav Deep
Date - July 22, 2021
*/

#include<iostream>
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
    int r = n%10;
    int count = n/10;
    if(r < 9){
        cout<<count<<endl;
        return;
    }
    cout<<count+1<<endl;
    return;    
}