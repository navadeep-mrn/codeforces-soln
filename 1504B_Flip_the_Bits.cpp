#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n;cin>>n;
    string a,b;cin>>a>>b;
    int c0=0,c1=0;
    vector<int> cf(n);
    for(int i=0;i<n;i++){
        if(a[i]=='0')   c0++;
        else c1++;
        if(c0==c1)  cf[i]=1;
    }
    bool isf=false,ispo=true;
    for(int i=n-1;i>=0;i--){
        if(isf==true){
            if(a[i]==b[i])
                {if(cf[i]==1){
                    isf=false;
                    ispo=true;
                }
                else{
                    ispo=false;
                    break;
                }}
        }
        else{
            if(a[i]!=b[i])
                {if(cf[i]==1){
                    isf=true;
                    ispo=true;
                }
                else{
                    ispo=false;
                    break;
                }}
 
        }
    }
    if(ispo)    yes();
    else no();
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}