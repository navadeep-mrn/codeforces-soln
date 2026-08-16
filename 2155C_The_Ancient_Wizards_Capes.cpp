#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define int long long
 
// possible consecutive diff = -1, 0, 1
// 1 = L, 0 = R
// At position k:
// to see a wizard on the right ---- he should have R
// to see a wizard on the left  ---he should have L
// Move from position i to i+1
// LL -- view decreases by 1
// LR -- view stays same
// RL -- view stays same
// RR -- view increases by 1
 
void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    if(n==1){
        cout<<2<<endl;
        return;
    }
    int x=0;
    for(int i=1;i<n;i++){
        if(abs(v[i]-v[i-1])>1){
            cout<<0<<endl;return;
        }
    }
    for(int k=0;k<2;k++){
        vector<int> s(n);
        s[0]=k;
        for(int i=0;i<n-1;i++ ){
            if(v[i+1]-v[i]==0){
                s[i+1]=1-s[i];
            }
            else{
                s[i+1]=s[i];
            }
        }
        int p=1;
        for(int i=1;i<n;i++){
            p+=s[i];
        }
        bool ok=(p==v[0]);
        for(int i=0;i<n-1;i++){
            if(s[i+1]&&s[i]) p--;
            else if(!s[i+1]&&!s[i])p++;
            if(p!=v[i+1]) ok=false;
        }
        if(ok)x++;
    }
    cout<<x<<endl;
}
 
 
    
    
    
 
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
 
    while(t--)solve();
}