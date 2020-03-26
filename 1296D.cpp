#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pop pop_back
using namespace std;
void show(vector<ll> arr){
	for(auto it=arr.begin();it!=arr.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    ll t, n, a, b, k, temp=0,count, rem;
    
    
    	count=0;
        cin>>n>>a>>b>>k;
        vector<ll> vec;
        for(ll i=0;i<n;i++){
        	cin>>temp;
        	vec.pb(temp);
        }
        vector<ll> v;

        sort(vec.begin(), vec.end());
        for(ll i=0;i<n;i++){
        	if((vec[i]<=a)||((vec[i]%(a+b)<=a)&&(vec[i]%(a+b)))){
        		count++;
        		continue;
        	}else{
        		if((vec[i]%(a+b))!=0){
        			rem=vec[i]%(a+b);
        			v.pb(ceil((double)rem/a-1));
        		}else v.pb(ceil((double)b/a));
        	}
        
        }
        sort(v.begin(),v.end());
        for(auto it=v.begin();it!=v.end();it++){
        	if(*it<=k){
        		k-=*it;
        		count++;
        	}else break;
        }
        
        v.clear();
        vec.clear();
        cout<<count<<endl;
    


    return 0;
        
}