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
    ll t;
    cin>>t;
    ll a,b, diff, rem;
    while(t--){
    	cin>>a>>b;
    		diff=b-a;
    		if(diff>=0){
    			if(diff==0) cout<<"0"<<endl;
    			else if(diff%2) cout<<"1"<<endl;
    			else cout<<"2"<<endl;
    		}else if(diff<0){
    			if(abs(diff)%2) cout<<"2"<<endl;
    			else cout<<"1"<<endl;
    		}

    }


    return 0;
}