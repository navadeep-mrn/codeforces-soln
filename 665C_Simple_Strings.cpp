#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    
    string s;cin>>s;
    vector<char> v(s.size());
    int n=s.size();
    v[0]=s[0];
    for(int i=1;i<n;i++){
        if(s[i]==v[i-1]){
            for(char j='a';j<='z';j++){
                if(j!=v[i-1]){
                    if(i<n-1&&j!=s[i+1]){
                        v[i]=j;
                        break;
                    }
                    else if(i==n-1){
                        v[i]=j;
                        break;
                    }
                }
            }
        }
        else{
            v[i]=s[i];
        }
    }
    for(char i:v){
        cout<<i;
    }
    cout<<endl;
    
    
}