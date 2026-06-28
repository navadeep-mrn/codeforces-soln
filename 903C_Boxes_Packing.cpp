#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){ cout<<"YES"<<endl; }
void no(){ cout<<"NO"<<endl; }
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int f=0;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        m[x]++;
        f=max(f,m[x]);
    }
    cout<<f<<"\n";
}