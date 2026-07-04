#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;cin>>n;
    vector<int> a(n),b(n),c(n);
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]=i;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        c[m[b[i]]]=i;
    }
    int mx=c[0],ct=0;
    for(int i=1;i<n;i++){
        if(c[i]<mx){
            ct++;
        }
        else{
            mx=c[i];
        }
    }
    cout<<ct<<endl;
    
}