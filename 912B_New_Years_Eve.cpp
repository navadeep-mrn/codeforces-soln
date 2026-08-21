    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    #define all(x) x.begin(),x.end()
    #define rall(x) x.rbegin(),x.rend()
    void yes(){ cout<<"YES"<<endl; }
    void no(){ cout<<"NO"<<endl; }
    ll mod=998244353;
    #define int long long
 
    // if k=1, then answer is n
    // maximum number that can be achieved using xor on numbers in range 1 to 15 is 15
    // i mean if highest power after n is 2^m, then answer is 2^(m+1)-1
    // coz if m is length of that highest number, then we can take  numbers from 1 to 2^m-1 and xor them to get 2^(m+1)-1 and not more than that
    signed main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int n,k;cin>>n>>k;
        if(k==1){
            cout<<n<<endl;
            return 0;
        }
        int m = 63 - __builtin_clzll(n);
        int f=(1LL<<(m+1))-1;
        cout<<f<<endl;
 
 
    }