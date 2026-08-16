#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
 
 
 
void solve(){
    int n,m;cin>>n>>m;
    if(m==n*n-1){
        no();
        return;
    }
    yes();
    for(int i=0;i<n;i++){
        string s;
        for(int j=0;j<n;j++){
            if(m>0){
                s+='U';
                m--;
                continue;
            }
            if(i!=n-1){
                s+='D';
                continue;
            }
            if(i==n-1&&j==n-1){
                s+='L';
                continue;
            }
            else {
                s+='R';
            }
        }
        cout<<s<<endl;
    }
}
 
 
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}