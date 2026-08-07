    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define all(x) x.begin(),x.end()
    #define rall(x) x.rbegin(),x.rend()
    void yes(){ cout<<"YES"<<endl; }
    void no(){ cout<<"NO"<<endl; }
    ll mod=998244353;
    #define int long long
    const int N=200005;
    vector<bool> isPrime(N,true);
 
    void sieve(){
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i*i<N;i++){
            if(isPrime[i]){
                for(int j=i*i;j<N;j+=i)
                    isPrime[j]=false;
            }
        }
    }
    vector<int> pr;
    void solve(){
        int n;cin>>n;
        if(isPrime[n+1])yes();
        else no();
        
    }
    signed main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        sieve();
        int t;cin>>t;
        while(t--){
            solve();
        }
    }