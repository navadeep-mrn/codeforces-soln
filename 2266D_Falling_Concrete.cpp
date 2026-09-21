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
    vector<int>a(n);
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]-i-1);
    }
    int f=0;
    for(int x:s){
        if(!s.count(x-1)){
            int y=x;
            while(s.count(y))y++;
            f=max(f,y-x);
        }
    }
    cout<<f<<'\n';
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}