#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define pop pop_back
#define rep(iz, n) for(ll iz=0;iz<n;iz++)
#define foi(iz,a,b) for(ll iz=a;iz<b;iz++)
#define mp make_pair
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fir first
#define sec second

void vin(vector<ll> &v,ll t){
	rep(i,t){
		cin>>v[i];	
	} 


}
void vout(vector<ll> &v,ll t){
	rep(i,t) cout<<v[i]<<" ";
	cout<<endl;
}	

// bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b){
// 	if(a.fir!=b.fir) return (a.fir<b.fir);
// 	else return (a.second>b.second);
// }

ll count(vpll &v,ll &countn,ll &i){
	for(;i<v.size()-1;i++){
		if(v[i].fir==v[i+1].fir){
			v[i].fir++;
			countn+=v[i].sec;
			sort(all(v));
			break;
		}
	}
	if(i<v.size()-2) count(v,countn,i);
	else return countn;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    ll n;
    cin>>n;
    vll a(n),b(n);
    vin(a,n);
    vin(b,n);
    vpll v;
    rep(i,n){
    	v.pb(mp(a[i],b[i]));
    }
    sort(all(v));

    ll ctr=0,i=0,temp,j;
    int flag=1;
    for(int i=0;(i<v.size()-1);i++){
    	if(v[i].fir==v[i+1].fir){
    		temp=v[i].fir;
    		for(j=i+1;j<v.size();j++){
    			if (v[j].fir!=temp) break;
    			else{
    				v[j-1].fir++;
    				// cout<<"*"<<v[j-1].fir<<" "<<v[j-1].sec<<"*"<<endl;
    				ctr+=v[j-1].sec;
    				
    			}
    		}
    		v.erase(v.begin()+j-1);
    		i--;
    		// for(j=0;j<v.size();j++) cout<<v[j].fir<<" ";
    		// 	cout<<endl;
    		// 	for(j=0;j<v.size();j++) cout<<v[j].sec<<" ";
    		// cout<<endl; 
    	}
    }

    cout<<ctr;
    return 0;
}