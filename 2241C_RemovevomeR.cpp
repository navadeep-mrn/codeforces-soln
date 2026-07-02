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
    string s;cin>>s;
    int c=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1])    c++;
    }
    if(c==1)    cout<<2<<"\n";
    else cout<<1<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}