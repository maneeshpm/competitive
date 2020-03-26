#include<bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define pop pop_back
#define rep(i, n) for(ll i=0;i<n;i++)
#define mp make_pair
using namespace std;

ll minim(ll i1, ll i2){
	if(i1<i2) return i1;
	else return i2;
}

ll sum(vector<ll> v,ll i1, ll i2, ll mini){
	ll sum=0;
	vector<ll>::iterator itr=max_element(v.begin()+i1,v.begin()+i2);
	ll i=itr-v.begin();
	ll max=*itr;
	
	for(ll j=i;j<=i2;j++){
		if(max>=v[j]){
			max=v[j];
			sum+=v[j];
		}else sum+=max;
	}
	if(i!=0)for(ll j=i-1;j>=i1;j--){
		if(max>=v[j]){
			max=v[j];
			sum+=v[j];
		}else sum+=max;
	}
	// cout<<"%"<<sum<<"%"<<endl;
	return (sum+(i1+t-i2)*mini);
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    ll t;
    cin>>t;
    vector<ll> v(t);
    rep(i,t){
    	cin>>v[i];
    }
    ll i1=0,i2=0, sumi=0;
    int flag=1;
    ll min=*min_element(v.begin(),v.end());

    for(ll j=0;j<t;j++){
    	if(v[j]==min && sum(v,i2,j,min)>sumi){
			i1=i2;
    		i2=j;
    		sumi=sum(v,i1,i2,min);
    		// cout<<sumi<<"*"<<endl;
    	}else if(j==(t-1) && sum(v,i2,j,min)>sumi){
    		i1=i2;
    		i2=t-1;
    		sumi=sum(v,i1,i2,min);
    		// cout<<sumi<<"*"<<endl;
    	}
    }
    vector<ll> f(t);
    vector<ll>::iterator itr=max_element(v.begin()+i1,v.begin()+i2);
    ll max=*itr;
    ll i=itr-v.begin();

    for(ll j=i;j<t;j++){
		if(max>=v[j]){
			max=v[j];
			f[j]=v[j];
		}else f[j]=max;
		
	}
	
	max=*itr;
	if(i!=0)
		for(ll j=i-1;j>=0;j--){
			if(max>=v[j]){
				max=v[j];
				f[j]=v[j];
			}else f[j]=max;
		
		}
	
   

    rep(i,t){
    	cout<<f[i]<<" ";
    }
    

    return 0;
}