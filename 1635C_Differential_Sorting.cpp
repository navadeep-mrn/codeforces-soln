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
    vector<ll> v(n);
    bool sor=true;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i>0&&v[i]<v[i-1]){
            sor=false;
        }
    }
    if(sor){
        cout<<0<<"\n";
        return;
    }
    if(v[n-2]>v[n-1]||(v[n-2]<0&&v[n-1]<0)){
        cout<<-1<<"\n";
        return;
    }
    cout<<n-2<<"\n";
    for(int i=1;i<n-1;i++){
        cout<<i<<" "<<n-1<<" "<<n<<"\n";
    }
    
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}