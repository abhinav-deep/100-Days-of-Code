/*
Problem - https://codeforces.com/contest/1551/problem/A
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
    int n,x,y;
    cin>>n;
    if(n%3 == 1){
        x=n/3 +1;
        y = n/3;
    }
    else if (n%3 == 2){
        y=n/3 +1;
        x = n/3;
    }
    else{
        x = y = n/3;
    }
    cout<<x<<" "<<y<<endl;
    return;
}