#include<bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define pop pop_back
#define rep(i, n) for(ll i=0;i<n;i++)
#define mp make_pair
using namespace std;

bool sortbyfir(const pair<ll,ll> &a, const pair<ll,ll> &b){ 
    return (a.first < b.first); 
} 


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    
    ll n, temp, count=0;
    cin>>n;
    
    ll  a[n];
    ll  b[n];
    
    rep(i,n){
    	cin>>a[i];
    }
    rep(i,n){
    	cin>>b[i];
    }
    vector<ll> vec;
    for(ll i=0;i<n;i++){
    	vec.pb(a[i]-b[i]);
    }
    sort(vec.rbegin(), vec.rend());
    ll j=n-1;
    for(ll i=0;i<n;i++){
    	for(;j>i;--j){
    		if((vec[i]+vec[j])>0){
    			count+=(j-i);
    			break;
    		}
    	}
    	if(i>=j)
    		break;

    }
    
    cout<<count;

    return 0;
}