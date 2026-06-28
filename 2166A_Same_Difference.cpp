#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    int cs=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[n-1]){
            cs++;
        }
    }
    cout<<cs<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}