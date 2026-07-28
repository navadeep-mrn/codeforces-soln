    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define all(x) x.begin(),x.end()
    #define rall(x) x.rbegin(),x.rend()
    void yes(){ cout<<"YES"<<endl; }
    void no(){ cout<<"NO"<<endl; }
    ll mod=998244353;
    #define int long long
 
    vector<int> v(1000001);
 
    void solve(){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int m=0;
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]) m=max(m,abs(v[i]-v[i-1]));
        }
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
                v[i]+=m;
            }
 
        }
        if(is_sorted(all(v)))   yes();
        else    no();
        //for(int i:v)cout<<i<<endl;
    }
    
 
    signed main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
 
    
 
 
        int t;
        cin>>t;
        while(t--)solve();
    }