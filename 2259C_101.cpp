#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
const ll MOD = 1e9 + 7;
 
int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}
void solve(){
    int n;cin>>n;
    int r=-1,lr=-1;
    vector<int> v(n);
    for(int i=0;i<n;i++){cin>>v[i];
        if(v[i]==-1)    r=i;
        if(v[i]==1) lr=i;
    }
    int i=0;
    for(i=0;i<n;i++){
        if(v[i]==-1){v[i]=1;break;}
        else if(v[i]==1) break;
    }
    for(int j=i;j<n;j++){
        if(v[j]==-1){v[j]=0;
        }
    }
    if(r!=-1&&r>lr) v[r]=1;
    for(int x:v)cout<<x<<" ";
    cout<<endl;
}
 
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}