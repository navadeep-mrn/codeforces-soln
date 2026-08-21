    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define all(x) x.begin(),x.end()
    #define rall(x) x.rbegin(),x.rend()
    void yes(){ cout<<"YES"<<endl; }
    void no(){ cout<<"NO"<<endl; }
    ll mod=1e9+7;
    #define int long long
 
 
    int XORtillN(int n) {
        if(n % 4 == 1) return 1;
        if(n % 4 == 2) return n+1;
        if(n % 4 == 3) return 0;
        return n;
    }
 
    signed main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int n;cin>>n;
        cout<<25<<endl;
        
    }