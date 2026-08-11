#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
#define int long long
 
 
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int z=2*n;
    int tt=0;
    vector<int> op(z);
    int a=0,b=0,c=0;
    for(int i=0;i<z;i+=2){
        if(s[i]=='1')b++;
        if(s[i]=='1'&&s[i+1]=='0')c++;
    }
    for(int i=1;i<z;i+=2){
        if(s[i]=='1')a++;
        if(s[i]=='1'&&s[(i+1)%z]=='0')c--;
    }
    cout<<a+c<<" "<<b-c<<endl;
}
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
 
    int t;
    cin>>t;
 
    while(t--)solve();
}