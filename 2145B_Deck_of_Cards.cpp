#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
 
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int a=count(s.begin(),s.end(),'0');
    int b=count(s.begin(),s.end(),'1');
    int c=count(s.begin(),s.end(),'2');
    vector<char> f(n,'+');
    for(int i=0;i<n;i++){
        if(i<a+c||i>=n-b-c){
            f[i]='?';
        }
        if(i<a||i>=n-b||n==k){
            f[i]='-';
        }
        cout<<f[i];
    }
    cout<<endl;
}
 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}