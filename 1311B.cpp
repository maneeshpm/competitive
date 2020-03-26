#include<bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define pop pop_back
#define rep(i, n) for(ll i=0;i<n;i++)
#define mp make_pair
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    ll t,m,n,temp;
    cin>>t;
    while(t--){
    	cin>>m>>n;
    	vector<ll> a,p;
    	rep(i,m){
    		cin>>temp;
    		a.pb(temp);
    	}
    	rep(i,n){
    		cin>>temp;
    		p.pb(temp);
    	}

    	sort(p.begin(), p.end());
    	
    }


    return 0;
}