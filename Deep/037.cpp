/*
Problem - https://codeforces.com/problemset/problem/1503/A
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
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            c++;
        }
    }
    if(c&1 || s[0] == '0' || s[n-1] == '0'){
        cout<<"NO\n";
        return;
    } 
    string a,b;
    int k=0;
    bool flip=false;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            a.push_back(2*k < c ? '(' : ')');
            b.push_back(a.back());
            k++;
        }
        else{
            a.push_back(flip?'(':')');
            b.push_back(flip?')':'(');
            flip = !flip;
        }
    }
    cout<<"YES\n"<<a<<"\n"<<b<<"\n";
    return;
}