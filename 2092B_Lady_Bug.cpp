#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){ cout<<"YES"<<"\n"; }
void no(){ cout<<"NO"<<"\n"; }
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    int n; cin>>n;
    string a,b;cin>>a>>b;
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]=='0') c1++;
            if(b[i]=='0') c2++;
        }
        else{
            if(b[i]=='0') c1++;
            if(a[i]=='0') c2++;
        }
    }
    if(c1>=(n+1)/2 && c2>=n/2) yes();
    else no();
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}