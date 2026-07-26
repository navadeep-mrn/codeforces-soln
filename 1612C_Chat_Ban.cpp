#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
//ll mod=998244353;
 
#define int long long
 
long long suf(int x) {
	return x * 1ll * (x + 1) / 2;
}
void solve(){
    int k,x;cin>>k>>x;
    int l=1,r=2*k-1,f=2*k-1;
    while(l<=r){
        int mid=(l+r)/2;
        int c;
        if(mid>=k){
            c=suf(k)+suf(k-1)-suf(2*k-1-mid);
        }
        else{
            c=suf(mid);
        }
        if(c>=x){
            f=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<f<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}