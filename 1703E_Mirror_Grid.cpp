#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
ll mod=998244353;
 
void solve(){
    int n;cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int tc=0;
    for(int i=0;i<(n)/2;i++){
        //cout<<i<<endl;
        for(int j=i;j<n-i-1;j++){
            //cout<<j<<"-";
            int c1=0;
            if(v[i][j]=='1')  c1++;
            if(v[j][n-i-1]=='1')c1++;
            if(v[n-1-i][n-1-j]=='1')c1++;
            if(v[n-1-j][i]=='1')c1++;
            //cout<<v[i][j]<<" "<<v[j][n-i-1]<<" "<<v[n-1-i][n-1-j]<<" "<<v[n-1-j][i]<<endl;
            if(c1==0||c1==4)    continue;
            else if(c1==1||c1==3)   tc+=1;
            else if(c1==2)  tc+=2;
            //cout<<c1<<" "<<tc<<endl;
        }
    }
    cout<<tc<<"\n";
 
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)solve();
}