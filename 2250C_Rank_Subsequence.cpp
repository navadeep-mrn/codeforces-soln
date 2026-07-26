#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
/*for every k,k-1....2,1 
    keep track of newpos let it be t
    the element can get newpos if it satisifies the boundaries or else we wont inc t
    t>k means we already crossed req no.of elem so cout k
*/
void solve(){
    int n;cin>>n;
    vector<int> l(n+1),r(n+1),u(n+1),v(n+1);
    for(int i=1;i<=n;i++){
        cin>>l[i]>>r[i]>>u[i]>>v[i];
    }
    int k=n;
    for(k=n;k>0;k--){
        int eg=1;
        for(int i=1;i<=n;i++){
            if(eg>k){
                break;
            }
            if((l[i]<=eg&&eg<=r[i])||(u[i]<=k-eg+1&&k-eg+1<=v[i])){
                continue;
            }
            else{
                eg++;
            }
        }
        if(eg>k){
            cout<<k<<endl;
            return;
        }
    }
    cout<<0<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}