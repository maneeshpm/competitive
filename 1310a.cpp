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

ll count(vpll &v,ll &countn){
	ll temp=v[0].fir,i;
	if(v[0].fir==v[1].fir){
		for(i=1;i<v.size();i++){
			if(v[i].fir!=temp){
				v.erase(v.begin()+i-1);
			 break;}
			 else if(i==v.size()-1){
			 	v[i-1].fir++;
				countn+=v[i-1].sec;
			 	v.erase(v.begin()+i);
			 	break;
			 }
			else {
				v[i-1].fir++;
				countn+=v[i-1].sec;
			}
		}
		// cout<<"*"<<i<<"*";
		
	}else v.erase(v.begin());
	
	temp=v[0].fir;  
	for(ll i=0;i<v.size();i++)
		if(i==v.size()-1){
			sort(all(v));
			break;
		}else if(v[i].fir!=temp){
			sort(v.begin(),v.begin()+i-1);
			break;
		}

	
	//
	  rep(i,v.size()){
    	cout<<v[i].fir<<" ";
    }
    cout<<endl;
    rep(i,v.size()){
    	cout<<v[i].sec<<" ";
    }
    cout<<endl;
    //
    cout<<"*"<<countn<<"*"<<endl;
	if(v.size()==1||v.size()==0) return countn;
	else return count(v,countn);
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
    rep(i,n){
    	cout<<v[i].fir<<" ";
    }
    cout<<endl;
    rep(i,n){
    	cout<<v[i].sec<<" ";
    }
    cout<<endl;
    ll ctr=0;

    cout<<count(v,ctr);
    return 0;
}