#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> p(n+1);
        vector<int> v;
        for(int i=1;i<=n;i++){
            cin>>p[i];
            if(p[i]!=i)
                v.push_back(i);
        }
        bool ok=true;
        for(int i=0;i<v.size();i++){
            if(p[v[i]]!=v[v.size()-1-i]){
                ok=false;
                break;
            }
        }
        cout<<(ok?"YES":"NO")<<"\n";
    }
    return 0;
}