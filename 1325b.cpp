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
    ll t,n,temp;
    cin>>t;
    while(t--){
    	cin>>n;
    	set<ll> set;
    	rep(i,n){
    		cin>>temp;
    		set.insert(temp);
    	}
    	cout<<set.size()<<endl;
    }


    return 0;
}