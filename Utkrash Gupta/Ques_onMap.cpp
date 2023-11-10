// https://codeforces.com/problemset/problem/4/C

#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<=b; i++)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
using namespace std;
        
void mahfuzswe(){
   map<string, int> freq;
   int n; cin>>n;
   for(int i=0; i<n; i++){
    string s; cin>>s;
    if(freq[s]==0){
        cout<<"OK\n";
    }
    else{
        cout<<s<<freq[s]<<'\n';
    }
    freq[s]++;
   }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}