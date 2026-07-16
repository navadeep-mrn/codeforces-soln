#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    if(2*k>n){
        cout<<-1<<endl;
        return;
    }
    int x=0;
    for(int i=0;i<k;i++){
        if(s[i]=='L'){
            x++;
        }
    }
    for(int i=n-k;i<n;i++){
        if(s[i]=='R'){
            x++;
        }
    }
    cout<<x<<endl;
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}